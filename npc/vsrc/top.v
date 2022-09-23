/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
/* verilator lint_off DECLFILENAME */
import "DPI-C" function void c_trap(input bit done);
module top(
    input clk,
    input rst,
    output [31:0] instr,
    output [63:0] pc,
    output wb_commit,
    output [63:0] wb_pc,
    output [31:0] wb_instr,
    output [63:0] next_pc,
    output wb_dev_o,
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
    wire  [63:0]   rw_addr_o;
    wire           rw_req_o;//
    wire           rw_valid_o;
    wire [127:0]   rw_w_data_o;
    wire  [127:0]   data_read_i;//finish burst
    wire            rw_ready_i;//data_read_i in ram
    wire [7:0]     rw_size_o;
    wire           rw_dev_o;
    wire [5:0] io_sram0_addr;
	wire io_sram0_cen;
	wire io_sram0_wen;
	wire [127:0] io_sram0_wmask;
	wire [127:0] io_sram0_wdata;
	wire [127:0] io_sram0_rdata;
	wire [5:0] io_sram1_addr;
	wire io_sram1_cen; 
	wire io_sram1_wen; 
	wire [127:0] io_sram1_wmask;			
	wire [127:0] io_sram1_wdata;
	wire [127:0] io_sram1_rdata;
	wire [5:0] io_sram2_addr;	
	wire io_sram2_cen; 
	wire io_sram2_wen; 
	wire [127:0] io_sram2_wmask; 
	wire [127:0] io_sram2_wdata; 
	wire [127:0] io_sram2_rdata; 
	wire [5:0] io_sram3_addr; 
	wire io_sram3_cen; 
	wire io_sram3_wen; 
	wire [127:0] io_sram3_wmask; 
	wire [127:0] io_sram3_wdata; 
	wire [127:0] io_sram3_rdata;	
	wire [5:0] io_sram4_addr; 
	wire io_sram4_cen; 
	wire io_sram4_wen; 
	wire [127:0] io_sram4_wmask; 
	wire [127:0] io_sram4_wdata; 
	wire [127:0] io_sram4_rdata; 
	wire [5:0] io_sram5_addr; 
	wire io_sram5_cen; 
	wire io_sram5_wen; 
	wire [127:0] io_sram5_wmask; 
	wire [127:0] io_sram5_wdata; 
	wire [127:0] io_sram5_rdata; 
	wire [5:0] io_sram6_addr; 
	wire io_sram6_cen; 
	wire io_sram6_wen; 
	wire [127:0] io_sram6_wmask; 
	wire [127:0] io_sram6_wdata; 
	wire [127:0] io_sram6_rdata; 
	wire [5:0] io_sram7_addr; 
	wire io_sram7_cen; 
	wire io_sram7_wen; 
	wire [127:0] io_sram7_wmask; 
	wire [127:0] io_sram7_wdata;
	wire [127:0] io_sram7_rdata;
    ysyx_040053 mycpu(
    .clock(clk),
    .reset(rst),
    .io_interrupt(1'b0),
    .io_master_awready(axi_aw_ready_i),              
    .io_master_awvalid(axi_aw_valid_o),
    .io_master_awaddr(axi_aw_addr_o),
    .io_master_awid(axi_aw_id_o),
    .io_master_awlen(axi_aw_len_o),
    .io_master_awsize(axi_aw_size_o),
    .io_master_awburst(axi_aw_burst_o),
    .io_master_wready(axi_w_ready_i),                
    .io_master_wvalid(axi_w_valid_o),
    .io_master_wdata(axi_w_data_o),
    .io_master_wstrb(axi_w_strb_o),
    .io_master_wlast(axi_w_last_o),
    .io_master_bready(axi_b_ready_o),                
    .io_master_bvalid(axi_b_valid_i),
    .io_master_bresp(axi_b_resp_i),                 
    .io_master_bid(axi_b_id_i),
    .io_master_arready(axi_ar_ready_i),                
    .io_master_arvalid(axi_ar_valid_o),
    .io_master_araddr(axi_ar_addr_o),
    .io_master_arid(axi_ar_id_o),
    .io_master_arlen(axi_ar_len_o),
    .io_master_arsize(axi_ar_size_o),
    .io_master_arburst(axi_ar_burst_o),
    .io_master_rready(axi_r_ready_o),                 
    .io_master_rvalid(axi_r_valid_i),                
    .io_master_rresp(axi_r_resp_i),
    .io_master_rdata(axi_r_data_i),
    .io_master_rlast(axi_r_last_i),
    .io_master_rid(axi_r_id_i),

    .io_sram0_addr (io_sram0_addr ),
	.io_sram0_cen  (io_sram0_cen  ),
	.io_sram0_wen  (io_sram0_wen  ),
	.io_sram0_wmask(io_sram0_wmask),
	.io_sram0_wdata(io_sram0_wdata),
	.io_sram0_rdata(io_sram0_rdata),
	.io_sram1_addr (io_sram1_addr ),
	.io_sram1_cen  (io_sram1_cen  ), 
	.io_sram1_wen  (io_sram1_wen  ), 
	.io_sram1_wmask(io_sram1_wmask),			
	.io_sram1_wdata(io_sram1_wdata),
	.io_sram1_rdata(io_sram1_rdata),
	.io_sram2_addr (io_sram2_addr ),	
	.io_sram2_cen  (io_sram2_cen  ), 
	.io_sram2_wen  (io_sram2_wen  ), 
	.io_sram2_wmask(io_sram2_wmask), 
	.io_sram2_wdata(io_sram2_wdata), 
	.io_sram2_rdata(io_sram2_rdata), 
	.io_sram3_addr (io_sram3_addr ), 
	.io_sram3_cen  (io_sram3_cen  ), 
	.io_sram3_wen  (io_sram3_wen  ), 
	.io_sram3_wmask(io_sram3_wmask), 
	.io_sram3_wdata(io_sram3_wdata), 
	.io_sram3_rdata(io_sram3_rdata),	
	.io_sram4_addr (io_sram4_addr ), 
	.io_sram4_cen  (io_sram4_cen  ), 
	.io_sram4_wen  (io_sram4_wen  ), 
	.io_sram4_wmask(io_sram4_wmask), 
	.io_sram4_wdata(io_sram4_wdata), 
	.io_sram4_rdata(io_sram4_rdata), 
	.io_sram5_addr (io_sram5_addr ), 
	.io_sram5_cen  (io_sram5_cen  ), 
	.io_sram5_wen  (io_sram5_wen  ), 
	.io_sram5_wmask(io_sram5_wmask), 
	.io_sram5_wdata(io_sram5_wdata), 
	.io_sram5_rdata(io_sram5_rdata), 
	.io_sram6_addr (io_sram6_addr ), 
	.io_sram6_cen  (io_sram6_cen  ), 
	.io_sram6_wen  (io_sram6_wen  ), 
	.io_sram6_wmask(io_sram6_wmask), 
	.io_sram6_wdata(io_sram6_wdata), 
	.io_sram6_rdata(io_sram6_rdata), 
	.io_sram7_addr (io_sram7_addr ), 
	.io_sram7_cen  (io_sram7_cen  ), 
	.io_sram7_wen  (io_sram7_wen  ), 
	.io_sram7_wmask(io_sram7_wmask), 
	.io_sram7_wdata(io_sram7_wdata),
	.io_sram7_rdata(io_sram7_rdata),

    .instr(instr),
    .pc(pc),
    .wb_commit(wb_commit),
    .wb_pc(wb_pc),
    .wb_instr(wb_instr),
    .next_pc(next_pc),
    .wb_dev_o(wb_dev_o)
    );

    ysyx_040053_S011HD1P_X32Y2D128_BW sram0(io_sram0_rdata, clk, io_sram0_cen, io_sram0_wen, io_sram0_wmask, io_sram0_addr, io_sram0_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram1(io_sram1_rdata, clk, io_sram1_cen, io_sram1_wen, io_sram1_wmask, io_sram1_addr, io_sram1_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram2(io_sram2_rdata, clk, io_sram2_cen, io_sram2_wen, io_sram2_wmask, io_sram2_addr, io_sram2_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram3(io_sram3_rdata, clk, io_sram3_cen, io_sram3_wen, io_sram3_wmask, io_sram3_addr, io_sram3_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram4(io_sram4_rdata, clk, io_sram4_cen, io_sram4_wen, io_sram4_wmask, io_sram4_addr, io_sram4_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram5(io_sram5_rdata, clk, io_sram5_cen, io_sram5_wen, io_sram5_wmask, io_sram5_addr, io_sram5_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram6(io_sram6_rdata, clk, io_sram6_cen, io_sram6_wen, io_sram6_wmask, io_sram6_addr, io_sram6_wdata);
    ysyx_040053_S011HD1P_X32Y2D128_BW sram7(io_sram7_rdata, clk, io_sram7_cen, io_sram7_wen, io_sram7_wmask, io_sram7_addr, io_sram7_wdata);
    
    
    assign axi_aw_user_o = 0;
    assign axi_aw_lock_o = 0;
    assign axi_aw_cache_o = `ysyx_220053_AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;
    assign axi_aw_qos_o = 0;
    assign axi_aw_region_o = 0;
    assign axi_aw_prot_o = `ysyx_220053_AXI_PROT_UNPRIVILEGED_ACCESS | `ysyx_220053_AXI_PROT_SECURE_ACCESS | `ysyx_220053_AXI_PROT_DATA_ACCESS;;
    assign axi_w_user_o = 0;
    assign axi_ar_user_o = 0;
    assign axi_ar_lock_o = 0;
    assign axi_ar_cache_o = `ysyx_220053_AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE;
    assign axi_ar_qos_o = 0;
    assign axi_ar_region_o = 0;
    assign axi_ar_prot_o = `ysyx_220053_AXI_PROT_UNPRIVILEGED_ACCESS | `ysyx_220053_AXI_PROT_SECURE_ACCESS | `ysyx_220053_AXI_PROT_DATA_ACCESS;;
    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
