`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_mem_stage(                 
    input  wire mem_valid_in, 
    input  wire mem_allow_out,
    output wire mem_valid_out,
    output wire mem_allow_in,

    output wire [`DST_BUS] MEM_wdest,
    output wire [`REG_BUS] MEM_result,

    input  wire [`EXE_TO_MEM_BUS-1:0] exe_to_mem_bus_i,
    output wire [`MEM_TO_WB_BUS -1:0] mem_to_wb_bus_o
);

wire mem_valid;
wire mem_ready_go; 

assign mem_valid     = mem_valid_in; 
assign mem_ready_go  = mem_valid;
assign mem_valid_out = mem_ready_go;
assign mem_allow_in  = !mem_valid || mem_valid_out && mem_allow_out;


wire [`REG_BUS] exe_pc;
wire [31  :  0] exe_inst;
wire            exe_wen;
wire [`DST_BUS] exe_wdest;
wire [`REG_BUS] exe_wdata;

wire [`REG_BUS] mem_pc;
wire [31  :  0] mem_inst;
wire            mem_wen;
wire [`DST_BUS] mem_wdest;
wire [`REG_BUS] mem_wdata;
wire [`REG_BUS] exc_type;
wire [`REG_BUS] exc_addr;
wire [31  :  0] exc_op;
wire            csr_wen;
wire [11  :  0] csr_waddr;
wire [`REG_BUS] csr_wdata;

assign {
        exc_type,   
        exc_addr,  
        exc_op,   
        csr_wen, 
        csr_waddr,  
        csr_wdata, 
        exe_pc,
        exe_inst,
        exe_wen,
        exe_wdest,
        exe_wdata
        } = exe_to_mem_bus_i;


assign mem_pc       = exe_pc;
assign mem_inst     = exe_inst;
assign mem_wen      = exe_wen;
assign mem_wdest    = exe_wdest;
assign mem_wdata    = exe_wdata;

assign mem_to_wb_bus_o = {
    exc_type,   //402:339
    exc_addr,   //338:275
    exc_op,     //274:243
    csr_wen,    //242:242
    csr_waddr,  //241:230
    csr_wdata,  //229:166
    mem_pc,     //165:102
    mem_inst,   //101:70
    mem_wen,    // 69:69
    mem_wdest,  // 68:64
    mem_wdata   // 63: 0
};

assign MEM_wdest  = mem_wdest & {5{mem_valid}};
assign MEM_result = mem_wdata;
            

endmodule
