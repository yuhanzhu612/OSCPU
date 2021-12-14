`timescale 1ns / 1ps


//--zhuyuhan 20210247--

`include "defines.v"


module ysyx_210247_csr_regfile(
    input  wire             clk,
    input  wire             rst,
    input  wire             ren,
    input  wire             wen,            
    input  wire [11  :  0]  addr,   
    input  wire [11  :  0]  waddr,      
    input  wire [`REG_BUS]  wdata,                 
    
    output wire [`REG_BUS]  rdata,

    output reg  [`REG_BUS]  mstatus_o,
    output reg  [`REG_BUS]  mcause_o,
    output reg  [`REG_BUS]  mepc_o,
    output reg  [`REG_BUS]  mtvec_o,
    output reg  [`REG_BUS]  mie_o,
    output reg  [`REG_BUS]  mip_o,
    output reg  [`REG_BUS]  mscratch_o,

    input  wire [`REG_BUS]  exc_type,
    input  wire [`REG_BUS]  exc_addr,
    input  wire             flush
);
    
reg  [`REG_BUS]  mstatus;
reg  [`REG_BUS]  mcause;
reg  [`REG_BUS]  mepc;
reg  [`REG_BUS]  mtvec;
reg  [`REG_BUS]  mcycle;
reg  [`REG_BUS]  mtime;
reg  [`REG_BUS]  mie;
reg  [`REG_BUS]  mip;
reg  [`REG_BUS]  mscratch;

wire mret_flush;
wire wb_ex;
assign mret_flush = exc_type == 64'd666;
assign wb_ex      = flush & ~mret_flush;

reg tick;
always @ (posedge clk) begin
    if(rst) begin
        tick <= 1'b0;
        mcycle <= `ZERO_WORD;
    end
    else begin
        tick <= ~tick;
    end

    if(wen && waddr == `MCYCLE) begin
        mcycle <= wdata;
    end
    else if(tick) begin
        mcycle <= mcycle + 1'b1;
    end
end

always @(posedge clk) begin
    if(rst) begin
        mtvec <= `ZERO_WORD;
    end

    if(wen && waddr == `MTEVC) begin
        mtvec <= wdata;
    end
end

always @(posedge clk) begin
    if(rst) begin
        mepc <= `ZERO_WORD;
    end

    if(wen && waddr == `MEPC) begin
        mepc <= wdata;
    end

    if(wb_ex) begin
        mepc <= exc_addr;
    end

end

always @(posedge clk) begin
    if(rst) begin
        mcause <= `ZERO_WORD;
    end

    if(wen && waddr == `MCAUSE) begin
        mcause <= wdata;
    end

    if(wb_ex) begin
        mcause <= exc_type;
    end
end


always @(posedge clk) begin
    if(rst) begin
        mstatus <= `ZERO_WORD;
    end

    if(wen && waddr == `MSTATUS) begin
        mstatus[62:0] <= wdata[62:0];
        mstatus[63]   <= (wdata[16] & wdata[15]) || (wdata[14] & wdata[13]);
    end

    if(wb_ex) begin
        mstatus[7] <= mstatus[3];
        mstatus[12:11] <= 2'b11;
        mstatus[3] <= 1'b0;
    end

    if(mret_flush) begin
        mstatus[7] <= 1'b1;
        mstatus[12:11] <= 2'b00;
        mstatus[3] <= mstatus[7];
    end 
end

always @(posedge clk) begin
    if(rst) begin
        mie <= `ZERO_WORD;
    end

    if(wen && waddr == `MIE) begin
        mie <= wdata;
    end
end
/*
always @(posedge clk) begin
    if(rst) begin
        mip <= `ZERO_WORD;
    end

    if(wen && waddr == `MIE) begin
        mip <= wdata;
    end
end
*/

always @(posedge clk) begin
    if(rst) begin
        mscratch <= `ZERO_WORD;
    end

    if(wen && waddr == `MSCRATCH) begin
        mscratch <= wdata;
    end
end

assign rdata = (rst == 1'b1) ? `ZERO_WORD : (addr == `MCYCLE  ? mcycle  : 
                                             addr == `MSTATUS ? mstatus : 
                                             addr == `MCAUSE  ? mcause  : 
                                             addr == `MEPC    ? mepc    : 
                                                               `ZERO_WORD);



genvar i;
generate
	assign mstatus_o    =  wb_ex        ? {mstatus[63:13], 2'b11, mstatus[10:8], mstatus[3], mstatus[6:4], 1'b0, mstatus[2:0]} : 
                           mret_flush   ? {mstatus[63:13], 2'b00, mstatus[10:8], 1'b1, mstatus[6:4], mstatus[7], mstatus[2:0]} : 
                          (wen && waddr == `MSTATUS) ? {(wdata[16] & wdata[15]) || (wdata[14] & wdata[13]), wdata[62:0]}       : mstatus;
    assign mcause_o     = wb_ex ? exc_type : (wen && waddr == `MCAUSE  ) ? wdata : mcause;
    assign mepc_o       = wb_ex ? exc_addr : (wen && waddr == `MEPC    ) ? wdata : mepc;
    assign mtvec_o      = (wen && waddr == `MTEVC   ) ? wdata : mtvec;
    assign mie_o        = (wen && waddr == `MIE     ) ? wdata : mie;
    assign mscratch_o   = (wen && waddr == `MSCRATCH) ? wdata : mscratch;
endgenerate






endmodule
