import chisel3._
import chisel3.util._
import Constant._

class Dcache extends Module {
  val io = IO(new Bundle {
      val dmem = Flipped(new CoreData)
      val out  = new AxiData
  })

  val in  = io.dmem
  val out = io.out

  val BLK_NUM = 256

  val tag     = RegInit(VecInit(Seq.fill(BLK_NUM)(0.U(20.W))))
  val valid   = RegInit(VecInit(Seq.fill(BLK_NUM)(false.B)))
  val dirty   = RegInit(VecInit(Seq.fill(BLK_NUM)(false.B)))
  val offset  = RegInit(VecInit(Seq.fill(BLK_NUM)(0.U(4.W))))

  val req_tag    = Wire(UInt(20.W))
  val req_index  = Wire(UInt(8.W))
  val req_offset = Wire(UInt(4.W))

  val idle :: ask :: back :: back_wait :: fill :: fill_wait :: Nil = Enum(6)
  val state = RegInit(idle)

  req_tag     := in.data_addr(31,12)
  req_index   := in.data_addr(11, 4)
  req_offset  := in.data_addr( 3, 0)

  val cache_hit     = Wire(Bool())
  val cache_dirty   = Wire(Bool())
  cache_hit     := (tag(req_index) === req_tag) && valid(req_index) && state === ask
  cache_dirty   := (dirty(req_index) && state === ask)

  val cache_data_out = Wire(UInt(RW_DATA_WIDTH.W))

  val data_valid  = WireInit(false.B)
  val data_req    = WireInit(false.B)
  val data_addr   = WireInit(0.U(32.W))
  val data_size   = WireInit(0.U(2.W))
  val data_strb   = WireInit(0.U(8.W)) 
  val data_write  = WireInit(0.U(RW_DATA_WIDTH.W))
  val data_read   = WireInit(0.U(64.W))
  val data_ready  = RegInit(false.B)

  val valid_rdata = Mux(req_offset(3), cache_data_out(127,64), cache_data_out(63, 0))
  val valid_strb = MuxLookup(in.data_strb, 0.U, Array(
      "b00000001".U -> "h00000000000000ff".U,
      "b00000010".U -> "h000000000000ff00".U,
      "b00000100".U -> "h0000000000ff0000".U,
      "b00001000".U -> "h00000000ff000000".U,
      "b00010000".U -> "h000000ff00000000".U,
      "b00100000".U -> "h0000ff0000000000".U,
      "b01000000".U -> "h00ff000000000000".U,
      "b10000000".U -> "hff00000000000000".U,
      "b00000011".U -> "h000000000000ffff".U,
      "b00001100".U -> "h00000000ffff0000".U,
      "b00110000".U -> "h0000ffff00000000".U,
      "b11000000".U -> "hffff000000000000".U,
      "b00001111".U -> "h00000000ffffffff".U,
      "b11110000".U -> "hffffffff00000000".U,
      "b11111111".U -> "hffffffffffffffff".U,
  ))

  val valid_data  = Mux(req_offset(3), out.data_read(127,64), out.data_read(63, 0))
  val valid_wdata = MuxLookup(in.data_size, 0.U, Array(
    "b00".U -> MuxLookup(req_offset(2, 0), 0.U, Array(
                    "b000".U -> Cat(valid_data(63, 8), in.data_write( 7, 0)),
                    "b001".U -> Cat(valid_data(63,16), in.data_write(15, 8), valid_data( 7, 0)),
                    "b010".U -> Cat(valid_data(63,24), in.data_write(23,16), valid_data(15, 0)),
                    "b011".U -> Cat(valid_data(63,32), in.data_write(31,24), valid_data(23, 0)),
                    "b100".U -> Cat(valid_data(63,40), in.data_write(39,32), valid_data(31, 0)),
                    "b101".U -> Cat(valid_data(63,48), in.data_write(47,40), valid_data(39, 0)),
                    "b110".U -> Cat(valid_data(63,56), in.data_write(55,48), valid_data(47, 0)),
                    "b111".U -> Cat(in.data_write(63,56), valid_data(55, 0)),
                )),
    "b01".U -> MuxLookup(req_offset(2, 1), 0.U, Array(
                    "b00".U -> Cat(valid_data(63,16), in.data_write(15, 0)),
                    "b01".U -> Cat(valid_data(63,32), in.data_write(31,16), valid_data(15, 0)),
                    "b10".U -> Cat(valid_data(63,48), in.data_write(47,32), valid_data(31, 0)),
                    "b11".U -> Cat(in.data_write(63,48), valid_data(47, 0)),
                )),
    "b10".U -> MuxLookup(req_offset(2), 0.U, Array(
                    "b0".U -> Cat(valid_data(63,32), in.data_write(31, 0)),
                    "b1".U -> Cat(in.data_write(63,32), valid_data(31, 0)),
                )),
    "b11".U -> in.data_write,
  ))

  data_read := MuxLookup(in.data_size, 0.U, Array(
    "b00".U -> MuxLookup(req_offset(2, 0), 0.U, Array(
                    "b000".U -> Cat(0.U, valid_rdata( 7, 0)),
                    "b001".U -> Cat(0.U, valid_rdata(15, 8)),
                    "b010".U -> Cat(0.U, valid_rdata(23,16)),
                    "b011".U -> Cat(0.U, valid_rdata(31,24)),
                    "b100".U -> Cat(0.U, valid_rdata(39,32)),
                    "b101".U -> Cat(0.U, valid_rdata(47,40)),
                    "b110".U -> Cat(0.U, valid_rdata(55,48)),
                    "b111".U -> Cat(0.U, valid_rdata(63,56)),
                )),
    "b01".U -> MuxLookup(req_offset(2, 1), 0.U, Array(
                    "b00".U -> Cat(0.U, valid_rdata(15, 0)),
                    "b01".U -> Cat(0.U, valid_rdata(31,16)),
                    "b10".U -> Cat(0.U, valid_rdata(47,32)),
                    "b11".U -> Cat(0.U, valid_rdata(63,48)),
                )),
    "b10".U -> MuxLookup(req_offset(2), 0.U, Array(
                    "b0".U -> Cat(0.U, valid_rdata(31, 0)),
                    "b1".U -> Cat(0.U, valid_rdata(63,32)),
                )),
    "b11".U -> valid_rdata,
  ))

  val cache_fill  = RegInit(false.B)
  val cache_wen   = RegInit(false.B)
  val cache_wdata = RegInit(0.U(RW_DATA_WIDTH.W))
  val cache_strb  = RegInit(0.U(RW_DATA_WIDTH.W))

  switch (state) {
    is (idle) {
      data_ready := false.B
      cache_wen  := false.B
      when (in.data_valid) {
        state := ask
      }
    }

    is (ask) {
      when (!in.data_valid) {
        state := idle
      }
      .elsewhen (cache_hit) {
        valid(req_index)  := true.B
        tag(req_index)    := req_tag
        offset(req_index) := req_offset
        data_ready        := true.B
        cache_wen         := in.data_req
        cache_wdata       := Mux(req_offset(3), Cat(valid_wdata, Fill(64, 0.U)), Cat(Fill(64, 0.U), valid_wdata))
        cache_strb        := Mux(req_offset(3), Cat(valid_strb , Fill(64, 0.U)), Cat(Fill(64, 0.U), valid_strb))
        when (!dirty(req_index)) {
          dirty(req_index) := in.data_req
        }
        state             := idle
      }
      .elsewhen (cache_dirty) {
        state := back
      }
      .otherwise {
        state := fill
      }
    }

    is (back) {
        data_addr   := Cat(tag(req_index), req_index, offset(req_index))
        data_write  := cache_data_out
        data_strb   := "b11111111".U
        data_size   := "b11".U
        data_valid  := true.B
        data_req    := true.B
        when (out.data_ready) {
            state       := back_wait
            data_valid  := false.B
            data_req    := false.B
        }
        .otherwise {
            state := back
        }
    }

    is (back_wait) {
        state := fill
    }

    is (fill) {
      when (~cache_fill) {
        state       := fill
        data_addr   := in.data_addr
        data_write  := 0.U
        data_strb   := 0.U
        data_size   := "b11".U
        data_valid  := true.B
        data_req    := false.B
      }
      .otherwise {
        state := fill_wait
      }
      when (out.data_ready) {
        cache_fill  := true.B
        cache_wen   := true.B
        cache_wdata := Mux(in.data_req, Mux(req_offset(3), Cat(valid_wdata, out.data_read(63, 0)), Cat(out.data_read(127,64), valid_wdata)), out.data_read)
        cache_strb  := "hffffffffffffffffffffffffffffffff".U
        data_valid  := false.B
      }
    }

    is (fill_wait) {
      cache_fill        := false.B
      data_ready        := true.B
      cache_wen         := false.B
      valid(req_index)  := true.B
      tag(req_index)    := req_tag
      dirty(req_index)  := in.data_req
      offset(req_index) := req_offset
      state             := idle
    }
  }

  out.data_valid  := data_valid
  out.data_req    := data_req
  out.data_addr   := data_addr
  out.data_size   := data_size
  out.data_strb   := data_strb
  out.data_write  := data_write
  in.data_read    := data_read
  in.data_ready   := data_ready


  val req = Module(new S011HD1P_X32Y2D128_BW)
  req.io.CLK    := clock
  req.io.CEN    := true.B
  req.io.WEN    := cache_wen
  req.io.BWEN   := cache_strb
  req.io.A      := req_index
  req.io.D      := cache_wdata
  cache_data_out := req.io.Q

}

class S011HD1P_X32Y2D128_BW extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val Q       = Output(UInt(RW_DATA_WIDTH.W))
    val CLK     = Input(Clock())
    val CEN     = Input(Bool())
    val WEN     = Input(Bool())
    val BWEN    = Input(UInt(RW_DATA_WIDTH.W))
    val A       = Input(UInt(8.W))
    val D       = Input(UInt(RW_DATA_WIDTH.W))
  })
  addResource("/vsrc/S011HD1P_X32Y2D128_BW.v")
}