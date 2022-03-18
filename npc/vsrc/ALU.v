/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_ALU(
    input [63:0] inputa, inputb,
    input [4:0] ALUOp,
    output zero,
    output reg [63:0] result
);

    wire SUBctr, SIGctr, ALctr, SFTctr, Wctr;
    wire [2:0] OPctr;
    wire [63:0] adderres;
    wire [63:0] res0, res1, res2, res3, res4, res5, res6, res7;
    ///adder,and,or,xor,shift,inputb,cmp
    wire [63:0] adderb;
    assign adderb = inputb ^ {64{SUBctr}};
    wire CF, SF, OF, ZF;
    ysyx_220053_ALUSig alusig(.ALUOp(ALUOp), .SUBctr(SUBctr), .SIGctr(SIGctr), .ALctr(ALctr), .SFTctr(SFTctr), .OPctr(OPctr), .Wctr(Wctr));
    ysyx_220053_Adder64 adder(.result(adderres),.x(inputa),.y(adderb),.sub(SUBctr),.CF(CF),.OF(OF),.SF(SF),.ZF(ZF));
    assign res0 = (Wctr == 1'b0) ? adderres : {{32{adderres[31]}}, adderres[31:0]};
    assign res1 = inputa & inputb;
    assign res2 = inputa | inputb;
    assign res3 = inputa ^ inputb;
    wire [31:0] sllWres, srWres, lower32;
    assign lower32 = inputa[31:0];
    wire [5:0] shamt = inputb[5:0];//not consider the valid bit
    wire [4:0] shamtW = inputb[4:0];
    wire [63:0] srres, shiftL, shiftR;
    
    assign sllWres = lower32 << shamtW;
    assign srWres = (ALctr == 1'b0) ? lower32 >> shamtW : $signed(lower32 >>> shamtW);
    assign shiftL = (Wctr == 1'b0) ? (inputa << shamt) : {{32{sllWres[31]}}, sllWres[31:0]};
    assign srres = (ALctr == 1'b0) ? inputa >> shamt : $signed(inputa >>> shamt);
    assign shiftR = (Wctr == 1'b0) ? srres : {{32{srWres[31]}}, srWres[31:0]};
    
    assign res4 = (SFTctr == 1'b0) ? shiftL : shiftR;//not finish ysyx_220053_Shifter shifter(.dout(res4),.din(inputa),.shamt(shamt),.AL(ALctr),.LR(SFTctr));
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
    input [4:0] ALUOp,
    output reg SUBctr,SIGctr,ALctr,SFTctr,Wctr,
    output reg [2:0] OPctr
);
    always@(*) begin
        case(ALUOp)
            5'b00000: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b000; end
            5'b10000: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 3'b000; end

            5'b00001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b100; end
            5'b10001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 3'b100; end

            5'b00010: begin SUBctr = 1; SIGctr = 1; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b110; end
            5'b00011: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b110; end
            5'b00100: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b011; end
            
            5'b00101: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 1; Wctr = 0; OPctr = 3'b100; end
            5'b10101: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 1; Wctr = 1; OPctr = 3'b100; end

            5'b00110: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b010; end
            5'b00111: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b001; end

            5'b01000: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b000; end
            5'b11000: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 3'b000; end

            5'b01101: begin SUBctr = 0; SIGctr = 0; ALctr = 1; SFTctr = 1; Wctr = 0; OPctr = 3'b100; end
            5'b11101: begin SUBctr = 0; SIGctr = 0; ALctr = 1; SFTctr = 1; Wctr = 1; OPctr = 3'b100; end

            5'b01111: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b101; end
            

            default: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 3'b000; end
        endcase
    end
endmodule
