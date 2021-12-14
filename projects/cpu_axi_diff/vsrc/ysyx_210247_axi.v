
`include "defines.v"

// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00
`define AXI_BURST_TYPE_INCR                                 2'b01
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111


module ysyx_210247_axi(
    input                               clock,
    input                               reset,

	input                               inst_valid,
	output                              inst_ready,
    input                               inst_req,
    output reg [`RW_DATA_WIDTH-1:0]     inst_read,  
    input  [AXI_DATA_WIDTH-1:0]         inst_addr,   
    input  [1:0]                        inst_size,
    output [1:0]                        inst_resp,

    input                               data_valid,
	output                              data_ready,
    input                               data_req,
    output reg [`RW_DATA_WIDTH-1:0]     data_read,  
    input  [`RW_DATA_WIDTH-1:0]         data_write,
    input  [AXI_DATA_WIDTH-1:0]         data_addr,
    input  [1:0]                        data_size,
    output [1:0]                        data_resp,
    output [7:0]                        data_strb,

    // Advanced eXtensible Interface

    //write aquire channel
    input                               axi_aw_ready_i,
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,

    //write data channel
    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    
    //write back channel
    output                              axi_b_ready_o,
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    //read aquire channel
    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    
    //read back channel
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);

    parameter RW_DATA_WIDTH     = 64;
    parameter RW_ADDR_WIDTH     = 64;
    parameter AXI_DATA_WIDTH    = 64;
    parameter AXI_ADDR_WIDTH    = 64;
    parameter AXI_ID_WIDTH      = 4;
    parameter AXI_USER_WIDTH    = 1;

    wire w_trans    = inst_req == `REQ_WRITE | data_req == `REQ_WRITE;
    wire r_trans    = inst_req == `REQ_READ  | data_req == `REQ_READ;
    wire w_valid    = data_valid & w_trans;
    wire r_valid    = (inst_valid | data_valid) & r_trans;

    // handshake
    wire aw_hs      = axi_aw_ready_i & axi_aw_valid_o;
    wire w_hs       = axi_w_ready_i  & axi_w_valid_o;
    wire b_hs       = axi_b_ready_o  & axi_b_valid_i;
    wire ar_hs      = axi_ar_ready_i & axi_ar_valid_o;
    wire r_hs       = axi_r_ready_o  & axi_r_valid_i;

    wire w_done     = w_hs & axi_w_last_o;
    wire r_done     = r_hs & axi_r_last_i;
    wire trans_done = w_trans ? b_hs : r_done;

    
    // ------------------State Machine------------------
    parameter [2:0] W_STATE_IDLE  = 3'b000;
    parameter [2:0] W_STATE_ADDR  = 3'b001; 
    parameter [2:0] W_STATE_WRITE = 3'b010; 
    parameter [2:0] W_STATE_RESP  = 3'b011;
    parameter [2:0] W_STATE_DONE  = 3'b100;

    parameter [2:0] R_STATE_IDLE      = 3'b000;
    parameter [2:0] R_STATE_INST_ADDR = 3'b001;
    parameter [2:0] R_STATE_INST_READ = 3'b010;
    parameter [2:0] R_STATE_DATA_ADDR = 3'b011;
    parameter [2:0] R_STATE_DATA_READ = 3'b100;
    parameter [2:0] R_STATE_INST_DONE = 3'b101;
    parameter [2:0] R_STATE_DATA_DONE = 3'b110;

    reg [2:0] w_state;
    reg [2:0] r_state;
    wire w_state_idle  = w_state == W_STATE_IDLE;
    wire w_state_addr  = w_state == W_STATE_ADDR;
    wire w_state_write = w_state == W_STATE_WRITE; 
    wire w_state_resp  = w_state == W_STATE_RESP;

    wire r_state_idle = r_state == R_STATE_IDLE;
    wire r_state_addr = (r_state == R_STATE_INST_ADDR | r_state == R_STATE_DATA_ADDR);
    wire r_state_read = (r_state == R_STATE_INST_READ | r_state == R_STATE_DATA_READ);


    wire inst_ren;
    wire data_ren;
    assign inst_ren = inst_valid & inst_req == `REQ_READ;
    assign data_ren = data_valid & data_req == `REQ_READ;

    // Wirte State Machine
    always @(posedge clock) begin
        if (reset) begin
            w_state <= W_STATE_IDLE;
        end
        else begin
            if (w_valid) begin
                case (w_state)
                    W_STATE_IDLE:               w_state <= W_STATE_ADDR;
                    W_STATE_ADDR:  if (aw_hs)   w_state <= W_STATE_WRITE;
                    W_STATE_WRITE: if (w_done)  w_state <= W_STATE_RESP;
                    W_STATE_RESP:  if (b_hs)    w_state <= W_STATE_DONE;
                    W_STATE_DONE:               w_state <= W_STATE_IDLE;
                    default:;
                endcase
            end
        end
    end

    // Read State Machine
    always @(posedge clock) begin
        if (reset) begin
            r_state <= R_STATE_IDLE;
        end
        else begin
            if (r_valid) begin
                case (r_state)
                    R_STATE_IDLE: begin
                      if(inst_ren) begin
                        r_state <= R_STATE_INST_ADDR;
                      end
                      else if(data_ren) begin
                        r_state <= R_STATE_DATA_ADDR;
                      end
                    end
                    R_STATE_INST_ADDR: if (ar_hs)    r_state <= R_STATE_INST_READ;
                    R_STATE_INST_READ: if (r_done)   r_state <= R_STATE_INST_DONE;
                    R_STATE_DATA_ADDR: if (ar_hs)    r_state <= R_STATE_DATA_READ;
                    R_STATE_DATA_READ: if (r_done)   r_state <= R_STATE_DATA_DONE;
                    R_STATE_INST_DONE: if(data_ren) begin
                      r_state <= R_STATE_DATA_ADDR;
                    end
                    else begin
                      r_state <= R_STATE_IDLE;
                    end
                    R_STATE_DATA_DONE: r_state <= R_STATE_IDLE;
                    default:;
                endcase
            end
        end
    end


    // ------------------Number of transmission------------------
    reg [7:0] len;
    wire len_reset      = reset | (w_trans & w_state_idle) | (r_trans & r_state_idle);
    wire len_incr_en    = (len != axi_len) & (w_hs | r_hs);
    always @(posedge clock) begin
        if (len_reset) begin
            len <= 0;
        end
        else if (len_incr_en) begin
            len <= len + 1;
        end
    end

    // ------------------Process Data------------------
    parameter ALIGNED_WIDTH = $clog2(AXI_DATA_WIDTH / 8);
    parameter OFFSET_WIDTH  = $clog2(AXI_DATA_WIDTH);
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MASK_WIDTH    = AXI_DATA_WIDTH * 2;
    parameter TRANS_LEN     = `RW_DATA_WIDTH / AXI_DATA_WIDTH;

    wire aligned            = TRANS_LEN != 1 | (inst_addr[ALIGNED_WIDTH-1:0] == 0) | (data_addr[ALIGNED_WIDTH-1:0] == 0);
    wire size_b             = inst_size == `SIZE_B | (data_size == `SIZE_B & data_req == `REQ_READ);
    wire size_h             = inst_size == `SIZE_H | (data_size == `SIZE_H & data_req == `REQ_READ);
    wire size_w             = inst_size == `SIZE_W | (data_size == `SIZE_W & data_req == `REQ_READ);
    wire size_d             = inst_size == `SIZE_D | (data_size == `SIZE_D & data_req == `REQ_READ);
    wire [3:0] addr_op1     = r_state == R_STATE_INST_READ ? {{4-ALIGNED_WIDTH{1'b0}}, inst_addr[ALIGNED_WIDTH-1:0]} : 
                              r_state == R_STATE_DATA_READ ? {{4-ALIGNED_WIDTH{1'b0}}, data_addr[ALIGNED_WIDTH-1:0]} : 0;
    wire [3:0] addr_op2     =     ({4{size_b}} & {4'b0000})
                                | ({4{size_h}} & {4'b0001})
                                | ({4{size_w}} & {4'b0011})
                                | ({4{size_d}} & {4'b0111})
                                ;
    wire [3:0] addr_end     = addr_op1 + addr_op2;
    wire overstep           = addr_end[3:ALIGNED_WIDTH] != 0;

    wire [7:0] axi_len      = aligned ? TRANS_LEN - 1 : {{7{1'b0}}, overstep};
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    wire [AXI_ADDR_WIDTH-1:0] axi_addr    = r_state == R_STATE_INST_ADDR ? {inst_addr[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}} :
                                            r_state == R_STATE_DATA_ADDR ? {data_addr[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}} :
                                                                            `ZERO_WORD;
    wire [AXI_ADDR_WIDTH-1:0] axi_waddr   = {data_addr[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire [OFFSET_WIDTH-1:0] aligned_offset_l    = r_state == R_STATE_INST_READ ? {{OFFSET_WIDTH-ALIGNED_WIDTH{1'b0}}, {inst_addr[ALIGNED_WIDTH-1:0]}} << 3 : 
                                                  r_state == R_STATE_DATA_READ ? {{OFFSET_WIDTH-ALIGNED_WIDTH{1'b0}}, {data_addr[ALIGNED_WIDTH-1:0]}} << 3 : 0;
    wire [OFFSET_WIDTH-1:0] aligned_offset_h    = 6'b111111;
    wire [MASK_WIDTH-1:0] mask                  = (({MASK_WIDTH{size_b}} & {{MASK_WIDTH- 8{1'b0}},  8'hff})
                                                 | ({MASK_WIDTH{size_h}} & {{MASK_WIDTH-16{1'b0}}, 16'hffff})
                                                 | ({MASK_WIDTH{size_w}} & {{MASK_WIDTH-32{1'b0}}, 32'hffffffff})
                                                 | ({MASK_WIDTH{size_d}} & {{MASK_WIDTH-64{1'b0}}, 64'hffffffff_ffffffff})
                                                  ) << aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] mask_l      = mask[AXI_DATA_WIDTH-1:0];
    wire [AXI_DATA_WIDTH-1:0] mask_h      = mask[MASK_WIDTH-1:AXI_DATA_WIDTH];

    wire [AXI_ID_WIDTH-1:0] axi_id        = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user    = {AXI_USER_WIDTH{1'b0}};

    reg r_ready;
    wire r_ready_nxt = r_done;
    wire r_ready_en      = r_done | r_ready;
    always @(posedge clock) begin
        if (reset) begin
            r_ready <= 0;
        end
        else if (r_ready_en) begin
            r_ready <= r_ready_nxt;
        end
    end

    reg data_ok;
    always @(posedge clock) begin
        if (reset) begin
            data_ok <= 0;
        end
        if(w_valid && w_state == W_STATE_DONE) begin
            data_ok <= 1'b1;
        end
        else if(!w_valid) begin
            data_ok <= 1'b0;
        end 
    end

    reg w_ready;
    wire w_ready_nxt = b_hs;
    wire w_ready_en      = b_hs | w_ready;
    always @(posedge clock) begin
        if (reset) begin
            w_ready <= 0;
        end
        else if (w_ready_en) begin
            w_ready <= w_ready_nxt && data_ok;
        end
    end

    assign inst_ready     = r_state == R_STATE_INST_DONE & r_ready;
    assign data_ready     = ( r_state == R_STATE_DATA_DONE & data_ren ) ? r_ready : w_ready;

    reg [1:0] rw_resp;
    wire [1:0] rw_resp_nxt = w_trans ? axi_b_resp_i : axi_r_resp_i;
    wire resp_en = trans_done;
    always @(posedge clock) begin
        if (reset) begin
            rw_resp <= 0;
        end
        else if (resp_en) begin
            rw_resp <= rw_resp_nxt;
        end
    end
    assign inst_resp      = rw_resp;
    assign data_resp      = rw_resp;


    // ------------------Write Transaction------------------

    // write address channel signals
    assign axi_aw_valid_o   = w_state_addr;
    assign axi_aw_addr_o    = data_ok ? {axi_waddr[63:4],4'b1000} : {axi_waddr[63:4],4'b0000};
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_aw_id_o      = axi_id;
    assign axi_aw_user_o    = axi_user;
    assign axi_aw_len_o     = 8'd0;
    assign axi_aw_size_o    = axi_size;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_aw_lock_o    = 1'b0;
    assign axi_aw_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_aw_qos_o     = 4'h0;


    // write data channel signals
    assign axi_b_ready_o    = 1'b1;

    assign axi_w_valid_o    = w_state_write;
    assign axi_w_data_o     = data_ok ? data_write[127:64]: data_write[63:0];
    assign axi_w_strb_o     = data_strb;
    assign axi_w_last_o     = 1'b1;
    
    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = axi_addr & 64'hffffffff_fffffff0;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_ar_id_o      = axi_id;
    assign axi_ar_user_o    = axi_user;
    assign axi_ar_len_o     = axi_len;
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_ar_qos_o     = 4'h0;

    // Read data channel signals
    assign axi_r_ready_o    = 1'b1;

    always @(posedge clock) begin
        if(reset) begin
            inst_read <= 0;
            data_read <= 0;
        end
        else if(axi_r_ready_o & axi_r_valid_i) begin
            if(axi_r_last_i) begin
                inst_read[127:64] <= axi_r_data_i;
                data_read[127:64] <= axi_r_data_i;
            end 
            else begin
                inst_read[63:0] <= axi_r_data_i;
                data_read[63:0] <= axi_r_data_i;
            end 
        end
    end

endmodule
