import chisel3._
import chisel3.util._
import Constant._

class Icache extends Module {
  val io = IO(new Bundle {
      val imem = Flipped(new CoreInst)
      val out  = new AxiInst
      val br_stall    = Input(Bool())
  })

  val in  = io.imem
  val out = io.out

  val BLK_NUM = 256

  val tag     = RegInit(VecInit(Seq.fill(BLK_NUM)(0.U(20.W))))
  val valid   = RegInit(VecInit(Seq.fill(BLK_NUM)(false.B)))
  val offset  = RegInit(VecInit(Seq.fill(BLK_NUM)(0.U(4.W))))

  val req_tag    = Wire(UInt(20.W))
  val req_index  = Wire(UInt(8.W))
  val req_offset = Wire(UInt(4.W))

  val idle :: stall :: ask :: fill :: fill_wait :: Nil = Enum(5)
  val state = RegInit(idle)

  req_tag     := in.inst_addr(31,12)
  req_index   := in.inst_addr(11, 4)
  req_offset  := in.inst_addr( 3, 0)

  val cache_hit = Wire(Bool())
  cache_hit := (tag(req_index) === req_tag) && valid(req_index)

  val cache_data_out = Wire(UInt(RW_DATA_WIDTH.W))

  val inst_valid  = WireInit(false.B)
  val inst_req    = WireInit(false.B)
  val inst_addr   = WireInit(0.U(32.W))
  val inst_size   = WireInit(0.U(2.W))
  val inst_read   = WireInit(0.U(32.W))
  val inst_ready  = RegInit(false.B)

  inst_read := MuxLookup(req_offset(3, 2), 0.U, Array(
    "b00".U -> cache_data_out( 31, 0),
    "b01".U -> cache_data_out( 63,32),
    "b10".U -> cache_data_out( 95,64),
    "b11".U -> cache_data_out(127,96),
  ))

  val cache_fill  = RegInit(false.B)
  val cache_wen   = RegInit(false.B)
  val cache_wdata = RegInit(0.U(RW_DATA_WIDTH.W))

  switch (state) {
    is (idle) {
      inst_ready := false.B
      when (in.inst_valid) {
        state := stall
      }
    }

    is (stall) {
      when (in.inst_valid) {
        state := ask
      }
      .otherwise {
        state := idle
      }
    }

    is (ask) {
      when (io.br_stall) {
        state := idle
      }
      .elsewhen (cache_hit) {
        valid(req_index)  := true.B
        tag(req_index)    := req_tag
        offset(req_index) := req_offset
        inst_ready        := true.B
        state             := idle
      }
      .otherwise {
        state       := fill
      }
    }

    is (fill) {
      when (~cache_fill) {
        state := fill
        inst_valid  := true.B
        inst_req    := in.inst_req
        inst_addr   := in.inst_addr
        inst_size   := in.inst_size
      }
      .otherwise {
        state := fill_wait
      }
      when (out.inst_ready) {
        cache_fill  := true.B
        cache_wen   := true.B
        cache_wdata := out.inst_read
        inst_valid  := false.B
      }
    }

    is (fill_wait) {
      cache_fill        := false.B
      inst_ready        := true.B
      cache_wen         := false.B
      valid(req_index)  := true.B
      tag(req_index)    := req_tag
      offset(req_index) := req_offset
      state             := idle
    }
  }

  out.inst_valid  := inst_valid
  out.inst_req    := inst_req
  out.inst_addr   := inst_addr
  out.inst_size   := inst_size
  in.inst_read    := inst_read
  in.inst_ready   := inst_ready


  val req = Module(new S011HD1P_X32Y2D128)
  req.io.CLK := clock
  req.io.CEN := true.B
  req.io.WEN := cache_wen
  req.io.A   := req_index
  req.io.D   := cache_wdata
  cache_data_out := req.io.Q

}

class S011HD1P_X32Y2D128 extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val Q   = Output(UInt(128.W))
    val CLK = Input(Clock())
    val CEN = Input(Bool())
    val WEN = Input(Bool())
    val A   = Input(UInt(8.W))
    val D   = Input(UInt(128.W))
  })
  addResource("/vsrc/S011HD1P_X32Y2D128.v")
}