import chisel3._
import chisel3.util.experimental._
import difftest._
import Constant._

class Core extends Module {
  val io = IO(new Bundle {
    val imem = new CoreInst
    val dmem = new CoreData
    val br_stall = Output(Bool())
  })

  val fetch = Module(new InstFetch)
  val decode = Module(new Decode)
  val execution = Module(new Execution)
  val writeback = Module(new WriteBack)
  val rf = Module(new RegFile)
  val csr = Module(new Csr)
  val clint = Module(new Clint)

  val inst_my = RegInit(false.B)
  val print   = RegInit(0.U(64.W))
  val skip    = writeback.io.skip || (csr.io.inst(31, 20) === Csrs.mcycle && csr.io.sysop =/= 0.U)

  io.br_stall := decode.io.br_stall


  fetch.io.imem             <> io.imem
  fetch.io.br_valid         := decode.io.br_valid
  fetch.io.br_taken         := decode.io.br_taken
  fetch.io.br_target        := decode.io.br_target
  fetch.io.csr_jmp          := csr.io.csr_jmp
  fetch.io.newpc            := csr.io.newpc
  fetch.io.flush            := writeback.io.flush
  fetch.io.if_allow_out     := decode.io.if_allow_out

  decode.io.rs1_data        := rf.io.rs1_data
  decode.io.rs2_data        := rf.io.rs2_data
  decode.io.if_valid_out    := fetch.io.if_valid_out
  decode.io.id_allow_out    := execution.io.id_allow_out
  decode.io.fe              <> fetch.io.fe
  decode.io.mem_stall       := execution.io.mem_stall
  decode.io.instr_valid     := fetch.io.instr_valid
  decode.io.EX_wdest        := execution.io.EX_wdest
  decode.io.EX_result       := execution.io.EX_result
  decode.io.WB_wdest        := writeback.io.WB_wdest
  decode.io.WB_result       := writeback.io.WB_result
  decode.io.flush           := writeback.io.flush
  decode.io.time_int        := clint.io.time_int

  execution.io.dmem         <> io.dmem
  execution.io.type_w       := decode.io.type_w
  execution.io.csr_rdata    := csr.io.csr_rdata
  execution.io.cmp_rdata    := clint.io.cmp_rdata
  execution.io.idop         <> decode.io.idop
  execution.io.id           <> decode.io.id
  execution.io.rs2_value    := decode.io.rs2_value
  execution.io.id_valid_out := decode.io.id_valid_out
  execution.io.ex_allow_out := writeback.io.ex_allow_out
  execution.io.id_skip      := decode.io.skip
  execution.io.flush        := writeback.io.flush

  writeback.io.ex_sysop     := execution.io.ex_sysop
  writeback.io.ex           <> execution.io.ex
  writeback.io.ex_valid_out := execution.io.ex_valid_out
  writeback.io.ex_skip      := execution.io.skip

  rf.io.rs1_addr            := decode.io.rs1_addr
  rf.io.rs2_addr            := decode.io.rs2_addr
  rf.io.rd_addr             := writeback.io.wb.wdest
  rf.io.rd_en               := writeback.io.wb.wen
  rf.io.rd_data             := writeback.io.wb.wdata

  csr.io.in1                := writeback.io.wb.op1
  csr.io.sysop              := writeback.io.sysop
  csr.io.inst               := execution.io.ex.inst
  csr.io.pc                 := writeback.io.wb.pc
  csr.io.flush              := writeback.io.flush

  clint.io.mstatus          := csr.io.mstatus
  clint.io.mie              := csr.io.mie
  clint.io.cmp_ren          := execution.io.cmp_ren
  clint.io.cmp_wen          := execution.io.cmp_wen
  clint.io.cmp_addr         := execution.io.cmp_addr
  clint.io.cmp_wdata        := execution.io.cmp_wdata


  /* ----- Difftest ------------------------------ */

  val valid = writeback.io.ready_cmt

  inst_my := decode.io.inst_my
  when (inst_my) {
    print := decode.io.print
  }
  when (valid) {
    printf("%c", print)
  }

  val intr = writeback.io.intr
  val intr_no = Mux(intr, writeback.io.intr_no, 0.U)
  val exceptionPC = Mux(intr, writeback.io.wb.pc, 0.U)

  when (EnableDifftest) {
    val dt_ic = Module(new DifftestInstrCommit)
    dt_ic.io.clock    := clock
    dt_ic.io.coreid   := 0.U
    dt_ic.io.index    := 0.U
    dt_ic.io.valid    := RegNext(valid)
    dt_ic.io.pc       := RegNext(writeback.io.wb.pc)
    dt_ic.io.instr    := RegNext(writeback.io.wb.inst)
    dt_ic.io.special  := 0.U
    dt_ic.io.skip     := RegNext(skip)
    dt_ic.io.isRVC    := false.B
    dt_ic.io.scFailed := false.B
    dt_ic.io.wen      := RegNext(writeback.io.wb.wen)
    dt_ic.io.wdata    := RegNext(writeback.io.wb.wdata)
    dt_ic.io.wdest    := RegNext(writeback.io.wb.wdest)

    val dt_ae = Module(new DifftestArchEvent)
    dt_ae.io.clock        := clock
    dt_ae.io.coreid       := 0.U
    dt_ae.io.intrNO       := RegNext(intr_no)
    dt_ae.io.cause        := 0.U
    dt_ae.io.exceptionPC  := RegNext(exceptionPC)

    val cycle_cnt = RegInit(0.U(64.W))
    val instr_cnt = RegInit(0.U(64.W))

    cycle_cnt := cycle_cnt + 1.U
    instr_cnt := instr_cnt + valid

    val rf_a0 = WireInit(0.U(64.W))
    BoringUtils.addSink(rf_a0, "rf_a0")

    val dt_te = Module(new DifftestTrapEvent)
    dt_te.io.clock    := clock
    dt_te.io.coreid   := 0.U
    dt_te.io.valid    := (writeback.io.wb.inst === "h0000006b".U)
    dt_te.io.code     := rf_a0(2, 0)
    dt_te.io.pc       := writeback.io.wb.pc
    dt_te.io.cycleCnt := cycle_cnt
    dt_te.io.instrCnt := instr_cnt

    // val dt_cs = Module(new DifftestCSRState)
    // dt_cs.io.clock          := clock
    // dt_cs.io.coreid         := 0.U
    // dt_cs.io.priviledgeMode := 3.U  // Machine mode
    // dt_cs.io.mstatus        := 0.U
    // dt_cs.io.sstatus        := 0.U
    // dt_cs.io.mepc           := 0.U
    // dt_cs.io.sepc           := 0.U
    // dt_cs.io.mtval          := 0.U
    // dt_cs.io.stval          := 0.U
    // dt_cs.io.mtvec          := 0.U
    // dt_cs.io.stvec          := 0.U
    // dt_cs.io.mcause         := 0.U
    // dt_cs.io.scause         := 0.U
    // dt_cs.io.satp           := 0.U
    // dt_cs.io.mip            := 0.U
    // dt_cs.io.mie            := 0.U
    // dt_cs.io.mscratch       := 0.U
    // dt_cs.io.sscratch       := 0.U
    // dt_cs.io.mideleg        := 0.U
    // dt_cs.io.medeleg        := 0.U
  }
}
