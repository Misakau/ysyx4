/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */

import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);

import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte wmask);

import "DPI-C" function void get_instr(input int instr);

module top(
  input clk,
  input rst,
  output [31:0] instr,
  output [63:0] pc
);
    our s;
    /////////////wires///////////////
    ////////////////////////all/////////////////////////
    wire [31:0] if_instr_o, id_instr_o, ex_instr_o, m_instr_o, wb_instr_o;
    wire [63:0] dnpc;
    wire [63:0] if_pc_o, id_pc_o, ex_pc_o, m_pc_o, wb_pc_o;
    wire id_valid_i, ex_valid_i, m_valid_i, wb_valid_i;
    wire id_en, ex_en, m_en, wb_en; 
    wire id_flush, ex_flush, m_flush, wb_flush; 
    wire id_valid_o, ex_valid_o, m_valid_o, wb_valid_o;
    wire if_block, id_block, ex_block, m_block, wb_block;
    /////////////////ID////////////////////////////////
    wire [4:0]  ex_rd_i;//ex 段输入
    wire [63:0] ex_busa_i, ex_busb_i;
    wire [63:0] ex_imm_i;
    wire [63:0] ex_csrres_i;
    wire ex_ALUSrcA_i;
    wire ex_MemToReg_i;
    wire ex_MemWen_i;
    wire ex_wen_i;
    wire ex_CsrToReg_i;
    wire [1:0] ex_ALUSrcB_i;
    wire [2:0] ex_Branch_i;
    wire [2:0] ex_MemOp_i;
    wire [4:0] ex_ALUOp_i;
    wire [1:0] ex_MulOp_i;

    wire [63:0] id_csrres_o;
    wire [4:0]  id_rd_o;//id 段输出
    wire [63:0] id_busa_o, id_busb_o;
    wire [63:0] id_imm_o;
    wire id_ALUSrcA_o;
    wire id_MemToReg_o;
    wire id_MemWen_o;
    wire id_wen_o;
    wire id_CsrToReg_o;
    wire [1:0] id_ALUSrcB_o;
    wire [2:0] id_Branch_o;
    wire [2:0] id_MemOp_o;
    wire [4:0] id_ALUOp_o;
    wire [1:0] id_MulOp_o;
    wire [2:0] id_CsrOp;
    wire id_Ecall, id_Mret, id_Csrwen;
    wire [63:0] id_dnpc;
    wire [63:0] id_busa, id_busb;
    wire [63:0] id_mtvec, id_mepc;
    wire [11:0] id_CsrId;
    /////////////IF/////////////////
    ysyx_220053_IFU my_ifu(
      .clk(clk),
      .rst(rst),
      .dnpc(id_dnpc),
      .pc(if_pc_o),
      .instr_o(if_instr_o)
    );
    assign pc = if_pc_o;
    assign instr = if_instr_o;
    assign id_en = ~(id_block | ex_block | m_block | wb_block);
    assign id_valid_i = rst;
    /////////////////////////////////
    ysyx_220053_ID_Reg ID_Reg(
      .clk(clk),
      .flush(rst),
      .valid_i(id_valid_i),
      .enable(id_en),
      .valid_o(id_valid_o),

      .pc_i(if_pc_o),
      .instr_i(if_instr_o),
      .pc_o(id_pc_o),
      .instr_o(id_instr_o)
    );
    ////////////ID///////////////////
    ysyx_220053_IDU my_idu(
      .instr_i(id_instr_o),
      .rd(id_rd_o),
      .imm(id_imm_o),
      .ALUSrcA(id_ALUSrcA_o),
      .ALUSrcB(id_ALUSrcB_o),
      .ALUOp(id_ALUOp_o),
      .Branch(id_Branch_o),
      .MemOp(id_MemOp_o),
      .MemToReg(id_MemToReg_o),
      .MemWen(id_MemWen_o),
      .MulOp(id_MulOp_o),
      .wen(id_wen_o),
      .CsrToReg(id_CsrToReg_o),
      .Ecall(id_Ecall),
      .Mret(id_Mret),
      .Csrwen(id_Csrwen),
      .CsrOp(id_CsrOp),
      .rs1(id_rs1),
      .rs2(id_rs2),
      .dnpc(id_dnpc),
      .pc(id_pc_o),
      .busa(id_busa),
      .busb(id_busb),
      .mtvec(id_mtvec),
      .mepc(id_mepc),
      .CsrId(id_CsrId)
      );
      assign id_busa_o = id_busa;
      assign id_busb_o = id_busb;
      assign ex_en = ~(ex_block | m_block | wb_block);//还未处理阻塞
      assign ex_valid_i = rst;//还未处理冒险
    /////////////////////////////
    ysyx_220053_EX_Reg EX_Reg(
//control
    .clk(clk),
    .flush(ex_flush),
    .valid_i(ex_valid_i),
    .enable(ex_en),
    .valid_o(ex_valid_o),
//data
    .pc_i(id_pc_o),
    .instr_i(id_instr_o),
    .pc_o(ex_pc_o),
    .instr_o(ex_instr_o),

    .rd_i(id_rd_o),
    .busa_i(id_busa_o),
    .busb_i(id_busb_o),
    .imm_i(id_imm_o),
    .ALUSrcA_i(id_ALUSrcA_o),
    .MemToReg_i(id_MemToReg_o),
    .MemWen_i(id_MemWen_o),
    .ALUSrcB_i(id_ALUSrcB_o),
    .Branch_i(id_Branch_o),
    .MemOp_i(id_MemOp_o),
    .ALUOp_i(id_ALUOp_o),
    .MulOp_i(id_MulOp_o),
    .wen_i(id_wen_o),
    .CsrToReg_i(id_CsrToReg_o),
    .Csrres_i(id_csrres_o),

    .rd_o(ex_rd_i),
    .busa_o(ex_busa_i),
    .busb_o(ex_busb_i),
    .imm_o(ex_imm_i),
    .ALUSrcA_o(ex_ALUSrcA_i),
    .MemToReg_o(ex_MemToReg_i),
    .MemWen_o(ex_MemWen_i),
    .ALUSrcB_o(ex_ALUSrcB_i),
    .Branch_o(ex_Branch_i),
    .MemOp_o(ex_MemOp_i),
    .ALUOp_o(ex_ALUOp_i),
    .MulOp_o(ex_MulOp_i),
    .wen_o(ex_wen_i),
    .CsrToReg_o(ex_CsrToReg_i),
    .Csrres_o(ex_csrres_i)
    );
    ////////////here/////////////
    ///////////EX////////////////
    ysyx_220053_EXU my_exu(
      .clk(clk),
      .rst(rst),
      .rd(rd),
      .busa(busa),
      .busb(busb),
      .wen(wen),
      .ALUSrcA(ALUSrcA),
      .ALUSrcB(ALUSrcB),
      .ALUOp(ALUOp),
      .Branch(Branch),
      .MemOp(MemOp),
      .MemToReg(MemToReg),
      .MemWen(MemWen),
      .MulOp(MulOp),
      .pc(pc),
      .imm(imm),
      .dnpc(dnpc),
      .Mret(Mret),
      .Ecall(Ecall),
      .Csrwen(Csrwen),
      .CsrToReg(CsrToReg),
      .CsrOp(CsrOp)
    );
    /////////////////////////////
    ysyx_220053_M_Reg M_Reg(
//control
    .clk,
    .flush,
    .valid_i,
    .enable,
    .valid_o,
//data
    .pc_i,
    .instr_i,
    .pc_o,
    .instr_o,

    .MemOp_i,
    .raddr_i,
    .MemWen_i,
    .wdata_i,
    .rdata_i,
    .rd_i,
    .wen_i,
    
    .rd_o,
    .wen_o,
    .MemOp_o,
    .raddr_o,
    .MemWen_o,
    .wdata_o,
    .rdata_o
  );
    ///////////M/////////////////
    /////////////////////////////
    ysyx_220053_WB_Reg WB_Reg(
//control
     .clk,
    .flush,
    .valid_i,
    .enable,
    .valid_o,
//data
    .pc_i,
    .instr_i,
    .pc_o,
    .instr_o,
    
    .rd_i,
    .wen_i,
    .wdata_i,
    .waddr_i,

    .rd_o,
    .wen_o,
    .wdata_o,
    .waddr_o
    );
    ///////////WB////////////////

    ///////////Regfile///////////
    ysyx_220053_RegisterFile #(5, 64) regfile(.clk(clk),
                                              .raaddr(id_rs1),
                                              .rbaddr(id_rs2),
                                              .radata(id_busa),
                                              .rbdata(id_busb),
                                              .wdata(wdata),//WB
                                              .waddr(rd),//WB
                                              .wen(is_wen)//WB
                                            );
    //////////Csr////////////////
    //Csrwen:阻塞时不能写,还没完成这里的逻辑，阻塞和冒险判断放在top里
    ysyx_220053_CSR csrfile( .clk(clk), .Csrwen(id_Csrwen), .CsrOp(id_CsrOp), .CsrId(id_CsrId), .datain(id_busa),
                             .mepc_o(id_mepc), .csrres(id_csrres_o), .mtvec_o(id_mtvec), .Ecall(id_Ecall), .epc_in(id_pc_o));
    initial begin
        $dumpfile("logs/vlt_dump.vcd");
        $dumpvars();
    end
endmodule
