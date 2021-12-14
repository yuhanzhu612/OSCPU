
//--xuezhen--

`include "defines.v"


module if_stage(
  input wire clk,
  input wire rst,
  
  output reg [63 : 0] pc,
  output reg [31 : 0] inst
);

parameter PC_START_RESET = `PC_START - 4;

// fetch an instruction
always@( posedge clk )
begin
  if( rst == 1'b1 )
  begin
    pc <= PC_START_RESET;
  end
  else
  begin
    pc <= pc + 4;
  end
end

// Access memory
reg [63:0] rdata;
RAMHelper RAMHelper(
  .clk              (clk),
  .en               (1),
  .rIdx             ((pc - `PC_START) >> 3),
  .rdata            (rdata),
  .wIdx             (0),
  .wdata            (0),
  .wmask            (0),
  .wen              (0)
);
assign inst = pc[2] ? rdata[63 : 32] : rdata[31 : 0];

endmodule
