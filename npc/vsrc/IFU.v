/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module ysyx_220053_IFU(
    input clk,
    input rst,
    input dnpc,
    output [63:0] pc
);
    wire [63:0] now_pc, dnpc;
    //assign snpc = now_pc + 4;
    assign pc = now_pc;
    ysyx_220053_Reg #(64, 64'h80000000) PC(.clk(clk), .rst(rst), dnpc, now_pc, 1'b1);

endmodule
