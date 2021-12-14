`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_reg_exe_mem(    
    input                         clk,  
    input                         rst,
    input                         flush,

    input                         exe_valid_out,
    input  [`EXE_TO_MEM_BUS-1:0]  exe_to_mem_bus_o,

    output                        mem_valid_in,     
    output [`EXE_TO_MEM_BUS-1:0]  exe_to_mem_bus_i,

    output                        exe_allow_out,
    input                         mem_allow_in
); 

reg                         exe_to_mem_valid;    //valid of Pipeline register
reg [`EXE_TO_MEM_BUS-1:0]   exe_to_mem_data;     //Pipeline register


assign mem_valid_in                 = exe_to_mem_valid;
assign exe_to_mem_bus_i             = exe_to_mem_data;
assign exe_allow_out                = mem_allow_in;
 
always @ (posedge clk) begin
    if (rst || flush) begin
        exe_to_mem_valid <= 1'b0;
    end
    else if (mem_allow_in) begin
        exe_to_mem_valid <= exe_valid_out;
    end
end

always @ (posedge clk) begin
    if (rst || flush) begin
        exe_to_mem_data <= {`EXE_TO_MEM_BUS{1'b0}}; 
    end
    else if (mem_allow_in && exe_valid_out) begin
        exe_to_mem_data <= exe_to_mem_bus_o;
    end
end
endmodule