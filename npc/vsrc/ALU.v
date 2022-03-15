/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_ALU(
    input [63:0] inputa, inputb,
    input [3:0] ALUOp,
    output zero,
    output reg [63:0] result
);

    wire SUBctr, SIGctr, ALctr, SFTctr;
    wire [2:0] OPctr;
    wire [63:0] res0, res1, res2, res3, res4, res5, res6, res7;
    ///adder,and,or,xor,shift,inputb,cmp
    wire [63:0] adderb;
    assign adderb = inputb ^ {64{SUBctr}};
    wire CF, SF, OF, ZF;
    ysyx_220053_ALUSig alusig(.ALUOp(ALUOp), .SUBctr(SUBctr), .SIGctr(SIGctr), .ALctr(ALctr), .SFTctr(SFTctr), .OPctr(OPctr));
    ysyx_220053_Adder64 adder1(.result(res0),.x(inputa),.y(adderb),.sub(SUBctr),.CF(CF),.OF(OF),.SF(SF),.ZF(ZF));
    
    assign res1 = inputa & inputb;
    assign res2 = inputa | inputb;
    assign res3 = inputa ^ inputb;
    wire [5:0] shamt = inputb[5:0];
    ysyx_220053_Shifter shifter(.dout(res4),.din(inputa),.shamt(shamt),.AL(ALctr),.LR(SFTctr));
    assign res5 = inputb;
    assign res6 = {{63{1'b0}},{(SIGctr == 1'b1) ? OF ^ SF : CF}}; //cmp,not finish
    assign res7 = 0;
    always@(*) begin
        case(OPctr)
         0: result = res0;
         1: result = res1;
         2: result = res2;
         3: result = res3;
         4: result = res4;
         5: result = res5;
         6: result = res6;
         default: result = res7;
        endcase
    end
    assign zero = ZF;
endmodule
module ysyx_220053_ALUSig(
    input [3:0] ALUOp,
    output reg SUBctr,SIGctr,ALctr,SFTctr,
    output reg [2:0] OPctr
);
    always@(*) begin
        case(ALUOp)
            4'b0000: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b000; end
            4'b0001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b100; end
            4'b0010: begin SUBctr = 1; SIGctr = 1; ALctr = 0; SFTctr = 0; OPctr = 3'b110; end
            4'b0011: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b110; end
            4'b0100: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b011; end
            4'b0101: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 1; OPctr = 3'b100; end
            4'b0110: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b010; end
            4'b0111: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b001; end
            4'b1000: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b000; end
            4'b1101: begin SUBctr = 0; SIGctr = 0; ALctr = 1; SFTctr = 1; OPctr = 3'b100; end
            4'b1111: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b101; end
            default: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; OPctr = 3'b000; end
        endcase
    end
endmodule
