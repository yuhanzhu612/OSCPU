import chisel3._
import chisel3.util._
import Instructions._
import Constant._

class Execution extends Module {
  val io = IO(new Bundle {
    val type_w = Input(Bool())
    val csr_rdata = Input(UInt(64.W))
    
    val idop  = Flipped(new MicroOp) 
    val id    = Flipped(new BUS_R)
    val ex    = new BUS_R
    val dmem  = new CoreData
    val rs2_value = Input(UInt(64.W))
    val ex_sysop = Output(UInt(SYS_X.length.W))
    val id_skip = Input(Bool())

    val  cmp_ren    = Output(Bool())
    val  cmp_wen    = Output(Bool())
    val  cmp_addr   = Output(UInt(64.W))
    val  cmp_wdata  = Output(UInt(64.W))
    val  cmp_rdata  = Input(UInt(64.W))

    val  flush  = Input(Bool())

    val skip    = Output(Bool())

    val mem_stall = Output(Bool())

    val EX_wdest  = Output(UInt(5.W))
    val EX_result = Output(UInt(64.W))

    val id_allow_out = Output(Bool())
    val ex_valid_out = Output(Bool())
    val id_valid_out = Input(Bool())
    val ex_allow_out = Input(Bool())
  })

  val load_en = WireInit(false.B)
  val store_en = WireInit(false.B)
  val data_valid = WireInit(false.B)
  val data_req = WireInit(false.B)
  val data_addr = WireInit(0.U(32.W))
  val data_write = WireInit(0.U(64.W))
  val data_size = WireInit(0.U(2.W))
  val data_strb = WireInit(0.U(8.W))
  val data_read = WireInit(0.U(64.W))
  val data_ready = WireInit(false.B)

  val ex_valid_in = RegInit(false.B)
  val ex_valid    = WireInit(false.B)
  val ex_ready_go = WireInit(false.B)
  val ex_allow_in = WireInit(false.B)

  val cmp_ren   = load_en  && (data_addr === CLINT_MTIMECMP || data_addr === CLINT_MTIME)
  val cmp_wen   = store_en && (data_addr === CLINT_MTIMECMP || data_addr === CLINT_MTIME)
  val cmp_addr  = data_addr
  val cmp_wdata = data_write

  io.cmp_ren    := cmp_ren
  io.cmp_wen    := cmp_wen
  io.cmp_addr   := cmp_addr
  io.cmp_wdata  := cmp_wdata
  val cmp_rdata  = io.cmp_rdata

  when (ex_allow_in) {
    ex_valid_in := io.id_valid_out
  }
  ex_valid     := ex_valid_in
  ex_ready_go  := ex_valid && ( (!load_en && !store_en) || data_ready || cmp_ren || cmp_wen  || io.flush)
  io.ex_valid_out := ex_ready_go
  ex_allow_in  := !ex_valid || io.ex_valid_out && io.ex_allow_out
  io.id_allow_out := ex_allow_in

  val ex_pc    = RegInit(0.U(32.W))
  val ex_inst  = RegInit(0.U(32.W))
  val ex_wen   = RegInit(false.B) 
  val ex_wdest = RegInit(0.U(5.W))
  val ex_wdata = RegInit(0.U(64.W))
  val ex_op1   = RegInit(0.U(64.W))
  val ex_op2   = RegInit(0.U(64.W))
  val rs2_value= RegInit(0.U(64.W))
  val type_w   = RegInit(false.B) 
  val ex_opcode   = RegInit((0.U(TYPE_X.length.W)))
  val ex_aluop    = RegInit((0.U(ALU_X.length.W)))
  val ex_loadop   = RegInit((0.U(LOAD_X.length.W)))
  val ex_storeop  = RegInit((0.U(STORE_X.length.W)))
  val ex_sysop    = RegInit((0.U(SYS_X.length.W)))
  val ex_skip     = RegInit(false.B)

  when(ex_allow_in && io.id_valid_out) {
    ex_pc     := io.id.pc
    ex_inst   := io.id.inst
    ex_wen    := io.id.wen
    ex_wdest  := io.id.wdest
    ex_wdata  := io.id.wdata
    ex_op1    := io.id.op1
    ex_op2    := io.id.op2
    rs2_value := io.rs2_value
    type_w    := io.type_w
    ex_opcode := io.idop.opcode
    ex_aluop  := io.idop.aluop
    ex_loadop := io.idop.loadop
    ex_storeop:= io.idop.storeop
    ex_sysop  := io.idop.sysop
    ex_skip   := io.id_skip
  }

  io.skip     := ex_skip || cmp_ren || cmp_wen

  //Alu
  val in1 = Mux(type_w, Mux(ex_aluop === s"b$ALU_SRA".U, Cat(Fill(32, ex_op1(31)), ex_op1(31, 0)), Cat(Fill(32, 0.U), ex_op1(31, 0))), ex_op1)
  val in2 = ex_op2
  val shamt = Wire(UInt(6.W))
  shamt := Mux(type_w, in2(4, 0).asUInt(), in2(5, 0))
  val alu_result_0, alu_result = Wire(UInt(64.W))
  alu_result_0 := MuxLookup(ex_aluop, 0.U, Array(
    s"b$ALU_ADD".U  -> (in1 + in2).asUInt(),
    s"b$ALU_SUB".U  -> (in1 - in2).asUInt(),
    s"b$ALU_SLT".U  -> (in1.asSInt() < in2.asSInt()).asUInt(),
    s"b$ALU_SLTU".U -> (in1 < in2).asUInt(),
    s"b$ALU_XOR".U  -> (in1 ^ in2).asUInt(),
    s"b$ALU_OR".U   -> (in1 | in2).asUInt(),
    s"b$ALU_AND".U  -> (in1 & in2).asUInt(),
    s"b$ALU_SLL".U  -> ((in1 << shamt)(63, 0)).asUInt(),
    s"b$ALU_SRL".U  -> (in1 >> shamt).asUInt(),
    s"b$ALU_SRA".U  -> (in1.asSInt() >> shamt).asUInt()
  ))
  alu_result := Mux(type_w, Cat(Fill(32, alu_result_0(31)), alu_result_0(31, 0)), alu_result_0)

  val mem_wdata     = Wire(UInt(64.W)) 
  val mem_wdata_lb  = Wire(UInt(64.W))
  val mem_wdata_lbu = Wire(UInt(64.W))
  val mem_wdata_lh  = Wire(UInt(64.W))
  val mem_wdata_lhu = Wire(UInt(64.W))
  val mem_wdata_lw  = Wire(UInt(64.W))
  val mem_wdata_lwu = Wire(UInt(64.W))
  val mem_wdata_ld  = Wire(UInt(64.W))
  mem_wdata_lb  := Cat(Fill(56,data_read( 7)),data_read( 7, 0))
  mem_wdata_lbu := Cat(Fill(56, 0.U),data_read( 7, 0))
  mem_wdata_lh  := Cat(Fill(48,data_read(15)),data_read(15, 0))
  mem_wdata_lhu := Cat(Fill(48, 0.U),data_read(15, 0))
  mem_wdata_lw  := Cat(Fill(32,data_read(31)),data_read(31, 0))
  mem_wdata_lwu := Cat(Fill(32, 0.U),data_read(31, 0))
  mem_wdata_ld  := data_read
  mem_wdata := (Fill(64, ex_inst === LB)  & mem_wdata_lb)  | 
               (Fill(64, ex_inst === LBU) & mem_wdata_lbu) |  
               (Fill(64, ex_inst === LH)  & mem_wdata_lh)  |  
               (Fill(64, ex_inst === LHU) & mem_wdata_lhu) |  
               (Fill(64, ex_inst === LW)  & mem_wdata_lw)  |  
               (Fill(64, ex_inst === LWU) & mem_wdata_lwu) |  
               (Fill(64, ex_inst === LD)  & mem_wdata_ld)

  //Access memory
  val data_write_sb = Wire(UInt(64.W)) 
  val data_write_sh = Wire(UInt(64.W))
  val data_write_sw = Wire(UInt(64.W))
  val data_write_sd = Wire(UInt(64.W))
  val data_strb_sb  = Wire(UInt(8.W))
  val data_strb_sh  = Wire(UInt(8.W))
  val data_strb_sw  = Wire(UInt(8.W))
  val data_strb_sd  = Wire(UInt(8.W))
  data_write_sb := MuxLookup(alu_result(2,0), 0.U, Array(
    "b000".U -> Cat(Fill(56, 0.U), rs2_value(7,0)),
    "b001".U -> Cat(Fill(48, 0.U), rs2_value(7,0), Fill( 8, 0.U)),
    "b010".U -> Cat(Fill(40, 0.U), rs2_value(7,0), Fill(16, 0.U)),
    "b011".U -> Cat(Fill(32, 0.U), rs2_value(7,0), Fill(24, 0.U)),
    "b100".U -> Cat(Fill(24, 0.U), rs2_value(7,0), Fill(32, 0.U)),
    "b101".U -> Cat(Fill(16, 0.U), rs2_value(7,0), Fill(40, 0.U)),
    "b110".U -> Cat(Fill( 8, 0.U), rs2_value(7,0), Fill(48, 0.U)),
    "b111".U -> Cat(               rs2_value(7,0), Fill(56, 0.U)),
  ))
  data_strb_sb := MuxLookup(alu_result(2,0), 0.U, Array(
    "b000".U -> "b0000_0001".U,
    "b001".U -> "b0000_0010".U,
    "b010".U -> "b0000_0100".U,
    "b011".U -> "b0000_1000".U,
    "b100".U -> "b0001_0000".U,
    "b101".U -> "b0010_0000".U,
    "b110".U -> "b0100_0000".U,
    "b111".U -> "b1000_0000".U,
  ))

  data_write_sh := MuxLookup(alu_result(2,1), 0.U, Array(
    "b00".U -> Cat(Fill(48, 0.U), rs2_value(15,0)),
    "b01".U -> Cat(Fill(32, 0.U), rs2_value(15,0), Fill(16, 0.U)),
    "b10".U -> Cat(Fill(16, 0.U), rs2_value(15,0), Fill(32, 0.U)),
    "b11".U -> Cat(               rs2_value(15,0), Fill(48, 0.U)),
  ))
  data_strb_sh := MuxLookup(alu_result(2,1), 0.U, Array(
    "b00".U -> "b0000_0011".U,
    "b01".U -> "b0000_1100".U,
    "b10".U -> "b0011_0000".U,
    "b11".U -> "b1100_0000".U,
  ))

  data_write_sw := MuxLookup(alu_result(2), 0.U, Array(
    "b0".U -> Cat(Fill(32, 0.U), rs2_value(32,0)),
    "b1".U -> Cat(rs2_value(32,0), Fill(32, 0.U)),
  ))
  data_strb_sw := MuxLookup(alu_result(2), 0.U, Array(
    "b0".U -> "b0000_1111".U,
    "b1".U -> "b1111_0000".U,
  ))
  data_strb_sd  := "b1111_1111".U
  data_write_sd := rs2_value

  load_en   := ex_loadop =/= 0.U
  store_en  := ex_storeop =/= 0.U

  data_valid := (load_en || store_en) && (ex_valid && io.ex_allow_out) && (!cmp_ren && !cmp_wen)
  data_req   := store_en
  data_addr  := alu_result
  data_write := (Fill(64, ex_inst === SD) & data_write_sd) | 
                (Fill(64, ex_inst === SW) & data_write_sw) |  
                (Fill(64, ex_inst === SH) & data_write_sh) |  
                (Fill(64, ex_inst === SB) & data_write_sb)
  data_size  := (Fill( 2, ex_inst === SD || ex_inst === LD) & SIZE_D) | 
                (Fill( 2, ex_inst === SW || ex_inst === LW || ex_inst === LWU) & SIZE_W) |  
                (Fill( 2, ex_inst === SH || ex_inst === LH || ex_inst === LHU) & SIZE_H) |  
                (Fill( 2, ex_inst === SB || ex_inst === LB || ex_inst === LBU) & SIZE_B)
  data_strb  := (Fill( 8, ex_inst === SD) & data_strb_sd) | 
                (Fill( 8, ex_inst === SW) & data_strb_sw) |  
                (Fill( 8, ex_inst === SH) & data_strb_sh) |  
                (Fill( 8, ex_inst === SB) & data_strb_sb)
  data_read  := Mux(cmp_ren, cmp_rdata, io.dmem.data_read)
  data_ready := io.dmem.data_ready

  io.dmem.data_valid  := data_valid
  io.dmem.data_req    := data_req
  io.dmem.data_addr   := data_addr
  io.dmem.data_write  := data_write
  io.dmem.data_size   := data_size
  io.dmem.data_strb   := data_strb

  //Next
  io.ex.pc    := Mux(io.flush, 0.U, ex_pc)
  io.ex.inst  := Mux(io.flush, 0.U, ex_inst)
  io.ex.wen   := Mux(io.flush, 0.U, ex_wen)
  io.ex.wdest := ex_wdest
  io.ex.wdata := Mux(load_en, mem_wdata, Mux(ex_sysop =/= 0.U, io.csr_rdata, alu_result))
  io.ex.op1   := ex_op1
  io.ex.op2   := ex_op2
  io.ex_sysop := Mux(io.flush, 0.U, ex_sysop)

  io.EX_wdest  := Mux(ex_valid, ex_wdest, 0.U)
  io.EX_result := io.ex.wdata

  io.mem_stall := (load_en || store_en) && !data_ready

}
