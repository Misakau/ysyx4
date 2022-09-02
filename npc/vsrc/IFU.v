/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */

module ysyx_220053_IFU(
    input clk,
    input rst,
    input dnpc_valid, block,
    input [63:0] dnpc,
    output [63:0] pc,
    output [31:0] instr_o,
    output reg inst_valid_o,
    
    output [63:0] i_rw_addr_o,
    output i_rw_req_o,
    output i_rw_valid_o,
    input  [127:0] i_data_read_i,
    input  i_rw_ready_i
);
    wire [63:0] now_pc, rdata, snpc;
    assign pc = (block == 1'b1 | dnpc_valid == 1'b0) ? now_pc : valid_dnpc;
    assign snpc = now_pc + 4;
    //always@(*) begin  pmem_read(pc, rdata, 4); end
    always@(*) begin get_instr(instr_o); end
    assign instr_o = instr_read_r;//(pc[2] == 0) ? rdata[31:0] : rdata[63:32];
    wire [63:0] valid_dnpc = (dnpc_valid == 1'b0) ? snpc : dnpc;
    wire pcen = ~block & dnpc_valid;
    ysyx_220053_Reg #(64, 64'h80000000) PC(.clk(clk), .rst(rst), valid_dnpc, now_pc, pcen);
    //未取到：取指令
    //取到了：不取
    wire i_cpu_ready;
    reg cpu_req_valid;
    wire [63:0] cpu_data_read;
    reg [31:0] instr_read_r;
    always @(posedge clk) begin
        if(rst) begin
            cpu_req_valid <= 1'b1;
        end
        else if(dnpc_valid && cpu_req_valid == 1'b0)begin
            cpu_req_valid <= 1'b1;
        end
        else cpu_req_valid <= 1'b0;
    end

    always @(posedge clk) begin
        if(rst) begin
            inst_valid_o <= 1'b0;
        end
        else if(i_cpu_ready)begin
            inst_valid_o <= 1'b1;
            instr_read_r <= (pc[2]) ? cpu_data_read[63:31] : cpu_data_read[31:0];
        end
        else inst_valid_o <= 1'b0;
    end
    ysyx_220053_icache icache(
         clk,rst,
        //cpu<->cache
         pc,1'b0,cpu_req_valid,cpu_data_read,i_cpu_ready,
         //cache<->memory
         i_rw_addr_o, i_rw_req_o,i_rw_valid_o,i_data_read_i,i_rw_ready_i
    );
    assign rdata = cpu_data_read_r;
endmodule
