/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_EXU(
    input clk, rst,
    input [4:0] rd,
    input [63:0] busa,
    input [63:0] busb,
    input ALUSrcA,
    input [1:0] ALUSrcB,
    input [4:0] ALUOp,
    input [1:0] MulOp,
    input [63:0] pc,
    input [63:0] imm,
    input mwb_block,
    output [63:0] ALURes,
    output alu_busy,
);
    wire zero;
    wire [63:0] res;
    wire [63:0] alu_inA, alu_inB;
    
    assign alu_inA = (ALUSrcA == 1'b1) ? busa : pc;
    assign alu_inB = (ALUSrcB == 2'b01) ? imm : ((ALUSrcB == 2'b00) ? busb : 4);
    
    ysyx_220053_ALU alu64(
                            .clk(clk),
                            .rst(rst),
                            .mwb_block(mwb_block),
                            .alu_busy(alu_busy),
                            .inputa(alu_inA), .inputb(alu_inB), .ALUOp(ALUOp), .MulOp(MulOp), .result(res), .zero(zero));
        //busa + immI; //addi
    assign ALURes = res;
endmodule
