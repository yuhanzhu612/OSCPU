`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"


module ysyx_210247_ctrl(
    input wire        rst,
    input wire        clk,
    input wire [31:0] exc_op,
    input [`REG_BUS]  csr_mepc,
    input [`REG_BUS]  csr_mtvec,
    output reg [`REG_BUS] new_pc
    );

    assign new_pc = ( rst == 1'b1 ) ? 0 : (exc_op == 32'h00000001 ? csr_mtvec : 
                                           exc_op == 32'h00000002 ? csr_mepc  :  
                                           exc_op == 32'h00000003 ? csr_mtvec : 
                                                                    `ZERO_WORD);                                                                   
endmodule
