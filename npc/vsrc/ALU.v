/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_ALU(
    input [63:0] inputa, inputb,
    input [4:0] ALUOp,
    input [1:0] MulOp,
    output zero,
    output reg [63:0] result
);

    wire SUBctr, SIGctr, ALctr, SFTctr, Wctr;
    wire [3:0] OPctr;
    wire [63:0] adderres;
    wire [63:0] res0, res1, res2, res3, res4, res5, res6, res7, res8, res9;
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
 //shift   
    assign sllWres = lower32 << shamtW;
    assign srWres = (ALctr == 1'b0) ? lower32 >> shamtW : $signed($signed(lower32) >>> shamtW);
    assign shiftL = (Wctr == 1'b0) ? (inputa << shamt) : {{32{sllWres[31]}}, sllWres[31:0]};
    assign srres = (ALctr == 1'b0) ? inputa >> shamt : $signed($signed(inputa) >>> shamt);
    assign shiftR = (Wctr == 1'b0) ? srres : {{32{srWres[31]}}, srWres[31:0]};
    
    assign res4 = (SFTctr == 1'b0) ? shiftL : shiftR;//not finish ysyx_220053_Shifter shifter(.dout(res4),.din(inputa),.shamt(shamt),.AL(ALctr),.LR(SFTctr));
    assign res5 = inputb;
    assign res6 = {{63{1'b0}},{(SIGctr == 1'b1) ? OF ^ SF : CF}}; //cmp,not finish
//mul
    reg [127:0] mulres;
    wire [63:0] mulresW;
    assign mulresW = inputa[31:0] * inputb[31:0];
    always@(*) begin
        case(MulOp)
            2'b00: mulres = inputa * inputb;
            2'b01: mulres = inputa * inputb;
            2'b10: mulres = $signed($signed(inputa) * inputb);
            default: mulres = $signed($signed(inputa) * $signed(inputb));
        endcase
    end

    always@(*) begin
        if(MulOp == 2'b00) begin
            res7 = (Wctr == 1'b0) ? mulres[63:0] : {{32{mulresW[31]}},mulresW[31:0]};
        end
        else res7 = mulres[127:64];
    end
//div
    wire [63:0] divres;
    wire [31:0] divresW;
    assign divres =(OPctr == 8) ? ( (SIGctr == 1'b0) ? inputa / inputb : $signed($signed(inputa) / $signed(inputb))) : 0; 
    assign divresW =(OPctr == 8) ? ( (SIGctr == 1'b0) ? inputa[31:0] / inputb[31:0] : $signed($signed(inputa[31:0]) / $signed(inputb[31:0]))) : 0; 
    assign res8 = (Wctr == 1'b0) ? divres : {{32{divresW[31]}}, divresW[31:0]};
//rem
    wire [63:0] remres;
    wire [31:0] remresW;
    assign remres =(OPctr == 9) ? ( (SIGctr == 1'b0) ? inputa % inputb : $signed($signed(inputa) % $signed(inputb))) : 0; 
    assign remresW =(OPctr == 9) ? ( (SIGctr == 1'b0) ? inputa[31:0] % inputb[31:0] : $signed($signed(inputa[31:0]) % $signed(inputb[31:0]))) : 0; 
    assign res9 = (Wctr == 1'b0) ? remres : {{32{remresW[31]}}, remresW[31:0]};
    
    always@(*) begin
        case(OPctr)
         0: result = res0;
         1: result = res1;
         2: result = res2;
         3: result = res3;
         4: result = res4;
         5: result = res5;
         6: result = res6;
         7: result = res7;
         8: result = res8;
         default: result = res9;
        endcase
    end
    assign zero = ZF;
endmodule

module ysyx_220053_ALUSig(
    input [4:0] ALUOp,
    output reg SUBctr,SIGctr,ALctr,SFTctr,Wctr,
    output reg [3:0] OPctr
);
    always@(*) begin
        case(ALUOp)
            5'b00000: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0000; end
            5'b10000: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b0000; end

            5'b00001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0100; end
            5'b10001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b0100; end

            5'b00010: begin SUBctr = 1; SIGctr = 1; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0110; end
            5'b00011: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0110; end
            5'b00100: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0011; end
            
            5'b00101: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 1; Wctr = 0; OPctr = 4'b0100; end
            5'b10101: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 1; Wctr = 1; OPctr = 4'b0100; end

            5'b00110: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0010; end
            5'b00111: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0001; end

            5'b01000: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0000; end
            5'b11000: begin SUBctr = 1; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b0000; end

            5'b01101: begin SUBctr = 0; SIGctr = 0; ALctr = 1; SFTctr = 1; Wctr = 0; OPctr = 4'b0100; end
            5'b11101: begin SUBctr = 0; SIGctr = 0; ALctr = 1; SFTctr = 1; Wctr = 1; OPctr = 4'b0100; end

            5'b01111: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0101; end

            5'b01001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0111; end
            5'b01010: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b1000; end
            5'b01011: begin SUBctr = 0; SIGctr = 1; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b1000; end
            5'b01100: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b1001; end
            5'b01110: begin SUBctr = 0; SIGctr = 1; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b1001; end
            
            5'b11001: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b0111; end
            5'b11010: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b1000; end
            5'b11011: begin SUBctr = 0; SIGctr = 1; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b1000; end
            5'b11100: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b1001; end
            5'b11110: begin SUBctr = 0; SIGctr = 1; ALctr = 0; SFTctr = 0; Wctr = 1; OPctr = 4'b1001; end

            default: begin SUBctr = 0; SIGctr = 0; ALctr = 0; SFTctr = 0; Wctr = 0; OPctr = 4'b0000; end
        endcase
    end
endmodule
