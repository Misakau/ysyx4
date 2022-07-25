/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_NexAddr(
    input Zero, res0,
    input [2:0] Branch,
    input [63:0] pc, imm, busa, mepc, mtvec,
    input Mret, Ecall,
    output [63:0] dnpc
);
    reg NexA, NexB;//A:0:pc,1:busa //B: 0:4, 1:imm
    wire [63:0] SrcA, SrcB;
    always@(*) begin
        case(Branch)
            3'b001: begin NexA = 1'b0; NexB = 1'b1; end
            3'b010: begin NexA = 1'b1; NexB = 1'b1; end
            3'b100: begin NexA = 1'b0; NexB = Zero; end
            3'b101: begin NexA = 1'b0; NexB = ~Zero; end
            3'b110: begin NexA = 1'b0; NexB = res0; end
            3'b111: begin NexA = 1'b0; NexB = Zero | (~res0); end
            default: begin NexA = 1'b0; NexB = 1'b0; end
        endcase
    end
    assign SrcA = (NexA == 1'b0) ? pc : busa;
    assign SrcB = (NexB == 1'b0) ? 4 : imm;
    wire [63:0] respc;
    ysyx_220053_Adder64 pcadder(.result(respc), .x(SrcA), .y(SrcB), .sub(1'b0));
    assign dnpc = (Ecall == 1'b0) ? ((Mret == 1'b0) ? respc : mepc) : mtvec;
 //   always@(*) begin
  //      $display("pc = %x, dnpc=%x",pc,dnpc);
  //  end
endmodule
