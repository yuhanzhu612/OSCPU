`timescale 1ns / 1ps

module ysyx_210247_dcache(
    input clk,
    input rst,

    input [31:0]    cache_req_addr,
    input [63:0]    cache_req_data,
    input           cache_req_wen,
    input [ 1:0]    cache_req_size,
    input [ 7:0]    cache_req_strb,
    input           cache_req_valid,
    output [63:0]   cache_resp_data,
    output reg      cache_resp_ready,

    output reg [31:0]   mem_req_addr,
    output reg [`RW_DATA_WIDTH-1:0]   mem_req_data,
    output reg          mem_req_wen,
    output [ 1:0]       mem_req_size,
    output [ 7:0]       mem_req_strb,
    output reg          mem_req_valid,
    input               mem_resp_valid,
    input [`RW_DATA_WIDTH-1:0]        mem_resp_data
);
    
    parameter BLK_NUM = 256;

    reg valid [BLK_NUM - 1:0];
    reg dirty [BLK_NUM - 1:0];
    reg [19:0] tag [BLK_NUM - 1:0];
    reg [3:0] offset [BLK_NUM - 1:0];
    reg [7:0] strb [BLK_NUM - 1:0];
    reg [1:0] size [BLK_NUM - 1:0];

    wire [19:0] req_tag; 
    wire [ 7:0] req_index;
    wire [ 3:0] req_offset;

    reg  [`RW_DATA_WIDTH-1:0] cache_strb;
    wire [63:0] valid_strb;
    wire [63:0] cache_write_data;

    parameter   S_IDLE = 3'b000, S_BACK = 3'b001, S_BACK_WAIT = 3'b010,
                S_FILL = 3'b011, S_FILL_WAIT = 3'b100, S_BEGIN = 3'b110, S_DUBUG = 3'b111;
    reg [2:0] state;
    
    assign req_tag = cache_req_addr[31:12];
    assign req_index = cache_req_addr[11:4];
    assign req_offset = cache_req_addr[3:0];

    wire cache_hit, cache_dirty;
    wire [`RW_DATA_WIDTH-1:0] cache_data_out;

    reg cache_data_wen;
    reg [`RW_DATA_WIDTH-1:0] cache_data_wdata;

    wire [63:0] valid_resp_data;
    assign valid_resp_data = cache_req_addr[3] ? cache_data_out[127:64] : cache_data_out[63:0];

    assign cache_resp_data =    cache_req_size == 2'b10  ? (cache_req_addr[2]   ==  1'b0  ? {32'd0, valid_resp_data[31: 0]} : 
                                                                                       {32'd0, valid_resp_data[63:32]}
                                                            ) :
                                cache_req_size == 2'b01  ? (cache_req_addr[2:1] == 2'b00  ? {48'd0, valid_resp_data[15: 0]} :
                                                            cache_req_addr[2:1] == 2'b01  ? {48'd0, valid_resp_data[31:16]} :
                                                            cache_req_addr[2:1] == 2'b10  ? {48'd0, valid_resp_data[47:32]} :
                                                                                       {48'd0, valid_resp_data[63:48]}
                                                            ) :
                                cache_req_size == 2'b00  ? (cache_req_addr[2:0] == 3'b000 ? {56'd0, valid_resp_data[ 7: 0]} :
                                                            cache_req_addr[2:0] == 3'b001 ? {56'd0, valid_resp_data[15: 8]} :
                                                            cache_req_addr[2:0] == 3'b010 ? {56'd0, valid_resp_data[23:16]} :
                                                            cache_req_addr[2:0] == 3'b011 ? {56'd0, valid_resp_data[31:24]} :
                                                            cache_req_addr[2:0] == 3'b100 ? {56'd0, valid_resp_data[39:32]} :
                                                            cache_req_addr[2:0] == 3'b101 ? {56'd0, valid_resp_data[47:40]} :
                                                            cache_req_addr[2:0] == 3'b110 ? {56'd0, valid_resp_data[55:48]} :
                                                                                       {56'd0, valid_resp_data[63:56]}
                                                            ) :              
                                cache_req_size == 2'b11  ? valid_resp_data : `ZERO_WORD;

    assign valid_strb =                 cache_req_strb == 8'b0000_0001 ? 64'h00000000_000000ff :
                                        cache_req_strb == 8'b0000_0010 ? 64'h00000000_0000ff00 :
                                        cache_req_strb == 8'b0000_0100 ? 64'h00000000_00ff0000 :
                                        cache_req_strb == 8'b0000_1000 ? 64'h00000000_ff000000 :
                                        cache_req_strb == 8'b0001_0000 ? 64'h000000ff_00000000 :
                                        cache_req_strb == 8'b0010_0000 ? 64'h0000ff00_00000000 :
                                        cache_req_strb == 8'b0100_0000 ? 64'h00ff0000_00000000 :
                                        cache_req_strb == 8'b1000_0000 ? 64'hff000000_00000000 :
                                        cache_req_strb == 8'b0000_0011 ? 64'h00000000_0000ffff :
                                        cache_req_strb == 8'b0000_1100 ? 64'h00000000_ffff0000 :
                                        cache_req_strb == 8'b0011_0000 ? 64'h0000ffff_00000000 :
                                        cache_req_strb == 8'b1100_0000 ? 64'hffff0000_00000000 :
                                        cache_req_strb == 8'b0000_1111 ? 64'h00000000_ffffffff :
                                        cache_req_strb == 8'b1111_0000 ? 64'hffffffff_00000000 :
                                        cache_req_strb == 8'b1111_1111 ? 64'hffffffff_ffffffff :
                                                                         64'h00000000_00000000;

    assign cache_hit = ((tag[req_index] == req_tag) & valid[req_index] & cache_req_valid) & state == S_IDLE;
    assign cache_dirty = (dirty[req_index] & cache_req_valid & state == S_IDLE);

    wire indexa7;
    assign indexa7 = req_index == 8'ha7 && cache_req_valid; 
    wire wen_indexa7;
    assign wen_indexa7 = req_index == 8'ha7 && cache_req_wen;
    wire dirtya7;
    assign dirtya7 = req_index == 8'ha7 && cache_dirty;

    reg mem_ready, cache_fill;

    integer i;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            for (i = 0; i < BLK_NUM; i = i+1) begin
                tag[i] = 0;
                valid[i] = 0;
                dirty[i] = 0;
                offset[i] = 0;
            end
        end

        if (rst | ~cache_req_valid) begin 
            state <= S_BEGIN;
            cache_resp_ready <= 1'b0;
            cache_data_wen <= 1'b0;
            cache_data_wdata <= 128'd0;
            mem_req_addr <= 32'd0;
            mem_req_data <= 64'd0;
            mem_req_valid <= 1'b0;
            mem_req_wen <= 1'b0;
            mem_ready <= 0;
            cache_fill <= 0;

        end 
        else 
            case (state)
                S_BEGIN: begin
                  state <= S_DUBUG;
                  cache_resp_ready <= 1'b0;
                  cache_data_wen <= 1'b0;
                  
                end 
                
                S_DUBUG: state <= S_IDLE;

                S_IDLE:
                begin 
                    if (cache_hit) begin 
                        cache_data_wen <= cache_req_wen;
                        cache_data_wdata <= cache_req_addr[3] ? {cache_write_data, 64'd0} : {64'd0, cache_write_data};
                        cache_strb <= cache_req_addr[3] ? {valid_strb, 64'd0} : {64'd0, valid_strb};
                        if (dirty[req_index] == 1'b0) dirty[req_index] <= cache_req_wen;
                        valid[req_index] <= 1'b1;
                        tag[req_index] <= req_tag;
                        offset[req_index] <= req_offset;

                        cache_resp_ready <= 1'b1;
                        state <= S_BEGIN;
                    end 
                    else if (cache_dirty) begin 
                        cache_resp_ready <= 1'b0;
                        state <= S_BACK;
                        mem_ready <= 1'b0;
                    end 
                    else begin 
                        cache_resp_ready <= 1'b0;
                        state <= S_FILL;
                        cache_fill <= 1'b0;
                    end 
                end

                S_BACK:
                    begin 
                        mem_req_addr <= {tag[req_index], req_index, offset[req_index]};
                        mem_req_data <= cache_data_out;
                        mem_req_strb <= 8'b11111111;
                        mem_req_size <= 2'b11;
                        mem_req_valid <= 1'b1;
                        mem_req_wen <= 1'b1;
                        mem_ready <= mem_resp_valid;
                        if (~mem_resp_valid) state <= S_BACK;
                        else begin
                            state <= S_BACK_WAIT;
                            mem_req_valid <= 1'b0;
                            mem_req_wen <= 1'b0;
                        end 
                    end
                    
                
                S_BACK_WAIT: begin
                        state <= S_FILL;
                        cache_fill <= 1'b0;
                        mem_req_valid <= 1'b0;
                        mem_req_wen <= 1'b0;
                    end
                
                
                S_FILL: begin
                    if (~cache_fill) begin
                        state <= S_FILL;
                        mem_req_addr <= cache_req_addr;
                        mem_req_data <= cache_req_data;
                        mem_req_valid <= 1'b1;
                        mem_req_wen <= 1'b0;
                        mem_ready <= mem_resp_valid;
                    end 
                    else begin
                        state <= S_FILL_WAIT;
                    end
                    if (mem_resp_valid) begin     
                        cache_data_wen <= 1'b1;
                        cache_data_wdata <= cache_req_wen ? (cache_req_addr[3] ? {cache_write_data, mem_resp_data[63:0]} : {mem_resp_data[127:64], cache_write_data}) : mem_resp_data;
                        cache_strb <= 128'hffffffff_ffffffff_ffffffff_ffffffff;
                        cache_fill <= 1'b1;
                        mem_req_valid <= 1'b0;
                    end 
                end
                
                S_FILL_WAIT: begin 
                        cache_fill <= 1'b0;
                        cache_resp_ready <= 1'b1;
                        state <= S_BEGIN;
                        mem_req_valid <= 1'b0;
                        mem_req_wen <= 1'b0;
                        dirty[req_index] <= cache_req_wen;
                        valid[req_index] <= 1'b1;
                        tag[req_index] <= req_tag;
                        strb[req_index] <= cache_req_strb;
                        size[req_index] <= cache_req_size;
                        offset[req_index] <= req_offset;
                    end 
						  
				default:;	 
            endcase
    end

assign cache_write_data =   cache_req_size == 2'b10 ?  (cache_req_addr[2]   ==  1'b0  ? { mem_resp_data[63:32], cache_req_data[31:0]} : 
                                                                                        {cache_req_data[63:32],  mem_resp_data[31:0]}
                                 ) :
                            cache_req_size == 2'b01 ?  (cache_req_addr[2:1] == 2'b00  ? { mem_resp_data[63:16], cache_req_data[15:0]} :
                                                        cache_req_addr[2:1] == 2'b01  ? { mem_resp_data[63:32], cache_req_data[31:16], mem_resp_data[15:0]} :
                                                        cache_req_addr[2:1] == 2'b10  ? { mem_resp_data[63:48], cache_req_data[47:32], mem_resp_data[31:0]} :
                                                                                        {cache_req_data[63:48],  mem_resp_data[47: 0]}
                                            ) :
                            cache_req_size == 2'b00 ?  (cache_req_addr[2:0] == 3'b000 ? { mem_resp_data[63: 8], cache_req_data[ 7: 0]} :
                                                        cache_req_addr[2:0] == 3'b001 ? { mem_resp_data[63:16], cache_req_data[15: 8], mem_resp_data[7:0]} :
                                                        cache_req_addr[2:0] == 3'b010 ? { mem_resp_data[63:24], cache_req_data[23:16], mem_resp_data[15:0]} :
                                                        cache_req_addr[2:0] == 3'b011 ? { mem_resp_data[63:32], cache_req_data[31:24], mem_resp_data[23:0]} :
                                                        cache_req_addr[2:0] == 3'b100 ? { mem_resp_data[63:40], cache_req_data[39:32], mem_resp_data[31:0]} :
                                                        cache_req_addr[2:0] == 3'b101 ? { mem_resp_data[63:48], cache_req_data[47:40], mem_resp_data[39:0]} :
                                                        cache_req_addr[2:0] == 3'b110 ? { mem_resp_data[63:56], cache_req_data[55:48], mem_resp_data[47:0]} :
                                                                                        {cache_req_data[63:56],  mem_resp_data[55:0]}
                                                        ) :              
                            cache_req_size == 2'b11 ? cache_req_data : `ZERO_WORD;

S011HD1P_X32Y2D128_BW u_S011HD1P_X32Y2D128_BW(
    .Q   ( cache_data_out   ),
    .CLK ( clk ),
    .CEN ( cache_req_valid ),
    .WEN ( cache_data_wen   ),
    .BWEN( cache_strb),
    .A   ( req_index   ),
    .D   ( cache_data_wdata   )
);

endmodule
