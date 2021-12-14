`timescale 1ns / 1ps

module ysyx_210247_icache(
    input clk,
    input rst,

    input [31:0]    cache_req_addr,
    input [31:0]    cache_req_data,
    input           cache_req_wen,
    input           cache_req_valid,
    output [31:0]   cache_resp_data,
    output reg      cache_resp_ready,
    input  wire     addr_valid,
    input  wire     br_stall,

    output reg [31:0] inst_req_addr,
    output reg [31:0] inst_req_data,
    output reg inst_req_wen,
    output reg inst_req_valid,
    input inst_resp_valid,
    input [`RW_DATA_WIDTH:0] inst_resp_data
);
    
    parameter BLK_NUM = 256;

    reg valid [BLK_NUM - 1:0];
    reg dirty [BLK_NUM - 1:0];
    reg [19:0] tag [BLK_NUM - 1:0];
    reg [3:0] offset [BLK_NUM - 1:0];

    wire [19:0] req_tag; 
    wire [ 7:0] req_index;
    wire [ 3:0] req_offset;

    parameter   S_IDLE = 3'b000, S_BACK = 3'b001, S_BACK_WAIT = 3'b010,
                S_FILL = 3'b011, S_FILL_WAIT = 3'b100, S_BEGIN = 3'b110, S_DUBUG = 3'b111;
    reg [2:0] state;
    
    assign req_tag = cache_req_addr[31:12];
    assign req_index = cache_req_addr[11:4];
    assign req_offset = cache_req_addr[3:0];

    wire cache_hit, cache_dirty;
    wire [`RW_DATA_WIDTH:0] cache_data_out;

    reg cache_data_wen;
    reg [`RW_DATA_WIDTH:0] cache_data_wdata;

    assign cache_resp_data = cache_req_addr[3:2] == 2'b00 ? cache_data_out[31: 0] :
                             cache_req_addr[3:2] == 2'b01 ? cache_data_out[63:32] :
                             cache_req_addr[3:2] == 2'b10 ? cache_data_out[95:64] : cache_data_out[127:96];


    assign cache_hit = ((tag[req_index] == req_tag) & valid[req_index] & cache_req_valid);
    assign cache_dirty = (dirty[req_index] & cache_req_valid);

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
            cache_data_wdata <= 32'b0;
            inst_req_addr <= 32'b0;
            inst_req_data <= 32'b0;
            inst_req_valid <= 1'b0;
            inst_req_wen <= 1'b0;
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
                    if(br_stall) state <= S_IDLE;
                    else if (cache_hit && addr_valid) begin 
                        cache_data_wen <= cache_req_wen;
                        cache_data_wdata <= cache_req_data;
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
                        inst_req_addr <= {tag[req_index], req_index, offset[req_index]};
                        inst_req_data <= cache_data_out;
                        inst_req_valid <= 1'b1;
                        inst_req_wen <= 1'b1;
                        mem_ready <= inst_resp_valid;
                        if (~mem_ready) state <= S_BACK;
                        else state <= S_BACK_WAIT;
                    end
                    
                
                S_BACK_WAIT: begin
                        state <= S_FILL;
                        cache_fill <= 1'b0;
                        inst_req_valid <= 1'b0;
                        inst_req_wen <= 1'b0;
                    end
                
                
                S_FILL: begin
                    if (~cache_fill) begin
                        state <= S_FILL;
                        inst_req_addr <= cache_req_wen ? 0 : cache_req_addr;
                        inst_req_data <= cache_req_wen ? 0 : cache_req_data;
                        inst_req_valid <= cache_req_wen ? 1'b0 : 1'b1;
                        inst_req_wen <= 1'b0;
                        mem_ready <= inst_resp_valid;
                    end 
                    else begin
                        state <= S_FILL_WAIT;
                    end
                    if (inst_resp_valid || cache_req_wen) begin     
                        cache_data_wen <= 1'b1;
                        cache_data_wdata <= cache_req_wen ? cache_req_data : inst_resp_data;
                        cache_fill <= 1'b1;
                        inst_req_valid <= 1'b0;
                    end 
                end
                
                S_FILL_WAIT: begin 
                        cache_fill <= 1'b0;
                        cache_resp_ready <= 1'b1;
                        state <= S_BEGIN;
                        inst_req_valid <= 1'b0;
                        inst_req_wen <= 1'b0;
                        dirty[req_index] <= cache_req_wen;
                        valid[req_index] <= 1'b1;
                        tag[req_index] <= req_tag;
                        offset[req_index] <= req_offset;
                    end 
						  
				default:;	 
            endcase



    end


S011HD1P_X32Y2D128 u_S011HD1P_X32Y2D128(
    .Q   ( cache_data_out   ),
    .CLK ( clk ),
    .CEN ( cache_req_valid ),
    .WEN ( cache_data_wen   ),
    .A   ( req_index   ),
    .D   ( cache_data_wdata   )
); 

endmodule
