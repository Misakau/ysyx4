/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_cpu_cache(
    
    input  clock,
    input  reset,

    input [63:0] d_cpu_req_addr,
    input d_cpu_req_rw,
    input d_cpu_req_valid,
    input [63:0] d_cpu_data_write,
    input [7:0]  d_cpu_wmask,
    output [63:0] d_cpu_data_read,
    output d_cpu_ready,

    input [63:0] i_cpu_req_addr,
    input i_cpu_req_rw,
    input i_cpu_req_valid,
    output [63:0] i_cpu_data_read,
    output i_cpu_ready,


// Advanced eXtensible Interface
    input                               axi_aw_ready_i,              
    output                              axi_aw_valid_o,
    output [64-1:0]         axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [4-1:0]           axi_aw_id_o,
    output [1-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,                
    output                              axi_w_valid_o,
    output [64-1:0]         axi_w_data_o,
    output [64/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    output [1-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,                
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,                 
    input  [4-1:0]           axi_b_id_i,
    input  [1-1:0]         axi_b_user_i,

    input                               axi_ar_ready_i,                
    output                              axi_ar_valid_o,
    output [64-1:0]         axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [4-1:0]           axi_ar_id_o,
    output [1-1:0]         axi_ar_user_o,
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
    input  [64-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [4-1:0]           axi_r_id_i,
    input  [1-1:0]         axi_r_user_i
);
    wire [63:0]   rw_addr_o;
    wire          rw_req_o;//
    wire          rw_valid_o;

    wire  [63:0]      i_rw_addr_i;
    wire              i_rw_req_i;//
    wire              i_rw_valid_i;
    wire [127:0]     i_data_read_o;//finish burst
    wire             i_rw_ready_o;//data_read_i in ram

    //dcache <-> arbiter

    wire  [63:0]      d_rw_addr_i;
    wire              d_rw_req_i;//
    wire              d_rw_valid_i;
    wire  [127:0]     d_rw_w_data_i;
    wire [127:0]     d_data_read_o;//finish burst
    wire             d_rw_ready_o;//ready to give data or fetch data

    ysyx_220053_icache icache(clock,reset,
    //cpu<->cache
    i_cpu_req_addr,
    i_cpu_req_rw,
    i_cpu_req_valid,
    i_cpu_data_read,
    i_cpu_ready,
    i_rw_addr_i, i_rw_req_i,i_rw_valid_i,i_data_read_o,i_rw_ready_o//data_read_i in ram
);

wire [127:0] rw_w_data_o;
    ysyx_220053_dcache dcache(
     clock,reset,
    //cpu<->cache
     d_cpu_req_addr,d_cpu_req_rw,d_cpu_req_valid,d_cpu_data_write,d_cpu_wmask,d_cpu_data_read,d_cpu_ready,
    //cache<->memory
     d_rw_addr_i,d_rw_req_i,d_rw_valid_i,d_rw_w_data_i,d_data_read_o,d_rw_ready_o
    );
    

    ysyx_220053_arbiter arbiter(
    clock,
    reset,
    //icache <-> arbiter

    i_rw_addr_i,
    i_rw_req_i,//
    i_rw_valid_i,
    i_data_read_o,//finish burst
    i_rw_ready_o,//data_read_i in ram

    //dcache <-> arbiter

    d_rw_addr_i,
    d_rw_req_i,//
    d_rw_valid_i,
    d_rw_w_data_i,
    d_data_read_o,//finish burst
    d_rw_ready_o,//ready to give data or fetch data

    //arbiter<->memory
    rw_addr_o,
    rw_req_o,//
    rw_valid_o,
    rw_w_data_o,
    data_read_o,//finish burst
    rw_ready_o//data_read_i in ram

    );  



    wire                              rw_req_i = rw_req_o;          //IF&MEM输入信号
    wire                              rw_valid_i = rw_valid_o;         //IF&MEM输入信号
	wire                              rw_ready_o;         //IF&MEM输入信号
    wire  [128-1:0]         data_read_o;        //IF&MEM输入信号
    wire  [128-1:0]          rw_w_data_i = rw_w_data_o;      //IF&MEM输入信号
    wire  [64-1:0]          rw_addr_i = rw_addr_o;          //IF&MEM输入信号
    wire  [7:0]                        rw_size_i = 8'hff;         //IF&MEM输入信号

    ysyx_220053_axi_rw axi(
    clock,
    reset,

    rw_req_i,           //IF&MEM输入信号
    rw_valid_i,         //IF&MEM输入信号
    rw_ready_o,         //IF&MEM输入信号
    data_read_o,        //IF&MEM输入信号
    rw_w_data_i,        //IF&MEM输入信号
    rw_addr_i,          //IF&MEM输入信号
    rw_size_i,          //IF&MEM输入信号



    // Advanced eXtensible Interface
    axi_aw_ready_i,
    axi_aw_valid_o,
    axi_aw_addr_o,
    axi_aw_prot_o,
    axi_aw_id_o,
    axi_aw_user_o,
    axi_aw_len_o,
    axi_aw_size_o,
    axi_aw_burst_o,
    axi_aw_lock_o,
    axi_aw_cache_o,
    axi_aw_qos_o,
    axi_aw_region_o,

    axi_w_ready_i,
    axi_w_valid_o,
    axi_w_data_o,
    axi_w_strb_o,
    axi_w_last_o,
    axi_w_user_o,

    axi_b_ready_o,
    axi_b_valid_i,
    axi_b_resp_i,
    axi_b_id_i,
    axi_b_user_i,

    axi_ar_ready_i,
    axi_ar_valid_o,
    axi_ar_addr_o,
    axi_ar_prot_o,
    axi_ar_id_o,
    axi_ar_user_o,
    axi_ar_len_o,
    axi_ar_size_o,
    axi_ar_burst_o,
    axi_ar_lock_o,
    axi_ar_cache_o,
    axi_ar_qos_o,
    axi_ar_region_o,

    axi_r_ready_o,
    axi_r_valid_i,
    axi_r_resp_i,
    axi_r_data_i,
    axi_r_last_i,
    axi_r_id_i,
    axi_r_user_i

);
endmodule
