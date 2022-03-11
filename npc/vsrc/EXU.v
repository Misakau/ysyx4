/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_EXU(
    input clk,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    input wen, ALUSrcB,
    input [63:0] imm
);
    wire [63:0] busa, busb;
    wire [63:0] res;
    wire [63:0] alu_inB;
    assign alu_inB = (ALUSrcB == 1'b1) ? imm : busb;
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(clk),
                                              .raaddr(rs1),
                                              .rbaddr(rs2),
                                              .radata(busa),
                                              .rbdata(busb),
                                              .wdata(res),
                                              .waddr(rd),
                                              .wen(wen)
                                            );
    ysyx_220053_Adder64 adder(.result(res),.x(busa),.y(imm),.sub(0));
        //busa + immI; //addi
endmodule
