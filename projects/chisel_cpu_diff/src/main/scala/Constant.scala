import chisel3._
import chisel3.util._

trait Constant {
  val Y = "1"
  val N = "0"
  val X = "?"

  val FU_X      = "???"
  val FU_ALU    = "001"
  val FU_JMP    = "010"
  val FU_SYS    = "011"
  val FU_MEM    = "100"

  val ALU_X     = "??_????_????"
  val ALU_ADD   = "00_0000_0001"
  val ALU_SUB   = "00_0000_0010"
  val ALU_SLT   = "00_0000_0100"
  val ALU_SLTU  = "00_0000_1000"
  val ALU_XOR   = "00_0001_0000"
  val ALU_OR    = "00_0010_0000"
  val ALU_AND   = "00_0100_0000"
  val ALU_SLL   = "00_1000_0000"
  val ALU_SRL   = "01_0000_0000"
  val ALU_SRA   = "10_0000_0000"

  val JMP_X     = "????"
  val JMP_JAL   = "0001"
  val JMP_JALR  = "0010"
  val JMP_BEQ   = "0011"
  val JMP_BNE   = "0100"
  val JMP_BLT   = "0101"
  val JMP_BGE   = "0110"
  val JMP_BLTU  = "0111"
  val JMP_BGEU  = "1000"

  val MEM_X     = "??"
  val MEM_LD    = "01"
  val MEM_LDU   = "10"
  val MEM_ST    = "11"

  val SIZE_B  = "b00".U
  val SIZE_H  = "b01".U
  val SIZE_W  = "b10".U
  val SIZE_D  = "b11".U

  val SYS_X      = "????"
  val SYS_CSRRW  = "0001"
  val SYS_CSRRS  = "0010"
  val SYS_CSRRC  = "0011"
  val SYS_CSRRSI = "1000"
  val SYS_CSRRCI = "1001"
  val SYS_ECALL  = "0100"
  val SYS_MRET   = "0101"
  val SYS_FENCE  = "0110"
  val SYS_INT    = "0111"

  val LOAD_X   = "???????"
  val LOAD_LB  = "0000001"
  val LOAD_LBU = "0000010"
  val LOAD_LH  = "0000100"
  val LOAD_LHU = "0001000"
  val LOAD_LW  = "0010000"
  val LOAD_LWU = "0100000"
  val LOAD_LD  = "1000000"

  val STORE_X   = "????"
  val STORE_SB  = "0001"
  val STORE_SH  = "0010"
  val STORE_SW  = "0100"
  val STORE_SD  = "1000"

  val TYPE_X    = "??????"
  val TYPE_U    = "100000"
  val TYPE_I    = "010000"
  val TYPE_R    = "001000"
  val TYPE_S    = "000100"
  val TYPE_J    = "000010"
  val TYPE_B    = "000001"

  val REQ_READ  = 0.U
  val REQ_WRITE = 1.U

  val RW_DATA_WIDTH = 128

  val CLINT_MTIMECMP  = "h0000000002004000".U
  val CLINT_MTIME     = "h000000000200bff8".U

  val EnableDifftest  = true.B
  val EnableIcache    = true.B
  val EnableDcache    = true.B
}

object Csrs {
  val mhartid  = "hf14".U
  val mstatus  = "h300".U
  val mie      = "h304".U
  val mtvec    = "h305".U
  val mscratch = "h340".U
  val mepc     = "h341".U
  val mcause   = "h342".U
  val mip      = "h344".U
  val mcycle   = "hb00".U
  val minstret = "hb02".U
}

object Constant extends Constant { }
