import chisel3._
import chisel3.util._
import Constant._

class BUS_R extends Bundle {
  val pc     = Output(UInt(32.W))
  val inst   = Output(UInt(32.W))
  val wen    = Output(Bool())
  val wdest  = Output(UInt(5.W))
  val wdata  = Output(UInt(64.W))
  val op1    = Output(UInt(64.W))
  val op2    = Output(UInt(64.W))
}

class MicroOp extends Bundle {
  val opcode = Output(UInt(TYPE_X.length.W))
  val aluop   = Output(UInt(ALU_X.length.W))
  val loadop  = Output(UInt(LOAD_X.length.W))
  val storeop = Output(UInt(STORE_X.length.W))
  val sysop  = Output(UInt(SYS_X.length.W))
}

class WriteBack extends Module {
  val io = IO(new Bundle {
  val ex = Flipped(new BUS_R)
  val wb = new BUS_R
  
  val ex_sysop = Input(UInt(SYS_X.length.W))
  val sysop = Output(UInt(SYS_X.length.W))

  val ex_skip = Input(Bool())
  val skip    = Output(Bool())

  val flush = Output(Bool())

  val ready_cmt = Output(Bool())

  val WB_wdest  = Output(UInt(5.W))
  val WB_result = Output(UInt(64.W))

  val intr  = Output(Bool())
  val intr_no = Output(UInt(64.W))

  val ex_allow_out = Output(Bool())
  val ex_valid_out = Input(Bool())
  })

  val wb_valid_in = RegInit(false.B)
  val wb_valid    = WireInit(false.B)
  val wb_ready_go = WireInit(false.B)
  val wb_allow_in = WireInit(false.B)
  when (wb_allow_in) {
    wb_valid_in := io.ex_valid_out
  }
  wb_valid     := wb_valid_in
  wb_ready_go  := wb_valid
  wb_allow_in  := !wb_valid || wb_ready_go
  io.ex_allow_out := wb_allow_in

  val wb_pc    = RegInit(0.U(32.W))
  val wb_inst  = RegInit(0.U(32.W))
  val wb_wen   = RegInit(false.B) 
  val wb_wdest = RegInit(0.U(5.W))
  val wb_wdata = RegInit(0.U(64.W))
  val wb_op1   = RegInit(0.U(64.W))
  val wb_op2   = RegInit(0.U(64.W))
  val wb_sysop = RegInit((0.U(SYS_X.length.W)))
  val wb_skip  = RegInit(false.B)

  io.intr := wb_sysop === s"b$SYS_INT".U && wb_valid
  io.intr_no := 7.U

  when(wb_allow_in && io.ex_valid_out) {
    wb_pc   := io.ex.pc
    wb_inst := io.ex.inst
    wb_wen  := io.ex.wen
    wb_wdest:= io.ex.wdest
    wb_wdata:= io.ex.wdata
    wb_op1  := io.ex.op1
    wb_op2  := io.ex.op2
    wb_sysop:= io.ex_sysop
    wb_skip := io.ex_skip
  }

  io.wb.pc    := wb_pc
  io.wb.inst  := wb_inst
  io.wb.wen   := wb_wen && wb_sysop =/= s"b$SYS_INT".U
  io.wb.wdest := wb_wdest
  io.wb.wdata := wb_wdata
  io.wb.op1   := wb_op1
  io.wb.op2   := wb_op2
  io.sysop    := wb_sysop
  io.skip     := wb_skip

  io.flush := (wb_sysop === s"b$SYS_ECALL".U || wb_sysop === s"b$SYS_MRET".U || wb_sysop === s"b$SYS_INT".U) && wb_valid

  io.ready_cmt := wb_valid && (wb_inst =/= 0.U) && (wb_sysop =/= s"b$SYS_INT".U)

  io.WB_wdest  := Mux(wb_valid, wb_wdest, 0.U)
  io.WB_result := wb_wdata

}