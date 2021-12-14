
//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_exe_stage(
  input wire rst,
  input wire clk,

  input  wire exe_valid_in, 
  input  wire exe_allow_out,
  output wire exe_valid_out,
  output wire exe_allow_in,

  output wire            data_valid,
	input  wire            data_ready,
  input  wire [`REG_BUS] data_read,  
  output wire [`REG_BUS] data_addr,   
  output wire [ 1  :  0] data_size,
  input  wire [ 1  :  0] data_resp,
  output wire [`REG_BUS] data_write,
  output wire            data_wen,
  output wire [ 7  :  0] data_strb,

  output wire             cmp_ren,
  output wire             cmp_wen,
  output wire [`REG_BUS]  cmp_addr,
  input  wire [`REG_BUS]  cmp_rdata,
  output wire [`REG_BUS]  cmp_wdata,

  output wire [`DST_BUS] EXE_wdest,
  output wire [`REG_BUS] EXE_result,

  output wire            csr_ren,
  output wire [11  :  0] csr_addr,
  input  wire [`REG_BUS] csr_rdata,

  output wire            mem_stall,

  output wire            inst_is_my,
  output wire [`REG_BUS] print,
  output wire            skip, 

  input  wire [`ID_TO_EXE_BUS -1:0] id_to_exe_bus_i,
  output wire [`EXE_TO_MEM_BUS-1:0] exe_to_mem_bus_o
);

assign cmp_ren    = load_op  & (data_addr == `CLINT_MTIMECMP | data_addr == `CLINT_MTIME);
assign cmp_wen    = store_op & (data_addr == `CLINT_MTIMECMP | data_addr == `CLINT_MTIME);
assign cmp_addr   = data_addr;
assign cmp_wdata  = data_write;

wire hs_done;
wire exe_valid;
wire exe_ready_go;
wire [`REG_BUS] data_rdata;

assign exe_valid      = exe_valid_in;
assign exe_ready_go   = exe_valid & ( (!load_op & !store_op) | hs_done | cmp_ren | cmp_wen);
assign exe_valid_out  = exe_ready_go;
assign exe_allow_in   = !exe_valid || exe_valid_out && exe_allow_out; 

assign hs_done    = data_valid & data_ready;
assign mem_stall  = load_op && !hs_done;

assign data_rdata = cmp_ren ? cmp_rdata : data_read;
assign data_wen   = ( |store_op ) & exe_valid;
assign data_valid = (load_op | store_op) & (exe_valid & exe_allow_out) & (!cmp_ren & !cmp_wen);
assign data_addr  = op1 + op2;
assign data_size  = inst_is_lw  | inst_is_sw  ? `SIZE_W :
                    inst_is_lwu               ? `SIZE_W :
                    inst_is_lb  | inst_is_sb  ? `SIZE_B :
                    inst_is_lbu               ? `SIZE_B :
                    inst_is_lh  | inst_is_sh  ? `SIZE_H :
                    inst_is_lhu ? `SIZE_H :
                    inst_is_ld  | inst_is_sd  ? `SIZE_D : 0;

assign data_strb  = (inst_is_sw | inst_is_lw | inst_is_lwu)  ? (data_addr[2]   == 1'b0 ? 8'b00001111 : 
                                                            8'b11110000
                                 ) :
                   (inst_is_sh | inst_is_lh | inst_is_lhu)  ? (data_addr[2:1] == 2'b00 ? 8'b00000011 :
                                  data_addr[2:1] == 2'b01 ? 8'b00001100 :
                                  data_addr[2:1] == 2'b10 ? 8'b00110000 :
                                                            8'b11000000
                                 ) :
                   (inst_is_sb | inst_is_lb | inst_is_lbu)  ? (data_addr[2:0] == 3'b000 ? 8'b00000001 :
                                  data_addr[2:0] == 3'b001 ? 8'b00000010 :
                                  data_addr[2:0] == 3'b010 ? 8'b00000100 :
                                  data_addr[2:0] == 3'b011 ? 8'b00001000 :
                                  data_addr[2:0] == 3'b100 ? 8'b00010000 :
                                  data_addr[2:0] == 3'b101 ? 8'b00100000 :
                                  data_addr[2:0] == 3'b110 ? 8'b01000000 :
                                                             8'b10000000
                                 ) :
                   (inst_is_sd | inst_is_ld)  ? 8'b11111111 : 8'b00000000;
assign data_write = inst_is_sw  ? (data_addr[2]   == 1'b0 ? {32'd0, rs2_data[31:0]       } : 
                                                            {rs2_data[31:0], 32'd0       }
                                 ) :
                   inst_is_sh  ? (data_addr[2:1] == 2'b00 ? {48'd0, rs2_data[15:0]       } :
                                  data_addr[2:1] == 2'b01 ? {32'd0, rs2_data[15:0], 16'd0} :
                                  data_addr[2:1] == 2'b10 ? {16'd0, rs2_data[15:0], 32'd0} :
                                                            {rs2_data[15:0],        48'd0}
                                 ) :
                   inst_is_sb  ? (data_addr[2:0] == 3'b000 ? {56'd0, rs2_data[7:0]       } :
                                  data_addr[2:0] == 3'b001 ? {48'd0, rs2_data[7:0],  8'd0} :
                                  data_addr[2:0] == 3'b010 ? {40'd0, rs2_data[7:0], 16'd0} :
                                  data_addr[2:0] == 3'b011 ? {32'd0, rs2_data[7:0], 24'd0} :
                                  data_addr[2:0] == 3'b100 ? {24'd0, rs2_data[7:0], 32'd0} :
                                  data_addr[2:0] == 3'b101 ? {16'd0, rs2_data[7:0], 40'd0} :
                                  data_addr[2:0] == 3'b110 ? { 8'd0, rs2_data[7:0], 48'd0} :
                                                             {rs2_data[7:0],        56'd0}
                                 ) :              
                   inst_is_sd  ? rs2_data : `ZERO_WORD;

assign csr_ren   = ( |rcsr_op );
assign csr_addr  = op2[11:0];

wire inst_is_addi;
wire inst_is_addiw;
wire inst_is_srliw;
wire inst_is_sraiw;
wire inst_is_slliw;
wire inst_is_auipc;
wire inst_is_lui;
wire inst_is_jal;
wire inst_is_addw;
wire inst_is_subw;
wire inst_is_sllw;
wire inst_is_sraw;
wire inst_is_srlw;
wire inst_is_slt;
wire inst_is_sltu;
wire inst_is_slti;
wire inst_is_sltiu;
wire inst_is_lh;
wire inst_is_lhu;
wire inst_is_lw;
wire inst_is_lwu;
wire inst_is_ld;
wire inst_is_jalr;
wire inst_is_sub;
wire inst_is_add;
wire inst_is_sw;
wire inst_is_sd;
wire inst_is_sh;
wire inst_is_sb;
wire inst_is_srai;
wire inst_is_slli;
wire inst_is_srli;
wire inst_is_lb;
wire inst_is_lbu;
wire inst_is_and;
wire inst_is_or;
wire inst_is_srl;
wire inst_is_sll;
wire inst_is_sra;
wire inst_is_andi;
wire inst_is_xori;
wire inst_is_ori;
wire inst_is_xor;
wire inst_is_csrrs;
wire inst_is_csrrw;
wire inst_is_csrrc;
wire inst_is_csrrsi;
wire inst_is_csrrci;

assign print         = op1;
assign inst_is_my    = inst_opcode == `INST_MY_OP;
assign skip          = inst_is_my | cmp_ren | cmp_wen | (csr_addr == `MCYCLE && csr_wen && csr_ren);

assign inst_is_addi  = inst_opcode == `INST_ADDI_OP  & func3 == 3'b000;
assign inst_is_andi  = inst_opcode == `INST_ANDI_OP  & func3 == 3'b111;
assign inst_is_xori  = inst_opcode == `INST_XORI_OP  & func3 == 3'b100;
assign inst_is_ori   = inst_opcode == `INST_ORI_OP   & func3 == 3'b110;
assign inst_is_addiw = inst_opcode == `INST_ADDIW_OP & func3 == 3'b000;
assign inst_is_auipc = inst_opcode == `INST_AUIPC_OP;
assign inst_is_lui   = inst_opcode == `INST_LUI_OP;
assign inst_is_jal   = inst_opcode == `INST_JAL_OP;
assign inst_is_addw  = inst_opcode == `INST_ADDW_OP  & func3 == 3'b000 & func7 == 7'b0000000;
assign inst_is_subw  = inst_opcode == `INST_SUBW_OP  & func3 == 3'b000 & func7 == 7'b0100000;
assign inst_is_sllw  = inst_opcode == `INST_SLLW_OP  & func3 == 3'b001 & func7 == 7'b0000000;
assign inst_is_sraw  = inst_opcode == `INST_SRAW_OP  & func3 == 3'b101 & func7 == 7'b0100000;
assign inst_is_srlw  = inst_opcode == `INST_SRLW_OP  & func3 == 3'b101 & func7 == 7'b0000000;
assign inst_is_slt   = inst_opcode == `INST_SLT_OP   & func3 == 3'b010 & func7 == 7'b0000000;
assign inst_is_sltu  = inst_opcode == `INST_SLTU_OP  & func3 == 3'b011 & func7 == 7'b0000000;
assign inst_is_slti  = inst_opcode == `INST_SLTI_OP  & func3 == 3'b010;
assign inst_is_sltiu = inst_opcode == `INST_SLTIU_OP & func3 == 3'b011;
assign inst_is_lh    = inst_opcode == `INST_LH_OP    & func3 == 3'b001;
assign inst_is_lhu   = inst_opcode == `INST_LHU_OP   & func3 == 3'b101;
assign inst_is_lwu   = inst_opcode == `INST_LWU_OP   & func3 == 3'b110;
assign inst_is_lw    = inst_opcode == `INST_LW_OP    & func3 == 3'b010;
assign inst_is_ld    = inst_opcode == `INST_LD_OP    & func3 == 3'b011;
assign inst_is_jalr  = inst_opcode == `INST_JALR_OP  & func3 == 3'b000;
assign inst_is_sub   = inst_opcode == `INST_SUB_OP   & func3 == 3'b000 & func7 == 7'b0100000;
assign inst_is_add   = inst_opcode == `INST_ADD_OP   & func3 == 3'b000 & func7 == 7'b0000000;
assign inst_is_and   = inst_opcode == `INST_AND_OP   & func3 == 3'b111 & func7 == 7'b0000000;
assign inst_is_or    = inst_opcode == `INST_OR_OP    & func3 == 3'b110 & func7 == 7'b0000000;
assign inst_is_sll   = inst_opcode == `INST_SLL_OP   & func3 == 3'b001 & func7 == 7'b0000000;
assign inst_is_srl   = inst_opcode == `INST_SRL_OP   & func3 == 3'b101 & func7 == 7'b0000000;
assign inst_is_sra   = inst_opcode == `INST_SRA_OP   & func3 == 3'b101 & func7 == 7'b0100000;
assign inst_is_xor   = inst_opcode == `INST_XOR_OP   & func3 == 3'b100 & func7 == 7'b0000000;
assign inst_is_sw    = inst_opcode == `INST_SW_OP    & func3 == 3'b010;
assign inst_is_sd    = inst_opcode == `INST_SD_OP    & func3 == 3'b011;
assign inst_is_sh    = inst_opcode == `INST_SH_OP    & func3 == 3'b001;
assign inst_is_sb    = inst_opcode == `INST_SB_OP    & func3 == 3'b000;
assign inst_is_srai  = inst_opcode == `INST_SRAI_OP  & func3 == 3'b101 & func7[6:1] == 6'b010000;
assign inst_is_slli  = inst_opcode == `INST_SLLI_OP  & func3 == 3'b001 & func7[6:1] == 6'b000000;
assign inst_is_srli  = inst_opcode == `INST_SRLI_OP  & func3 == 3'b101 & func7[6:1] == 6'b000000;
assign inst_is_srliw = inst_opcode == `INST_SRLIW_OP & func3 == 3'b101 & func7[6:1] == 6'b000000;
assign inst_is_sraiw = inst_opcode == `INST_SRAIW_OP & func3 == 3'b101 & func7[6:1] == 6'b010000;
assign inst_is_slliw = inst_opcode == `INST_SLLIW_OP & func3 == 3'b001 & func7[6:1] == 6'b000000;
assign inst_is_lb    = inst_opcode == `INST_LB_OP    & func3 == 3'b000;
assign inst_is_lbu   = inst_opcode == `INST_LBU_OP   & func3 == 3'b100;
assign inst_is_csrrs = inst_opcode == `INST_CSRRS_OP & func3 == 3'b010;
assign inst_is_csrrw = inst_opcode == `INST_CSRRW_OP & func3 == 3'b001;
assign inst_is_csrrc = inst_opcode == `INST_CSRRC_OP & func3 == 3'b011;
assign inst_is_csrrsi= inst_opcode == `INST_CSRRSI_OP& func3 == 3'b110;
assign inst_is_csrrci= inst_opcode == `INST_CSRRCI_OP& func3 == 3'b111;


wire [`REG_BUS] op64;
wire [`REG_BUS] op32;
wire [`REG_BUS] jalr_res;
wire [`REG_BUS] load_res;
wire [`REG_BUS] sub_res;
wire [`REG_BUS] add_res;
wire [`REG_BUS] and_res;
wire [`REG_BUS] or_res; 
wire [`REG_BUS] sll_res;
wire [`REG_BUS] srl_res;
wire [`REG_BUS] sra_res; 
wire [`REG_BUS] xor_res; 
wire [`REG_BUS] andi_res;
wire [`REG_BUS] xori_res;
wire [`REG_BUS] ori_res;
wire [127 :  0] sr128_res;
wire [`REG_BUS] sr_res;
wire [`REG_BUS] slli_res;
wire [`REG_BUS] srli_res;
wire [`REG_BUS] sraiw_res;
wire [31  :  0] srliw_res;
wire [31  :  0] slliw_res;
wire [`REG_BUS] subw_res;
wire [`REG_BUS] sllw_res;
wire [`REG_BUS] sraw_res;
wire [`REG_BUS] srlw_res;
wire [`REG_BUS] slti_res;
wire [`REG_BUS] sltiu_res;
wire [`REG_BUS] sltu_res;
wire [`REG_BUS] slt_res;
wire [`REG_BUS] csrrs_res;
wire [`REG_BUS] csrrw_res;
wire [`REG_BUS] csrrc_res;
wire [`REG_BUS] csrrsi_res;
wire [`REG_BUS] csrrci_res;
wire [`REG_BUS] op1_sub_op2;
wire            op1ltop2;
wire            op1ltuop2;
assign          op1_sub_op2 = op1 + ~op2 + 1;
assign          op1ltop2 = (op1[63]  & ~op2[63]) || (~(op1[63] ^ op2[63]) && op1_sub_op2[63]);
assign          op1ltuop2= (~op1[63] &  op2[63]) || (~(op1[63] ^ op2[63]) && op1_sub_op2[63]);
assign          op64     = op1 + op2;
assign          op32     = {{32{op64[31]}}, op64[31:0]};
assign          jalr_res = exe_pc + 64'd4;
assign          sub_res  = op1 + (~op2 + 1);
assign          add_res  = op1 + op2;
assign          and_res  = op1 & op2;
assign          or_res   = op1 | op2;
assign          xor_res  = op1 ^ op2;
assign          andi_res = op1 & op2;
assign          xori_res = op1 ^ op2;
assign          ori_res  = op1 | op2;
assign          srl_res  = op1 >> op2[5:0];
assign          sll_res  = op1 << op2[5:0];
assign          sra_res  = sr128_res[63:0];
assign          sr128_res= {{64{op1[63]}}, op1} >> op2[5:0];
assign          sr_res   = sr128_res[63:0];
assign          slli_res = op1 << op2[5:0];
assign          srli_res = op1 >> op2[5:0];
assign          srliw_res= op1[31:0] >> op2[5:0];
assign          sraiw_res= {{32{op1[31]}}, op1[31:0]} >> op2[5:0];
assign          slliw_res= op1[31:0] << op2[5:0];
assign          subw_res = op1 + (~op2 + 1);
assign          sllw_res = op1 << op2[4:0];
assign          sraw_res = {{32{op1[31]}}, op1[31:0]} >> op2[4:0];
assign          srlw_res = {32'd0, op1[31:0]} >> op2[4:0];
assign          slti_res = {63'd0, op1ltop2};
assign          sltiu_res= {63'd0, op1ltuop2};
assign          sltu_res = {63'd0, op1ltuop2};
assign          slt_res  = {63'd0, op1ltop2};
assign          csrrs_res = csr_rdata;
assign          csrrw_res = csr_rdata;
assign          csrrc_res = csr_rdata;
assign          csrrsi_res= csr_rdata;
assign          csrrci_res= csr_rdata;

assign load_res =     {64{inst_is_lb }} & {{56{data_rdata[ 7]}}, data_rdata[ 7:0]}
                    | {64{inst_is_lbu}} & { 56'd0              , data_rdata[ 7:0]}
                    | {64{inst_is_lh }} & {{48{data_rdata[15]}}, data_rdata[15:0]}
                    | {64{inst_is_lhu}} & { 48'd0              , data_rdata[15:0]}
                    | {64{inst_is_lw }} & {{32{data_rdata[31]}}, data_rdata[31:0]}
                    | {64{inst_is_lwu}} & { 32'd0              , data_rdata[31:0]}
                    | {64{inst_is_ld }} &                        data_rdata;


assign exe_wdata = (rst == 1'b1) ? `ZERO_WORD : (inst_is_addi  ? op64 :
                                               inst_is_auipc ? op64 :
                                               inst_is_lui   ? op2  :
                                               inst_is_jal   ? op64 :
                                               inst_is_addw  ? op32 :
                                               inst_is_jalr  ? jalr_res :
                                               inst_is_sub   ? sub_res  :
                                               inst_is_add   ? add_res  :
                                               inst_is_and   ? and_res  :
                                               inst_is_or    ? or_res   :
                                               inst_is_xor   ? xor_res  :
                                               inst_is_andi  ? andi_res :
                                               inst_is_xori  ? xori_res :
                                               inst_is_ori   ? ori_res  :
                                               inst_is_srai  ? sr_res   :
                                               inst_is_slli  ? slli_res :
                                               inst_is_srli  ? srli_res :
                                               inst_is_srl   ? srl_res  :
                                               inst_is_sll   ? sll_res  :
                                               inst_is_sra   ? sra_res  :
                                               inst_is_srliw ? {{32{srliw_res[31]}}, srliw_res}:
                                               inst_is_sraiw ? {{32{sraiw_res[31]}}, sraiw_res[31:0]}:
                                               inst_is_slliw ? {{32{slliw_res[31]}}, slliw_res}:
                                               inst_is_subw  ? {{32{subw_res[31]}}, subw_res[31:0]} :
                                               inst_is_sllw  ? {{32{sllw_res[31]}}, sllw_res[31:0]} :
                                               inst_is_sraw  ? {{32{sraw_res[31]}}, sraw_res[31:0]} :
                                               inst_is_srlw  ? {{32{srlw_res[31]}}, srlw_res[31:0]} :
                                               inst_is_slti  ? slti_res  : 
                                               inst_is_sltiu ? sltiu_res : 
                                               inst_is_sltu  ? sltu_res  :
                                               inst_is_slt   ? slt_res   :
                                               inst_is_addiw ? op32      :
                                               inst_is_csrrs ? csrrs_res :
                                               inst_is_csrrw ? csrrw_res :
                                               inst_is_csrrc ? csrrc_res :
                                               inst_is_csrrsi? csrrsi_res:
                                               inst_is_csrrci? csrrci_res:
                                               load_op       ? load_res  :
                                               `ZERO_WORD);

wire [`REG_BUS] id_pc;
wire [31  :  0] id_inst;
wire            id_wen;
wire [`DST_BUS] id_wdest;
wire [2   :  0] func3;
wire [6   :  0] func7;
wire [7   :  0] inst_opcode;
wire [`REG_BUS] op1;
wire [`REG_BUS] op2;
wire [`REG_BUS] rs2_data;
wire            store_op;
wire            load_op;
wire            rcsr_op; 
wire            wcsr_op;
wire [`REG_BUS] csr_op1;
wire [`REG_BUS] exc_type;
wire [`REG_BUS] exc_addr;
wire [31  :  0] exc_op;

assign {
        csr_op1,
        exc_type,   
        exc_addr,   
        exc_op,
        store_op,   
        load_op,    
        rcsr_op,    
        wcsr_op,   
        rs2_data,
        op1,          
        op2,         
        func3,      
        func7,        
        inst_opcode,  
        id_pc,
        id_inst,
        id_wen,
        id_wdest
        } = id_to_exe_bus_i;

wire [`REG_BUS] exe_pc;
wire [31  :  0] exe_inst;
wire            exe_wen;
wire [`DST_BUS] exe_wdest;
wire [`REG_BUS] exe_wdata;
wire            csr_wen;
wire [11  :  0] csr_waddr;
wire [`REG_BUS] csr_wdata;

assign exe_pc       = id_pc;
assign exe_inst     = id_inst;
assign exe_wen      = id_wen;
assign exe_wdest    = id_wdest; 
assign csr_wen      = ( |wcsr_op );
assign csr_waddr    = op2[11:0];
assign csr_wdata    = inst_is_csrrs ? (csr_op1 | csr_rdata) : 
                      inst_is_csrrw ? (csr_op1            ) : 
                      inst_is_csrrsi? ({csr_rdata[63:5], csr_rdata[4:0] |  csr_op1[4:0]}) : 
                      inst_is_csrrci? ({csr_rdata[63:5], csr_rdata[4:0] &~ csr_op1[4:0]}) : 
                      inst_is_csrrc ? (csr_rdata &~ csr_op1) : 
                                      `ZERO_WORD;

assign exe_to_mem_bus_o = {
    exc_type,   //402:339
    exc_addr,   //338:275
    exc_op,     //274:243
    csr_wen,    //242:242
    csr_waddr,  //241:230
    csr_wdata,  //229:166
    exe_pc,     //165:102
    exe_inst,   //101:70
    exe_wen,    // 69:69
    exe_wdest,  // 68:64
    exe_wdata   // 63: 0
};       

assign EXE_wdest  = exe_wdest & {5{exe_valid}};
assign EXE_result = exe_wdata;

endmodule
