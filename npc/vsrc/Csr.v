/* verilator lint_off DECLFILENAME */
/* verilator lint_off UNUSED */
/* verilator lint_off PINMISSING */
module ysyx_220053_CSR(
    input clk,
    input Csrwen, Ecall, Mret,
    input [2:0] CsrOp,
    input [11:0] CsrId,
    input [63:0] datain,
    input [63:0] epc_in,
    output [63:0] mepc_o, mtvec_o,
    output reg [63:0] csrres,
    output mstatus_MIE,
    output mie_MITE,
    input  Time_interrupt
);
/*
#define MSTATUS   0x300
MIE               0x304
#define MTVEC     0x305
#define MSCRATCH  0x340
#define MEPC      0x341
#define MCAUSE    0x342
MIP               0x344
*/

    reg [63:0] csrin;//data to be written
    /////////////////////write////////////////////
    /////////////////////mtvec////////////////////
    reg [63:0] mtvec;
    always@(posedge clk) begin
        if(CsrId == 12'h305 && Csrwen == 1'b1) begin
            mtvec <= csrin;
        end
    end

    /////////////////////mepc//////////////////////
    reg [63:0] mepc;
    always@(posedge clk) begin
        if(Ecall == 1'b1 || Time_interrupt == 1'b1) begin
            mepc <= epc_in;
        end
        else if(CsrId == 12'h341 && Csrwen == 1'b1) begin
            mepc <= csrin;
        end
    end
    /////////////////////mcause////////////////////
    reg [63:0] mcause;
    always@(posedge clk) begin
        if(Time_interrupt == 1'b1) begin
            mcause <= 64'h8000000000000007;
        end
        else if(Ecall == 1'b1) begin
            mcause <= {{60{1'b0}},4'hb};
        end
        else if(CsrId == 12'h342 && Csrwen == 1'b1) begin
            mcause <= csrin;
        end
    end
    /////////////////////mstatus///////////////////
    reg [63:0] mstatus;
    always@(posedge clk) begin
        if(Ecall == 1'b1 || Time_interrupt == 1'b1) begin
            mstatus <= {mstatus[63:13],1'b0,1'b0,mstatus[10:8],mstatus_MIE,mstatus[6:4],1'b0,mstatus[2:0]};
        end
        else if(Mret == 1'b1) begin
            mstatus <= {mstatus[63:13],1'b1,1'b1,mstatus[10:8],1'b1,mstatus[6:4],mstatus[7],mstatus[2:0]};
        end
        else if(CsrId == 12'h300 && Csrwen == 1'b1) begin
            mstatus <= csrin;
        end
        else mstatus <= 64'ha00001800;
    end
    assign mstatus_MIE = mstatus[3];
    /////////////////////mscratch///////////////////
    reg [63:0] mscratch;
    always@(posedge clk) begin
        if(CsrId == 12'h340 && Csrwen == 1'b1) begin
            mscratch <= csrin;
        end
    end
    ///////////////////mie/////////////////////////
    reg [63:0] mie;
    always@(posedge clk) begin
        if(CsrId == 12'h304 && Csrwen == 1'b1) begin
            mie <= csrin;
        end
    end
    assign mie_MITE = mie[7];
    ///////////////////mip/////////////////////////
    reg [63:0] mip;
    always@(posedge clk) begin
        if (Time_interrupt) begin
            mip <= {mip[63:8],1'b1,mip[6:0]};
        end
        else if(CsrId == 12'h344 && Csrwen == 1'b1) begin
            mip <= csrin;
        end
        else mip <= {mip[63:8],1'b0,mip[6:0]};
    end
    //////////////////////read/////////////////////
    always@(*) begin
        case(CsrId)
            12'h300:  csrres = mstatus;
            12'h304:  csrres = mie;
            12'h305:  csrres = mtvec;
            12'h340:  csrres = mscratch;
            12'h341:  csrres = mepc;
            12'h342:  csrres = mcause;
            12'h344:  csrres = mip;
            default: csrres = 0;
        endcase
    end

    always@(*) begin
        case(CsrOp)
            3'b000:  csrin = datain;
            3'b001:  csrin = csrres | datain;
            3'b010:  csrin = csrres & (~datain);
            default: csrin = 0;
        endcase
    end
    assign mtvec_o = mtvec;
    assign mepc_o = mepc;
endmodule
