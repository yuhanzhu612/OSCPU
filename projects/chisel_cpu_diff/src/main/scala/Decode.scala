import chisel3._
import chisel3.util._
import Instructions._
import Constant._

class Decode extends Module {
  val io = IO(new Bundle {
    val rs1_addr = Output(UInt(5.W))
    val rs1_en = Output(Bool())
    val rs1_data = Input(UInt(64.W))
    val rs2_addr = Output(UInt(5.W))
    val rs2_en = Output(Bool())
    val rs2_data = Input(UInt(64.W))
    val fe  = Flipped(new BUS_R)
    val id  = new BUS_R
    val rs2_value = Output(UInt(64.W))

    val mem_stall = Input(Bool())
    val instr_valid = Input(Bool())
    val time_int  = Input(Bool())

    val EX_wdest = Input(UInt(5.W))
    val WB_wdest = Input(UInt(5.W))
    val EX_result = Input(UInt(64.W))
    val WB_result = Input(UInt(64.W))

    val type_w = Output(Bool())

    val idop = new MicroOp 

    val inst_my = Output(Bool())
    val skip    = Output(Bool())
    val print   = Output(UInt(64.W))

    val br_valid = Output(Bool())
    val br_taken = Output(Bool())
    val br_target = Output(UInt(32.W))
    val br_stall = Output(Bool())

    val flush = Input(Bool())

    val if_allow_out = Output(Bool())
    val id_valid_out = Output(Bool())
    val if_valid_out = Input(Bool())
    val id_allow_out = Input(Bool())
  })

  val id_valid_in = RegInit(false.B)
  val id_valid    = WireInit(false.B)
  val id_ready_go = WireInit(false.B)
  val id_allow_in = WireInit(false.B)
  when (id_allow_in) {
    id_valid_in := io.if_valid_out
  }
  id_valid     := id_valid_in
  id_ready_go  := id_valid && !io.br_stall
  io.id_valid_out := id_ready_go
  id_allow_in  := !id_valid || io.id_valid_out && io.id_allow_out
  io.if_allow_out := id_allow_in

  val id_pc    = RegInit(0.U(32.W))
  val id_inst  = RegInit(0.U(32.W))
  val id_wen   = WireInit(false.B)
  val id_wdest = Wire(UInt(5.W))
  val id_op1   = Wire(UInt(64.W))
  val id_op2   = Wire(UInt(64.W))
  val instr_valid = RegInit(false.B)

  when(id_allow_in && io.if_valid_out) {
    id_pc   := Mux(io.flush, 0.U, io.fe.pc)
    id_inst := Mux(io.flush, 0.U, io.fe.inst)
    instr_valid := io.instr_valid
  }

  val id_opcode   = WireInit((0.U(TYPE_X.length.W)))
  val id_aluop    = WireInit((0.U(ALU_X.length.W)))
  val id_loadop   = WireInit((0.U(LOAD_X.length.W)))
  val id_storeop  = WireInit((0.U(STORE_X.length.W)))
  val id_sysop    = WireInit((0.U(SYS_X.length.W)))
  val id_skip     = WireInit(false.B)

  val inst = id_inst

  val imm_i = Cat(Fill(52, inst(31)), inst(31, 20))
  val imm_u = Cat(Fill(32, inst(31)), inst(31, 12), Fill(12, 0.U))
  val imm_j = Cat(Fill(43, inst(31)), inst(31), inst(19, 12), inst(20), inst(30, 21), 0.U)
  val imm_b = Cat(Fill(43, inst(31)), inst(31), inst(7), inst(30, 25), inst(11, 8), 0.U)
  val imm_s = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))

  io.rs1_addr := Mux(io.inst_my, "b01010".U, inst(19, 15))
  io.rs2_addr := inst(24, 20)
  io.rs1_en := false.B
  io.rs2_en := false.B

  io.type_w  := false.B  
  io.inst_my := false.B
  io.skip    := false.B
  io.print   := 0.U

  io.br_taken := false.B
  io.br_target := 0.U

  val rs1_forward = (io.rs1_addr =/= 0.U) && (io.rs1_addr === io.EX_wdest || io.rs1_addr === io.WB_wdest) && io.rs1_en
  val rs2_forward = (io.rs2_addr =/= 0.U) && (io.rs2_addr === io.EX_wdest || io.rs2_addr === io.WB_wdest) && io.rs2_en

  val rs1_value = Mux(rs1_forward, Mux(io.rs1_addr === io.EX_wdest, io.EX_result, io.WB_result), io.rs1_data)
  val rs2_value = Mux(rs2_forward, Mux(io.rs2_addr === io.EX_wdest, io.EX_result, io.WB_result), io.rs2_data)

  when (inst === ADDI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === ANDI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_AND".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === XORI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_XOR".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === ORI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_OR".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === SLLI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SLL".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === SRLI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SRL".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === SRAI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SRA".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === SLTI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SLT".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === SLTIU) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SLTU".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === ADDIW) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    io.type_w := true.B
  }
  
  when (inst === SLLIW) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SLL".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    io.type_w := true.B
  }
  
  when (inst === SRLIW) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SRL".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === SRAIW) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_SRA".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === JALR) {
    id_opcode := s"b$TYPE_J".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    io.br_taken := true.B
    io.br_target := rs1_value + imm_i
  }

  when (inst === LB) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LB".U
  }

  when (inst === LBU) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LBU".U
  }

  when (inst === LH) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LH".U
  }

  when (inst === LHU) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LHU".U
  }

  when (inst === LW) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LW".U
  }

  when (inst === LWU) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LWU".U
  }

  when (inst === LD) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_loadop := s"b$LOAD_LD".U
  }

  when (inst === CSRRS) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_sysop := s"b$SYS_CSRRS".U
  }

  when (inst === CSRRSI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_sysop := s"b$SYS_CSRRSI".U
  }

  when (inst === CSRRC) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_sysop := s"b$SYS_CSRRC".U
  }

  when (inst === CSRRCI) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_sysop := s"b$SYS_CSRRCI".U
  }

  when (inst === CSRRW) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen    := true.B
    id_sysop := s"b$SYS_CSRRW".U
  }

  when (inst === ECALL) {
    id_opcode := s"b$TYPE_I".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := false.B
    io.rs2_en := false.B
    id_wen    := false.B
    id_sysop := s"b$SYS_ECALL".U
  }

  when (inst === SB) {
    id_opcode := s"b$TYPE_S".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    id_storeop := s"b$STORE_SB".U
  }

  when (inst === SH) {
    id_opcode := s"b$TYPE_S".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    id_storeop := s"b$STORE_SH".U
  }

  when (inst === SW) {
    id_opcode := s"b$TYPE_S".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    id_storeop := s"b$STORE_SW".U
  }

  when (inst === SD) {
    id_opcode := s"b$TYPE_S".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    id_storeop := s"b$STORE_SD".U
  }

  when (inst === AUIPC) {
    id_opcode := s"b$TYPE_U".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := false.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === LUI) {
    id_opcode := s"b$TYPE_U".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := false.B
    io.rs2_en := false.B
    id_wen    := true.B
  }

  when (inst === JAL) {
    id_opcode := s"b$TYPE_J".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := false.B
    io.rs2_en := false.B
    id_wen    := true.B
    io.br_taken := true.B
    io.br_target := id_pc + imm_j
  }

  when (inst === ADD) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === SUB) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SUB".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === SLL) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SLL".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === SLT) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SLT".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === SLTU) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SLTU".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === XOR) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_XOR".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === SRL) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SRL".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === SRA) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SRA".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === OR) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_OR".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }
  
  when (inst === AND) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_AND".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
  }

  when (inst === ADDW) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_ADD".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === SUBW) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SUB".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === SLLW) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SLL".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === SRLW) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SRL".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === SRAW) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SRA".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := true.B
    io.type_w := true.B
  }

  when (inst === MRET) {
    id_opcode := s"b$TYPE_R".U
    id_aluop  := s"b$ALU_SRA".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen    := false.B
    id_sysop  := s"b$SYS_MRET".U
  }

  when (inst === BEQ) {
    id_opcode := s"b$TYPE_B".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    io.br_taken := Mux(rs1_value.asSInt() === rs2_value.asSInt(), true.B, false.B)
    io.br_target := id_pc + imm_b
  }

  when (inst === BNE) {
    id_opcode := s"b$TYPE_B".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    io.br_taken := Mux(rs1_value.asSInt() =/= rs2_value.asSInt(), true.B, false.B)
    io.br_target := id_pc + imm_b
  }

  when (inst === BLT) {
    id_opcode := s"b$TYPE_B".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    io.br_taken := Mux(rs1_value.asSInt() < rs2_value.asSInt(), true.B, false.B)
    io.br_target := id_pc + imm_b
  }

  when (inst === BGE) {
    id_opcode := s"b$TYPE_B".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    io.br_taken := Mux(rs1_value.asSInt() >= rs2_value.asSInt(), true.B, false.B)
    io.br_target := id_pc + imm_b
  }

  when (inst === BLTU) {
    id_opcode := s"b$TYPE_B".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    io.br_taken := Mux(rs1_value < rs2_value, true.B, false.B)
    io.br_target := id_pc + imm_b
  }

  when (inst === BGEU) {
    id_opcode := s"b$TYPE_B".U
    io.rs1_en := true.B
    io.rs2_en := true.B
    id_wen  := false.B
    io.br_taken := Mux(rs1_value >= rs2_value, true.B, false.B)
    io.br_target := id_pc + imm_b
  }

  when (inst === MY_INST) {
    io.inst_my:= true.B
    io.print  := id_op1
    id_opcode := s"b$TYPE_I".U
    io.rs1_en := true.B
    io.rs2_en := false.B
    id_wen  := false.B
  }

  when (instr_valid && io.time_int) {
    id_wen  := false.B
    id_sysop := s"b$SYS_INT".U
  }
  
  id_skip := inst === MY_INST || inst === 0.U

  io.br_valid := id_ready_go
  io.br_stall := (io.mem_stall && (io.rs1_addr =/= 0.U) && (io.rs1_addr === io.EX_wdest) && io.rs1_en && id_valid) ||
                 (io.mem_stall && (io.rs2_addr =/= 0.U) && (io.rs2_addr === io.EX_wdest) && io.rs2_en && id_valid)

  id_op1 := MuxLookup(id_opcode, 0.U, Array(
          s"b$TYPE_I".U -> rs1_value,
          s"b$TYPE_U".U -> Mux(id_inst === AUIPC, id_pc, 0.U),
          s"b$TYPE_J".U -> id_pc,
          s"b$TYPE_R".U -> rs1_value,
          s"b$TYPE_B".U -> rs1_value,
          s"b$TYPE_S".U -> rs1_value,
  ))
  id_op2 := MuxLookup(id_opcode, 0.U, Array(
    s"b$TYPE_I".U -> imm_i,
    s"b$TYPE_U".U -> imm_u,
    s"b$TYPE_J".U -> 4.U,
    s"b$TYPE_R".U -> rs2_value,
    s"b$TYPE_B".U -> rs2_value,
    s"b$TYPE_S".U -> imm_s,
  ))

  id_wdest := Mux(id_wen, inst(11, 7), 0.U) 

  io.id.pc    := id_pc
  io.id.inst  := id_inst
  io.id.wen   := id_wen
  io.id.wdest := id_wdest
  io.id.wdata := 0.U
  io.id.op1   := id_op1
  io.id.op2   := id_op2
  io.rs2_value:= rs2_value

  io.idop.opcode  := Mux(io.flush, 0.U, id_opcode)
  io.idop.aluop   := Mux(io.flush, 0.U, id_aluop)
  io.idop.loadop  := Mux(io.flush, 0.U, id_loadop)
  io.idop.storeop := Mux(io.flush, 0.U, id_storeop)
  io.idop.sysop   := Mux(io.flush, 0.U, id_sysop)
  io.skip         := Mux(io.flush, 0.U, id_skip)

}
