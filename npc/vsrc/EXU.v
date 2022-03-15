/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_EXU(
    input clk, rst,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    input wen, ALUSrcA, 
    input [1:0] ALUSrcB,
    input [3:0] ALUOp,
    input [2:0] Branch,
    input [63:0] pc,
    input [63:0] imm,
    output [63:0] dnpc
);
    wire [63:0] busa, busb;
    wire [63:0] res;
    wire [63:0] alu_inA, alu_inB;
    wire is_wen;
    assign is_wen = wen & (~rst);
    assign alu_inA = (ALUSrcA == 1'b1) ? busa : pc;
    assign alu_inB = (ALUSrcB == 2'b01) ? imm : ((ALUSrcB == 2'b00) ? busb : 4);
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(clk),
                                              .raaddr(rs1),
                                              .rbaddr(rs2),
                                              .radata(busa),
                                              .rbdata(busb),
                                              .wdata(res),
                                              .waddr(rd),
                                              .wen(is_wen)
                                            );
    ysyx_220053_ALU alu64(.inputa(alu_inA), .inputb(alu_inB), .ALUOp(ALUOp), .result(res));
        //busa + immI; //addi
    wire [63:0] addr_res;
    ysyx_220053_NexAddr nextaddr(.Branch(Branch), .pc(pc), .imm(imm), .busa(busa), .dnpc(addr_res));
    assign dnpc = {addr_res[63:1], 1'b0};
endmodule

module ysyx_220053_NexAddr(
    input [2:0] Branch,
    input [63:0] pc, imm, busa,
    output [63:0] dnpc
);
    reg NexA, NexB;//A:0:pc,1:busa //B: 0:4, 1:imm
    wire [63:0] SrcA, SrcB;
    always@(*) begin
        case(Branch)
            3'b001: begin NexA = 0; NexB = 1; end
            3'b010: begin NexA = 1; NexB = 1; end
            default: begin NexA = 0; NexB = 0; end
        endcase
    end
    assign SrcA = (NexA == 0) ? pc : busa;
    assign SrcB = (NexB == 0) ? 4 : imm;
    ysyx_220053_Adder64 pcadder(.result(dnpc), .x(SrcA), .y(SrcB), .sub(0));
 //   always@(*) begin
  //      $display("pc = %x, dnpc=%x",pc,dnpc);
  //  end
endmodule
