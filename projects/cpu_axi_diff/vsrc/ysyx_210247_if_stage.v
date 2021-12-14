
//--xuezhen--

`include "defines.v"


module ysyx_210247_if_stage(
  input wire clk,
  input wire rst,

  input  wire if_allow_out,
  output wire if_valid_out,
  
  input  wire [`BR_BUS] br_bus,
  output wire [`IF_TO_ID_BUS-1:0] if_to_id_bus_o,

	output wire             inst_valid,
	input  wire             inst_ready,
  input  wire [`REG_BUS]  inst_read,    //inst
  output wire [`REG_BUS]  inst_addr,    //inst_addr
  output wire [ 1  :  0]  inst_size,
  input  wire [ 1  :  0]  inst_resp,
  output reg              addr_valid,
  input  wire             target_valid,


  input  wire             br_stall,
  input  wire [`REG_BUS]  new_pc,
  input  wire             flush
);

wire handshake_done = inst_valid & inst_ready;
wire [`REG_BUS] next_pc;

reg [`REG_BUS] if_pc;
reg [31  :  0] if_inst;
reg [`REG_BUS] waite_pc;
reg [`REG_BUS] flush_pc;
reg            waite_valid;
reg            flush_valid;
reg            flush_wait;

//jump adress
wire             branch_valid;
wire             br_valid;
wire             br_taken;
wire [`REG_BUS]  br_target;
assign {br_valid, br_taken, br_target} = br_bus;
assign branch_valid = br_valid & br_taken;        //wait for load

wire preif_valid;
wire preif_ready_go;
wire preif_valid_out; 
wire preif_allow_out;

reg  if_valid_in;
wire if_valid;
wire if_ready_go;
wire if_allow_in;

assign preif_valid      = !rst;
assign preif_ready_go   = preif_valid & handshake_done & !flush_valid && !br_stall;
assign preif_valid_out  = preif_ready_go; 
assign preif_allow_out  = if_allow_in;

always @ (posedge clk) begin
  if (rst) begin
    if_valid_in <= 1'b1;
  end
  else if (if_allow_in) begin
    if_valid_in <= preif_valid_out;
  end
end

assign if_valid     = if_valid_in;
assign if_ready_go  = if_valid;
assign if_valid_out = if_ready_go;
assign if_allow_in  = !if_valid || if_valid_out && if_allow_out;

assign inst_valid = preif_valid && preif_allow_out;
assign inst_addr  = next_pc;
assign inst_size  = `SIZE_W;

always @ (posedge clk) begin
  if (rst)begin
    if_pc   <= `PC_START;
    if_inst <= 32'd0;
  end
  else if (if_allow_in && preif_valid_out)begin
    if_pc   <= next_pc;
    if_inst <= inst_read[31:0];
  end
end

always@(posedge clk) begin
  if(rst) begin
    flush_pc <= `PC_START;
  end
  else
  if(flush) begin 
    flush_pc <= new_pc;
  end
end

always@(posedge clk) begin
  if(rst) begin
    waite_pc <= `PC_START;
  end
  else
  if(branch_valid) begin 
    waite_pc <= br_target;
  end
end

always@(posedge clk) begin
  if(rst) begin
    flush_valid <= 1'b0;
  end
  if(flush && !handshake_done) begin
    flush_valid <= 1'b1;
  end
  else if(handshake_done) begin
    flush_valid <= 1'b0;
  end
end

always@(posedge clk) begin
  if(rst) begin
    waite_valid <= 1'b0;
  end
  if(branch_valid) begin
    waite_valid <= 1'b1;
  end
  if(handshake_done || br_pc_ready) begin
    waite_valid <= 1'b0;
  end
end

always @(posedge clk) begin
  if(rst) begin
    flush_wait <= 1'b0;
  end
  if(flush_valid & handshake_done) begin
    flush_wait <= 1'b1;
  end
  else if(handshake_done) begin
    flush_wait <= 1'b0;
  end
end

reg br_pc_valid;
always @(posedge clk) begin
    if(rst) begin
      br_pc_valid <= 1'b0;
    end
    if(branch_valid & handshake_done) begin
      br_pc_valid <= 1'b1;
    end
    else if(!waite_valid) begin
    br_pc_valid <= 1'b0;
    end
end

always @(posedge clk) begin
    if(rst) begin
      addr_valid <= 1'b1;
    end
    if(if_valid) begin
      addr_valid <= 1'b1;
    end
    else begin
      addr_valid <= 1'b0;
    end
end

reg br_pc_ready;
always @(posedge clk) begin
    if(rst) begin
      br_pc_ready <= 1'b0;
    end
    if(br_pc_valid && br_valid) begin
      br_pc_ready <= 1'b1;
    end
    else if(target_valid)begin
      br_pc_ready <= 1'b0;
    end
end

//assign addr_valid = rst || if_valid;

assign next_pc =  flush_valid   ?   flush_pc  :
                  flush_wait    ?   flush_pc  :
                  flush         ?   new_pc    :
                  br_pc_valid   ?   if_pc + 4 :
                  br_pc_ready   ?   if_pc + 4 :
                  waite_valid   ?   waite_pc  :
                  branch_valid  ?   br_target : 
                                    if_pc + 4;


assign if_to_id_bus_o = {
    if_pc,    // 95:32
    if_inst   // 31: 0
}; 

endmodule
