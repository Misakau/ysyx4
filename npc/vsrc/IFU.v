/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
import "DPI-C" function void get_instr(input bit[31:0] instr);

module ysyx_220053_IFU(
    input clk,
    input rst,
    input [63:0] dnpc,
    output [63:0] pc,
    output [31:0] instr_o
);
    wire fclk;
    wire [63:0] now_pc, snpc, rdata;
    assign snpc = now_pc + 4;
    assign pc = now_pc;
    always@(*) begin  pmem_read(pc, rdata); end
    assign instr_o = (pc[2] == 0) ? rdata[31:0] : rdata[63:32];
    initial get_instr(instr_o);
    ysyx_220053_Reg #(64, 64'h80000000) PC(.clk(clk), .rst(rst), dnpc, now_pc, 1'b1);

endmodule
