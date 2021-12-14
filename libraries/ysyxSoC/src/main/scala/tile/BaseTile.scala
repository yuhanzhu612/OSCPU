// See LICENSE.SiFive for license details.

package freechips.rocketchip.tile

import Chisel._

import freechips.rocketchip.config._
import freechips.rocketchip.subsystem._
import freechips.rocketchip.diplomacy._
import freechips.rocketchip.diplomaticobjectmodel.{HasLogicalTreeNode}
import freechips.rocketchip.diplomaticobjectmodel.logicaltree.{GenericLogicalTreeNode, LogicalTreeNode}

import freechips.rocketchip.interrupts._
import freechips.rocketchip.rocket._
import freechips.rocketchip.tilelink._
import freechips.rocketchip.util._
import freechips.rocketchip.prci.{ClockSinkParameters}

case object TileVisibilityNodeKey extends Field[TLEphemeralNode]
case object TileKey extends Field[TileParams]
case object LookupByHartId extends Field[LookupByHartIdImpl]

trait TileParams {
  val core: CoreParams
  val icache: Option[ICacheParams]
  val dcache: Option[DCacheParams]
  val btb: Option[BTBParams]
  val hartId: Int
  val beuAddr: Option[BigInt]
  val blockerCtrlAddr: Option[BigInt]
  val name: Option[String]
  val clockSinkParams: ClockSinkParameters
}

abstract class InstantiableTileParams[TileType <: BaseTile] extends TileParams {
  def instantiate(crossing: TileCrossingParamsLike, lookup: LookupByHartIdImpl)
                 (implicit p: Parameters): TileType
}

/** These parameters values are not computed based on diplomacy negotiation
  * and so are safe to use while diplomacy itself is running.
  */
trait HasNonDiplomaticTileParameters {
  implicit val p: Parameters
  def tileParams: TileParams = p(TileKey)

  def usingVM: Boolean = tileParams.core.useVM
  def usingUser: Boolean = tileParams.core.useUser || usingSupervisor
  def usingSupervisor: Boolean = tileParams.core.hasSupervisorMode
  def usingDebug: Boolean = tileParams.core.useDebug
  def usingRoCC: Boolean = !p(BuildRoCC).isEmpty
  def usingBTB: Boolean = tileParams.btb.isDefined && tileParams.btb.get.nEntries > 0
  def usingPTW: Boolean = usingVM
  def usingDataScratchpad: Boolean = tileParams.dcache.flatMap(_.scratch).isDefined

  def xLen: Int = p(XLen)
  def xBytes: Int = xLen / 8
  def iLen: Int = 32
  def pgIdxBits: Int = 12
  def pgLevelBits: Int = 10 - log2Ceil(xLen / 32)
  def pgLevels: Int = p(PgLevels)
  def maxSVAddrBits: Int = pgIdxBits + pgLevels * pgLevelBits
  def minPgLevels: Int = {
    val res = xLen match { case 32 => 2; case 64 => 3 }
    require(pgLevels >= res)
    res
  }
  def asIdBits: Int = p(ASIdBits)
  lazy val maxPAddrBits: Int = {
    require(xLen == 32 || xLen == 64, s"Only XLENs of 32 or 64 are supported, but got $xLen")
    xLen match { case 32 => 34; case 64 => 56 }
  }

  /** Use staticIdForMetadataUseOnly to emit information during the build or identify a component to diplomacy.
    *
    *   Including it in a constructed Chisel circuit by converting it to a UInt will prevent
    *   Chisel/FIRRTL from being able to deduplicate tiles that are otherwise homogeneous,
    *   a property which is important for hierarchical place & route flows.
    */
  def staticIdForMetadataUseOnly: Int = tileParams.hartId
  @deprecated("use hartIdSinkNodeOpt.map(_.bundle) or staticIdForMetadataUseOnly", "rocket-chip 1.3")
  def hartId: Int = staticIdForMetadataUseOnly

  def cacheBlockBytes = p(CacheBlockBytes)
  def lgCacheBlockBytes = log2Up(cacheBlockBytes)
  def masterPortBeatBytes = p(SystemBusKey).beatBytes

  // TODO make HellaCacheIO diplomatic and remove this brittle collection of hacks
  //                  Core   PTW                DTIM                    coprocessors           
  def dcacheArbPorts = 1 + usingVM.toInt + usingDataScratchpad.toInt + p(BuildRoCC).size + tileParams.core.useVector.toInt

  // TODO merge with isaString in CSR.scala
  def isaDTS: String = {
    val ie = if (tileParams.core.useRVE) "e" else "i"
    val m = if (tileParams.core.mulDiv.nonEmpty) "m" else ""
    val a = if (tileParams.core.useAtomics) "a" else ""
    val f = if (tileParams.core.fpu.nonEmpty) "f" else ""
    val d = if (tileParams.core.fpu.nonEmpty && tileParams.core.fpu.get.fLen > 32) "d" else ""
    val c = if (tileParams.core.useCompressed) "c" else ""
    val b = if (tileParams.core.useBitManip) "b" else ""
    val v = if (tileParams.core.useVector) "v" else ""
    s"rv${p(XLen)}$ie$m$a$f$d$c$b$v"
  }

  def tileProperties: PropertyMap = {
    val dcache = tileParams.dcache.filter(!_.scratch.isDefined).map(d => Map(
      "d-cache-block-size"   -> cacheBlockBytes.asProperty,
      "d-cache-sets"         -> d.nSets.asProperty,
      "d-cache-size"         -> (d.nSets * d.nWays * cacheBlockBytes).asProperty)
    ).getOrElse(Nil)

    val incoherent = if (!tileParams.core.useAtomicsOnlyForIO) Nil else Map(
      "sifive,d-cache-incoherent" -> Nil)

    val icache = tileParams.icache.map(i => Map(
      "i-cache-block-size"   -> cacheBlockBytes.asProperty,
      "i-cache-sets"         -> i.nSets.asProperty,
      "i-cache-size"         -> (i.nSets * i.nWays * cacheBlockBytes).asProperty)
    ).getOrElse(Nil)

    val dtlb = tileParams.dcache.filter(_ => tileParams.core.useVM).map(d => Map(
      "d-tlb-size"           -> (d.nTLBWays * d.nTLBSets).asProperty,
      "d-tlb-sets"           -> d.nTLBSets.asProperty)).getOrElse(Nil)

    val itlb = tileParams.icache.filter(_ => tileParams.core.useVM).map(i => Map(
      "i-tlb-size"           -> (i.nTLBWays * i.nTLBSets).asProperty,
      "i-tlb-sets"           -> i.nTLBSets.asProperty)).getOrElse(Nil)

    val mmu = if (!tileParams.core.useVM) Nil else Map(
        "tlb-split" -> Nil,
        "mmu-type"  -> s"riscv,sv$maxSVAddrBits".asProperty)

    val pmp = if (tileParams.core.nPMPs > 0) Map(
      "riscv,pmpregions" -> tileParams.core.nPMPs.asProperty,
      "riscv,pmpgranularity" -> tileParams.core.pmpGranularity.asProperty) else Nil

    dcache ++ icache ++ dtlb ++ itlb ++ mmu ++ pmp ++ incoherent
  }

}

/** These parameters values are computed based on diplomacy negotiations
  * and so are NOT safe to use while diplomacy itself is running.
  * Only mix this trait into LazyModuleImps, Modules, Bundles, Data, etc.
  */
trait HasTileParameters extends HasNonDiplomaticTileParameters {
  protected def tlBundleParams = p(TileVisibilityNodeKey).edges.out.head.bundle
  lazy val paddrBits: Int = {
    val bits = tlBundleParams.addressBits
    require(bits <= maxPAddrBits, s"Requested $bits paddr bits, but since xLen is $xLen only $maxPAddrBits will fit")
    bits
  }
  def vaddrBits: Int =
    if (usingVM) {
      val v = maxSVAddrBits
      require(v == xLen || xLen > v && v > paddrBits)
      v
    } else {
      // since virtual addresses sign-extend but physical addresses
      // zero-extend, make room for a zero sign bit for physical addresses
      (paddrBits + 1) min xLen
    }
  def vpnBits: Int = vaddrBits - pgIdxBits
  def ppnBits: Int = paddrBits - pgIdxBits
  def vpnBitsExtended: Int = vpnBits + (vaddrBits < xLen).toInt
  def vaddrBitsExtended: Int = vpnBitsExtended + pgIdxBits
}

/** Base class for all Tiles that use TileLink */
abstract class BaseTile private (val crossing: ClockCrossingType, q: Parameters)
    extends LazyModule()(q)
    with CrossesToOnlyOneClockDomain
    with HasNonDiplomaticTileParameters
    with HasLogicalTreeNode
{
  // Public constructor alters Parameters to supply some legacy compatibility keys
  def this(tileParams: TileParams, crossing: ClockCrossingType, lookup: LookupByHartIdImpl, p: Parameters) = {
    this(crossing, p.alterMap(Map(
      TileKey -> tileParams,
      TileVisibilityNodeKey -> TLEphemeralNode()(ValName("tile_master")),
      LookupByHartId -> lookup
    )))
  }

  def module: BaseTileModuleImp[BaseTile]
  def masterNode: TLOutwardNode
  def slaveNode: TLInwardNode
  def intInwardNode: IntInwardNode    // Interrupts to the core from external devices
  def intOutwardNode: IntOutwardNode  // Interrupts from tile-internal devices (e.g. BEU)
  def haltNode: IntOutwardNode        // Unrecoverable error has occurred; suggest reset
  def ceaseNode: IntOutwardNode       // Tile has ceased to retire instructions
  def wfiNode: IntOutwardNode         // Tile is waiting for an interrupt

  protected val tlOtherMastersNode = TLIdentityNode()
  protected val tlMasterXbar = LazyModule(new TLXbar)
  protected val tlSlaveXbar = LazyModule(new TLXbar)
  protected val intXbar = LazyModule(new IntXbar)

  /** Node for broadcasting a hart id to diplomatic consumers within the tile. */
  val hartIdNexusNode: BundleBridgeNode[UInt] = BundleBroadcast[UInt](registered = p(InsertTimingClosureRegistersOnHartIds))

  /** Node for consuming the hart id input in tile-layer Chisel logic. */
  val hartIdSinkNode = BundleBridgeSink[UInt]()

  /** Node for driving a hart id input, which is to be broadcast to units within the tile.
    *
    * Making this id value an IO and then using it to do lookups of information
    * that would make otherwise-homogeneous tiles heterogeneous is a useful trick
    * to enable deduplication of tiles for hierarchical P&R flows.
    */
  val hartIdNode: BundleBridgeInwardNode[UInt] =
    hartIdSinkNode := hartIdNexusNode := BundleBridgeNameNode("hartid")

  /** Node for broadcasting a reset vector to diplomatic consumers within the tile. */
  val resetVectorNexusNode: BundleBridgeNode[UInt] = BundleBroadcast[UInt]()

  /** Node for consuming the reset vector input in tile-layer Chisel logic.
    *
    * Its width is sized by looking at the size of the address space visible
    * on the tile's master ports, but this lookup is not evaluated until
    * diplomacy has completed and Chisel elaboration has begun.
    */
  val resetVectorSinkNode = BundleBridgeSink[UInt](Some(() => UInt(visiblePhysAddrBits.W)))

  /** Node for supplying a reset vector that processors in this tile might begin fetching instructions from as they come out of reset. */
  val resetVectorNode: BundleBridgeInwardNode[UInt] =
    resetVectorSinkNode := resetVectorNexusNode := BundleBridgeNameNode("reset_vector")

  /** Nodes for connecting NMI interrupt sources and vectors into the tile */
  val nmiNexusNode: BundleBridgeNode[NMI] = BundleBroadcast[NMI]()
  val nmiSinkNode = BundleBridgeSink[NMI](Some(() => new NMI(visiblePhysAddrBits)))
  val nmiNode: BundleBridgeInwardNode[NMI] =
    nmiSinkNode := nmiNexusNode := BundleBridgeNameNode("nmi")

  /** Node for broadcasting an address prefix to diplomatic consumers within the tile.
    *
    * The prefix should be applied by consumers by or-ing ouputs of this node
    * with a static base address (which is looked up based on the driven hartid value).
    */
  val mmioAddressPrefixNexusNode = BundleBridgeNexus[UInt](
    inputFn = BundleBridgeNexus.orReduction[UInt](registered = false) _,
    outputFn = BundleBridgeNexus.fillN[UInt](registered = false) _,
    default = Some(() => 0.U(1.W))
  )

  /** Node for external drivers to prefix base addresses of MMIO devices to which the core has a direct access path. */
  val mmioAddressPrefixNode: BundleBridgeInwardNode[UInt] =
    mmioAddressPrefixNexusNode :=* BundleBridgeNameNode("mmio_address_prefix")

  // TODO: Any node marked "consumed by the core" or "driven by the core"
  //       should be moved to either be: a member of a specific BaseTile subclass,
  //       or actually just a member of the core's LazyModule itself,
  //       assuming the core itself is diplomatic.
  //       Then these nodes should just become IdentityNodes of their respective type

  protected def traceRetireWidth = tileParams.core.retireWidth
  /** Node for the core to drive legacy "raw" instruction trace. */
  val traceSourceNode = BundleBridgeSource(() => Vec(traceRetireWidth, new TracedInstruction()))
  private val traceNexus = BundleBroadcast[Vec[TracedInstruction]]() // backwards compatiblity; not blocked during stretched reset
  /** Node for external consumers to source a legacy instruction trace from the core. */
  val traceNode: BundleBridgeOutwardNode[Vec[TracedInstruction]] = traceNexus := traceSourceNode

  protected def traceCoreParams = new TraceCoreParams()
  /** Node for core to drive instruction trace conforming to RISC-V Processor Trace spec V1.0 */
  val traceCoreSourceNode = BundleBridgeSource(() => new TraceCoreInterface(traceCoreParams))
  /** Node for external consumers to source  a V1.0 instruction trace from the core. */
  val traceCoreNode: BundleBridgeOutwardNode[TraceCoreInterface] = traceCoreSourceNode

  /** Node to broadcast collected trace sideband signals into the tile. */
  val traceAuxNexusNode = BundleBridgeNexus[TraceAux](default = Some(() => {
    val aux = Wire(new TraceAux)
    aux.stall  := false.B
    aux.enable := false.B
    aux
  }))
  /** Trace sideband signals to be consumed by the core. */
  val traceAuxSinkNode = BundleBridgeSink[TraceAux]()
  /** Trace sideband signals collected here to be driven into the tile. */
  val traceAuxNode: BundleBridgeInwardNode[TraceAux] =
    traceAuxSinkNode := traceAuxNexusNode :=* BundleBridgeNameNode("trace_aux")

  /** Node for watchpoints to control trace driven by core. */
  val bpwatchSourceNode = BundleBridgeSource(() => Vec(tileParams.core.nBreakpoints, new BPWatch(traceRetireWidth)))
  /** Node to broadcast watchpoints to control trace. */
  val bpwatchNexusNode = BundleBroadcast[Vec[BPWatch]]()
  /** Node for external consumers to source watchpoints to control trace. */
  val bpwatchNode: BundleBridgeOutwardNode[Vec[BPWatch]] =
    BundleBridgeNameNode("bpwatch") :*= bpwatchNexusNode := bpwatchSourceNode

  /** Helper function for connecting MMIO devices inside the tile to an xbar that will make them visible to external masters. */
  def connectTLSlave(xbarNode: TLOutwardNode, node: TLNode, bytes: Int): Unit = {
    DisableMonitors { implicit p =>
      (Seq(node, TLFragmenter(bytes, cacheBlockBytes, earlyAck=EarlyAck.PutFulls))
        ++ (xBytes != bytes).option(TLWidthWidget(xBytes)))
        .foldRight(xbarNode)(_ :*= _)
    }
  }
  def connectTLSlave(node: TLNode, bytes: Int): Unit = { connectTLSlave(tlSlaveXbar.node, node, bytes) }

  /** TileLink node which represents the view that the intra-tile masters have of the rest of the system. */
  val visibilityNode = p(TileVisibilityNodeKey)
  protected def visibleManagers = visibilityNode.edges.out.flatMap(_.manager.managers)
  protected def visiblePhysAddrBits = visibilityNode.edges.out.head.bundle.addressBits
  def unifyManagers: List[TLManagerParameters] = ManagerUnification(visibleManagers)

  /** Finds resource labels for all the outward caches. */
  def nextLevelCacheProperty: PropertyOption = {
    val outer = visibleManagers
      .filter(_.supportsAcquireB)
      .flatMap(_.resources.headOption)
      .map(_.owner.label)
      .distinct
    if (outer.isEmpty) None
    else Some("next-level-cache" -> outer.map(l => ResourceReference(l)).toList)
  }

  /** Create a DTS representation of this "cpu". */
  def cpuProperties: PropertyMap = Map(
      "device_type"          -> "cpu".asProperty,
      "status"               -> "okay".asProperty,
      "clock-frequency"      -> tileParams.core.bootFreqHz.asProperty,
      "riscv,isa"            -> isaDTS.asProperty,
      "timebase-frequency"   -> p(DTSTimebase).asProperty,
      "hardware-exec-breakpoint-count" -> tileParams.core.nBreakpoints.asProperty
  )

  /** Helper function to insert additional buffers on master ports at the boundary of the tile.
    *
    * The boundary buffering needed to cut feed-through paths is
    * microarchitecture specific, so this may need to be overridden
    * in subclasses of this class.
    */
  def makeMasterBoundaryBuffers(crossing: ClockCrossingType)(implicit p: Parameters) = TLBuffer(BufferParams.none)

  /** Helper function to insert additional buffers on slave ports at the boundary of the tile.
    *
    * The boundary buffering needed to cut feed-through paths is
    * microarchitecture specific, so this may need to be overridden
    * in subclasses of this class.
    */
 def makeSlaveBoundaryBuffers(crossing: ClockCrossingType)(implicit p: Parameters) = TLBuffer(BufferParams.none)

  /** Use for ObjectModel representation of this tile. Subclasses might override this. */
  val logicalTreeNode: LogicalTreeNode = new GenericLogicalTreeNode

  /** Can be used to access derived params calculated by HasCoreParameters
    *
    * However, callers must ensure they do not access a diplomatically-determined parameter
    * before the graph in question has been fully connected.
    */
  protected lazy val lazyCoreParamsView: HasCoreParameters = {
    class C(implicit val p: Parameters) extends HasCoreParameters
    new C
  }

  this.suggestName(tileParams.name)
}

abstract class BaseTileModuleImp[+L <: BaseTile](val outer: L) extends LazyModuleImp(outer) with HasTileParameters
