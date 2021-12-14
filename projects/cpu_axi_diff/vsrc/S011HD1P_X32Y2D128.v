`timescale 1ns / 1ps

module S011HD1P_X32Y2D128(
    Q, CLK, CEN, WEN, A, D
);
parameter Bits = 128;
parameter Word_Depth = 256;
parameter Add_Width = 8;

output  reg [Bits-1:0]      Q;
input                   CLK;
input                   CEN;
input                   WEN;
input   [Add_Width-1:0] A;
input   [Bits-1:0]      D;

reg [Bits-1:0] ram [0:Word_Depth-1];
always @(posedge CLK) begin
    if(WEN) begin
        ram[A] <= D;
    end
    Q <= CEN ? ram[A] : {4{$random}};
end

endmodule
