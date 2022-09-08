/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
/* verilator lint_off DECLFILENAME */

module top(
    input clk,
    input rst,
    output [31:0] instr,
    output [63:0] pc,
    output wb_commit,
    output [63:0] wb_pc,
    output [31:0] wb_instr,
    output [63:0] next_pc,
    output mem_valid,
    output reg wb_dev_o,
    output d_rw_ready,
///////////////////////AXI////////////////////////////
    input                               axi_aw_ready_i,              
    output                              axi_aw_valid_o,
    output [32-1:0]                     axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [4-1:0]                      axi_aw_id_o,
    output [1-1:0]                      axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,                
    output                              axi_w_valid_o,
    output [64-1:0]                     axi_w_data_o,
    output [64/8-1:0]                   axi_w_strb_o,
    output                              axi_w_last_o,
    output [1-1:0]                      axi_w_user_o,
    
    output                              axi_b_ready_o,                
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,                 
    input  [4-1:0]                      axi_b_id_i,
    input  [1-1:0]                      axi_b_user_i,

    input                               axi_ar_ready_i,                
    output                              axi_ar_valid_o,
    output [32-1:0]                     axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [4-1:0]                      axi_ar_id_o,
    output [1-1:0]                      axi_ar_user_o,
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
    input  [64-1:0]                     axi_r_data_i,
    input                               axi_r_last_i,
    input  [4-1:0]                      axi_r_id_i,
    input  [1-1:0]                      axi_r_user_i
);
    our s;
    wire  [63:0]   rw_addr_o;
    wire           rw_req_o;//
    wire           rw_valid_o;
    wire [127:0]   rw_w_data_o;
    wire  [127:0]   data_read_i;//finish burst
    wire            rw_ready_i;//data_read_i in ram
    wire [7:0]     rw_size_o;
    wire           rw_dev_o;
    
    ysyx_220053_core core(
        .clk(clk),.rst(rst),.instr(instr),.pc(pc),
        .wb_commit(wb_commit),.wb_pc(wb_pc),.wb_instr(wb_instr),.next_pc(next_pc),
        .mem_valid(mem_valid),.wb_dev_o(wb_dev_o),
        .rw_addr_o(rw_addr_o),.rw_req_o(rw_req_o),.rw_valid_o(rw_valid_o),.rw_w_data_o(rw_w_data_o),
        .data_read_i(data_read_i),.rw_ready_i(rw_ready_i),.rw_size_o(rw_size_o),
        .rw_dev_o(rw_dev_o),.d_rw_ready(d_rw_ready)
    );

    ysyx_220053_axi_rw axi(
        clk,
        rst,

        rw_req_o,           //IF&MEM输入信号
        rw_valid_o,         //IF&MEM输入信号
        rw_ready_i,         //IF&MEM输入信号
        data_read_i,        //IF&MEM输入信号
        rw_w_data_o,        //IF&MEM输入信号
        rw_addr_o,          //IF&MEM输入信号
        rw_size_o,          //IF&MEM输入信号
        rw_dev_o,          //IF&MEM输入信号



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

    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
