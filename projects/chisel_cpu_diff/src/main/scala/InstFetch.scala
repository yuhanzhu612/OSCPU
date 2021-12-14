import chisel3._
import chisel3.util._
import Constant._

class InstFetch extends Module {
  val io = IO(new Bundle {
    val imem = new CoreInst
    val fe   = new BUS_R

    val addr_valid = Output(Bool())
    val wait_valid = Output(Bool())

    val br_valid = Input(Bool())
    val br_taken = Input(Bool())
    val br_target = Input(UInt(32.W))

    val csr_jmp = Input(Bool())
    val newpc   = Input(UInt(32.W))

    val instr_valid = Output(Bool())

    val flush = Input(Bool())

    val if_valid_out = Output(Bool())
    val if_allow_out = Input(Bool())
  })

  val preif_valid     = WireInit(true.B)
  val preif_ready_go  = WireInit(false.B)
  val preif_valid_out = WireInit(false.B)
  val preif_allow_out = WireInit(false.B)

  val if_valid_in = RegInit(true.B)
  val if_valid    = WireInit(false.B)
  val if_ready_go = WireInit(false.B)
  val if_allow_in = WireInit(false.B)

  val abandon       = RegInit(false.B)
  val wait_valid    = RegInit(false.B)
  val wait_pc       = RegInit(0.U(32.W))
  val branch_valid  = io.br_taken && io.br_valid

  val flush_wait = RegInit(false.B)
  val csr_jmp_wait = RegInit(false.B)
  val csr_jmp_wait_pc = RegInit(0.U(32.W))
  val csr_jmp = io.csr_jmp || csr_jmp_wait || flush_wait
  val csr_newpc = Mux(io.csr_jmp, io.newpc, csr_jmp_wait_pc)

  val hands_done    = io.imem.inst_ready && io.imem.inst_valid

  preif_ready_go  := preif_valid && hands_done && !wait_valid && !csr_jmp_wait
  preif_valid_out := preif_ready_go
  preif_allow_out := if_allow_in

  if_valid        := if_valid_in
  if_ready_go     := if_valid && !wait_valid
  io.if_valid_out := if_ready_go
  if_allow_in     := !if_valid || io.if_valid_out && io.if_allow_out
  when (if_allow_in){
    if_valid_in := preif_valid_out
  }

  when (io.csr_jmp) {
    csr_jmp_wait := true.B
    csr_jmp_wait_pc := io.newpc
  }
  .elsewhen (io.imem.inst_ready){
    csr_jmp_wait := false.B
  }

  when (csr_jmp_wait) {
    flush_wait := true.B
  }
  .elsewhen (io.imem.inst_ready){
    flush_wait := false.B
  }

  when (branch_valid) {
    wait_valid := true.B
    wait_pc := io.br_target
  }
  .elsewhen (io.imem.inst_ready){
    wait_valid := false.B
  }

  when (wait_valid) {
    abandon := true.B
  }
  .elsewhen (io.imem.inst_ready){
    abandon := false.B
  }

  io.wait_valid := wait_valid

  val if_pc = RegInit("h7fff_fffc".U(32.W))
  val if_inst = RegInit(0.U(32.W))
  val next_pc = Mux(csr_jmp, csr_newpc, Mux(branch_valid, io.br_target, Mux(wait_valid || abandon, wait_pc, if_pc + 4.U)))

  when (if_allow_in && preif_valid_out) {
    if_pc   := Mux(io.flush, 0.U, next_pc)
    if_inst := Mux(io.flush, 0.U, io.imem.inst_read)
  }

  io.imem.inst_valid := preif_valid && preif_allow_out
  io.imem.inst_req   := false.B
  io.imem.inst_addr  := next_pc
  io.imem.inst_size  := SIZE_W

  io.fe.pc    := Mux(io.flush, 0.U, if_pc)
  io.fe.inst  := Mux(io.flush, 0.U, if_inst)
  io.fe.wen   := false.B
  io.fe.wdest := 0.U
  io.fe.wdata := 0.U
  io.fe.op1   := 0.U
  io.fe.op2   := 0.U
  io.instr_valid := Mux(io.flush, false.B, true.B)

  val addr_valid = RegInit(true.B)
  when (if_valid) {
    addr_valid := true.B
  }
  .otherwise {
    addr_valid := false.B
  }
  io.addr_valid := addr_valid

}
