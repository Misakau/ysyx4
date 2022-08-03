/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */

module ysyx_220053_IFU(
    input clk,
    input rst,
    input dnpc_valid, block,
    input [63:0] dnpc,
    output [63:0] pc,
    output [31:0] instr_o
);
    wire [63:0] now_pc, rdata, snpc;
    assign pc = (block == 1'b1 | dnpc_valid == 1'b0) ? now_pc : valid_dnpc;
    assign snpc = now_pc + 4;
    always@(*) begin  pmem_read(pc, rdata); end
    always@(*) begin get_instr(instr_o); end
    assign instr_o = (pc[2] == 0) ? rdata[31:0] : rdata[63:32];
    wire [63:0] valid_dnpc = (dnpc_valid == 1'b0) ? snpc : dnpc;
    wire pcen = ~block & dnpc_valid;
    ysyx_220053_Reg #(64, 64'h80000000) PC(.clk(clk), .rst(rst), valid_dnpc, now_pc, pcen);

endmodule
