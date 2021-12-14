
`include "defines.v"
`define AXI_TOP_INTERFACE(name) io_memAXI_0_``name

module SimTop(
    input                               clock,
    input                               reset,

    input  [63:0]                       io_logCtrl_log_begin,
    input  [63:0]                       io_logCtrl_log_end,
    input  [63:0]                       io_logCtrl_log_level,
    input                               io_perfInfo_clean,
    input                               io_perfInfo_dump,

    output                              io_uart_out_valid,
    output [7:0]                        io_uart_out_ch,
    output                              io_uart_in_valid,
    input  [7:0]                        io_uart_in_ch,

    input                               `AXI_TOP_INTERFACE(aw_ready),
    output                              `AXI_TOP_INTERFACE(aw_valid),
    output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_addr),
    output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_prot),
    output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(aw_bits_id),
    output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_user),
    output [7:0]                        `AXI_TOP_INTERFACE(aw_bits_len),
    output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_size),
    output [1:0]                        `AXI_TOP_INTERFACE(aw_bits_burst),
    output                              `AXI_TOP_INTERFACE(aw_bits_lock),
    output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_cache),
    output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_qos),
    
    input                               `AXI_TOP_INTERFACE(w_ready),
    output                              `AXI_TOP_INTERFACE(w_valid),
    output [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(w_bits_data)         [3:0],
    output [`AXI_DATA_WIDTH/8-1:0]      `AXI_TOP_INTERFACE(w_bits_strb),
    output                              `AXI_TOP_INTERFACE(w_bits_last),
    
    output                              `AXI_TOP_INTERFACE(b_ready),
    input                               `AXI_TOP_INTERFACE(b_valid),
    input  [1:0]                        `AXI_TOP_INTERFACE(b_bits_resp),
    input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(b_bits_id),
    input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(b_bits_user),

    input                               `AXI_TOP_INTERFACE(ar_ready),
    output                              `AXI_TOP_INTERFACE(ar_valid),
    output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_addr),
    output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_prot),
    output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(ar_bits_id),
    output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_user),
    output [7:0]                        `AXI_TOP_INTERFACE(ar_bits_len),
    output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_size),
    output [1:0]                        `AXI_TOP_INTERFACE(ar_bits_burst),
    output                              `AXI_TOP_INTERFACE(ar_bits_lock),
    output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_cache),
    output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_qos),
    
    output                              `AXI_TOP_INTERFACE(r_ready),
    input                               `AXI_TOP_INTERFACE(r_valid),
    input  [1:0]                        `AXI_TOP_INTERFACE(r_bits_resp),
    input  [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_data)         [3:0],
    input                               `AXI_TOP_INTERFACE(r_bits_last),
    input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(r_bits_id),
    input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_user)
);

    wire aw_ready;
    wire aw_valid;
    wire [`AXI_ADDR_WIDTH-1:0] aw_addr;
    wire [2:0] aw_prot;
    wire [`AXI_ID_WIDTH-1:0] aw_id;
    wire [`AXI_USER_WIDTH-1:0] aw_user;
    wire [7:0] aw_len;
    wire [2:0] aw_size;
    wire [1:0] aw_burst;
    wire aw_lock;
    wire [3:0] aw_cache;
    wire [3:0] aw_qos;

    wire w_ready;
    wire w_valid;
    wire [`AXI_DATA_WIDTH-1:0] w_data [3:0];
    wire [`AXI_DATA_WIDTH/8-1:0] w_strb;
    wire w_last;
    
    wire b_ready;
    wire b_valid;
    wire [1:0] b_resp;
    wire [`AXI_ID_WIDTH-1:0] b_id;
    wire [`AXI_USER_WIDTH-1:0] b_user;

    wire ar_ready;
    wire ar_valid;
    wire [`AXI_ADDR_WIDTH-1:0] ar_addr;
    wire [2:0] ar_prot;
    wire [`AXI_ID_WIDTH-1:0] ar_id;
    wire [`AXI_USER_WIDTH-1:0] ar_user;
    wire [7:0] ar_len;
    wire [2:0] ar_size;
    wire [1:0] ar_burst;
    wire ar_lock;
    wire [3:0] ar_cache;
    wire [3:0] ar_qos;
    
    wire r_ready;
    wire r_valid;
    wire [1:0] r_resp;
    wire [`AXI_DATA_WIDTH-1:0] r_data;
    wire r_last;
    wire [`AXI_ID_WIDTH-1:0] r_id;
    wire [`AXI_USER_WIDTH-1:0] r_user;

    
    assign aw_ready                                 = `AXI_TOP_INTERFACE(aw_ready);
    assign `AXI_TOP_INTERFACE(aw_valid)             = aw_valid;
    assign `AXI_TOP_INTERFACE(aw_bits_addr)         = aw_addr;
    assign `AXI_TOP_INTERFACE(aw_bits_prot)         = aw_prot;
    assign `AXI_TOP_INTERFACE(aw_bits_id)           = aw_id;
    assign `AXI_TOP_INTERFACE(aw_bits_user)         = aw_user;
    assign `AXI_TOP_INTERFACE(aw_bits_len)          = aw_len;
    assign `AXI_TOP_INTERFACE(aw_bits_size)         = aw_size;
    assign `AXI_TOP_INTERFACE(aw_bits_burst)        = aw_burst;
    assign `AXI_TOP_INTERFACE(aw_bits_lock)         = aw_lock;
    assign `AXI_TOP_INTERFACE(aw_bits_cache)        = aw_cache;
    assign `AXI_TOP_INTERFACE(aw_bits_qos)          = aw_qos;

    assign w_ready                                  = `AXI_TOP_INTERFACE(w_ready);
    assign `AXI_TOP_INTERFACE(w_valid)              = w_valid;
    assign `AXI_TOP_INTERFACE(w_bits_data)          = w_data;
    assign `AXI_TOP_INTERFACE(w_bits_strb)          = w_strb;
    assign `AXI_TOP_INTERFACE(w_bits_last)          = w_last;
    
    assign `AXI_TOP_INTERFACE(b_ready)              = b_ready;
    assign b_valid                                  = `AXI_TOP_INTERFACE(b_valid);
    assign b_resp                                   = `AXI_TOP_INTERFACE(b_bits_resp);
    assign b_id                                     = `AXI_TOP_INTERFACE(b_bits_id);
    assign b_user                                   = `AXI_TOP_INTERFACE(b_bits_user);

    assign ar_ready                                 = `AXI_TOP_INTERFACE(ar_ready);
    assign `AXI_TOP_INTERFACE(ar_valid)             = ar_valid;
    assign `AXI_TOP_INTERFACE(ar_bits_addr)         = ar_addr;
    assign `AXI_TOP_INTERFACE(ar_bits_prot)         = ar_prot;
    assign `AXI_TOP_INTERFACE(ar_bits_id)           = ar_id;
    assign `AXI_TOP_INTERFACE(ar_bits_user)         = ar_user;
    assign `AXI_TOP_INTERFACE(ar_bits_len)          = ar_len;
    assign `AXI_TOP_INTERFACE(ar_bits_size)         = ar_size;
    assign `AXI_TOP_INTERFACE(ar_bits_burst)        = ar_burst;
    assign `AXI_TOP_INTERFACE(ar_bits_lock)         = ar_lock;
    assign `AXI_TOP_INTERFACE(ar_bits_cache)        = ar_cache;
    assign `AXI_TOP_INTERFACE(ar_bits_qos)          = ar_qos;
    
    assign `AXI_TOP_INTERFACE(r_ready)              = r_ready;
    assign r_valid                                  = `AXI_TOP_INTERFACE(r_valid);
    assign r_resp                                   = `AXI_TOP_INTERFACE(r_bits_resp);
    assign r_data                                   = `AXI_TOP_INTERFACE(r_bits_data)[0];
    assign r_last                                   = `AXI_TOP_INTERFACE(r_bits_last);
    assign r_id                                     = `AXI_TOP_INTERFACE(r_bits_id);
    assign r_user                                   = `AXI_TOP_INTERFACE(r_bits_user);

ysyx_210247_axi u_ysyx_210247_axi(
    .clock          ( clock          ),
    .reset          ( reset          ),
    .inst_valid     ( inst_req_valid     ),
    .inst_ready     ( inst_resp_valid     ),
    .inst_req       ( inst_req       ),
    .inst_read      ( inst_resp_data      ),
    .inst_addr      ( inst_req_addr      ),
    .inst_size      ( inst_size      ),
    .inst_resp      ( inst_resp      ),
    .data_valid     ( mem_req_valid     ),
    .data_ready     ( mem_resp_valid     ),
    .data_req       ( data_req       ),
    .data_read      ( mem_resp_data      ),
    .data_write     ( mem_req_data     ),
    .data_addr      ( mem_req_addr      ),
    .data_size      ( mem_req_size      ),
    .data_resp      ( data_resp      ),
    .data_strb      ( mem_req_strb      ),
    .axi_aw_ready_i ( aw_ready       ),
    .axi_aw_valid_o ( aw_valid       ),
    .axi_aw_addr_o  ( aw_addr        ),
    .axi_aw_prot_o  ( aw_prot        ),
    .axi_aw_id_o    ( aw_id          ),
    .axi_aw_user_o  ( aw_user        ),
    .axi_aw_len_o   ( aw_len         ),
    .axi_aw_size_o  ( aw_size        ),
    .axi_aw_burst_o ( aw_burst       ),
    .axi_aw_lock_o  ( aw_lock        ),
    .axi_aw_cache_o ( aw_cache       ),
    .axi_aw_qos_o   ( aw_qos         ),
    .axi_w_ready_i  ( w_ready        ),
    .axi_w_valid_o  ( w_valid        ),
    .axi_w_data_o   ( w_data[0]      ),
    .axi_w_strb_o   ( w_strb         ),
    .axi_w_last_o   ( w_last         ),   
    .axi_b_ready_o  ( b_ready        ),
    .axi_b_valid_i  ( b_valid        ),
    .axi_b_resp_i   ( b_resp         ),
    .axi_b_id_i     ( b_id           ),
    .axi_b_user_i   ( b_user         ),
    .axi_ar_ready_i ( ar_ready       ),
    .axi_ar_valid_o ( ar_valid       ),
    .axi_ar_addr_o  ( ar_addr        ),
    .axi_ar_prot_o  ( ar_prot        ),
    .axi_ar_id_o    ( ar_id          ),
    .axi_ar_user_o  ( ar_user        ),
    .axi_ar_len_o   ( ar_len         ),
    .axi_ar_size_o  ( ar_size        ),
    .axi_ar_burst_o ( ar_burst       ),
    .axi_ar_lock_o  ( ar_lock        ),
    .axi_ar_cache_o ( ar_cache       ),
    .axi_ar_qos_o   ( ar_qos         ),   
    .axi_r_ready_o  ( r_ready        ),
    .axi_r_valid_i  ( r_valid        ),
    .axi_r_resp_i   ( r_resp         ),
    .axi_r_data_i   ( r_data         ),
    .axi_r_last_i   ( r_last         ),
    .axi_r_id_i     ( r_id           ),
    .axi_r_user_i   ( r_user         )
);


wire inst_req = `REQ_READ;
wire inst_valid;
wire inst_ready;
wire [63:0] inst_read;
wire [63:0] inst_addr;
wire [ 1:0] inst_size;
wire [ 1:0] inst_resp;
wire        addr_valid;
wire        br_stall;

wire data_req = mem_req_wen ? `REQ_WRITE : `REQ_READ;
wire data_valid;
wire data_ready;
wire [63:0] data_read;
wire [63:0] data_write;
wire [63:0] data_addr;
wire [ 1:0] data_size;
wire [ 1:0] data_resp;
wire        data_wen;
wire [ 7:0] data_strb;

ysyx_210247_cpu u_ysyx_210247_cpu(
    .clock      ( clock      ),
    .reset      ( reset      ),
    .inst_valid ( inst_valid ),
    .inst_ready ( inst_ready ),
    .inst_read  ( inst_read  ),
    .inst_addr  ( inst_addr  ),
    .inst_size  ( inst_size  ),
    .inst_resp  ( inst_resp  ),
    .addr_valid ( addr_valid ),
    .br_stall   ( br_stall   ),

    .data_valid ( data_valid ),
    .data_ready ( data_ready ),
    .data_read  ( data_read  ),
    .data_addr  ( data_addr  ),
    .data_size  ( data_size  ),
    .data_resp  ( data_resp  ),
    .data_write ( data_write ),
    .data_wen   ( data_wen   ),
    .data_strb  ( data_strb  )
);

wire [63:0] inst_req_addr;
wire [63:0] inst_req_data;
wire [`RW_DATA_WIDTH-1:0] inst_resp_data;
wire        inst_req_valid;
wire        inst_resp_valid;
wire        inst_req_wen;

wire [63:0] mem_read_data;
assign mem_read_data = mem_req_addr[3] ? mem_resp_data[127:64] : mem_resp_data[63:0];

wire [63:0] mem_req_addr;
wire [`RW_DATA_WIDTH-1:0] mem_req_data;
wire [`RW_DATA_WIDTH-1:0] mem_resp_data;
wire [ 1:0] mem_req_size;
wire [ 7:0] mem_req_strb;
wire        mem_req_valid;
wire        mem_resp_valid;
wire        mem_req_wen;

ysyx_210247_icache u_ysyx_210247_icache(
    .clk                   ( clock                 ),
    .rst                   ( reset                 ),
    .cache_req_addr        ( inst_addr        ),
    .cache_req_data        ( 0        ),
    .cache_req_wen         ( 0         ),
    .cache_req_valid       ( inst_valid       ),
    .cache_resp_data       ( inst_read       ),
    .cache_resp_ready      ( inst_ready      ),
    .addr_valid            ( addr_valid ),
    .br_stall              ( br_stall ),
    .inst_req_addr         ( inst_req_addr          ),
    .inst_req_data         ( inst_req_data          ),
    .inst_req_wen          ( inst_req_wen           ),
    .inst_req_valid        ( inst_req_valid         ),
    .inst_resp_valid       ( inst_resp_valid        ),
    .inst_resp_data        ( inst_resp_data         )
);

ysyx_210247_dcache u_ysyx_210247_dcache(
    .clk                   ( clock                 ),
    .rst                   ( reset                 ),
    .cache_req_addr        ( data_addr        ),
    .cache_req_data        ( data_write        ),
    .cache_req_wen         ( data_wen         ),
    .cache_req_size        ( data_size  ),
    .cache_req_strb        ( data_strb  ),
    .cache_req_valid       ( data_valid       ),
    .cache_resp_data       ( data_read       ),
    .cache_resp_ready      ( data_ready      ),

    .mem_req_addr          ( mem_req_addr          ),
    .mem_req_data          ( mem_req_data          ),
    .mem_req_wen           ( mem_req_wen           ),
    .mem_req_size          ( mem_req_size          ),
    .mem_req_strb          ( mem_req_strb          ),
    .mem_req_valid         ( mem_req_valid         ),
    .mem_resp_valid        ( mem_resp_valid        ),
    .mem_resp_data         ( mem_resp_data         )
);


endmodule
