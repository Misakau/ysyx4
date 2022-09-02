/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_ID_Reg(
//control
    input clk,
    input flush,
    input valid_i,
    input enable,
    output valid_o,
//data
    input  [63:0] pc_i,
    input  [31:0] instr_i,
    output [63:0] pc_o,
    output [31:0] instr_o
);
    reg valid_r;
    reg [31:0] instr_r;
    reg [63:0] pc_r;
    //control_r
    always@(posedge clk) begin
        if(flush) begin
            valid_r <= 1'b0;
        end
        else if(enable) valid_r <= valid_i;
    end
    //data_r
    always@(posedge clk) begin
        if(flush) begin
            instr_r <= 32'b0;
            pc_r    <= 64'b0;
        end
        else if(enable) begin
            instr_r <= instr_i;
            pc_r    <= pc_i;
        end
    end
    assign instr_o = instr_r;
    assign pc_o    = pc_r;
    assign valid_o = valid_r;
endmodule

module ysyx_220053_EX_Reg(
//control
    input clk,
    input flush,
    input valid_i,
    input enable,
    output valid_o,
//data
    input  [63:0] pc_i,
    input  [31:0] instr_i,
    output [63:0] pc_o,
    output [31:0] instr_o,

    input [4:0]  rd_i,
    input [63:0] busa_i, busb_i,
    input [63:0] imm_i,
    input ALUSrcA_i, MemToReg_i, MemWen_i,
    input [1:0] ALUSrcB_i,
    input [2:0] MemOp_i,
    input [4:0] ALUOp_i,
    input [1:0] MulOp_i,
    input wen_i,
    input CsrToReg_i,
    input [63:0] Csrres_i,
    input Ebreak_i,

    output Ebreak_o,
    output [63:0] Csrres_o,
    output [4:0] rd_o,
    output [63:0] busa_o, busb_o,
    output wen_o, ALUSrcA_o, MemToReg_o, MemWen_o, CsrToReg_o,
    output [1:0] ALUSrcB_o,
    output [4:0] ALUOp_o,
    output [2:0] MemOp_o,
    output [1:0] MulOp_o,
    output [63:0] imm_o

    ,input  [63:0] dnpc_i,
    output reg [63:0] dnpc_o
);
    reg valid_r;
    reg [31:0] instr_r;
    reg [63:0] pc_r;
    reg [4:0]  rd_r;
    reg [63:0] busa_r, busb_r;
    reg [63:0] imm_r;
    reg ALUSrcA_r;
    reg MemToReg_r;
    reg MemWen_r;
    reg wen_r;
    reg CsrToReg_r;
    reg [1:0] ALUSrcB_r;
    reg [2:0] MemOp_r;
    reg [4:0] ALUOp_r;
    reg [1:0] MulOp_r;
    reg [63:0] Csrres_r;
    reg Ebreak_r;
    //control_r
    always@(posedge clk) begin
        if(flush)begin
            valid_r <= 1'b0;
        end
        else if(enable) valid_r <= valid_i;
    end
    //data_r
    always@(posedge clk) begin
        if(flush)begin
            instr_r    <= 32'b0;
            pc_r       <= 64'b0;
            rd_r       <= 5'b0;
            busa_r     <= 64'b0;
            busb_r     <= 64'b0;
            imm_r      <= 64'b0;
            ALUSrcA_r  <= 1'b0;
            MemToReg_r <= 1'b0;
            MemWen_r   <= 1'b0;
            wen_r      <= 1'b0;
            CsrToReg_r <= 1'b0;
            ALUSrcB_r  <= 2'b0;
            MemOp_r    <= 3'b0;
            ALUOp_r    <= 5'b0;
            MulOp_r    <= 2'b0;
            Csrres_r   <= 64'b0;
            Ebreak_r   <= 1'b0;

            dnpc_o <=0;
        end
        else if(enable)begin
            instr_r    <= instr_i;
            pc_r       <= pc_i;
            rd_r       <= rd_i;
            busa_r      <= busa_i;
            busb_r      <= busb_i;
            imm_r      <= imm_i;
            ALUSrcA_r  <= ALUSrcA_i;
            MemToReg_r <= MemToReg_i;
            MemWen_r   <= MemWen_i;
            wen_r      <= wen_i;
            CsrToReg_r <= CsrToReg_i;
            ALUSrcB_r  <= ALUSrcB_i;
            MemOp_r    <= MemOp_i;
            ALUOp_r    <= ALUOp_i;
            MulOp_r    <= MulOp_i;
            Csrres_r   <= Csrres_i;
            Ebreak_r   <= Ebreak_i;

            dnpc_o <=dnpc_i;
        end
    end
    assign instr_o = instr_r;
    assign pc_o    = pc_r;
    assign valid_o = valid_r;
    assign rd_o    = rd_r;
    assign busa_o    = busa_r;
    assign busb_o    = busb_r;
    assign wen_o = wen_r;
    assign ALUSrcA_o = ALUSrcA_r;
    assign MemToReg_o = MemToReg_r;
    assign MemWen_o = MemWen_r;
    assign CsrToReg_o = CsrToReg_r;
    assign ALUSrcB_o = ALUSrcB_r;
    assign ALUOp_o = ALUOp_r;
    assign MemOp_o = MemOp_r;
    assign MulOp_o = MulOp_r;
    assign imm_o = imm_r;
    assign Csrres_o = Csrres_r;
    assign Ebreak_o = Ebreak_r;
endmodule

module ysyx_220053_M_Reg(
//control
    input clk,
    input flush,
    input valid_i,
    input enable,
    output valid_o,
//data
    input  [63:0] pc_i,
    input  [31:0] instr_i,
    output [63:0] pc_o,
    output [31:0] instr_o,

    input [2:0]  MemOp_i,
    input [63:0] raddr_i,
    input MemWen_i,
    input [63:0] wdata_i,
    input [63:0] Csrres_i,
    input [4:0]  rd_i,
    input wen_i, MemToReg_i, CsrToReg_i,
    input Ebreak_i,

    output Ebreak_o,
    output [4:0] rd_o,
    output wen_o, MemToReg_o, CsrToReg_o,
    output [2:0]  MemOp_o,
    output [63:0] raddr_o,
    output MemWen_o,
    output [63:0] wdata_o,
    output [63:0] Csrres_o


    ,input  [63:0] dnpc_i,
    output reg [63:0] dnpc_o
);
    reg valid_r;
    reg [31:0] instr_r;
    reg [63:0] pc_r;
    reg [2:0]  MemOp_r;
    reg [63:0] raddr_r;
    reg MemWen_r;
    reg [63:0] wdata_r;
    reg [63:0] Csrres_r;
    reg [4:0]  rd_r;
    reg wen_r;
    reg MemToReg_r;
    reg CsrToReg_r;
    reg Ebreak_r;
    //control_r
    always@(posedge clk) begin
        if(flush)begin
            valid_r <= 1'b0;
        end
        else if(enable) valid_r <= valid_i;
    end
    //data_r
    always@(posedge clk) begin
        if(flush)begin
            instr_r  <= 32'b0;
            pc_r     <= 64'b0;
            MemOp_r  <= 3'b0;
            raddr_r  <= 64'b0;
            MemWen_r <= 1'b0;
            wdata_r  <= 64'b0; 
            Csrres_r  <= 64'b0;
            rd_r     <= 5'b0;
            wen_r    <= 1'b0;
            MemToReg_r <= 1'b0;
            CsrToReg_r <= 1'b0;
            Ebreak_r  <= 1'b0;

            dnpc_o <= 0;
        end
        else if(enable)begin
            instr_r  <= instr_i;
            pc_r     <= pc_i;
            MemOp_r  <= MemOp_i;
            raddr_r  <= raddr_i;
            MemWen_r <= MemWen_i;
            wdata_r  <= wdata_i; 
            Csrres_r  <= Csrres_i;
            rd_r     <= rd_i;
            wen_r    <= wen_i;
            MemToReg_r <= MemToReg_i;
            CsrToReg_r <= CsrToReg_i;
            Ebreak_r <= Ebreak_i;

            dnpc_o <= dnpc_i;
        end
    end
    assign instr_o = instr_r;
    assign pc_o    = pc_r;
    assign valid_o = valid_r;
    assign MemOp_o = MemOp_r;
    assign raddr_o = raddr_r;
    assign MemWen_o = MemWen_r;
    assign wdata_o = wdata_r;
    assign Csrres_o = Csrres_r;
    assign rd_o    = rd_r;
    assign wen_o = wen_r;
    assign MemToReg_o = MemToReg_r;
    assign CsrToReg_o = CsrToReg_r;
    assign Ebreak_o = Ebreak_r;
endmodule

module ysyx_220053_WB_Reg(
//control
    input clk,
    input flush,
    input valid_i,
    input enable,
    output valid_o,
//data
    input  [63:0] pc_i,
    input  [31:0] instr_i,
    output [63:0] pc_o,
    output [31:0] instr_o,
    
    input  wen_i,
    input  [63:0] wdata_i,
    input  [4:0] waddr_i,
    input Ebreak_i,

    output Ebreak_o,
    output wen_o,
    output [63:0] wdata_o,
    output [4:0] waddr_o

    ,input  [63:0] dnpc_i,
    output reg [63:0] dnpc_o
);
    reg valid_r;
    reg [31:0] instr_r;
    reg [63:0] pc_r;
    reg wen_r;
    reg [63:0] wdata_r;
    reg [4:0] waddr_r;
    reg Ebreak_r;
    //control_r
    always@(posedge clk) begin
        if(flush)begin
            valid_r <= 1'b0;
        end
        else if(enable) valid_r <= valid_i;
    end
    //data_r
    always@(posedge clk) begin
        if(flush)begin
            instr_r <= 32'b0;
            pc_r    <= 64'b0;
            wen_r   <= 1'b0;
            wdata_r <= 64'b0;
            waddr_r <= 5'b0;
            Ebreak_r <= 1'b0;

            dnpc_o <= 0;
        end
        else if(enable)begin
            instr_r <= instr_i;
            pc_r    <= pc_i;
            wen_r   <= wen_i;
            wdata_r <= wdata_i;
            waddr_r <= waddr_i;
            Ebreak_r <= Ebreak_i;

            dnpc_o <= dnpc_i;
        end
    end
    assign instr_o = instr_r;
    assign pc_o    = pc_r;
    assign valid_o = valid_r;
    assign wen_o   = wen_r;
    assign wdata_o = wdata_r;
    assign waddr_o = waddr_r;
    assign Ebreak_o = Ebreak_r;
endmodule
