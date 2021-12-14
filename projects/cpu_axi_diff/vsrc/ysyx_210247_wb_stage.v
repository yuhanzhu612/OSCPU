`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_wb_stage(      
    input  wire clk,
    input  wire rst,

    input  wire wb_valid_in,
    output wire wb_allow_in,

    input wire [`MEM_TO_WB_BUS-1 :0] mem_to_wb_bus_i,

    output wire [`REG_BUS] wb_pc,
    output wire [31  :  0] wb_inst, 
    output wire            wb_wen,
    output wire [`DST_BUS] wb_wdest,
    output wire [`REG_BUS] wb_wdata,
    output wire            writed,

    output wire            time_int_valid,

    output wire            flush,

    output wire [`DST_BUS] WB_wdest,
    output wire [`REG_BUS] WB_result,

    output wire            csr_wen,            
    output wire [11  :  0] csr_waddr,        
    output wire [`REG_BUS] csr_wdata, 
    output wire [`REG_BUS] exc_type,
    output wire [`REG_BUS] exc_addr,
    output wire [31  :  0] exc_op
);
wire wen;
wire wb_valid;
wire wb_ready_go; 

assign wb_valid     = wb_valid_in;
assign wb_ready_go  = wb_valid; 
assign wb_allow_in  = !wb_valid || wb_ready_go;
assign writed       = wb_valid;
assign flush        = ( |exc_op );
assign wb_wen       = wen & !exc_type[63];

assign time_int_valid = exc_type[63];

assign {
        exc_type,  
        exc_addr,
        exc_op,   
        csr_wen,   
        csr_waddr,   
        csr_wdata, 
        wb_pc,
        wb_inst,
        wen,
        wb_wdest,
        wb_wdata
        } = mem_to_wb_bus_i; 

assign WB_wdest  = wb_wdest & {5{wb_valid}};
assign WB_result = wb_wdata;

endmodule