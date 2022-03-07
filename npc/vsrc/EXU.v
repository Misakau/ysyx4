/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
module ysyx_220053_EXU(
    input clk,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    input wen,
    input [63:0] immI
);
    wire [63:0] busa, busb;
    reg [63:0] res;
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(~clk),
                                              .raaddr(rs1),
                                              .rbaddr(rs2),
                                              .radata(busa),
                                              .rbdata(busb),
                                              .wdata(res),
                                              .waddr(rd),
                                              .wen(wen)
                                            );
    always @(*) begin
        res = busa + immI; //addi
    end
endmodule
