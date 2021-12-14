`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_reg_mem_wb(    
    input                         clk,  
    input                         rst,
    input                         flush,

    input                         mem_valid_out,
    input  [`MEM_TO_WB_BUS-1:0]   mem_to_wb_bus_o,

    output                        wb_valid_in,     
    output [`MEM_TO_WB_BUS-1:0]   mem_to_wb_bus_i,

    output                        mem_allow_out,
    input                         wb_allow_in
); 

reg                         mem_to_wb_valid;    //valid of Pipeline register
reg [`MEM_TO_WB_BUS-1:0]    mem_to_wb_data;     //Pipeline register


assign wb_valid_in              = mem_to_wb_valid;
assign mem_to_wb_bus_i          = mem_to_wb_data;
assign mem_allow_out            = wb_allow_in;
 
always @ (posedge clk) begin
    if (rst || flush) begin
        mem_to_wb_valid <= 1'b0;
    end
    else if (wb_allow_in) begin
        mem_to_wb_valid <= mem_valid_out;
    end
end

always @ (posedge clk) begin
    if (rst || flush) begin
        mem_to_wb_data <= {`MEM_TO_WB_BUS{1'b0}}; 
    end
    else if (wb_allow_in && mem_valid_out) begin
        mem_to_wb_data <= mem_to_wb_bus_o;
    end
end
endmodule
