`timescale 1ns / 1ps


//--zhuyuhan 20210247--

`include "defines.v"

module ysyx_210247_clint(
    input  wire             clk,
    input  wire             rst,

    input  wire [`REG_BUS]  mstatus_i,
    input  wire [`REG_BUS]  mie_i,

    input  wire             cmp_ren,
    input  wire [`REG_BUS]  cmp_addr,
    input  wire             cmp_wen,
    output wire [`REG_BUS]  cmp_rdata,
    input  wire [`REG_BUS]  cmp_wdata,

    output                  time_int
);

reg [`REG_BUS] mtime;
reg [`REG_BUS] mtimecmp;

assign time_int = mtime >= mtimecmp && mstatus_i[3] == 1'b1 && mie_i[7] == 1'b1;

reg tick;
always @ (posedge clk) begin
    if(rst) begin
        tick <= 1'b0;
        mtime <= `ZERO_WORD;
    end
    else begin
        tick <= ~tick;
    end

    if(tick) begin
        mtime <= mtime + 1'b1;
    end
end

always @(posedge clk) begin
    if(rst) begin
      mtimecmp <= 700000;
    end

    else if(cmp_wen) begin
      mtimecmp <= cmp_wdata;
    end
end

assign cmp_rdata = cmp_ren ? (cmp_addr == `CLINT_MTIMECMP ? mtimecmp : 
                              cmp_addr == `CLINT_MTIME    ? mtime    : 
                                                            `ZERO_WORD) : `ZERO_WORD;

endmodule