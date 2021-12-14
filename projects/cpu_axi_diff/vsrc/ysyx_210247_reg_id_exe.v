`timescale 1ns / 1ps

//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_reg_id_exe(    
    input                         clk,  
    input                         rst,
    input                         flush,

    input                         id_valid_out,
    input  [`ID_TO_EXE_BUS-1:0]   id_to_exe_bus_o,

    output                        exe_valid_in,     
    output [`ID_TO_EXE_BUS-1:0]   id_to_exe_bus_i,

    output                        id_allow_out,
    input                         exe_allow_in
); 

reg                         id_to_exe_valid;    //valid of Pipeline register
reg [`ID_TO_EXE_BUS-1:0]    id_to_exe_data;     //Pipeline register


assign exe_valid_in                 = id_to_exe_valid;
assign id_to_exe_bus_i              = id_to_exe_data;
assign id_allow_out                 = exe_allow_in;
 
always @ (posedge clk) begin
    if (rst || flush) begin
        id_to_exe_valid <= 1'b0;
    end
    else if (exe_allow_in) begin
        id_to_exe_valid <= id_valid_out;
    end
end

always @ (posedge clk) begin
    if (rst || flush) begin
        id_to_exe_data <= {`ID_TO_EXE_BUS{1'b0}}; 
    end
    else if (exe_allow_in && id_valid_out) begin
        id_to_exe_data <= id_to_exe_bus_o;
    end
end
endmodule