
//--xuezhen--

`include "defines.v"

module ysyx_210247_cpu(
    input                               clock,
    input                               reset,
    
    output                              inst_valid,
    input                               inst_ready,
    input  [63:0]                       inst_read,
    output [63:0]                       inst_addr,
    output [1:0]                        inst_size,
    input  [1:0]                        inst_resp,
    output                              addr_valid,
    output                              br_stall,

    output                              data_valid,
    input                               data_ready,
    input  [63:0]                       data_read,
    output [63:0]                       data_addr,
    output [1:0]                        data_size,
    input  [1:0]                        data_resp,
    output [63:0]                       data_write,
    output                              data_wen,
    output [ 7:0]                       data_strb
);

//PIPE REGFILE
wire [`BR_BUS            ] br_bus;
wire [`IF_TO_ID_BUS-1  :0] if_to_id_bus_i;
wire [`IF_TO_ID_BUS-1  :0] if_to_id_bus_o;
wire [`ID_TO_EXE_BUS-1 :0] id_to_exe_bus_i;
wire [`ID_TO_EXE_BUS-1 :0] id_to_exe_bus_o;
wire [`EXE_TO_MEM_BUS-1:0] exe_to_mem_bus_i;
wire [`EXE_TO_MEM_BUS-1:0] exe_to_mem_bus_o;
wire [`MEM_TO_WB_BUS-1 :0] mem_to_wb_bus_i;
wire [`MEM_TO_WB_BUS-1 :0] mem_to_wb_bus_o;

//write information
wire [`REG_BUS] wb_pc;
wire [31  :  0] wb_inst;
wire            wb_wen;
wire [`DST_BUS] wb_wdest;
wire [`REG_BUS] wb_wdata;  
wire            writed;     //write difftest valid

//REGFILE
wire            rs1_r_ena;
wire [`DST_BUS] rs1_r_addr;
wire            rs2_r_ena;
wire [`DST_BUS] rs2_r_addr;
wire [`REG_BUS] r_data1;
wire [`REG_BUS] r_data2;
wire [`REG_BUS] regs[0 : 31];

// CSR REGFILE
wire            csr_ren;
wire            csr_wen;
wire [11  :  0] csr_addr;
wire [11  :  0] csr_waddr;
wire [`REG_BUS] csr_wdata;
wire [`REG_BUS] csr_rdata;
wire            flush;      //ex/int signal
wire [`REG_BUS] new_pc;     //ex/int next pc
wire [`REG_BUS] exc_type;   //ex/int type, equal to mcause regfile   
wire [`REG_BUS] exc_addr;   //ex/int current address
wire [31  :  0] exc_op;     
wire [`REG_BUS] mstatus_o;
wire [`REG_BUS] mepc_o;
wire [`REG_BUS] mcause_o;
wire [`REG_BUS] mtvec_o;
wire [`REG_BUS] mie_o;
wire [`REG_BUS] mip_o;
wire [`REG_BUS] mscratch_o;

//PIPE HANDSHAKE 
wire            if_valid_in;
wire            if_valid_out;
wire            if_allow_out;
wire            id_valid_in;
wire            id_valid_out;
wire            id_allow_in;
wire            id_allow_out;
wire            exe_valid_in;
wire            exe_valid_out;
wire            exe_allow_in;
wire            exe_allow_out;
wire            mem_valid_in;
wire            mem_valid_out;
wire            mem_allow_in;
wire            mem_allow_out;
wire            wb_valid_in;
wire            wb_allow_in;

//DATA CONFLICT
wire [`DST_BUS] EXE_wdest;
wire [`REG_BUS] EXE_result;
wire [`DST_BUS] MEM_wdest;
wire [`REG_BUS] MEM_result;
wire [`DST_BUS] WB_wdest;
wire [`REG_BUS] WB_result;

//CLINT
wire            cmp_ren;
wire            cmp_wen;
wire [`REG_BUS] cmp_addr;
wire [`REG_BUS] cmp_rdata;
wire [`REG_BUS] cmp_wdata;

//TIME INTERRUPT
wire            time_int_valid; //time_int signal from wb_stage
wire            time_int;       //from clint to id_stage
wire            mem_stall;
wire            target_valid;

//SELF DEFIND INST
wire            inst_is_my;
wire            skip;
wire [`REG_BUS] print;

ysyx_210247_if_stage    u_ysyx_210247_if_stage(
    .clk            ( clock          ),
    .rst            ( reset          ),
    .if_allow_out   ( if_allow_out   ),
    .if_valid_out   ( if_valid_out   ),
    .br_bus         ( br_bus         ),
    .if_to_id_bus_o ( if_to_id_bus_o ),
    .inst_valid     ( inst_valid     ),
    .inst_ready     ( inst_ready     ),
    .inst_read      ( inst_read      ),
    .inst_addr      ( inst_addr      ),
    .inst_size      ( inst_size      ),
    .inst_resp      ( inst_resp      ),
    .addr_valid     ( addr_valid     ),
    .br_stall       ( br_stall       ),
    .target_valid   ( target_valid   ),
    .new_pc         ( new_pc         ),
    .flush          ( flush          )
);

ysyx_210247_reg_if_id   u_ysyx_210247_reg_if_id(
    .clk            ( clock          ),
    .rst            ( reset          ),
    .flush          ( flush          ),
    .if_valid_out   ( if_valid_out   ),
    .if_to_id_bus_o ( if_to_id_bus_o ),
    .id_valid_in    ( id_valid_in    ),
    .if_to_id_bus_i ( if_to_id_bus_i ),
    .if_allow_out   ( if_allow_out   ),
    .id_allow_in    ( id_allow_in    )
);

ysyx_210247_id_stage    u_ysyx_210247_id_stage(
    .rst            ( reset          ),
    .br_bus         ( br_bus         ),
    .if_valid_in    ( if_valid_in    ),
    .id_valid_in    ( id_valid_in    ),
    .id_allow_out   ( id_allow_out   ),
    .id_valid_out   ( id_valid_out   ),
    .id_allow_in    ( id_allow_in    ),
    .rs1_r_ena      ( rs1_r_ena      ),
    .rs1_r_addr     ( rs1_r_addr     ),
    .rs2_r_ena      ( rs2_r_ena      ),
    .rs2_r_addr     ( rs2_r_addr     ),
    .rs1_data       ( r_data1        ),
    .rs2_data       ( r_data2        ),
    .EXE_wdest      ( EXE_wdest      ),
    .EXE_result     ( EXE_result     ),
    .MEM_wdest      ( MEM_wdest      ),
    .MEM_result     ( MEM_result     ),
    .WB_wdest       ( WB_wdest       ),
    .WB_result      ( WB_result      ),
    .time_int       ( time_int       ),
    .mem_stall      ( mem_stall      ),
    .br_stall       ( br_stall       ),
    .target_valid   ( target_valid   ),
    .if_to_id_bus_i ( if_to_id_bus_i ),
    .id_to_exe_bus_o( id_to_exe_bus_o)
);

ysyx_210247_reg_id_exe  u_ysyx_210247_reg_id_exe(
    .clk             ( clock           ),
    .rst             ( reset           ),
    .flush           ( flush           ),
    .id_valid_out    ( id_valid_out    ),
    .id_to_exe_bus_o ( id_to_exe_bus_o ),
    .exe_valid_in    ( exe_valid_in    ),
    .id_to_exe_bus_i ( id_to_exe_bus_i ),
    .id_allow_out    ( id_allow_out    ),
    .exe_allow_in    ( exe_allow_in    )
);

ysyx_210247_exe_stage   u_ysyx_210247_exe_stage(
    .rst             ( reset           ),
    .clk             ( clock           ),
    .exe_valid_in    ( exe_valid_in    ),
    .exe_allow_out   ( exe_allow_out   ),
    .exe_valid_out   ( exe_valid_out   ),
    .exe_allow_in    ( exe_allow_in    ),
    .data_valid      ( data_valid      ),
    .data_ready      ( data_ready      ),
    .data_read       ( data_read       ),
    .data_addr       ( data_addr       ),
    .data_size       ( data_size       ),
    .data_resp       ( data_resp       ),
    .data_write      ( data_write      ),
    .data_wen        ( data_wen        ),
    .data_strb       ( data_strb       ),
    .cmp_ren         ( cmp_ren         ),
    .cmp_wen         ( cmp_wen         ),
    .cmp_addr        ( cmp_addr        ),
    .cmp_rdata       ( cmp_rdata       ),
    .cmp_wdata       ( cmp_wdata       ),
    .EXE_wdest       ( EXE_wdest       ),
    .EXE_result      ( EXE_result      ),
    .csr_ren         ( csr_ren         ),
    .csr_addr        ( csr_addr        ),
    .csr_rdata       ( csr_rdata       ),
    .mem_stall       ( mem_stall       ),
    .inst_is_my      ( inst_is_my      ),
    .print           ( print           ),
    .skip            ( skip            ),
    .id_to_exe_bus_i ( id_to_exe_bus_i ),
    .exe_to_mem_bus_o( exe_to_mem_bus_o)
);

ysyx_210247_reg_exe_mem u_ysyx_210247_reg_exe_mem(
    .clk              ( clock            ),
    .rst              ( reset            ),
    .flush            ( flush            ),
    .exe_valid_out    ( exe_valid_out    ),
    .exe_to_mem_bus_o ( exe_to_mem_bus_o ),
    .mem_valid_in     ( mem_valid_in     ),
    .exe_to_mem_bus_i ( exe_to_mem_bus_i ),
    .exe_allow_out    ( exe_allow_out    ),
    .mem_allow_in     ( mem_allow_in     )
);

ysyx_210247_mem_stage   u_ysyx_210247_mem_stage(
    .mem_valid_in     ( mem_valid_in     ),
    .mem_allow_out    ( mem_allow_out    ),
    .mem_valid_out    ( mem_valid_out    ),
    .mem_allow_in     ( mem_allow_in     ),
    .MEM_wdest        ( MEM_wdest        ),
    .MEM_result       ( MEM_result       ),
    .exe_to_mem_bus_i ( exe_to_mem_bus_i ),
    .mem_to_wb_bus_o  ( mem_to_wb_bus_o  )
);

ysyx_210247_reg_mem_wb  u_ysyx_210247_reg_mem_wb(
    .clk             ( clock           ),
    .rst             ( reset           ),
    .flush           ( flush           ),
    .mem_valid_out   ( mem_valid_out   ),
    .mem_to_wb_bus_o ( mem_to_wb_bus_o ),
    .wb_valid_in     ( wb_valid_in     ),
    .mem_to_wb_bus_i ( mem_to_wb_bus_i ),
    .mem_allow_out   ( mem_allow_out   ),
    .wb_allow_in     ( wb_allow_in     )
);

ysyx_210247_wb_stage    u_ysyx_210247_wb_stage(
    .clk             ( clock           ),
    .rst             ( reset           ),
    .wb_valid_in     ( wb_valid_in     ),
    .wb_allow_in     ( wb_allow_in     ),
    .mem_to_wb_bus_i ( mem_to_wb_bus_i ),
    .wb_pc           ( wb_pc           ),
    .wb_inst         ( wb_inst         ),
    .wb_wen          ( wb_wen          ),
    .wb_wdest        ( wb_wdest        ),
    .wb_wdata        ( wb_wdata        ),
    .writed          ( writed          ),
    .time_int_valid  ( time_int_valid  ),
    .flush           ( flush           ),
    .WB_wdest        ( WB_wdest        ),
    .WB_result       ( WB_result       ),
    .csr_wen         ( csr_wen         ),
    .csr_waddr       ( csr_waddr       ),
    .csr_wdata       ( csr_wdata       ),
    .exc_type        ( exc_type        ),
    .exc_addr        ( exc_addr        ),
    .exc_op          ( exc_op          )
);

ysyx_210247_regfile     u_ysyx_210247_regfile(
    .clk     ( clock      ),
    .rst     ( reset      ),
    .w_addr  ( wb_wdest   ),
    .w_data  ( wb_wdata   ),
    .w_ena   ( wb_wen     ),
    .r_addr1 ( rs1_r_addr ),
    .r_data1 ( r_data1    ),
    .r_ena1  ( rs1_r_ena  ),
    .r_addr2 ( rs2_r_addr ),
    .r_data2 ( r_data2    ),
    .r_ena2  ( rs2_r_ena  ),
    .regs_o  ( regs       )
);

ysyx_210247_csr_regfile u_ysyx_210247_csr_regfile(
    .clk        ( clock      ),
    .rst        ( reset      ),
    .ren        ( csr_ren    ),
    .wen        ( csr_wen    ),
    .addr       ( csr_addr   ),
    .waddr      ( csr_waddr  ),
    .wdata      ( csr_wdata  ),
    .rdata      ( csr_rdata  ),
    .mstatus_o  ( mstatus_o  ),
    .mcause_o   ( mcause_o   ),
    .mepc_o     ( mepc_o     ),
    .mtvec_o    ( mtvec_o    ),
    .mie_o      ( mie_o      ),
    .mip_o      ( mip_o      ),
    .mscratch_o ( mscratch_o ),
    .exc_type   ( exc_type   ),
    .exc_addr   ( exc_addr   ),
    .flush      ( flush      )
);

ysyx_210247_ctrl        u_ysyx_210247_ctrl(
    .clk       ( clock    ),
    .rst       ( reset    ),
    .exc_op    ( exc_op   ),
    .csr_mepc  ( mepc_o   ),
    .csr_mtvec ( mtvec_o  ),
    .new_pc    ( new_pc   )
);

ysyx_210247_clint       u_ysyx_210247_clint(
    .clk       ( clock     ),
    .rst       ( reset     ),
    .mstatus_i ( mstatus_o ),
    .mie_i     ( mie_o     ),
    .cmp_ren   ( cmp_ren   ),
    .cmp_addr  ( cmp_addr  ),
    .cmp_wen   ( cmp_wen   ),
    .cmp_rdata ( cmp_rdata ),
    .cmp_wdata ( cmp_wdata ),
    .time_int  ( time_int  )
);

// Difftest
reg cmt_wen;
reg [7:0] cmt_wdest;
reg [`REG_BUS] cmt_wdata;
reg [`REG_BUS] cmt_pc;
reg [31:0] cmt_inst;
reg cmt_valid;
reg trap;
reg [7:0] trap_code;
reg [63:0] cycleCnt;
reg [63:0] instrCnt;
reg [`REG_BUS] regs_diff [0 : 31];
reg [`REG_BUS] mstatus_diff;
reg [`REG_BUS] mepc_diff;
reg [`REG_BUS] mcause_diff;
reg [`REG_BUS] mtvec_diff;
reg [`REG_BUS] mie_diff;
reg [`REG_BUS] mip_diff;
reg [`REG_BUS] mscratch_diff;
reg [`REG_BUS] sstatus_diff;

reg [31  :  0] intrNO_diff;

always @(negedge clock) begin
  if (reset) begin
    {cmt_wen, cmt_wdest, cmt_wdata, cmt_pc, cmt_inst, cmt_valid, trap, trap_code, cycleCnt, instrCnt} <= 0;
  end
  else if (~trap) begin
    cmt_wen   <= wb_wen;
    cmt_wdest <= {3'd0, wb_wdest};
    cmt_wdata <= wb_wdata;
    cmt_pc    <= wb_pc;
    cmt_inst  <= wb_inst;
    cmt_valid <= writed & ~time_int_valid;

    regs_diff     <= regs;
    mstatus_diff  <= mstatus_o;
    mcause_diff   <= mcause_o;
    mepc_diff     <= mepc_o;
    mtvec_diff    <= mtvec_o;
    mie_diff      <= mie_o;
    mip_diff      <= mip_o;
    mscratch_diff <= mscratch_o;
    sstatus_diff  <= mstatus_o & 64'h80000003_000DE122;

    intrNO_diff   <= exc_type[63] ? 64'd7 : 64'd0;

    trap <= wb_inst[6:0] == 7'h6b;
    trap_code <= regs[10][7:0];
    cycleCnt <= cycleCnt + 1;
    instrCnt <= instrCnt + writed;

    if(inst_is_my & writed) begin
      $write("%c",print);
    end

  end
end

/* verilator lint_off PINMISSING */
DifftestInstrCommit DifftestInstrCommit(
  .clock              (clock),
  .coreid             (0),
  .index              (0),
  .valid              (cmt_valid),
  .pc                 (cmt_pc),
  .instr              (cmt_inst),
  .skip               (skip),
  .isRVC              (0),
  .scFailed           (0),
  .wen                (cmt_wen),
  .wdest              (cmt_wdest),
  .wdata              (cmt_wdata)
);

DifftestArchEvent DifftestArchEvent(
  .clock              (clock),
  .coreid             (0),
  .intrNO             (intrNO_diff),
  .cause              (0),
  .exceptionPC        (cmt_pc),
  .exceptionInst      (cmt_inst)
);

DifftestArchIntRegState DifftestArchIntRegState (
  .clock              (clock),
  .coreid             (0),
  .gpr_0              (regs_diff[0]),
  .gpr_1              (regs_diff[1]),
  .gpr_2              (regs_diff[2]),
  .gpr_3              (regs_diff[3]),
  .gpr_4              (regs_diff[4]),
  .gpr_5              (regs_diff[5]),
  .gpr_6              (regs_diff[6]),
  .gpr_7              (regs_diff[7]),
  .gpr_8              (regs_diff[8]),
  .gpr_9              (regs_diff[9]),
  .gpr_10             (regs_diff[10]),
  .gpr_11             (regs_diff[11]),
  .gpr_12             (regs_diff[12]),
  .gpr_13             (regs_diff[13]),
  .gpr_14             (regs_diff[14]),
  .gpr_15             (regs_diff[15]),
  .gpr_16             (regs_diff[16]),
  .gpr_17             (regs_diff[17]),
  .gpr_18             (regs_diff[18]),
  .gpr_19             (regs_diff[19]),
  .gpr_20             (regs_diff[20]),
  .gpr_21             (regs_diff[21]),
  .gpr_22             (regs_diff[22]),
  .gpr_23             (regs_diff[23]),
  .gpr_24             (regs_diff[24]),
  .gpr_25             (regs_diff[25]),
  .gpr_26             (regs_diff[26]),
  .gpr_27             (regs_diff[27]),
  .gpr_28             (regs_diff[28]),
  .gpr_29             (regs_diff[29]),
  .gpr_30             (regs_diff[30]),
  .gpr_31             (regs_diff[31])
);

DifftestTrapEvent DifftestTrapEvent(
  .clock              (clock),
  .coreid             (0),
  .valid              (trap),
  .code               (trap_code),
  .pc                 (cmt_pc),
  .cycleCnt           (cycleCnt),
  .instrCnt           (instrCnt)
);

DifftestCSRState DifftestCSRState(
  .clock              (clock),
  .coreid             (0),
  .priviledgeMode     (3),
  .mstatus            (mstatus_diff),
  .sstatus            (sstatus_diff),
  .mepc               (mepc_diff),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (mtvec_diff),
  .stvec              (0),
  .mcause             (mcause_diff),
  .scause             (0),
  .satp               (0),
  .mip                (mip_diff),
  .mie                (mie_diff),
  .mscratch           (mscratch_diff),
  .sscratch           (0),
  .mideleg            (0),
  .medeleg            (0)
);

DifftestArchFpRegState DifftestArchFpRegState(
  .clock              (clock),
  .coreid             (0),
  .fpr_0              (0),
  .fpr_1              (0),
  .fpr_2              (0),
  .fpr_3              (0),
  .fpr_4              (0),
  .fpr_5              (0),
  .fpr_6              (0),
  .fpr_7              (0),
  .fpr_8              (0),
  .fpr_9              (0),
  .fpr_10             (0),
  .fpr_11             (0),
  .fpr_12             (0),
  .fpr_13             (0),
  .fpr_14             (0),
  .fpr_15             (0),
  .fpr_16             (0),
  .fpr_17             (0),
  .fpr_18             (0),
  .fpr_19             (0),
  .fpr_20             (0),
  .fpr_21             (0),
  .fpr_22             (0),
  .fpr_23             (0),
  .fpr_24             (0),
  .fpr_25             (0),
  .fpr_26             (0),
  .fpr_27             (0),
  .fpr_28             (0),
  .fpr_29             (0),
  .fpr_30             (0),
  .fpr_31             (0)
);

endmodule