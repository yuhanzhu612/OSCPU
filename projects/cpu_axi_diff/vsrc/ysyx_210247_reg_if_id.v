`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_reg_if_id(    
    input                         clk,  
    input                         rst,
    input                         flush,

    input                         if_valid_out,
    input  [`IF_TO_ID_BUS-1:0]    if_to_id_bus_o,

    output                        id_valid_in,     
    output [`IF_TO_ID_BUS-1:0]    if_to_id_bus_i,

    output                        if_allow_out,
    input                         id_allow_in
); 

reg                         if_to_id_valid;    //valid of Pipeline register
reg [`IF_TO_ID_BUS-1:0]    if_to_id_data;     //Pipeline register


assign id_valid_in              = if_to_id_valid;
assign if_to_id_bus_i           = if_to_id_data;
assign if_allow_out             = id_allow_in;
 
always @ (posedge clk) begin
    if (rst || flush) begin
        if_to_id_valid <= 1'b0;
    end
    else if (id_allow_in) begin
        if_to_id_valid <= if_valid_out;
    end
end

always @ (posedge clk) begin
    if (rst || flush) begin
        if_to_id_data <= {`IF_TO_ID_BUS{1'b0}}; 
    end
    else if (id_allow_in && if_valid_out) begin
        if_to_id_data <= if_to_id_bus_o;
    end
end
endmodule