/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_EXU(
    input clk,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    input wen,
    input [63:0] immI
);
    wire [63:0] busa, busb;
    wire [63:0] res;
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(clk),
                                              .raaddr(rs1),
                                              .rbaddr(rs2),
                                              .radata(busa),
                                              .rbdata(busb),
                                              .wdata(res),
                                              .waddr(rd),
                                              .wen(wen)
                                            );
    ysyx_220053_Adder64 adder(.result(res),.x(busa),.y(immI),.sub(0));
        //busa + immI; //addi
endmodule
