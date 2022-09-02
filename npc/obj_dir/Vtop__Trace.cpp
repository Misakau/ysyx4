// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);
void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
        Vtop___024root__traceChgSub1((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp135;
    VlWide<5>/*159:0*/ __Vtemp137;
    VlWide<5>/*159:0*/ __Vtemp138;
    VlWide<5>/*159:0*/ __Vtemp139;
    VlWide<5>/*159:0*/ __Vtemp140;
    VlWide<5>/*159:0*/ __Vtemp141;
    VlWide<5>/*159:0*/ __Vtemp143;
    VlWide<5>/*159:0*/ __Vtemp144;
    VlWide<5>/*159:0*/ __Vtemp145;
    VlWide<5>/*159:0*/ __Vtemp146;
    VlWide<5>/*159:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp151;
    VlWide<3>/*95:0*/ __Vtemp152;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->top__DOT__ID_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+1,(vlSelf->top__DOT__EX_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+2,(vlSelf->top__DOT__M_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+3,(vlSelf->top__DOT__WB_Reg__DOT__instr_r),32);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__ID_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__EX_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__M_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__WB_Reg__DOT__pc_r),64);
            tracep->chgBit(oldp+12,(((IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__load_use)))));
            tracep->chgBit(oldp+13,(((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__alu_busy)))));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__M_Reg__DOT__valid_r));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__id_en));
            tracep->chgBit(oldp+16,((1U & (~ (IData)(vlSelf->top__DOT__alu_busy)))));
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__EX_Reg__DOT__valid_r));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__WB_Reg__DOT__valid_r));
            tracep->chgBit(oldp+20,(vlSelf->top__DOT__load_use));
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__alu_busy));
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__id_csrres_o),64);
            tracep->chgCData(oldp+24,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+25,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+26,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__id_imm_o),64);
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__id_ALUSrcA_o));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__id_MemToReg_o));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__id_MemWen_o));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__id_wen_o));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__id_CsrToReg_o));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__id_Ebreak_o));
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__id_ALUSrcB_o),2);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__id_MemOp_o),3);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__id_ALUOp_o),5);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__id_MulOp_o),2);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__id_CsrOp),3);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__id_Ecall));
            tracep->chgBit(oldp+41,(vlSelf->top__DOT__id_Mret));
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__id_Csrwen));
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__csrfile__DOT__mtvec),64);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__csrfile__DOT__mepc),64);
            tracep->chgSData(oldp+47,(vlSelf->top__DOT__id_CsrId),12);
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__EX_Reg__DOT__rd_r),5);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__EX_Reg__DOT__busa_r),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__EX_Reg__DOT__busb_r),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__EX_Reg__DOT__imm_r),64);
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__EX_Reg__DOT__Csrres_r),64);
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__EX_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__EX_Reg__DOT__MemWen_r));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__EX_Reg__DOT__wen_r));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__EX_Reg__DOT__Ebreak_r));
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r),2);
            tracep->chgCData(oldp+64,(vlSelf->top__DOT__EX_Reg__DOT__MemOp_r),3);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r),5);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r),2);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__my_exu__DOT__res),64);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__M_Reg__DOT__MemOp_r),3);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__M_Reg__DOT__raddr_r),64);
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__M_Reg__DOT__MemWen_r));
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__M_Reg__DOT__wdata_r),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__M_Reg__DOT__Csrres_r),64);
            tracep->chgCData(oldp+77,(vlSelf->top__DOT__M_Reg__DOT__rd_r),5);
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__M_Reg__DOT__wen_r));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__M_Reg__DOT__Ebreak_r));
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__m_rfdata_o),64);
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__WB_Reg__DOT__wen_r));
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__WB_Reg__DOT__wdata_r),64);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__WB_Reg__DOT__waddr_r),5);
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+89,(vlSelf->top__DOT__id_use_rd));
            tracep->chgBit(oldp+90,(((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                     & (IData)(vlSelf->top__DOT__EX_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+91,(((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                     & (IData)(vlSelf->top__DOT__M_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+92,(((IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r) 
                                     & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+93,(((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r))) 
                                      | ((IData)(vlSelf->top__DOT__id_m_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))) 
                                     | ((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgBit(oldp+94,(((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                            >> 0x14U)) 
                                          == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r))) 
                                      | ((IData)(vlSelf->top__DOT__id_m_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))) 
                                     | ((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgCData(oldp+95,((0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+96,((0x7fU & vlSelf->top__DOT__EX_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+97,((0x7fU & vlSelf->top__DOT__M_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+98,((0x7fU & vlSelf->top__DOT__WB_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+99,((7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+100,((vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__id_ex_hazard));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__id_m_hazard));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__id_wb_hazard));
            tracep->chgBit(oldp+104,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                       | (IData)(vlSelf->top__DOT__id_m_hazard)) 
                                      | (IData)(vlSelf->top__DOT__id_wb_hazard))));
            tracep->chgQData(oldp+105,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)))
                                         ? ((IData)(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r)
                                             ? vlSelf->top__DOT__EX_Reg__DOT__Csrres_r
                                             : vlSelf->top__DOT__my_exu__DOT__res)
                                         : (((IData)(vlSelf->top__DOT__id_m_hazard) 
                                             & ((0x1fU 
                                                 & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                    >> 0xfU)) 
                                                == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))
                                             ? vlSelf->top__DOT__m_rfdata_o
                                             : (((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                                 & ((0x1fU 
                                                     & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)))
                                                 ? vlSelf->top__DOT__WB_Reg__DOT__wdata_r
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+107,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__EX_Reg__DOT__rd_r)))
                                         ? ((IData)(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r)
                                             ? vlSelf->top__DOT__EX_Reg__DOT__Csrres_r
                                             : vlSelf->top__DOT__my_exu__DOT__res)
                                         : (((IData)(vlSelf->top__DOT__id_m_hazard) 
                                             & ((0x1fU 
                                                 & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->top__DOT__M_Reg__DOT__rd_r)))
                                             ? vlSelf->top__DOT__m_rfdata_o
                                             : (((IData)(vlSelf->top__DOT__id_wb_hazard) 
                                                 & ((0x1fU 
                                                     & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r)))
                                                 ? vlSelf->top__DOT__WB_Reg__DOT__wdata_r
                                                 : 0ULL)))),64);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__inst_valid_o));
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__my_ifu__DOT__now_pc),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__my_ifu__DOT__cpu_data_read_r),64);
            tracep->chgQData(oldp+114,((4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc)),64);
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready));
            tracep->chgBit(oldp+117,(vlSelf->top__DOT__my_ifu__DOT__cpu_req_valid));
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__my_ifu__DOT__cpu_data_read),64);
            tracep->chgCData(oldp+120,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status),3);
            tracep->chgWData(oldp+121,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+125,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+129,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+133,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3]),128);
            tracep->chgIData(oldp+137,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__i),32);
            tracep->chgWData(oldp+138,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q),128);
            tracep->chgWData(oldp+142,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q),128);
            tracep->chgWData(oldp+146,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q),128);
            tracep->chgWData(oldp+150,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q),128);
            tracep->chgCData(oldp+154,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgCData(oldp+155,(vlSelf->top__DOT__my_idu__DOT__Branch),3);
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            tracep->chgBit(oldp+157,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr));
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr));
            tracep->chgBit(oldp+159,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr));
            tracep->chgCData(oldp+161,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr),4);
            tracep->chgBit(oldp+162,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__my_exu__DOT__alu_inA),64);
            tracep->chgQData(oldp+165,(vlSelf->top__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+167,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr));
            tracep->chgBit(oldp+169,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr));
            tracep->chgBit(oldp+170,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr));
            tracep->chgBit(oldp+171,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr));
            tracep->chgCData(oldp+172,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr),4);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres),64);
            tracep->chgQData(oldp+175,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                         : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)),64);
            tracep->chgQData(oldp+177,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        & vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+179,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        | vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+181,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+183,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                         ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                             : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                                 ? 
                                                VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                                 : 
                                                (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))
                                         : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                             : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                << 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))),64);
            tracep->chgQData(oldp+185,((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                            ? 
                                                           (((((~ (IData)(
                                                                          (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                           >> 0x3fU))) 
                                                               & (~ (IData)(
                                                                            (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                             >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                         >> 0x3fU))) 
                                                             | (((IData)(
                                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                                          >> 0x3fU)) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                              >> 0x3fU))))) 
                                                            ^ (IData)(
                                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                       >> 0x3fU)))
                                                            : 
                                                           (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                             >> 3U) 
                                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))),64);
            tracep->chgQData(oldp+187,(((0U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
                                         ? ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo)))
                                             : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo)
                                         : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div)
                                             ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                             : (((QData)((IData)(
                                                                 vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))))),64);
            tracep->chgQData(oldp+189,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div)
                                         ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                         : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient)),64);
            tracep->chgQData(oldp+191,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div)
                                         ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                         : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder)),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb),64);
            tracep->chgBit(oldp+195,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
            tracep->chgBit(oldp+196,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+197,((1U & ((((~ (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x3fU))) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                            >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                        >> 0x3fU))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                             >> 0x3fU))))))));
            tracep->chgIData(oldp+198,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres),32);
            tracep->chgIData(oldp+199,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres),32);
            tracep->chgIData(oldp+200,((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA)),32);
            tracep->chgCData(oldp+201,((0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),6);
            tracep->chgCData(oldp+202,((0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),5);
            tracep->chgQData(oldp+203,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                         ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                         : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+205,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                         : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+207,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                         : ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                             ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                             : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))))),64);
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul));
            tracep->chgWData(oldp+210,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand),65);
            tracep->chgWData(oldp+213,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier),65);
            tracep->chgQData(oldp+216,((((QData)((IData)(
                                                         vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))),64);
            tracep->chgQData(oldp+218,((((QData)((IData)(
                                                         vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U])))),64);
            tracep->chgQData(oldp+220,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r),64);
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_lo_r),64);
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_doing));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_ready));
            tracep->chgBit(oldp+226,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid));
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_valid));
            tracep->chgBit(oldp+228,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div));
            tracep->chgQData(oldp+229,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div)
                                         ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                         : (((QData)((IData)(
                                                             vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U]))))),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo),64);
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                                            >> 3U))));
            tracep->chgQData(oldp+234,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend),64);
            tracep->chgQData(oldp+236,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor),64);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient),64);
            tracep->chgQData(oldp+240,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder),64);
            tracep->chgQData(oldp+242,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r),64);
            tracep->chgQData(oldp+244,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r),64);
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_doing));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_valid));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgIData(oldp+251,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                              [0U])))),32);
            tracep->chgIData(oldp+252,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                              [0U])))),32);
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                            >> 3U))));
            __Vtemp135[0U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U];
            __Vtemp135[1U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U];
            __Vtemp135[2U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U];
            __Vtemp135[3U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U];
            tracep->chgWData(oldp+254,(__Vtemp135),128);
            tracep->chgWData(oldp+258,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result),132);
            tracep->chgWData(oldp+263,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r),132);
            tracep->chgWData(oldp+268,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r),67);
            tracep->chgBit(oldp+271,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r));
            tracep->chgBit(oldp+272,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done));
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing));
            tracep->chgWData(oldp+274,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result),132);
            tracep->chgCData(oldp+279,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt),7);
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp137, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_EXTEND_WI(133,1, __Vtemp138, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            __Vtemp139[0U] = __Vtemp138[0U];
            __Vtemp139[1U] = __Vtemp138[1U];
            __Vtemp139[2U] = __Vtemp138[2U];
            __Vtemp139[3U] = __Vtemp138[3U];
            __Vtemp139[4U] = __Vtemp138[4U];
            VL_ADD_W(5, __Vtemp140, __Vtemp137, __Vtemp139);
            __Vtemp141[0U] = __Vtemp140[0U];
            __Vtemp141[1U] = __Vtemp140[1U];
            __Vtemp141[2U] = __Vtemp140[2U];
            __Vtemp141[3U] = __Vtemp140[3U];
            __Vtemp141[4U] = (0xfU & __Vtemp140[4U]);
            tracep->chgWData(oldp+281,(__Vtemp141),132);
            VL_EXTEND_WW(133,132, __Vtemp143, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
            VL_EXTEND_WW(133,132, __Vtemp144, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_ADD_W(5, __Vtemp145, __Vtemp143, __Vtemp144);
            VL_EXTEND_WI(133,1, __Vtemp146, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp147, __Vtemp145, __Vtemp146);
            tracep->chgBit(oldp+286,((1U & (__Vtemp147[4U] 
                                            >> 4U))));
            tracep->chgCData(oldp+287,((7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])),3);
            tracep->chgBit(oldp+288,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+289,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+290,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])));
            tracep->chgCData(oldp+291,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel),4);
            tracep->chgBit(oldp+292,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+295,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel))));
            tracep->chgBit(oldp+296,((1U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 2U) 
                                            & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+297,((1U & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
            tracep->chgBit(oldp+298,((1U & ((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+299,((1U & (((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 1U)) 
                                            & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))));
            tracep->chgCData(oldp+300,((2U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              << 1U))),2);
            tracep->chgBit(oldp+301,((1U & (~ (((~ 
                                                 (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 1U))) 
                                               & (~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+302,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+303,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])),2);
            tracep->chgBit(oldp+304,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+305,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+306,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+307,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+308,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+309,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+310,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+311,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+312,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+313,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+314,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+315,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+316,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+317,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+318,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+319,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+320,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+321,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+322,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+323,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+324,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+325,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+326,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+327,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+328,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+329,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+330,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+331,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+332,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+333,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+334,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+335,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+336,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+337,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+338,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+339,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+340,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+341,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+342,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+343,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+344,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+346,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+347,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+348,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+349,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+350,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+351,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+352,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+353,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+355,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+356,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+357,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+358,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+359,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+360,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+361,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+362,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+363,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+364,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+365,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+367,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+368,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+370,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+371,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+372,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+373,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+374,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+375,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+376,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+377,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+378,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+379,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+380,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+381,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+382,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+383,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+384,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+385,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+386,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+387,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+388,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+389,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+390,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+391,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+392,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+393,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+394,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+395,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+396,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+397,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+398,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+399,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])));
            tracep->chgCData(oldp+400,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])),2);
            tracep->chgBit(oldp+401,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))))));
            tracep->chgBit(oldp+402,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+403,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+404,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+405,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+406,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+407,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+408,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+409,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+410,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+411,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+412,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+413,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+414,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+415,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+416,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+417,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+418,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+419,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+420,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+421,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+422,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+424,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+425,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+427,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+428,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+430,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+431,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+433,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+434,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+435,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+436,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+437,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+439,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+440,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+441,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+442,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+443,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+445,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+446,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+448,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+449,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+451,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+452,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+453,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+454,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+455,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+457,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+458,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+459,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+460,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+461,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+463,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+464,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+465,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+466,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+467,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+469,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+470,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+471,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+472,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+473,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+474,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+475,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+476,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+477,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+478,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+479,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+480,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+481,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+482,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+483,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+484,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+485,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+486,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+487,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+488,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+489,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+490,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+491,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+492,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+493,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+494,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+495,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])));
            tracep->chgCData(oldp+496,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])),2);
            tracep->chgBit(oldp+497,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))))));
            tracep->chgBit(oldp+498,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U))));
            tracep->chgCData(oldp+499,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+500,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+501,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U))));
            tracep->chgCData(oldp+502,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+503,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+504,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U))));
            tracep->chgCData(oldp+505,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+506,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+507,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+508,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+509,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+510,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+511,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+512,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+513,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+514,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+515,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+516,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+517,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+518,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+519,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 8U))));
            tracep->chgCData(oldp+520,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+521,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+522,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+523,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+524,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+526,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+527,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+528,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+529,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+530,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+531,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+532,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+533,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+534,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+535,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+536,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+538,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+539,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+540,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+541,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+542,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+544,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+545,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+546,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+547,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+548,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+549,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+550,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+551,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+552,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+553,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+554,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+555,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+556,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+557,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+558,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+559,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+560,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+561,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+562,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+563,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+564,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+565,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+566,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+567,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+568,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+569,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+570,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+571,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+572,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+573,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+574,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+575,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+576,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+577,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+578,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+579,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+580,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+581,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+582,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+583,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+584,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+585,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+586,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+587,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+588,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+589,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+590,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+591,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])));
            tracep->chgCData(oldp+592,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])),2);
            tracep->chgBit(oldp+593,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))))));
            tracep->chgBit(oldp+594,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U))));
            tracep->chgCData(oldp+595,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+596,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+597,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U))));
            tracep->chgCData(oldp+598,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+599,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+600,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U))));
            tracep->chgCData(oldp+601,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+602,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+603,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 4U))));
            tracep->chgCData(oldp+604,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+605,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+606,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 5U))));
            tracep->chgCData(oldp+607,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+608,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+609,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 6U))));
            tracep->chgCData(oldp+610,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+611,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+612,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 7U))));
            tracep->chgCData(oldp+613,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+614,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+615,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+616,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+617,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+618,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+619,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+620,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+621,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+622,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+623,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+624,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+625,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+626,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+627,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+628,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+629,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+630,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+631,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+632,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+633,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+634,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+635,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+636,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+637,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+638,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+639,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+640,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+641,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+642,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+643,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+644,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+645,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+646,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+647,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+648,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+649,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+650,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+651,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+652,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+653,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+654,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+655,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+656,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+657,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+658,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+659,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+660,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+661,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+662,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+663,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+664,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+665,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+666,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+667,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+668,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+669,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+670,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+671,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+672,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+673,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+674,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+675,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+676,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+677,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+678,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+679,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+680,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+681,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+682,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+683,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+684,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+685,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+686,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+687,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])));
            tracep->chgCData(oldp+688,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])),2);
            tracep->chgBit(oldp+689,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))))));
            tracep->chgBit(oldp+690,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U))));
            tracep->chgCData(oldp+691,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+692,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+693,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U))));
            tracep->chgCData(oldp+694,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+695,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+696,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+697,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r));
            tracep->chgCData(oldp+698,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt),7);
            tracep->chgWData(oldp+699,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r),128);
            tracep->chgQData(oldp+703,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r),64);
            tracep->chgQData(oldp+705,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r),64);
            tracep->chgQData(oldp+707,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r),64);
            tracep->chgBit(oldp+709,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s));
            tracep->chgBit(oldp+710,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s));
            tracep->chgQData(oldp+711,((1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend))),64);
            tracep->chgQData(oldp+713,((1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor))),64);
            tracep->chgQData(oldp+715,((1ULL + ((((QData)((IData)(
                                                                  vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                                     << 1U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                                       >> 0x1fU))) 
                                                + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)))),64);
            tracep->chgBit(oldp+717,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s));
            tracep->chgBit(oldp+718,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing));
            tracep->chgBit(oldp+719,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done));
            __Vtemp151[0U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                               << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                         >> 0x1fU));
            __Vtemp151[1U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                               << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                         >> 0x1fU));
            __Vtemp151[2U] = (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                              >> 0x1fU);
            tracep->chgWData(oldp+720,(__Vtemp151),65);
            __Vtemp152[0U] = (IData)((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
            __Vtemp152[1U] = (IData)(((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                                      >> 0x20U));
            __Vtemp152[2U] = 1U;
            tracep->chgWData(oldp+723,(__Vtemp152),65);
            tracep->chgQData(oldp+726,(((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                         ? ((2U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab))
                                                 : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))
                                         : ((2U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad
                                                 : 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                         >> 0xfU))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah))))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)))
                                                 : 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))))),64);
            tracep->chgQData(oldp+728,(((IData)(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r)
                                         ? ((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab))
                                                  : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                         : vlSelf->top__DOT__M_Reg__DOT__raddr_r)),64);
            tracep->chgQData(oldp+730,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout),64);
            tracep->chgCData(oldp+732,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask),8);
            tracep->chgQData(oldp+733,((0xfffffffffffffff8ULL 
                                        & vlSelf->top__DOT__M_Reg__DOT__raddr_r)),64);
            tracep->chgIData(oldp+735,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__i),32);
            tracep->chgIData(oldp+736,((7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))),32);
            tracep->chgIData(oldp+737,((0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))),32);
            tracep->chgIData(oldp+738,((IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r)),32);
            tracep->chgSData(oldp+739,((0xffffU & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r))),16);
            tracep->chgCData(oldp+740,((0xffU & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r))),8);
            tracep->chgQData(oldp+741,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain),64);
            tracep->chgQData(oldp+743,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad),64);
            tracep->chgIData(oldp+745,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw),32);
            tracep->chgSData(oldp+746,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah),16);
            tracep->chgCData(oldp+747,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab),8);
            tracep->chgCData(oldp+748,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__bytes),8);
            tracep->chgQData(oldp+749,(vlSelf->top__DOT__csrfile__DOT__mcause),64);
            tracep->chgQData(oldp+751,(vlSelf->top__DOT__csrfile__DOT__mstatus),64);
            tracep->chgQData(oldp+753,(vlSelf->top__DOT__csrfile__DOT__mscratch),64);
            tracep->chgIData(oldp+755,((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)),32);
            tracep->chgCData(oldp+756,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+757,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+758,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+759,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+760,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+761,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+762,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+763,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+764,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+765,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+766,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+767,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+768,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+769,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+770,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+771,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+772,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+773,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+774,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+775,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+776,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+777,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+778,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+779,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+780,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),8);
            tracep->chgBit(oldp+781,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+782,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+783,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+784,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+785,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+786,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+787,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+788,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),4);
            tracep->chgCData(oldp+789,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+790,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+791,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+792,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+793,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+794,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+795,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+796,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+797,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))) 
                                            | ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+798,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))));
            tracep->chgBit(oldp+799,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))));
            tracep->chgBit(oldp+800,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+801,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 1U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 1U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+802,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 1U)))));
            tracep->chgBit(oldp+803,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 1U)))));
            tracep->chgBit(oldp+804,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+805,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+806,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 2U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+807,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 2U)))));
            tracep->chgBit(oldp+808,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 2U)))));
            tracep->chgBit(oldp+809,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+810,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+811,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 3U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 3U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+812,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 3U)))));
            tracep->chgBit(oldp+813,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 3U)))));
            tracep->chgBit(oldp+814,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+815,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+816,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+817,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+818,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+819,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+820,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+821,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+822,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+823,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+824,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+825,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+826,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 4U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+827,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 4U)))));
            tracep->chgBit(oldp+828,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 4U)))));
            tracep->chgBit(oldp+829,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+830,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 5U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 5U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+831,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 5U)))));
            tracep->chgBit(oldp+832,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 5U)))));
            tracep->chgBit(oldp+833,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+834,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+835,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 6U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+836,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 6U)))));
            tracep->chgBit(oldp+837,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 6U)))));
            tracep->chgBit(oldp+838,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+839,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 7U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 7U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+840,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 7U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+841,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 7U)))));
            tracep->chgBit(oldp+842,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 7U)))));
            tracep->chgBit(oldp+843,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+844,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+845,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+846,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+847,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)))),8);
            tracep->chgBit(oldp+848,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+849,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+850,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+851,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+852,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+853,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+854,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+855,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+856,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+857,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+858,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+859,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+860,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+861,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+862,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+863,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+864,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+865,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 8U)))));
            tracep->chgBit(oldp+866,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 8U)))));
            tracep->chgBit(oldp+867,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 9U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 9U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+868,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 9U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 9U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+869,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 9U)))));
            tracep->chgBit(oldp+870,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 9U)))));
            tracep->chgBit(oldp+871,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+872,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xaU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xaU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+873,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xaU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xaU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+874,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+875,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+876,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+877,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xbU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xbU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+878,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xbU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xbU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+879,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+880,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+881,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+882,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+883,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+884,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+885,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+886,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+887,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+888,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+889,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+890,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+891,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+892,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xcU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xcU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+893,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xcU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+894,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+895,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+896,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xdU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xdU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+897,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xdU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xdU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+898,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+899,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+900,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+901,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xeU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xeU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+902,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xeU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xeU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+903,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+904,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+905,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+906,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xfU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xfU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+907,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xfU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0xfU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+908,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+909,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+910,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+911,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+912,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+913,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+914,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)))),8);
            tracep->chgBit(oldp+915,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+916,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+917,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+918,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+919,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+920,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+921,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+922,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+923,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+924,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+925,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+926,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+927,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+928,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+929,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+930,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x10U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+931,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x10U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+932,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+933,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+934,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x11U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x11U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+935,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x11U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x11U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+936,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+937,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+938,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+939,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x12U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x12U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+940,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x12U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x12U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+941,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+942,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+943,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+944,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x13U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x13U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+945,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x13U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x13U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+946,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+947,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+948,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+949,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+950,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+951,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+952,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+953,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+954,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+955,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+956,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+957,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+958,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+959,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x14U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x14U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+960,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x14U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+961,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+962,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+963,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x15U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+964,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x15U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x15U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+965,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+966,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+967,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+968,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x16U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x16U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+969,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x16U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x16U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+970,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+971,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+972,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+973,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x17U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x17U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+974,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x17U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x17U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+975,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+976,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+977,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+978,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+979,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+980,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+981,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)))),8);
            tracep->chgBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+983,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+984,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+985,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+986,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+987,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+988,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+989,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+990,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+991,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+992,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+993,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+994,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+995,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+996,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+997,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x18U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+998,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x18U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+999,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+1000,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1001,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1002,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x19U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1003,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1004,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1005,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1006,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1007,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1008,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1009,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1010,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1011,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1012,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1013,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1014,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1015,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1016,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1017,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1018,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1019,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1021,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1022,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1023,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1024,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1025,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1026,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1027,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1028,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1029,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1030,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1031,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1032,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1033,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1034,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1035,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1036,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1037,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1038,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1039,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1040,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1041,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1042,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1043,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1044,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1045,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1046,((IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1047,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1048,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1049,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1050,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1051,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1052,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1053,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1054,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1055,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1056,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1057,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1058,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1059,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1060,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1061,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1062,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1063,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1064,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1066,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1067,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1068,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1069,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1070,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1071,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1072,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1073,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1074,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1075,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1076,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1077,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1078,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1079,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1080,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1081,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1082,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1083,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1084,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1085,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1086,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1087,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1088,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x20U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+1089,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1090,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1091,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1092,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x21U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1093,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1094,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1095,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1096,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1097,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x22U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1098,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1099,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1100,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1101,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1102,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x23U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1103,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1104,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1105,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1106,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1107,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1108,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1109,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1110,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1111,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1112,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1113,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1114,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1115,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1116,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1117,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x24U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1118,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1119,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1120,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1121,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x25U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1122,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1123,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1124,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1125,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1126,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x26U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1127,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1128,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1129,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1130,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1131,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x27U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1132,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1133,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1134,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1135,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1136,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1137,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1138,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1139,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1140,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1141,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1142,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1143,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1144,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1145,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1146,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1147,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1148,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1149,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1150,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1151,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1152,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1153,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1154,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1155,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x28U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1156,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1157,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1158,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1159,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x29U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1160,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1162,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1163,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1164,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1165,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1166,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1167,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1168,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1169,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1170,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1171,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1172,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1173,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1174,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1175,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1176,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1178,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1179,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1180,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1181,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1182,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1183,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1184,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1185,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1187,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1188,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1189,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1190,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1191,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1192,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1193,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1194,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1195,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1196,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1197,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1198,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1199,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1200,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1201,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1202,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1203,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1204,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1205,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+1206,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1207,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1208,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1211,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1212,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1213,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1215,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1216,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1217,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1218,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1219,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1220,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1221,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1222,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x30U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1223,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1224,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1225,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1226,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x31U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1227,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1228,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1229,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1230,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1231,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x32U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1232,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1233,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1234,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1235,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1236,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x33U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1237,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1238,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1239,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1240,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1241,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1242,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1243,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1244,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1245,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1246,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1247,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1248,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1249,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1250,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1251,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x34U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1252,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1254,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1255,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x35U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1256,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1257,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1258,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1259,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1260,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x36U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1261,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1262,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1263,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1264,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1265,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x37U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1266,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1267,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1268,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1269,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1270,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1271,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+1272,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+1273,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1274,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1275,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1276,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1277,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1278,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1279,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1280,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1281,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1282,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1283,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1284,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1285,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1286,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1287,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1288,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1289,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x38U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1290,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1291,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1292,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1293,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x39U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1294,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1295,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1296,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1297,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1298,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1299,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1300,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1301,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1302,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1303,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1304,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1305,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1306,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1307,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1308,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1309,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1310,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1311,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1312,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1314,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1315,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1316,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1317,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1318,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1319,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1320,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1321,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1322,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1323,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1324,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1325,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1326,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1327,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1328,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1329,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1330,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1331,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1332,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1333,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1334,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1335,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgQData(oldp+1336,((0xfffffffffffffffeULL 
                                         & ((IData)(vlSelf->top__DOT__id_Ecall)
                                             ? vlSelf->top__DOT__csrfile__DOT__mtvec
                                             : ((IData)(vlSelf->top__DOT__id_Mret)
                                                 ? vlSelf->top__DOT__csrfile__DOT__mepc
                                                 : vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc)))),64);
            tracep->chgQData(oldp+1338,(((IData)(vlSelf->top__DOT__id_Ecall)
                                          ? vlSelf->top__DOT__csrfile__DOT__mtvec
                                          : ((IData)(vlSelf->top__DOT__id_Mret)
                                              ? vlSelf->top__DOT__csrfile__DOT__mepc
                                              : vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc))),64);
            tracep->chgQData(oldp+1340,(((1U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                          ? vlSelf->top__DOT__id_imm_o
                                          : ((0U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                              ? vlSelf->top__DOT__id_busb_o
                                              : 4ULL))),64);
            tracep->chgQData(oldp+1342,(((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                          ? ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                              : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                          : (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                                 ? 
                                                                (((((~ (IData)(
                                                                               (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                    & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                              >> 0x3fU))) 
                                                                  | (((IData)(
                                                                              (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                               >> 0x3fU)) 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                     & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                 ^ (IData)(
                                                                           (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                            >> 0x3fU)))
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                  >> 3U) 
                                                                 ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))),64);
            tracep->chgQData(oldp+1344,(((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                          : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)),64);
            tracep->chgQData(oldp+1346,((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                             ? 
                                                            (((((~ (IData)(
                                                                           (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                              >> 0x3fU)))) 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                          >> 0x3fU))) 
                                                              | (((IData)(
                                                                          (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                           >> 0x3fU)) 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                             >> 0x3fU))) 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                               >> 0x3fU))))) 
                                                             ^ (IData)(
                                                                       (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                        >> 0x3fU)))
                                                             : 
                                                            (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                              >> 3U) 
                                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr))))))),64);
            tracep->chgBit(oldp+1348,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))));
            tracep->chgBit(oldp+1349,((1U & (IData)(
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                                       : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                                      : (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                                             ? 
                                                                            (((((~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))) 
                                                                              | (((IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                             ^ (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU)))
                                                                             : 
                                                                            (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                              >> 3U) 
                                                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1350,(vlSelf->top__DOT__wb_commit_r));
            tracep->chgQData(oldp+1351,(vlSelf->top__DOT__wb_pc_r),64);
            tracep->chgIData(oldp+1353,(vlSelf->top__DOT__wb_instr_r),32);
            tracep->chgQData(oldp+1354,(vlSelf->top__DOT__next_pc_r),64);
            tracep->chgQData(oldp+1356,(vlSelf->top__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+1358,(vlSelf->top__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+1360,(vlSelf->top__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+1362,(vlSelf->top__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+1364,(vlSelf->top__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+1366,(vlSelf->top__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+1368,(vlSelf->top__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+1370,(vlSelf->top__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+1372,(vlSelf->top__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+1374,(vlSelf->top__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+1376,(vlSelf->top__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+1378,(vlSelf->top__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+1380,(vlSelf->top__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+1382,(vlSelf->top__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+1384,(vlSelf->top__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+1386,(vlSelf->top__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+1388,(vlSelf->top__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+1390,(vlSelf->top__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+1392,(vlSelf->top__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+1394,(vlSelf->top__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+1396,(vlSelf->top__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+1398,(vlSelf->top__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+1400,(vlSelf->top__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+1402,(vlSelf->top__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+1404,(vlSelf->top__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+1406,(vlSelf->top__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+1408,(vlSelf->top__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+1410,(vlSelf->top__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+1412,(vlSelf->top__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+1414,(vlSelf->top__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+1416,(vlSelf->top__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+1418,(vlSelf->top__DOT__regfile__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+1420,(vlSelf->top__DOT__if_instr_o),32);
            tracep->chgQData(oldp+1421,(vlSelf->top__DOT__if_pc_o),64);
            tracep->chgBit(oldp+1423,(vlSelf->top__DOT__cpu_halt));
            tracep->chgBit(oldp+1424,(vlSelf->top__DOT__is_Csrwen));
            tracep->chgCData(oldp+1425,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__if_pc_o 
                                                          >> 4U)))),8);
            tracep->chgCData(oldp+1426,((0xfU & (IData)(vlSelf->top__DOT__if_pc_o))),4);
            tracep->chgQData(oldp+1427,((vlSelf->top__DOT__if_pc_o 
                                         >> 0xcU)),52);
            tracep->chgCData(oldp+1429,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status),3);
            tracep->chgBit(oldp+1430,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
            tracep->chgBit(oldp+1431,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
            tracep->chgBit(oldp+1432,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
            tracep->chgBit(oldp+1433,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
            tracep->chgBit(oldp+1434,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [0U]));
            tracep->chgCData(oldp+1435,((0x3fU & (IData)(
                                                         (vlSelf->top__DOT__if_pc_o 
                                                          >> 4U)))),6);
            tracep->chgBit(oldp+1436,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [1U]));
            tracep->chgBit(oldp+1437,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [2U]));
            tracep->chgBit(oldp+1438,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [3U]));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+1439,(vlSelf->top__DOT__id_busa_o),64);
            tracep->chgQData(oldp+1441,(vlSelf->top__DOT__id_busb_o),64);
            tracep->chgQData(oldp+1443,(vlSelf->top__DOT__my_ifu__DOT__valid_dnpc),64);
            tracep->chgQData(oldp+1445,(vlSelf->top__DOT__my_idu__DOT__alu_inA),64);
            tracep->chgBit(oldp+1447,(((0ULL == vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        ? 1U : 0U)));
            tracep->chgQData(oldp+1448,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres),64);
            tracep->chgQData(oldp+1450,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb),64);
            tracep->chgBit(oldp+1452,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1453,((1U & ((((~ (IData)(
                                                          (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                         >> 0x3fU))) 
                                             | (((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                              >> 0x3fU))))))));
            tracep->chgBit(oldp+1454,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgIData(oldp+1455,(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1456,(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1457,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1458,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA));
            tracep->chgBit(oldp+1459,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB));
            tracep->chgQData(oldp+1460,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA),64);
            tracep->chgQData(oldp+1462,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB),64);
            tracep->chgQData(oldp+1464,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc),64);
            tracep->chgBit(oldp+1466,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1467,((1U & ((((~ (IData)(
                                                          (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                         >> 0x3fU))) 
                                             | (((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                              >> 0x3fU))))))));
            tracep->chgBit(oldp+1468,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1469,(((0ULL == vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc)
                                        ? 1U : 0U)));
            tracep->chgIData(oldp+1470,(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1471,(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1472,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgQData(oldp+1473,(vlSelf->top__DOT__csrfile__DOT__csrin),64);
            tracep->chgIData(oldp+1475,((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA)),32);
            tracep->chgIData(oldp+1476,((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb)),32);
            tracep->chgCData(oldp+1477,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+1478,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+1479,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+1480,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+1481,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+1482,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+1483,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+1484,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+1485,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+1486,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+1487,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+1488,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1489,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1490,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1491,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1492,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1493,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1494,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1495,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1496,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1497,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1498,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1499,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1500,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+1501,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))),8);
            tracep->chgBit(oldp+1502,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+1503,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1504,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1505,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1506,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1507,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1508,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+1509,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))),4);
            tracep->chgCData(oldp+1510,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1511,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1512,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1513,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1514,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1515,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1516,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1517,((1U & (((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA) 
                                              ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb)) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+1518,((1U & (((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA) 
                                              & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))) 
                                             | ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+1519,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))));
            tracep->chgBit(oldp+1520,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))));
            tracep->chgBit(oldp+1521,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1522,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 1U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 1U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1523,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1524,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1525,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1526,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1527,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 2U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 2U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 2U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1528,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1529,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1530,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1531,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1532,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 3U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 3U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 3U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1533,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1534,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1535,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1536,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1537,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1538,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1539,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1540,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1541,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1542,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1543,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1544,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1545,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1546,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1547,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 4U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 4U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1548,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1549,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1550,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1551,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 5U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 5U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1552,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1553,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1554,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1555,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1556,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 6U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 6U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 6U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1557,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1558,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1559,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1560,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1561,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 7U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 7U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 7U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1562,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1563,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1564,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1565,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1566,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1567,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1568,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+1569,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1570,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1571,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1572,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1573,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1574,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1575,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1576,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1577,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1578,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1579,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1580,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1581,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1582,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1583,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1584,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1585,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 8U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1586,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1587,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1588,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1589,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 9U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 9U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 9U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1590,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1591,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1592,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1593,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1594,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xaU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xaU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1595,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1596,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1597,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1598,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1599,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xbU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xbU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1600,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1601,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1602,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1603,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1604,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1605,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1606,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1607,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1608,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1609,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1610,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1611,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1612,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1613,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1614,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xcU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1615,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1616,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1617,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1618,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xdU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xdU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1619,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1620,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1621,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1622,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1623,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xeU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xeU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1624,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1625,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1626,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1627,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1628,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xfU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xfU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1629,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1630,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1631,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1632,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1633,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1634,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1635,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1636,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1637,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1638,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1639,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1640,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1641,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1642,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1643,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1644,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1645,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1646,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1647,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1648,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1649,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1650,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1651,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1652,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1653,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1654,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1655,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1656,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x11U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x11U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1657,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1658,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1659,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1660,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1661,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x12U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x12U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1662,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1663,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1664,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1665,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1666,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x13U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x13U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1667,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1668,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1669,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1670,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1671,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1672,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1673,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1674,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1675,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1676,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1677,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1678,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1679,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1680,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1681,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x14U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1682,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1683,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1684,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1685,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x15U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x15U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1686,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1687,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1688,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1689,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1690,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x16U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x16U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1691,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1692,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1693,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1694,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1695,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x17U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x17U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1696,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1697,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1698,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1699,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1700,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1701,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1702,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1703,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1704,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1705,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1706,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1707,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1708,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1709,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1710,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1711,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1712,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1713,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1714,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1715,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1716,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1717,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1718,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1719,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x18U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1720,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1721,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1722,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1723,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x19U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x19U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1724,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1725,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1726,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1727,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1728,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1729,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1730,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1731,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1732,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1733,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1734,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1735,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1736,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1737,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1738,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1739,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1740,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1741,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1742,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1743,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1744,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1745,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1746,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1747,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1748,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1749,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1750,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1751,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1752,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1753,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1754,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1755,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1756,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1757,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1758,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1759,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1760,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1761,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1762,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1763,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1764,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1765,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1766,((IData)((vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1767,((IData)((vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1768,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1769,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1770,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1771,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1772,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1773,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1774,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1775,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1776,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1777,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1778,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1779,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1780,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1781,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1782,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1783,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1784,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1785,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1786,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1787,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1788,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1789,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1790,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1791,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1792,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1793,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1794,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1795,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1796,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1797,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1798,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1799,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1800,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1801,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1802,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1803,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1804,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1805,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1806,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1807,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1808,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1809,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x20U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+1810,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1811,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1812,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1813,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x21U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x21U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1814,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1815,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1816,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1817,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1818,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x22U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x22U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1819,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1820,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1821,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1822,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1823,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x23U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x23U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1824,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1825,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1826,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1827,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1828,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1829,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1830,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1831,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1832,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1833,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1834,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1835,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1836,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1837,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1838,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x24U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1839,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1840,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1841,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1842,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x25U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x25U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1843,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1844,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1845,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1846,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1847,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x26U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x26U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1848,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1849,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1850,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1851,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1852,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x27U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x27U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1853,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1854,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1855,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1856,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1857,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1858,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1859,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1860,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1861,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1862,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1863,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1864,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1865,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1866,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1867,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1868,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1869,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1870,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1871,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1872,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1873,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1874,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1875,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1876,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x28U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1877,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1878,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1879,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1880,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x29U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x29U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1881,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1882,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1883,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1884,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1885,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1886,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1887,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1888,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1889,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1890,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1891,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1892,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1893,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1894,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1895,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1896,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1897,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1898,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1899,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1900,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1901,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1902,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1903,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1904,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1905,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1906,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1907,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1908,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1909,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1910,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1911,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1912,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1913,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1914,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1915,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1916,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1917,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1918,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1919,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1920,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1921,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1922,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1923,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1924,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1925,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1926,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+1927,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1928,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1929,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1930,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1931,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1932,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1933,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1934,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1935,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1936,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1937,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1938,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1939,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1940,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1941,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1942,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1943,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x30U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1944,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1945,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1946,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1947,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x31U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x31U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1948,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1949,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1950,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1951,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1952,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x32U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x32U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1953,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1954,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1955,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1956,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1957,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x33U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x33U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1958,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1959,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1960,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1961,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1962,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1963,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1964,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1965,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1966,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1967,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1968,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1969,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1970,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1971,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1972,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x34U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1973,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1974,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1975,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1976,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x35U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x35U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1977,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1978,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1979,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1980,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1981,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x36U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x36U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1982,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1983,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1984,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1985,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1986,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x37U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x37U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1987,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1988,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1989,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1990,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1991,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1992,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+1993,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+1994,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1995,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1996,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1997,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1998,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1999,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2000,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2001,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2002,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2003,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2004,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2005,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2006,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2007,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2008,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2009,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+2010,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x38U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2011,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2012,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2013,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2014,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x39U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x39U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2015,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2016,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2017,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2018,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2019,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2020,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2021,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2022,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2023,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2024,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2025,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2026,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2027,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2028,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2029,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2030,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2031,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2032,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2033,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2034,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2035,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2036,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2037,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2038,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2039,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2040,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2041,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2042,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2043,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2044,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2045,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2046,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2047,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2048,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2049,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2050,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2051,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2052,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2053,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2054,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2055,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2056,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+2057,((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA)),32);
            tracep->chgIData(oldp+2058,((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)),32);
            tracep->chgCData(oldp+2059,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+2060,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+2061,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+2062,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+2063,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+2064,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+2065,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+2066,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+2067,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+2068,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+2069,(((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                         << 1U)),5);
            tracep->chgCData(oldp+2070,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+2071,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+2072,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+2073,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+2074,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+2075,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c),4);
            tracep->chgBit(oldp+2076,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg))));
            tracep->chgBit(oldp+2077,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+2078,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+2079,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+2080,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2081,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2082,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),8);
            tracep->chgCData(oldp+2083,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),8);
            tracep->chgBit(oldp+2084,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2085,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2086,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2087,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2088,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2089,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),4);
            tracep->chgCData(oldp+2090,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),4);
            tracep->chgCData(oldp+2091,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2092,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2093,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2094,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
            tracep->chgBit(oldp+2095,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2096,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2097,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2098,((1U & ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2099,((1U & ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2100,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))));
            tracep->chgBit(oldp+2101,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))));
            tracep->chgBit(oldp+2102,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2103,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 1U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2104,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2105,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2106,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2107,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2108,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 2U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 2U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2109,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2110,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2111,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2112,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2113,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 3U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 3U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2114,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2115,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2116,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2117,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2118,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2119,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2120,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2121,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2122,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2123,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2124,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2125,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2126,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2127,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2128,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 4U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 4U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2129,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2130,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2131,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2132,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 5U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2133,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2134,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2135,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2136,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2137,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 6U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 6U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2138,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2139,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2140,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2141,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2142,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 7U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 7U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2143,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2144,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2145,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2146,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2147,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2148,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2149,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+2150,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))));
            tracep->chgBit(oldp+2151,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2152,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2153,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2154,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2155,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2156,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2157,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2158,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2159,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2160,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2161,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2162,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2163,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2164,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2165,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c)))));
            tracep->chgBit(oldp+2166,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 8U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))))));
            tracep->chgBit(oldp+2167,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2168,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2169,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2170,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 9U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 9U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2171,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2172,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2173,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2174,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2175,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xaU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xaU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2176,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2177,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2178,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2179,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2180,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xbU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2181,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2182,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2183,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2184,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2185,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2186,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2187,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2188,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2189,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2190,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2191,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2192,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2193,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2194,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2195,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xcU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xcU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2196,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2197,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2198,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2199,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xdU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xdU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2200,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2201,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2202,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2203,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2204,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xeU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2205,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2206,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2207,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2208,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2209,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xfU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xfU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2210,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2211,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2212,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2213,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2214,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2215,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2216,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+2217,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2218,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2219,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2220,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2221,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2222,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2223,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2224,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2225,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2226,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2227,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2228,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2229,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2230,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2231,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2232,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2233,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x10U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2234,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2235,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2236,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2237,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x11U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2238,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2239,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2240,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2241,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2242,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x12U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x12U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2243,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2244,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2245,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2246,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2247,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x13U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x13U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2248,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2249,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2250,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2251,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2252,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2253,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2254,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2255,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2256,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2257,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2258,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2259,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2260,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2261,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2262,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x14U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2263,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2264,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2265,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2266,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x15U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x15U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2267,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2268,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2269,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2270,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2271,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x16U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x16U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2272,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2273,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2274,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2275,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2276,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x17U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2277,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2278,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2279,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2280,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2281,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2282,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2283,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+2284,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2285,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2286,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2287,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2288,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2289,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2290,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2291,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2292,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2293,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2294,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2295,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2296,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2297,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2298,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2299,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2300,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x18U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2301,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2302,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2303,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2304,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x19U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x19U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x19U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2305,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2306,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2307,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2308,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2309,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x1aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2310,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2311,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+2312,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2313,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2314,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x1bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2315,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2316,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+2317,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2318,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2319,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+2320,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+2321,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2322,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2323,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2324,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2325,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2326,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2327,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2328,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2329,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x1cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2330,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2331,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+2332,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2333,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x1dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2334,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2335,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+2336,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2337,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2338,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x1eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2339,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2340,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+2341,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2342,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2343,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x1fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x1fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
        }
    }
}
