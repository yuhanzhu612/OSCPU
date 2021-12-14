
`timescale 1ns / 1ps

`define ZERO_WORD       64'h00000000_00000000
`define PC_START        64'h00000000_7ffffffc  
`define CLINT_MTIMECMP  64'h00000000_02004000
`define CLINT_MTIME     64'h00000000_0200bff8
`define REG_BUS         63 : 0  
`define DST_BUS          4 : 0 

`define IF_TO_ID_BUS    96 
`define ID_TO_EXE_BUS  540
`define EXE_TO_MEM_BUS 403
`define MEM_TO_WB_BUS  403 

`define RW_DATA_WIDTH       128
`define AXI_DATA_WIDTH      64
`define AXI_ADDR_WIDTH      64
`define AXI_DATA_WIDTH      64
`define AXI_ID_WIDTH        4
`define AXI_USER_WIDTH      1

`define BR_BUS        65 : 0

`define INST_ADDI_OP  8'h13
`define INST_LUI_OP   8'h37
`define INST_AUIPC_OP 8'h17
`define INST_JAL_OP   8'h6f
`define INST_LW_OP    8'h03
`define INST_LWU_OP   8'h03
`define INST_ADDW_OP  8'h3b
`define INST_SLT_OP   8'h33
`define INST_SLTI_OP  8'h13
`define INST_SLTU_OP  8'h33
`define INST_SLTIU_OP 8'h13
`define INST_BEQ_OP   8'h63
`define INST_JALR_OP  8'h67
`define INST_BNE_OP   8'h63
`define INST_BGE_OP   8'h63
`define INST_BLT_OP   8'h63
`define INST_BLTU_OP  8'h63
`define INST_BGEU_OP  8'h63
`define INST_SUB_OP   8'h33
`define INST_ADD_OP   8'h33
`define INST_ADDIW_OP 8'h1b
`define INST_LD_OP    8'h03
`define INST_LH_OP    8'h03
`define INST_LHU_OP   8'h03
`define INST_SD_OP    8'h23
`define INST_SRAI_OP  8'h13
`define INST_SLLI_OP  8'h13
`define INST_SRLI_OP  8'h13
`define INST_SRLIW_OP 8'h1b
`define INST_SRAIW_OP 8'h1b
`define INST_SLLIW_OP 8'h1b
`define INST_LB_OP    8'h03
`define INST_LBU_OP   8'h03
`define INST_SB_OP    8'h23
`define INST_SH_OP    8'h23
`define INST_SW_OP    8'h23
`define INST_SLLW_OP  8'h3b
`define INST_SRAW_OP  8'h3b
`define INST_SRLW_OP  8'h3b
`define INST_SUBW_OP  8'h3b
`define INST_AND_OP   8'h33
`define INST_OR_OP    8'h33
`define INST_XOR_OP   8'h33
`define INST_SLL_OP   8'h33
`define INST_SRL_OP   8'h33
`define INST_SRA_OP   8'h33
`define INST_ANDI_OP  8'h13
`define INST_XORI_OP  8'h13
`define INST_ORI_OP   8'h13
`define INST_MY_OP    8'h7b
`define INST_CSRRS_OP 8'h73
`define INST_CSRRW_OP 8'h73
`define INST_ECALL_OP 8'h73
`define INST_MRET_OP  8'h73
`define INST_CSRRSI_OP 8'h73
`define INST_CSRRCI_OP 8'h73
`define INST_CSRRC_OP  8'h73

`define MCYCLE       12'hb00
`define MTEVC        12'h305
`define MEPC         12'h341
`define MSTATUS      12'h300
`define MCAUSE       12'h342
`define MIE          12'h304
`define MSCRATCH     12'h340

`define U_type     6'b100000
`define I_type     6'b010000
`define R_type     6'b001000
`define S_type     6'b000100
`define J_type     6'b000010
`define B_type     6'b000001


`define SIZE_B              2'b00
`define SIZE_H              2'b01
`define SIZE_W              2'b10
`define SIZE_D              2'b11

`define REQ_READ            1'b0
`define REQ_WRITE           1'b1

