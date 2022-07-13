/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_EXU(
    input clk, rst,
    input [4:0] rd,
    input [4:0] rs1,
    input [4:0] rs2,
    input wen, ALUSrcA, MemToReg, MemWen, Mret, Epc, Csrwen, CsrToReg,
    input [2:0] CsrOp,
    input [1:0] ALUSrcB,
    input [4:0] ALUOp,
    input [2:0] Branch,
    input [2:0] MemOp,
    input [1:0] MulOp,
    input [63:0] pc,
    input [63:0] imm,
    output [63:0] dnpc
);
    wire zero;
    wire [63:0] busa, busb, regsin, mdata, wdata;
    wire [63:0] res;
    wire [63:0] alu_inA, alu_inB;
    wire is_wen;
    assign is_wen = wen & (~rst);
    assign alu_inA = (ALUSrcA == 1'b1) ? busa : pc;
    assign alu_inB = (ALUSrcB == 2'b01) ? imm : ((ALUSrcB == 2'b00) ? busb : 4);
    assign regsin = (MemToReg == 1'b0) ? res : mdata;
    assign wdata = (CsrToReg == 0) ? regsin : csrres;
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(clk),
                                              .raaddr(rs1),
                                              .rbaddr(rs2),
                                              .radata(busa),
                                              .rbdata(busb),
                                              .wdata(wdata),
                                              .waddr(rd),
                                              .wen(is_wen)
                                            );
    wire [63:0] mepc;
    wire [63:0] csrres;
//csr
//Epc, Csrwen, CsrOp,
//可以用DPI-C来实现ecall?
    wire [11:0] CsrId;
    assign CsrId = imm[11:0];
    wire [63:0] datain;
    assign datain = (Epc == 0) ? busa : pc;
    ysyx_220053_CSR csrfile( .clk(clk), .Csrwen(Csrwen), .CsrOp(CsrOp), .CsrId(CsrId), .datain(datain), .mepc(mepc), .csrres(csrres));
    ysyx_220053_ALU alu64(.inputa(alu_inA), .inputb(alu_inB), .ALUOp(ALUOp), .MulOp(MulOp), .result(res), .zero(zero));
        //busa + immI; //addi
    ysyx_220053_Mem mem(.MemOp(MemOp), .raddr(res), .MemWen(MemWen), .wdata(busb), .rdata(mdata));
    wire [63:0] addr_res;
    ysyx_220053_NexAddr nextaddr(.mepc(mepc), .Mret(Mret), .Zero(zero), .res0(res[0]), .Branch(Branch), .pc(pc), .imm(imm), .busa(busa), .dnpc(addr_res));
    assign dnpc = {addr_res[63:1], 1'b0};
endmodule

module ysyx_220053_NexAddr(
    input Zero, res0,
    input [2:0] Branch,
    input [63:0] pc, imm, busa, mepc,
    input Mret,
    output [63:0] dnpc
);
    reg NexA, NexB;//A:0:pc,1:busa //B: 0:4, 1:imm
    wire [63:0] SrcA, SrcB;
    always@(*) begin
        case(Branch)
            3'b001: begin NexA = 0; NexB = 1; end
            3'b010: begin NexA = 1; NexB = 1; end
            3'b100: begin NexA = 0; NexB = Zero; end
            3'b101: begin NexA = 0; NexB = ~Zero; end
            3'b110: begin NexA = 0; NexB = res0; end
            3'b111: begin NexA = 0; NexB = Zero | (~res0); end
            default: begin NexA = 0; NexB = 0; end
        endcase
    end
    assign SrcA = (NexA == 0) ? pc : busa;
    assign SrcB = (NexB == 0) ? 4 : imm;
    wire [63:0] respc;
    ysyx_220053_Adder64 pcadder(.result(respc), .x(SrcA), .y(SrcB), .sub(0));
    assign dnpc = (Mret == 0) ? respc : mepc;
 //   always@(*) begin
  //      $display("pc = %x, dnpc=%x",pc,dnpc);
  //  end
endmodule

module ysyx_220053_CSR(
    input clk,
    input Csrwen, 
    input [2:0] CsrOp,
    input [11:0] CsrId,
    input [63:0] datain,
    output [63:0] mepc, csrres
);
    reg [63:0] csrin;
    always@(*) begin
        case(CsrOp)
            3'b000:  csrin = datain;
            3'b001:  csrin = csrin | datain;
            3'b010:  csrin = csrin & (~datain);
            default: csrin = 0;
        endcase
    end

    ysyx_220053_CSRFile csrfile(.clk(clk),
                                .raaddr(CsrId),
                                .rbaddr(12'h341),//mepc
                                .radata(csrres),
                                .rbdata(mepc),
                                .wdata(csrin),
                                .waddr(CsrId),
                                .wen(Csrwen)
                                );
endmodule
