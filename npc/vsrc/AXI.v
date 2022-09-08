/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

// Burst types
`define ysyx_220053_AXI_BURST_TYPE_FIXED                                2'b00               //突发类型  FIFO
`define ysyx_220053_AXI_BURST_TYPE_INCR                                 2'b01               //ram  
`define ysyx_220053_AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define ysyx_220053_AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define ysyx_220053_AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define ysyx_220053_AXI_PROT_SECURE_ACCESS                              3'b000
`define ysyx_220053_AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define ysyx_220053_AXI_PROT_DATA_ACCESS                                3'b000
`define ysyx_220053_AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define ysyx_220053_AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define ysyx_220053_AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define ysyx_220053_AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define ysyx_220053_AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define ysyx_220053_AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define ysyx_220053_AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define ysyx_220053_AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define ysyx_220053_AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define ysyx_220053_AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define ysyx_220053_AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define ysyx_220053_AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define ysyx_220053_AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define ysyx_220053_AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define ysyx_220053_AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define ysyx_220053_AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define ysyx_220053_AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define ysyx_220053_AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define ysyx_220053_AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define ysyx_220053_AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define ysyx_220053_AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define ysyx_220053_AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define ysyx_220053_AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define ysyx_220053_AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define ysyx_220053_AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define ysyx_220053_AXI_SIZE_BYTES_1                                    3'b000                //突发宽度一个数据的宽度
`define ysyx_220053_AXI_SIZE_BYTES_2                                    3'b001
`define ysyx_220053_AXI_SIZE_BYTES_4                                    3'b010
`define ysyx_220053_AXI_SIZE_BYTES_8                                    3'b011
`define ysyx_220053_AXI_SIZE_BYTES_16                                   3'b100
`define ysyx_220053_AXI_SIZE_BYTES_32                                   3'b101
`define ysyx_220053_AXI_SIZE_BYTES_64                                   3'b110
`define ysyx_220053_AXI_SIZE_BYTES_128                                  3'b111


module ysyx_220053_axi_rw # (
    parameter RW_DATA_WIDTH     = 128,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_STRB_WIDTH    = AXI_DATA_WIDTH/8,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,

	input                               rw_req_i,           //IF&MEM输入信号
    input                               rw_valid_i,         //IF&MEM输入信号
	output                              rw_ready_o,         //IF&MEM输入信号
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,        //IF&MEM输入信号
    input  [RW_DATA_WIDTH-1:0]          rw_w_data_i,        //IF&MEM输入信号
    input  [RW_ADDR_WIDTH-1:0]          rw_addr_i,          //IF&MEM输入信号
    input  [AXI_STRB_WIDTH - 1:0]       rw_size_i,          //IF&MEM输入信号
    input                               rw_dev_i,


// Advanced eXtensible Interface
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
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,                
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,                
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,                 
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

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
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,                 
    input                               axi_r_valid_i,                
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);
    wire [1:0] bresp = axi_b_resp_i;
    wire [AXI_ID_WIDTH-1:0] bid   = axi_b_id_i;
    wire [AXI_USER_WIDTH-1:0] buser = axi_b_user_i;
    wire [1:0] rresp = axi_r_resp_i;
    wire [AXI_ID_WIDTH-1:0] rid   = axi_r_id_i;
    wire [AXI_USER_WIDTH-1:0] ruser = axi_r_user_i;


// ------------------State Machine------------------TODO
    localparam [2:0] W_IDLE = 3'b000, W_ADDR = 3'b001, W_WRITE = 3'b010, W_RESP = 3'b011, W_DONE = 3'b100;
    localparam [2:0] R_IDLE = 3'b000, R_ADDR = 3'b001, R_READ = 3'b010, R_DONE = 3'b100;
    reg [2:0] w_status, r_status;
    wire r_state_idle = (r_status == R_IDLE);
    wire r_state_addr = (r_status == R_ADDR);
    wire r_state_read = (r_status == R_READ);
    wire w_state_idle = (w_status == W_IDLE);
    wire w_state_addr = (w_status == W_ADDR);
    wire w_state_write = (w_status == W_WRITE);
    wire w_state_resp = (w_status == W_RESP);
    
    // 写通道状态切换
//握手信号
    wire aw_fire = axi_aw_ready_i & axi_aw_valid_o;
    wire w_fire  = axi_w_ready_i  & axi_w_valid_o;
    wire b_fire  = axi_b_ready_o  & axi_b_valid_i;

    wire w_last = w_fire & axi_w_last_o;

    always @(posedge clock) begin
        if(reset) begin
            w_status <= W_IDLE;
        end
        else begin
            if((rw_valid_i == 1'b1) && (rw_req_i == 1'b1)) begin//now write
                case(w_status)
                    W_IDLE: w_status <= W_ADDR;
                    W_ADDR: begin
                        if(aw_fire) w_status <= W_WRITE;
                    end
                    W_WRITE: begin
                        if(w_last) w_status <= W_RESP;
                    end
                    W_RESP: begin
                        if(b_fire) w_status <= W_DONE;//wait valid down
                    end
                    W_DONE: w_status <= W_IDLE;
                    default: w_status <= W_IDLE;
                endcase
            end
        end
    end

    // 读通道状态切换
//握手信号
    wire ar_fire = axi_ar_ready_i & axi_ar_valid_o;
    wire r_fire  = axi_r_ready_o  & axi_r_valid_i;

    wire r_last = r_fire & axi_r_last_i;

    always @(posedge clock) begin
        if(reset) begin
            r_status <= R_IDLE;
        end
        else begin
            if((rw_valid_i == 1'b1) && (rw_req_i == 1'b0)) begin//now read
                case(r_status)
                    R_IDLE: r_status <= R_ADDR;
                    R_ADDR: begin
                        if(ar_fire) r_status <= R_READ;
                    end
                    R_READ: begin
                        if(r_last) r_status <= R_DONE;//wait valid down
                    end
                    R_DONE: r_status <= R_IDLE;
                    default: r_status <= R_IDLE;
                endcase
            end
        end
    end


    reg rw_ready_r;
    always @(posedge clock) begin
        if(reset) begin
            rw_ready_r <= 1'b0;
        end
        else if(((rw_req_i == 1'b1) && b_fire) || ((rw_req_i == 1'b0) && r_last)) begin
            rw_ready_r <= 1'b1;
        end
        else rw_ready_r <= 1'b0;
    end
    assign rw_ready_o = rw_ready_r;

    /////////burst number////////
    reg [7:0] rcnt,wcnt;
    always @(posedge clock) begin
        if(reset || ((rw_req_i == 1'b0) && (r_state_idle == 1'b1))) begin
            rcnt <= 0;
        end
        else if((rcnt != axi_len) && r_fire) begin
            rcnt <= rcnt + 1;
        end
    end
    always @(posedge clock) begin
        if(reset || ((rw_req_i == 1'b1) && (w_state_idle == 1'b1))) begin
            wcnt <= 0;
        end
        else if((wcnt != axi_len) && (aw_fire || w_fire)) begin
            wcnt <= wcnt + 1;
        end
    end
// ------------------Write Transaction------------------
    localparam AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};
    wire [7:0] axi_len      = (rw_dev_i == 1'b0) ? 1 : 0;
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    
    // 写地址通道  以下没有备注初始化信号的都可能是你需要产生和用到的
    assign axi_aw_valid_o   = w_state_addr;//
    assign axi_aw_addr_o    = rw_addr_i[31:0];//
    assign axi_aw_prot_o    = `ysyx_220053_AXI_PROT_UNPRIVILEGED_ACCESS | `ysyx_220053_AXI_PROT_SECURE_ACCESS | `ysyx_220053_AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_aw_id_o      = axi_id;                                                                           //初始化信号即可
    assign axi_aw_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_aw_len_o     = axi_len;//
    assign axi_aw_size_o    = axi_size;//
    assign axi_aw_burst_o   = `ysyx_220053_AXI_BURST_TYPE_INCR;//                                                             
    assign axi_aw_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_aw_cache_o   = `ysyx_220053_AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;                                  //初始化信号即可
    assign axi_aw_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_aw_region_o  = 4'h0;      
    // 写数据通道
    
    reg [AXI_DATA_WIDTH - 1: 0] rw_w_data_r;
    reg [AXI_DATA_WIDTH/8-1:0] rw_size_r;
    always @(posedge clock) begin
        if(reset) begin
            rw_w_data_r <= 0;
            rw_size_r <= 0;
        end
        else if(aw_fire || w_fire) begin
            rw_w_data_r <= rw_w_data_i[wcnt*AXI_DATA_WIDTH +: AXI_DATA_WIDTH];
            rw_size_r <= rw_size_i;
        end
    end

    reg axi_w_last_r;
    always @(posedge clock) begin
        if(reset) begin
            axi_w_last_r <= 0;
        end
        else if(w_fire && (wcnt == axi_len)) begin
            axi_w_last_r <= 1'b1;
        end
        else if(b_fire) begin
            axi_w_last_r <= 0;
        end
    end



    assign axi_w_valid_o    = w_state_write;//
    assign axi_w_data_o     = rw_w_data_r ;//
    assign axi_w_strb_o     = rw_size_r;//
    assign axi_w_last_o     = axi_w_last_r;//
    assign axi_w_user_o     = axi_user;                                                                         //初始化信号即可

    // 写应答通道
    assign axi_b_ready_o    = w_state_resp;//

// ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;//
    assign axi_ar_addr_o    = rw_addr_i[31:0];//
    assign axi_ar_prot_o    = `ysyx_220053_AXI_PROT_UNPRIVILEGED_ACCESS | `ysyx_220053_AXI_PROT_SECURE_ACCESS | `ysyx_220053_AXI_PROT_DATA_ACCESS;  //初始化信号即可
    assign axi_ar_id_o      = axi_id;                                                                           //初始化信号即可                        
    assign axi_ar_user_o    = axi_user;                                                                         //初始化信号即可
    assign axi_ar_len_o     = axi_len;//                                                                          
    assign axi_ar_size_o    = axi_size;//
    assign axi_ar_burst_o   = `ysyx_220053_AXI_BURST_TYPE_INCR;//
    assign axi_ar_lock_o    = 1'b0;                                                                             //初始化信号即可
    assign axi_ar_cache_o   = `ysyx_220053_AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;                                 //初始化信号即可
    assign axi_ar_qos_o     = 4'h0;                                                                             //初始化信号即可
    assign axi_ar_region_o  = 4'h0;                                                                             //初始化信号即可
    // Read data channel signals
    //low 64
    always @(posedge clock) begin
        if(reset) begin
            data_read_o[AXI_DATA_WIDTH - 1:0] <= 0;
        end
        else if(r_fire && (rcnt == 0)) begin//r_trans0
            data_read_o[AXI_DATA_WIDTH - 1:0] <= axi_r_data_i;
        end
    end
    //high 64
    always @(posedge clock) begin
        if(reset) begin
            data_read_o[2*AXI_DATA_WIDTH - 1:AXI_DATA_WIDTH] <= 0;
        end
        else if(r_fire && (rcnt == 1)) begin//r_trans1
            data_read_o[2*AXI_DATA_WIDTH - 1:AXI_DATA_WIDTH] <= axi_r_data_i;
        end
    end



    assign axi_r_ready_o    = r_state_read;//

endmodule
