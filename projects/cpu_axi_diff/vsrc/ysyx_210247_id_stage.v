
//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_id_stage(
  input wire rst,

  output wire [`BR_BUS] br_bus,  

  input  wire if_valid_in,
  input  wire id_valid_in, 
  input  wire id_allow_out,
  output wire id_valid_out,
  output wire id_allow_in,

  output wire             rs1_r_ena,
  output wire [`DST_BUS]  rs1_r_addr,
  output wire             rs2_r_ena,
  output wire [`DST_BUS]  rs2_r_addr,
  input  wire [`REG_BUS]  rs1_data,
  input  wire [`REG_BUS]  rs2_data,

  input  wire [`DST_BUS]  EXE_wdest,
  input  wire [`REG_BUS]  EXE_result,
  input  wire [`DST_BUS]  MEM_wdest,
  input  wire [`REG_BUS]  MEM_result,
  input  wire [`DST_BUS]  WB_wdest,
  input  wire [`REG_BUS]  WB_result,

  input  wire             time_int,
  input  wire             mem_stall,
  output wire             br_stall,
  output wire             target_valid,

  input  wire [`IF_TO_ID_BUS -1:0] if_to_id_bus_i,
  output wire [`ID_TO_EXE_BUS-1:0] id_to_exe_bus_o
);

// I-type or U-type
wire [6  :  0]opcode;
wire [4  :  0]rd;
//wire [2  :  0]func3;
wire [4  :  0]rs1;
wire [11 :  0]imm;
wire [19 :  0]U_imm;
//R-type 
wire [4  :  0]rs2;
// J-type
wire [20 : 0]J_imm;
//B-type
wire [12 : 0]B_imm;
//S-type
wire [11 : 0]S_imm;
wire [`REG_BUS] id_pc;
wire [31  :  0] id_inst;
wire            id_wen;
wire [`DST_BUS] id_wdest;
wire [2   :  0] func3;
wire [6   :  0] func7;
wire [7   :  0] inst_opcode;
wire [`REG_BUS] op1;
wire [`REG_BUS] op2;
wire            store_op;
wire            load_op;
wire            rcsr_op; 
wire            wcsr_op;
wire [`REG_BUS] csr_op1;
wire [`REG_BUS] exc_type;
wire [`REG_BUS] exc_addr;
wire [31  :  0] exc_op;
wire            rs1_forward;
wire            rs2_forward;
wire [`REG_BUS] rs1_value;
wire [`REG_BUS] rs2_value;

//jump adress
wire             br_taken;
wire [`REG_BUS]  br_target;

wire id_valid;
wire id_ready_go;
wire op_stall;

assign id_valid     = id_valid_in;
assign id_ready_go  = id_valid && !br_stall;
assign id_valid_out = id_ready_go;
assign id_allow_in  = !id_valid || id_valid_out && id_allow_out;

assign br_stall = (mem_stall && (rs1 != 5'd0) & (rs1 == EXE_wdest) & rs1_r_ena) ||
                  (mem_stall && (rs2 != 5'd0) & (rs2 == EXE_wdest) & rs2_r_ena);
assign op_stall = (rs1_forward | rs2_forward) & id_valid;

assign target_valid = id_allow_out;

wire [5 : 0]inst_type;

//I-type
wire inst_addi  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];
wire inst_lh    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                &  func3[0] & ~func3[1] &  ~func3[2];
wire inst_lhu   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                &  func3[0] & ~func3[1] &   func3[2];                
wire inst_lw    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] &  func3[1] &  ~func3[2];
wire inst_lwu   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] &  func3[1] &   func3[2];                
wire inst_ld    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                &  func3[0] &  func3[1] &  ~func3[2];
wire inst_slti  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] &  func3[1] &  ~func3[2];                 
wire inst_sltiu = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                &  func3[0] &  func3[1] &  ~func3[2];     
wire inst_jalr  = opcode[0] & opcode[1] &  opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];       
wire inst_addiw = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];   
wire inst_srliw = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func7[1] & ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];  
wire inst_sraiw = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func7[1] & ~func7[2] &  ~func7[3] &  ~func7[4] &   func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];                
wire inst_slliw = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func7[1] & ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &  ~func3[2];                                
wire inst_srai  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func7[1] & ~func7[2] &  ~func7[3] &  ~func7[4] &   func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];    
wire inst_slli  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func7[1] & ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &  ~func3[2];  
wire inst_srli  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func7[1] & ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];    
wire inst_lb    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];                                            
wire inst_lbu   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] & ~func3[1] &   func3[2];  
wire inst_andi  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                &  func3[0] &  func3[1] &   func3[2];                                                           
wire inst_xori  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] & ~func3[1] &   func3[2];  
wire inst_ori   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6]
                & ~func3[0] &  func3[1] &   func3[2];    
wire inst_csrrs = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                & ~func3[0] &  func3[1] &  ~func3[2];     
wire inst_csrrw = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                &  func3[0] & ~func3[1] &  ~func3[2]; 
wire inst_csrrc = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                &  func3[0] &  func3[1] &  ~func3[2];                 
wire inst_csrrci= opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                &  func3[0] &  func3[1] &   func3[2];     
wire inst_csrrsi= opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                & ~func3[0] &  func3[1] &   func3[2];                   
wire inst_ecall = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];   
wire inst_mret  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] &  opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &   func7[3] &   func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &  ~func3[2] & rs2 == 5'b00010;                                                                                        

//U-type
wire inst_auipc = opcode[0] & opcode[1] &  opcode[2] & ~opcode[3] &  opcode[4] & ~opcode[5] & ~opcode[6];  
wire inst_lui   = opcode[0] & opcode[1] &  opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6];  

//R-type
wire inst_addw  = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];
wire inst_subw  = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &   func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];                
wire inst_sllw  = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &  ~func3[2];    
wire inst_sraw  = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &   func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];  
wire inst_srlw  = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];   
wire inst_sll   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &  ~func3[2];                    
wire inst_srl   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2]; 
wire inst_sra   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &   func7[5] &  ~func7[6]
                &  func3[0] & ~func3[1] &   func3[2];                                                                          
wire inst_sub   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &   func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];
wire inst_add   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &  ~func3[2];    
wire inst_and   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] &  func3[1] &   func3[2]; 
wire inst_or    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] &  func3[1] &   func3[2];   
wire inst_xor   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] & ~func3[1] &   func3[2];                   
wire inst_slt   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                & ~func3[0] &  func3[1] &  ~func3[2];                               
wire inst_sltu  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] &  opcode[4] &  opcode[5] & ~opcode[6]
                & ~func7[0] & ~func7[1] &  ~func7[2] &  ~func7[3] &  ~func7[4] &  ~func7[5] &  ~func7[6]
                &  func3[0] &  func3[1] &  ~func3[2];                                             

//J-type
wire inst_jal   = opcode[0] & opcode[1] &  opcode[2] &  opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6];  

//B-type
wire inst_beq   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                & ~func3[0] & ~func3[1] & ~func3[2]; 
wire inst_bne   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                &  func3[0] & ~func3[1] & ~func3[2]; 
wire inst_bge   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                &  func3[0] & ~func3[1] &  func3[2];  
wire inst_blt   = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                & ~func3[0] & ~func3[1] &  func3[2];  
wire inst_bltu  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                & ~func3[0] &  func3[1] &  func3[2];                
wire inst_bgeu  = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] &  opcode[6]
                &  func3[0] &  func3[1] &  func3[2];                                                

//S-type
wire inst_sd    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] & ~opcode[6]
                &  func3[0] &  func3[1] & ~func3[2]; 
wire inst_sh    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] & ~opcode[6]
                &  func3[0] & ~func3[1] & ~func3[2];  
wire inst_sb    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] & ~opcode[6]
                & ~func3[0] & ~func3[1] & ~func3[2];  
wire inst_sw    = opcode[0] & opcode[1] & ~opcode[2] & ~opcode[3] & ~opcode[4] &  opcode[5] & ~opcode[6]
                & ~func3[0] &  func3[1] & ~func3[2];     

wire inst_my    = opcode[0] & opcode[1] & ~opcode[2] &  opcode[3] &  opcode[4] &  opcode[5] &  opcode[6];                                                        

assign exc_type = ( rst == 1'b1 ) ? 0 : (inst_ecall ? 64'd11  : 
                                         inst_mret  ? 64'd666 : 
                                         time_int   ? 64'h8000000000000007 :
                                                      `ZERO_WORD);
assign exc_addr = ( rst == 1'b1 ) ? 0 : (inst_ecall | time_int ? id_pc : 0);
assign exc_op   = ( rst == 1'b1 ) ? 0 : (inst_ecall ? 32'h00000001 : 
                                         inst_mret  ? 32'h00000002 :  
                                         time_int   ? 32'h00000003 :
                                                      32'd0);

assign load_op  = inst_lw | inst_lwu | inst_ld | inst_lb | inst_lbu | inst_lh | inst_lhu;
assign store_op = inst_sd | inst_sh  | inst_sb | inst_sw;
assign wcsr_op  = inst_csrrs | inst_csrrw | inst_csrrci | inst_csrrsi | inst_csrrc;
assign rcsr_op  = inst_csrrs | inst_csrrw | inst_csrrci | inst_csrrsi | inst_csrrc;


assign inst_type      = (  rst == 1'b1 ) ? 0 : ( {6{inst_auipc| inst_lui}} & `U_type |
                                                 {6{inst_addi | inst_lw   | inst_sltiu | inst_jalr | 
                                                   inst_addiw | inst_ld   | inst_srai  | inst_lbu  |
                                                   inst_andi  | inst_xori | inst_lh    | inst_lhu  | 
                                                   inst_slli  | inst_srli | inst_srliw | inst_slliw|
                                                   inst_sraiw | inst_ori  | inst_slti  | inst_lb   |
                                                   inst_lwu   | inst_csrrs| inst_csrrw | inst_csrrci | 
                                                   inst_csrrsi| inst_csrrc}} & `I_type |
                                                 {6{inst_addw | inst_sub  | inst_add | inst_sllw |
                                                    inst_and  | inst_sltu | inst_or  | inst_subw |
                                                    inst_sraw | inst_srlw | inst_slt | inst_xor  |
                                                    inst_srl  | inst_sra  | inst_sll}} & `R_type |
                                                 {6{inst_sd   | inst_sh   | inst_sb  | inst_sw}} & `S_type |
                                                 {6{inst_jal  }} & `J_type |
                                                 {6{inst_beq | inst_bne   | inst_bge | inst_blt | inst_bgeu | inst_bltu}} & `B_type
                                                );

assign inst_opcode = (  rst == 1'b1 ) ? 0 : {1'b0,opcode};

assign opcode = id_inst[6  :  0];
assign rd     = id_inst[11 :  7];
assign func3  = id_inst[14 : 12];
assign rs1    = inst_my ? 5'h0a : id_inst[19 : 15];
assign imm    = id_inst[31 : 20];
assign U_imm  = id_inst[31 : 12];
assign rs2    = id_inst[24 : 20];
assign func7  = id_inst[31:25];
assign J_imm  = {id_inst[31], id_inst[19:12], id_inst[20], id_inst[30:21], 1'b0};
assign B_imm  = {id_inst[31], id_inst[7], id_inst[30:25], id_inst[11:8], 1'b0};
assign S_imm     = {id_inst[31:25], id_inst[11:7]};

//jump conditions
wire op1eqop2;
wire op1neop2;
wire op1geop2;
wire op1geuop2;
wire op1ltop2;
wire op1ltuop2;
wire [`REG_BUS] op1_sub_op2;
assign op1_sub_op2 = op1 + ~op2 + 1;
assign op1eqop2  = op1 == op2;
assign op1neop2  = op1 != op2;
assign op1geop2  = (op1 == op2) || (~op1[63] & op2[63]) || (~(op1[63] ^ op2[63]) && ~op1_sub_op2[63]);
assign op1ltop2  = ( op1[63]  & ~op2[63]) || (~(op1[63] ^ op2[63]) && op1_sub_op2[63]);
assign op1ltuop2 = (~op1[63]  &  op2[63]) || (~(op1[63] ^ op2[63]) && op1_sub_op2[63]);
assign op1geuop2 = ~op1ltuop2;

assign           br_taken  = (  rst == 1'b1 ) ? 0 :(inst_jal  |
                                                    inst_jalr |
                                                   (inst_bne  & op1neop2)  |
                                                   (inst_bge  & op1geop2)  |
                                                   (inst_bgeu & op1geuop2) |
                                                   (inst_blt  & op1ltop2)  |
                                                   (inst_bltu & op1ltuop2) |
                                                   (inst_beq  & op1eqop2) );
assign           br_target = inst_jal  ? {{43{J_imm[20]}}, J_imm} + id_pc : 
                             inst_bne  ? {{51{B_imm[12]}}, B_imm} + id_pc :
                             inst_bge  ? {{51{B_imm[12]}}, B_imm} + id_pc :
                             inst_bgeu ? {{51{B_imm[12]}}, B_imm} + id_pc :
                             inst_blt  ? {{51{B_imm[12]}}, B_imm} + id_pc :
                             inst_bltu ? {{51{B_imm[12]}}, B_imm} + id_pc :
                             inst_beq  ? {{51{B_imm[12]}}, B_imm} + id_pc :
                             inst_jalr ? op1 + op2 :
                            `ZERO_WORD;
assign           br_bus    = {id_ready_go, br_taken, br_target};

//read
assign rs1_r_ena  = ( rst == 1'b1 ) ? 0 : (inst_type == `I_type | inst_type == `B_type | inst_type == `R_type | inst_type == `S_type | inst_my);
assign rs1_r_addr = ( rst == 1'b1 ) ? 0 : (inst_type == `I_type | inst_type == `B_type | inst_type == `R_type | inst_type == `S_type | inst_my ? rs1 : 0 );
assign rs2_r_ena  = ( rst == 1'b1 ) ? 0 : (inst_type == `R_type | inst_type == `B_type | inst_type == `S_type);
assign rs2_r_addr = ( rst == 1'b1 ) ? 0 : (inst_type == `R_type | inst_type == `B_type | inst_type == `S_type ? rs2 : 0 );

//write
assign id_wen   = ( rst == 1'b1 ) ? 0 : (inst_type == `I_type | 
                                         inst_type == `U_type | 
                                         inst_type == `R_type | 
                                         inst_type == `J_type
                                        );

assign id_wdest  = ( rst == 1'b1 ) ? 0 : ( (inst_type == `I_type | 
                                            inst_type == `U_type | 
                                            inst_type == `R_type | 
                                            inst_type == `J_type) ? rd  : 0 );

assign op1 = ( rst == 1'b1 ) ? 0 : (inst_type == `I_type ? rs1_value : 
                                    inst_type == `R_type ? rs1_value : 
                                    inst_type == `B_type ? rs1_value :
                                    inst_my              ? rs1_value :
                                    inst_type == `S_type ? rs1_value : 
                                    inst_type == `U_type ? id_pc :
                                    inst_type == `J_type ? id_pc : 0 );

assign op2 = ( rst == 1'b1 ) ? 0 : (inst_type == `I_type ? { {52{imm[11]}}, imm } : 
                                    inst_type == `R_type ? rs2_value : 
                                    inst_type == `B_type ? rs2_value :
                                    inst_type == `S_type ? { {52{S_imm[11]}}, S_imm }  : 
                                    inst_type == `U_type ? { {32{U_imm[19]}}, {U_imm, 12'd0} } : 
                                    inst_type == `J_type ? 64'd4 : 0 );

wire [`REG_BUS] if_pc;
wire [31  :  0] if_inst;

assign {
        if_pc,
        if_inst
        } = if_to_id_bus_i;

assign id_pc       = if_pc;
assign id_inst     = if_inst;
assign csr_op1  =  {64{inst_csrrs }} & op1
                 | {64{inst_csrrw }} & op1
                 | {64{inst_csrrci}} & {59'd0, rs1}
                 | {64{inst_csrrsi}} & {59'd0, rs1}
                 | {64{inst_csrrc }} & op1;                                                  

assign id_to_exe_bus_o = {
    csr_op1,      // 539:476
    exc_type,     // 475:412
    exc_addr,     // 411:348
    exc_op,       // 347:316
    store_op,     // 315:315
    load_op,      // 314:314
    rcsr_op,      // 313:313
    wcsr_op,      // 312:312
    rs2_value,    // 311:248
    op1,          // 247:184
    op2,          // 183:120
    func3,        // 119:117
    func7,        // 116:110
    inst_opcode,  // 109:102
    id_pc,        // 101: 38
    id_inst,      //  37:  6
    id_wen,       //   5:  5
    id_wdest      //   4:  0
}; 

assign rs1_forward = (rs1 != 5'd0) & (rs1 == EXE_wdest | rs1 == MEM_wdest | rs1 == WB_wdest) & rs1_r_ena;
assign rs2_forward = (rs2 != 5'd0) & (rs2 == EXE_wdest | rs2 == MEM_wdest | rs2 == WB_wdest) & rs2_r_ena;

assign rs1_value = rs1_forward ? (rs1 == EXE_wdest ? EXE_result : 
                                  rs1 == MEM_wdest ? MEM_result :
                                  rs1 ==  WB_wdest ?  WB_result : 
                                                     `ZERO_WORD)  : rs1_data;
assign rs2_value = rs2_forward ? (rs2 == EXE_wdest ? EXE_result : 
                                  rs2 == MEM_wdest ? MEM_result :
                                  rs2 ==  WB_wdest ?  WB_result : 
                                                     `ZERO_WORD)  : rs2_data;                                                     
                                                 

endmodule
