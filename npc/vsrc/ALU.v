/* verilator lint_off DECLFILENAME */
/* verilator lint_off PINMISSING */
/* verilator lint_off UNUSED */
module ysyx_220053_ALU(
    input clk,
    input rst,
    input mwb_block,
    output alu_busy,

    input [63:0] inputa, inputb,
    input [4:0] ALUOp,
    input [1:0] MulOp,
    output zero,
    output reg [63:0] result
);

    wire SUBctr, SIGctr, ALctr, SFTctr, Wctr;
    wire [3:0] OPctr;
    wire [63:0] adderres;
    wire [63:0] res0, res1, res2, res3, res4, res5, res6;
    reg  [63:0] res7, res8, res9;
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
            2'b00: mulres = {{64{1'b0}},inputa} * {{64{1'b0}},inputb};
            2'b01: mulres = {{64{1'b0}},inputa} * {{64{1'b0}},inputb};
            2'b10: mulres = $signed($signed({{64{inputa[63]}},inputa}) * {{64{1'b0}},inputb});
            default: mulres = $signed($signed({{64{inputa[63]}},inputa}) * $signed({{64{inputb[63]}},inputb}));
        endcase
    end

    always@(*) begin
        if(MulOp == 2'b00) begin
            res7 = (Wctr == 1'b0) ? mulres[63:0] : {{32{mulresW[31]}},mulresW[31:0]};
        end
        else res7 = mulres[127:64];
    end
//div & rem
    wire op_div = OPctr[3];
    wire [63:0] dividend, divisor, quotient, remainder;

    assign dividend = (Wctr == 1'b0) ? inputa : {{32{SIGctr & inputa[31]}},inputa[31:0]};
    assign divisor  = (Wctr == 1'b0) ? inputb : {{32{SIGctr & inputb[31]}},inputb[31:0]};

    reg [63:0] quotient_r, remainder_r;
    reg  div_doing;
    wire div_ready, out_valid, div_valid;
    ysyx_220053_divu divu(
        .clk(clk),
        .rst(rst),
        .dividend(dividend),
        .divisor(divisor),
        .div_valid(div_valid),
        .div_signed(SIGctr),
        .flush(1'b0),
        .div_ready(div_ready),
        .out_valid(out_valid),
        .quotient(quotient),
        .remainder(remainder)
    );
    //假设新的op_div = 0
    // out_valid = 1 -> 则alu_busy = 0，div_valid = 0，准备保存结果，div_doing准备拉低,新的op_div准备进入
    //                  该周期结束后应当有新的op_div进入，所以若此时m/wb_block = 1，
    //                  则下个周期alu_busy = 0，div_valid = 0；
    //out_valid = 0 -> 新的op_div进来，保存的结果出去，div_ready拉高, alu_busy = 0, div_valid = 0;
    //                  若M.WB阻塞，则新的op_div进不来, alu_busy = 1, div_valid = 1;
    //                  也就是在这个周期开始前enable为0
    //                  ->加入m/wb_block控制。
    //如果下个周期新指令进不来，就说明下个周期alu_busy,div_valid都是低
    reg old_div;
    assign div_valid = op_div && !div_doing && !out_valid && !old_div;
    assign alu_busy = op_div && !out_valid && !old_div;
    always @(posedge clk) begin
        if (rst || !mwb_block) begin
            old_div <= 1'b0;
        end
        else if(out_valid && mwb_block) begin
            old_div <= 1'b1;
        end
    end
    always @(posedge clk) begin
        if (rst) begin
            div_doing <= 1'b0;
            quotient_r <= 64'b0;
            remainder_r <= 64'b0;
        end
        /*除法结果输出后需要将div_doing置零*/
        else if (out_valid) begin
            div_doing <= 1'b0;
            quotient_r <= quotient;
            remainder_r <= remainder;
        end
        /*握手成功后，也就是除法器接受输入的数据后需要把div_doing置高*/
        else if(div_valid && div_ready) begin
            div_doing <= 1'b1;
        end
    end
    assign res8 = (!mwb_block && old_div) ? quotient_r : quotient;
    assign res9 = (!mwb_block && old_div) ? remainder_r : remainder;
/*
    wire [63:0] divres;
    wire [31:0] divresW;
    assign divres =(OPctr == 4'd8) ? ( (SIGctr == 1'b0) ? inputa / inputb : $signed($signed(inputa) / $signed(inputb))) : 0; 
    assign divresW =(OPctr == 4'd8) ? ( (SIGctr == 1'b0) ? inputa[31:0] / inputb[31:0] : $signed($signed(inputa[31:0]) / $signed(inputb[31:0]))) : 0; 
    assign res8 = (Wctr == 1'b0) ? divres : {{32{divresW[31]}}, divresW[31:0]};

    wire [63:0] remres;
    wire [31:0] remresW;
    assign remres =(OPctr == 4'd9) ? ( (SIGctr == 1'b0) ? inputa % inputb : $signed($signed(inputa) % $signed(inputb))) : 0; 
    assign remresW =(OPctr == 4'd9) ? ( (SIGctr == 1'b0) ? inputa[31:0] % inputb[31:0] : $signed($signed(inputa[31:0]) % $signed(inputb[31:0]))) : 0; 
    assign res9 = (Wctr == 1'b0) ? remres : {{32{remresW[31]}}, remresW[31:0]};
*/
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

module ysyx_220053_ALU_lite(
    input [63:0] inputa, inputb,
    input [4:0] ALUOp,
    output zero,
    output reg [63:0] result
);

    wire SUBctr, SIGctr, ALctr, SFTctr, Wctr;
    wire [3:0] OPctr;
    wire [63:0] adderres;
    wire [63:0] res0, res6;
    ///adder,and,or,xor,shift,inputb,cmp
    wire [63:0] adderb;
    assign adderb = inputb ^ {64{SUBctr}};
    wire CF, SF, OF, ZF;
    ysyx_220053_ALUSig alusig(.ALUOp(ALUOp), .SUBctr(SUBctr), .SIGctr(SIGctr), .ALctr(ALctr), .SFTctr(SFTctr), .OPctr(OPctr), .Wctr(Wctr));
    ysyx_220053_Adder64 adder(.result(adderres),.x(inputa),.y(adderb),.sub(SUBctr),.CF(CF),.OF(OF),.SF(SF),.ZF(ZF));
    assign res0 = (Wctr == 1'b0) ? adderres : {{32{adderres[31]}}, adderres[31:0]};

    assign res6 = {{63{1'b0}},{(SIGctr == 1'b1) ? OF ^ SF : CF}}; //cmp,not finish

    always@(*) begin
        case(OPctr)
         0: result = res0;
         default: result = res6;
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
