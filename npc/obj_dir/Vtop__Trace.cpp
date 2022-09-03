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
    VlWide<4>/*127:0*/ __Vtemp181;
    VlWide<5>/*159:0*/ __Vtemp183;
    VlWide<5>/*159:0*/ __Vtemp184;
    VlWide<5>/*159:0*/ __Vtemp185;
    VlWide<5>/*159:0*/ __Vtemp186;
    VlWide<5>/*159:0*/ __Vtemp187;
    VlWide<5>/*159:0*/ __Vtemp189;
    VlWide<5>/*159:0*/ __Vtemp190;
    VlWide<5>/*159:0*/ __Vtemp191;
    VlWide<5>/*159:0*/ __Vtemp192;
    VlWide<5>/*159:0*/ __Vtemp193;
    VlWide<3>/*95:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<4>/*127:0*/ __Vtemp204;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__i_rw_addr_o),64);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__i_rw_req_o));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__i_rw_valid_o));
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__d_rw_addr_o),64);
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__d_rw_req_o));
            tracep->chgBit(oldp+7,(vlSelf->top__DOT__d_rw_valid_o));
            tracep->chgWData(oldp+8,(vlSelf->top__DOT__d_rw_w_data_o),128);
            tracep->chgIData(oldp+12,(vlSelf->top__DOT__ID_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+13,(vlSelf->top__DOT__EX_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+14,(vlSelf->top__DOT__M_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__WB_Reg__DOT__instr_r),32);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__if_pc_o),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__ID_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__EX_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__M_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__WB_Reg__DOT__pc_r),64);
            tracep->chgBit(oldp+26,(((IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__load_use)))));
            tracep->chgBit(oldp+27,(((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__alu_busy)))));
            tracep->chgBit(oldp+28,(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
            tracep->chgBit(oldp+29,(vlSelf->top__DOT__EX_Reg__DOT__valid_r));
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__M_Reg__DOT__valid_r));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__WB_Reg__DOT__valid_r));
            tracep->chgBit(oldp+32,(((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                     | (IData)(vlSelf->top__DOT__if_busy))));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__load_use));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__alu_busy));
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__id_csrres_o),64);
            tracep->chgCData(oldp+37,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+38,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+39,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__id_imm_o),64);
            tracep->chgBit(oldp+42,(vlSelf->top__DOT__id_ALUSrcA_o));
            tracep->chgBit(oldp+43,(vlSelf->top__DOT__id_MemToReg_o));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__id_MemWen_o));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__id_wen_o));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__id_CsrToReg_o));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__id_Ebreak_o));
            tracep->chgCData(oldp+48,(vlSelf->top__DOT__id_ALUSrcB_o),2);
            tracep->chgCData(oldp+49,(vlSelf->top__DOT__id_MemOp_o),3);
            tracep->chgCData(oldp+50,(vlSelf->top__DOT__id_ALUOp_o),5);
            tracep->chgCData(oldp+51,(vlSelf->top__DOT__id_MulOp_o),2);
            tracep->chgCData(oldp+52,(vlSelf->top__DOT__id_CsrOp),3);
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__id_Ecall));
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__id_Mret));
            tracep->chgBit(oldp+55,(vlSelf->top__DOT__id_Csrwen));
            tracep->chgQData(oldp+56,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU))])),64);
            tracep->chgQData(oldp+58,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U))])),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__csrfile__DOT__mtvec),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__csrfile__DOT__mepc),64);
            tracep->chgSData(oldp+64,(vlSelf->top__DOT__id_CsrId),12);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__EX_Reg__DOT__rd_r),5);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__EX_Reg__DOT__busa_r),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__EX_Reg__DOT__busb_r),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__EX_Reg__DOT__imm_r),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__EX_Reg__DOT__Csrres_r),64);
            tracep->chgBit(oldp+74,(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r));
            tracep->chgBit(oldp+75,(vlSelf->top__DOT__EX_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+76,(vlSelf->top__DOT__EX_Reg__DOT__MemWen_r));
            tracep->chgBit(oldp+77,(vlSelf->top__DOT__EX_Reg__DOT__wen_r));
            tracep->chgBit(oldp+78,(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__EX_Reg__DOT__Ebreak_r));
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r),2);
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__EX_Reg__DOT__MemOp_r),3);
            tracep->chgCData(oldp+82,(vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r),5);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r),2);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__M_Reg__DOT__MemOp_r),3);
            tracep->chgQData(oldp+85,(vlSelf->top__DOT__M_Reg__DOT__raddr_r),64);
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__M_Reg__DOT__MemWen_r));
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__M_Reg__DOT__wdata_r),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__M_Reg__DOT__Csrres_r),64);
            tracep->chgCData(oldp+92,(vlSelf->top__DOT__M_Reg__DOT__rd_r),5);
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__M_Reg__DOT__wen_r));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__M_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__WB_Reg__DOT__wen_r));
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__WB_Reg__DOT__wdata_r),64);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__WB_Reg__DOT__waddr_r),5);
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__id_use_rd));
            tracep->chgBit(oldp+103,(((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__EX_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+104,(((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__M_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+105,(((IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+106,(((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgBit(oldp+107,(((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgCData(oldp+108,((0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+109,((0x7fU & vlSelf->top__DOT__EX_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+110,((0x7fU & vlSelf->top__DOT__M_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+111,((0x7fU & vlSelf->top__DOT__WB_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+112,((7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+113,((vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__id_ex_hazard));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__id_m_hazard));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__id_wb_hazard));
            tracep->chgBit(oldp+117,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                       | (IData)(vlSelf->top__DOT__id_m_hazard)) 
                                      | (IData)(vlSelf->top__DOT__id_wb_hazard))));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__if_busy));
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__ex_dnpc),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__m_dnpc),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__wb_dnpc),64);
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__dev_o));
            tracep->chgBit(oldp+126,(vlSelf->top__DOT__wb_commit_r));
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__wb_pc_r),64);
            tracep->chgIData(oldp+129,(vlSelf->top__DOT__wb_instr_r),32);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__next_pc_r),64);
            tracep->chgBit(oldp+132,((0U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__my_ifu__DOT__old_instr));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__my_ifu__DOT__cache_doing));
            tracep->chgIData(oldp+135,(vlSelf->top__DOT__my_ifu__DOT__instr_read_r),32);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__my_ifu__DOT__cpu_req_valid));
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__my_ifu__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__my_ifu__DOT__start));
            tracep->chgCData(oldp+141,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__if_pc_o 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+142,((0xfU & (IData)(vlSelf->top__DOT__if_pc_o))),4);
            tracep->chgQData(oldp+143,((vlSelf->top__DOT__if_pc_o 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+145,((((1U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                                       & vlSelf->top__DOT__my_ifu__DOT__icache__DOT__V
                                       [(0xffU & (IData)(
                                                         (vlSelf->top__DOT__if_pc_o 
                                                          >> 4U)))]) 
                                      & (vlSelf->top__DOT__my_ifu__DOT__icache__DOT__tag
                                         [(0xffU & (IData)(
                                                           (vlSelf->top__DOT__if_pc_o 
                                                            >> 4U)))] 
                                         == (vlSelf->top__DOT__if_pc_o 
                                             >> 0xcU)))));
            tracep->chgCData(oldp+146,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status),3);
            tracep->chgWData(oldp+147,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+151,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+155,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+159,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3]),128);
            tracep->chgIData(oldp+163,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__i),32);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q),128);
            tracep->chgCData(oldp+168,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__if_pc_o 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+169,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q),128);
            tracep->chgWData(oldp+173,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q),128);
            tracep->chgWData(oldp+177,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q),128);
            tracep->chgCData(oldp+181,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgCData(oldp+182,(vlSelf->top__DOT__my_idu__DOT__Branch),3);
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            tracep->chgBit(oldp+184,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr));
            tracep->chgBit(oldp+185,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr));
            tracep->chgBit(oldp+186,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr));
            tracep->chgBit(oldp+187,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr));
            tracep->chgCData(oldp+188,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr),4);
            tracep->chgBit(oldp+189,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+190,(vlSelf->top__DOT__my_exu__DOT__alu_inA),64);
            tracep->chgQData(oldp+192,(vlSelf->top__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            tracep->chgBit(oldp+195,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr));
            tracep->chgBit(oldp+196,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr));
            tracep->chgBit(oldp+197,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr));
            tracep->chgBit(oldp+198,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr));
            tracep->chgCData(oldp+199,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr),4);
            tracep->chgQData(oldp+200,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres),64);
            tracep->chgQData(oldp+202,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                         : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)),64);
            tracep->chgQData(oldp+204,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        & vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+206,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        | vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+208,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+210,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr)
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
            tracep->chgQData(oldp+212,((QData)((IData)(
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
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb),64);
            tracep->chgBit(oldp+216,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
            tracep->chgBit(oldp+217,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+218,((1U & ((((~ (IData)(
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
            tracep->chgIData(oldp+219,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres),32);
            tracep->chgIData(oldp+220,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres),32);
            tracep->chgIData(oldp+221,((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA)),32);
            tracep->chgCData(oldp+222,((0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),6);
            tracep->chgCData(oldp+223,((0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),5);
            tracep->chgQData(oldp+224,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                         ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                         : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+226,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                         : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+228,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
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
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul));
            tracep->chgWData(oldp+231,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand),65);
            tracep->chgWData(oldp+234,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier),65);
            tracep->chgQData(oldp+237,((((QData)((IData)(
                                                         vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))),64);
            tracep->chgQData(oldp+239,((((QData)((IData)(
                                                         vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U])))),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_lo_r),64);
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_doing));
            tracep->chgBit(oldp+246,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_ready));
            tracep->chgBit(oldp+247,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid));
            tracep->chgBit(oldp+248,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_valid));
            tracep->chgBit(oldp+249,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_mul));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                                            >> 3U))));
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r),64);
            tracep->chgBit(oldp+263,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_doing));
            tracep->chgBit(oldp+264,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r));
            tracep->chgBit(oldp+265,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r));
            tracep->chgBit(oldp+266,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_valid));
            tracep->chgBit(oldp+267,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div));
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgIData(oldp+269,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                              [0U])))),32);
            tracep->chgIData(oldp+270,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                              [0U])))),32);
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                            >> 3U))));
            __Vtemp181[0U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U];
            __Vtemp181[1U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U];
            __Vtemp181[2U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U];
            __Vtemp181[3U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U];
            tracep->chgWData(oldp+272,(__Vtemp181),128);
            tracep->chgWData(oldp+276,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result),132);
            tracep->chgWData(oldp+281,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r),132);
            tracep->chgWData(oldp+286,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r),67);
            tracep->chgBit(oldp+289,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r));
            tracep->chgBit(oldp+290,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done));
            tracep->chgBit(oldp+291,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing));
            tracep->chgWData(oldp+292,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result),132);
            tracep->chgCData(oldp+297,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt),7);
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp183, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_EXTEND_WI(133,1, __Vtemp184, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            __Vtemp185[0U] = __Vtemp184[0U];
            __Vtemp185[1U] = __Vtemp184[1U];
            __Vtemp185[2U] = __Vtemp184[2U];
            __Vtemp185[3U] = __Vtemp184[3U];
            __Vtemp185[4U] = __Vtemp184[4U];
            VL_ADD_W(5, __Vtemp186, __Vtemp183, __Vtemp185);
            __Vtemp187[0U] = __Vtemp186[0U];
            __Vtemp187[1U] = __Vtemp186[1U];
            __Vtemp187[2U] = __Vtemp186[2U];
            __Vtemp187[3U] = __Vtemp186[3U];
            __Vtemp187[4U] = (0xfU & __Vtemp186[4U]);
            tracep->chgWData(oldp+299,(__Vtemp187),132);
            VL_EXTEND_WW(133,132, __Vtemp189, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
            VL_EXTEND_WW(133,132, __Vtemp190, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_ADD_W(5, __Vtemp191, __Vtemp189, __Vtemp190);
            VL_EXTEND_WI(133,1, __Vtemp192, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp193, __Vtemp191, __Vtemp192);
            tracep->chgBit(oldp+304,((1U & (__Vtemp193[4U] 
                                            >> 4U))));
            tracep->chgCData(oldp+305,((7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])),3);
            tracep->chgBit(oldp+306,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+307,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+308,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])));
            tracep->chgCData(oldp+309,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel),4);
            tracep->chgBit(oldp+310,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+311,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+313,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel))));
            tracep->chgBit(oldp+314,((1U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 2U) 
                                            & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+315,((1U & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
            tracep->chgBit(oldp+316,((1U & ((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+317,((1U & (((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 1U)) 
                                            & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))));
            tracep->chgCData(oldp+318,((2U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              << 1U))),2);
            tracep->chgBit(oldp+319,((1U & (~ (((~ 
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
            tracep->chgBit(oldp+320,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+321,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])),2);
            tracep->chgBit(oldp+322,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+323,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+324,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+325,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+326,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+327,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+328,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+329,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+330,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+331,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+332,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+333,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+334,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+335,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+336,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+337,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+338,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+339,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+340,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+341,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+342,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+343,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+344,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+345,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+346,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+347,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+348,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+349,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+350,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+351,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+352,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+353,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+354,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+355,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+356,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+357,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+358,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+359,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+360,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+361,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+362,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+363,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+364,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+365,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+366,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+367,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+368,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+369,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+370,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+371,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+372,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+373,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+374,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+375,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+376,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+377,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+378,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+379,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+380,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+381,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+382,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+383,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+384,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+385,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+386,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+387,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+388,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+389,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+390,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+391,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+392,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+393,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+394,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+395,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+396,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+397,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+398,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+399,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+400,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+401,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+402,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+403,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+404,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+405,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+406,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+407,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+408,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+409,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+410,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+411,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+412,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+413,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+414,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+415,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+416,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+417,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])));
            tracep->chgCData(oldp+418,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])),2);
            tracep->chgBit(oldp+419,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+420,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+421,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+422,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+423,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+424,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+425,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+426,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+427,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+428,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+429,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+430,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+431,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+432,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+433,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+434,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+435,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+436,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+437,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+438,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+439,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+440,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+441,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+442,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+443,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+444,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+445,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+446,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+447,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+448,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+449,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+450,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+451,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+452,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+453,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+454,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+455,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+456,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+457,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+458,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+459,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+460,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+461,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+462,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+463,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+464,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+465,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+466,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+467,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+468,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+469,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+470,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+471,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+472,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+473,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+474,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+475,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+476,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+477,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+478,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+479,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+480,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+481,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+482,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+483,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+484,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+485,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+486,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+487,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+488,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+489,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+490,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+491,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+492,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+493,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+494,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+495,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+496,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+497,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+498,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+499,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+500,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+501,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+502,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+503,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+504,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+505,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+506,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+507,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+508,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+509,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+510,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+511,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+512,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+513,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])));
            tracep->chgCData(oldp+514,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])),2);
            tracep->chgBit(oldp+515,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+516,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U))));
            tracep->chgCData(oldp+517,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+518,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+519,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U))));
            tracep->chgCData(oldp+520,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+521,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+522,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U))));
            tracep->chgCData(oldp+523,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+524,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+525,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+526,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+527,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+528,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+529,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+530,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+531,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+532,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+533,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+534,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+535,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+536,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+537,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 8U))));
            tracep->chgCData(oldp+538,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+539,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+540,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+541,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+542,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+543,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+544,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+545,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+546,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+547,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+548,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+549,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+550,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+551,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+552,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+553,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+554,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+555,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+556,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+557,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+558,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+559,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+560,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+561,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+562,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+563,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+564,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+565,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+566,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+567,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+568,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+569,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+570,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+571,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+572,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+573,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+574,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+575,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+576,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+577,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+578,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+579,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+580,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+581,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+582,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+583,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+584,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+585,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+586,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+587,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+588,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+589,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+590,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+591,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+592,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+593,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+594,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+595,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+596,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+597,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+598,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+599,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+600,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+601,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+602,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+603,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+604,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+605,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+606,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+607,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+608,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+609,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])));
            tracep->chgCData(oldp+610,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])),2);
            tracep->chgBit(oldp+611,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+612,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U))));
            tracep->chgCData(oldp+613,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+614,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+615,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U))));
            tracep->chgCData(oldp+616,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+617,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+618,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U))));
            tracep->chgCData(oldp+619,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+620,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+621,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 4U))));
            tracep->chgCData(oldp+622,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+623,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+624,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 5U))));
            tracep->chgCData(oldp+625,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+626,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+627,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 6U))));
            tracep->chgCData(oldp+628,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+629,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+630,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 7U))));
            tracep->chgCData(oldp+631,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+632,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+633,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+634,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+635,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+636,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+637,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+638,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+639,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+640,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+641,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+642,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+643,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+644,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+645,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+646,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+647,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+648,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+649,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+650,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+651,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+652,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+653,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+654,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+655,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+656,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+657,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+658,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+659,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+660,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+661,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+662,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+663,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+664,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+665,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+666,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+667,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+668,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+669,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+670,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+671,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+672,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+673,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+674,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+675,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+676,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+677,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+678,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+679,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+680,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+681,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+682,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+683,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+684,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+685,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+686,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+687,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+688,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+689,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+690,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+691,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+692,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+693,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+694,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+695,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+696,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+697,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+698,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+699,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+700,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+701,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+702,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+703,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+704,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+705,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])));
            tracep->chgCData(oldp+706,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])),2);
            tracep->chgBit(oldp+707,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+708,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U))));
            tracep->chgCData(oldp+709,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+710,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+711,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U))));
            tracep->chgCData(oldp+712,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+713,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+714,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+715,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r));
            tracep->chgCData(oldp+716,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt),7);
            tracep->chgWData(oldp+717,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r),128);
            tracep->chgQData(oldp+721,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r),64);
            tracep->chgQData(oldp+723,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r),64);
            tracep->chgQData(oldp+725,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r),64);
            tracep->chgBit(oldp+727,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s));
            tracep->chgBit(oldp+728,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s));
            tracep->chgQData(oldp+729,((1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend))),64);
            tracep->chgQData(oldp+731,((1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor))),64);
            tracep->chgQData(oldp+733,((1ULL + ((((QData)((IData)(
                                                                  vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                                     << 1U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                                       >> 0x1fU))) 
                                                + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)))),64);
            tracep->chgBit(oldp+735,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s));
            tracep->chgBit(oldp+736,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing));
            tracep->chgBit(oldp+737,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done));
            __Vtemp197[0U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                               << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                         >> 0x1fU));
            __Vtemp197[1U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                               << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                         >> 0x1fU));
            __Vtemp197[2U] = (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                              >> 0x1fU);
            tracep->chgWData(oldp+738,(__Vtemp197),65);
            __Vtemp198[0U] = (IData)((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
            __Vtemp198[1U] = (IData)(((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                                      >> 0x20U));
            __Vtemp198[2U] = 1U;
            tracep->chgWData(oldp+741,(__Vtemp198),65);
            tracep->chgQData(oldp+744,(((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
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
            tracep->chgQData(oldp+746,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout),64);
            tracep->chgCData(oldp+748,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask),8);
            tracep->chgIData(oldp+749,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__i),32);
            tracep->chgIData(oldp+750,((7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))),32);
            tracep->chgIData(oldp+751,((0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))),32);
            tracep->chgIData(oldp+752,((IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r)),32);
            tracep->chgSData(oldp+753,((0xffffU & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r))),16);
            tracep->chgCData(oldp+754,((0xffU & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r))),8);
            tracep->chgQData(oldp+755,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain),64);
            tracep->chgBit(oldp+757,((0U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))));
            tracep->chgBit(oldp+758,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__d_cpu_ready));
            tracep->chgQData(oldp+759,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+761,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cache_doing));
            tracep->chgBit(oldp+762,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                          >> 0x1cU))))));
            tracep->chgQData(oldp+763,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dev_dataout),64);
            tracep->chgQData(oldp+765,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad),64);
            tracep->chgIData(oldp+767,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw),32);
            tracep->chgSData(oldp+768,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah),16);
            tracep->chgCData(oldp+769,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab),8);
            tracep->chgCData(oldp+770,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__bytes),8);
            tracep->chgCData(oldp+771,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+772,((0xfU & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))),4);
            tracep->chgQData(oldp+773,((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+775,((((1U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                       & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                       [(0xffU & (IData)(
                                                         (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                          >> 4U)))]) 
                                      & (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                         [(0xffU & (IData)(
                                                           (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                            >> 4U)))] 
                                         == (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xcU)))));
            tracep->chgCData(oldp+776,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status),3);
            tracep->chgWData(oldp+777,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen),128);
            tracep->chgWData(oldp+781,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+785,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+789,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+793,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3]),128);
            tracep->chgIData(oldp+797,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i),32);
            __Vtemp204[0U] = (((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][0U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
            __Vtemp204[1U] = (((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][1U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
            __Vtemp204[2U] = (((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][2U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
            __Vtemp204[3U] = (((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][3U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
            tracep->chgWData(oldp+798,(__Vtemp204),128);
            tracep->chgWData(oldp+802,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q),128);
            tracep->chgCData(oldp+806,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+807,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q),128);
            tracep->chgWData(oldp+811,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q),128);
            tracep->chgWData(oldp+815,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q),128);
            tracep->chgQData(oldp+819,(vlSelf->top__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+821,(vlSelf->top__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+823,(vlSelf->top__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+825,(vlSelf->top__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+827,(vlSelf->top__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+829,(vlSelf->top__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+831,(vlSelf->top__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+833,(vlSelf->top__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+835,(vlSelf->top__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+837,(vlSelf->top__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+839,(vlSelf->top__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+841,(vlSelf->top__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+843,(vlSelf->top__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+845,(vlSelf->top__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+847,(vlSelf->top__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+849,(vlSelf->top__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+851,(vlSelf->top__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+853,(vlSelf->top__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+855,(vlSelf->top__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+857,(vlSelf->top__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+859,(vlSelf->top__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+861,(vlSelf->top__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+863,(vlSelf->top__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+865,(vlSelf->top__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+867,(vlSelf->top__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+869,(vlSelf->top__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+871,(vlSelf->top__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+873,(vlSelf->top__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+875,(vlSelf->top__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+877,(vlSelf->top__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+879,(vlSelf->top__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+881,(vlSelf->top__DOT__regfile__DOT__rf[31]),64);
            tracep->chgBit(oldp+883,(vlSelf->top__DOT____Vcellinp__csrfile__Ecall));
            tracep->chgBit(oldp+884,(((IData)(vlSelf->top__DOT__id_Mret) 
                                      & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgQData(oldp+885,(vlSelf->top__DOT__csrfile__DOT__mcause),64);
            tracep->chgQData(oldp+887,(vlSelf->top__DOT__csrfile__DOT__mstatus),64);
            tracep->chgQData(oldp+889,(vlSelf->top__DOT__csrfile__DOT__mscratch),64);
            tracep->chgBit(oldp+891,(((IData)(vlSelf->top__DOT__if_busy) 
                                      | (IData)(vlSelf->top__DOT__my_ifu__DOT__cache_doing))));
            tracep->chgCData(oldp+892,(vlSelf->top__DOT__arbiter__DOT__cur_status),2);
            tracep->chgIData(oldp+893,((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)),32);
            tracep->chgCData(oldp+894,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+895,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+896,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+897,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+898,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+899,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+900,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+901,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+902,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+903,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+904,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+905,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+906,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+907,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+908,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+909,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+910,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+911,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+912,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+913,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+914,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+915,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+916,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+917,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+918,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),8);
            tracep->chgBit(oldp+919,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+920,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+921,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+922,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+923,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+924,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+925,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+926,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),4);
            tracep->chgCData(oldp+927,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+928,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+929,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+930,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+931,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+932,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+933,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+934,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+935,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))) 
                                            | ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+936,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))));
            tracep->chgBit(oldp+937,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))));
            tracep->chgBit(oldp+938,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+939,((1U & (((IData)(
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
            tracep->chgBit(oldp+940,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 1U)))));
            tracep->chgBit(oldp+941,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 1U)))));
            tracep->chgBit(oldp+942,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+943,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+944,((1U & (((IData)(
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
            tracep->chgBit(oldp+945,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 2U)))));
            tracep->chgBit(oldp+946,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 2U)))));
            tracep->chgBit(oldp+947,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+948,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+949,((1U & (((IData)(
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
            tracep->chgBit(oldp+950,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 3U)))));
            tracep->chgBit(oldp+951,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 3U)))));
            tracep->chgBit(oldp+952,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+953,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+954,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+955,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+956,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+957,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+958,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+959,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+960,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+961,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+962,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+963,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+964,((1U & (((IData)(
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
            tracep->chgBit(oldp+965,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 4U)))));
            tracep->chgBit(oldp+966,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 4U)))));
            tracep->chgBit(oldp+967,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+968,((1U & (((IData)(
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
            tracep->chgBit(oldp+969,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 5U)))));
            tracep->chgBit(oldp+970,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 5U)))));
            tracep->chgBit(oldp+971,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+972,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+973,((1U & (((IData)(
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
            tracep->chgBit(oldp+974,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 6U)))));
            tracep->chgBit(oldp+975,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 6U)))));
            tracep->chgBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+977,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 7U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 7U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+978,((1U & (((IData)(
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
            tracep->chgBit(oldp+979,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 7U)))));
            tracep->chgBit(oldp+980,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 7U)))));
            tracep->chgBit(oldp+981,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+982,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+983,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+984,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+985,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)))),8);
            tracep->chgBit(oldp+986,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+987,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+988,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+989,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+990,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+991,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+992,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+993,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+994,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+995,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+996,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+997,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+998,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+999,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1000,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1001,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1002,((1U & (((IData)(
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
            tracep->chgBit(oldp+1003,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1004,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1005,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1006,((1U & (((IData)(
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
            tracep->chgBit(oldp+1007,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1008,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1009,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1010,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1011,((1U & (((IData)(
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
            tracep->chgBit(oldp+1012,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1013,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1014,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1015,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1016,((1U & (((IData)(
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
            tracep->chgBit(oldp+1017,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1018,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1019,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1020,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1021,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1022,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1023,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1024,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1025,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1026,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1027,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1028,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1029,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1030,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1031,((1U & (((IData)(
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
            tracep->chgBit(oldp+1032,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1033,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1034,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1035,((1U & (((IData)(
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
            tracep->chgBit(oldp+1036,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1037,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1038,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1039,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1040,((1U & (((IData)(
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
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1042,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1043,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1044,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1045,((1U & (((IData)(
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
            tracep->chgBit(oldp+1046,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1047,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1048,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1049,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1050,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1051,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1052,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1054,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1055,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1056,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1057,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1058,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1059,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1060,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1061,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1062,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1063,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1064,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1065,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1066,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1067,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1068,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1069,((1U & (((IData)(
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
            tracep->chgBit(oldp+1070,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1071,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1072,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1073,((1U & (((IData)(
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
            tracep->chgBit(oldp+1074,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1075,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1076,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1077,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1078,((1U & (((IData)(
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
            tracep->chgBit(oldp+1079,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1080,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1081,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1082,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1083,((1U & (((IData)(
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
            tracep->chgBit(oldp+1084,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1085,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1086,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1087,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1088,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1089,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1090,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1091,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1092,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1093,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1094,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1095,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1096,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1097,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1098,((1U & (((IData)(
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
            tracep->chgBit(oldp+1099,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1100,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1101,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1102,((1U & (((IData)(
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
            tracep->chgBit(oldp+1103,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1104,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1105,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1106,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1107,((1U & (((IData)(
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
            tracep->chgBit(oldp+1108,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1109,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1110,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1111,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1112,((1U & (((IData)(
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
            tracep->chgBit(oldp+1113,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1114,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1115,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1116,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1118,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1119,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1121,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1122,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1123,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1124,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1125,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1126,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1127,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1128,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1129,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1130,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1131,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1132,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1133,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1134,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1135,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1136,((1U & (((IData)(
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
            tracep->chgBit(oldp+1137,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1138,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1139,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1140,((1U & (((IData)(
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
            tracep->chgBit(oldp+1141,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1142,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1143,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1144,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1145,((1U & (((IData)(
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
            tracep->chgBit(oldp+1146,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1147,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1148,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1149,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1150,((1U & (((IData)(
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
            tracep->chgBit(oldp+1151,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1152,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1153,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1154,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1155,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1156,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1157,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1158,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1159,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1160,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1161,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1162,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1163,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1164,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1165,((1U & (((IData)(
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
            tracep->chgBit(oldp+1166,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1167,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1168,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1169,((1U & (((IData)(
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
            tracep->chgBit(oldp+1170,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1171,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1172,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1173,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1174,((1U & (((IData)(
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
            tracep->chgBit(oldp+1175,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1177,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1178,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1179,((1U & (((IData)(
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
            tracep->chgBit(oldp+1180,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1181,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1182,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1183,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1184,((IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1185,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1186,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1187,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1188,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1189,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1190,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1191,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1192,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1193,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1194,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1195,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1196,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1197,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1198,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1199,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1200,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1201,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1202,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1203,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1204,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1205,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1206,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1207,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1208,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1209,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1210,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1211,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1212,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1213,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1215,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1216,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1217,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1218,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1219,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1220,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1221,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1222,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1223,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1224,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1225,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1226,((1U & (((IData)(
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
            tracep->chgBit(oldp+1227,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1228,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1229,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1230,((1U & (((IData)(
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
            tracep->chgBit(oldp+1231,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1232,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1233,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1234,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1235,((1U & (((IData)(
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
            tracep->chgBit(oldp+1236,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1237,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1238,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1239,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1240,((1U & (((IData)(
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
            tracep->chgBit(oldp+1241,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1242,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1243,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1244,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1245,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1246,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1247,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1248,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1249,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1250,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1251,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1252,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1253,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1254,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1255,((1U & (((IData)(
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
            tracep->chgBit(oldp+1256,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1257,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1258,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1259,((1U & (((IData)(
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
            tracep->chgBit(oldp+1260,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1261,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1262,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1263,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1264,((1U & (((IData)(
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
            tracep->chgBit(oldp+1265,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1266,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1267,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1268,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1269,((1U & (((IData)(
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
            tracep->chgBit(oldp+1270,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1271,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1272,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1273,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1274,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1275,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1276,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1277,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1278,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1279,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1280,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1281,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1282,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1283,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1284,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1285,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1286,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1287,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1288,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1289,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1290,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1291,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1292,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1293,((1U & (((IData)(
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
            tracep->chgBit(oldp+1294,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1295,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1296,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1297,((1U & (((IData)(
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
            tracep->chgBit(oldp+1298,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1299,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1300,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1301,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1302,((1U & (((IData)(
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
            tracep->chgBit(oldp+1303,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1304,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1305,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1306,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1307,((1U & (((IData)(
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
            tracep->chgBit(oldp+1308,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1309,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1310,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1311,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1312,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1313,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1314,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1315,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1316,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1317,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1318,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1319,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1320,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1321,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1322,((1U & (((IData)(
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
            tracep->chgBit(oldp+1323,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1324,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1325,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1326,((1U & (((IData)(
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
            tracep->chgBit(oldp+1327,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1328,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1329,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1330,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1331,((1U & (((IData)(
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
            tracep->chgBit(oldp+1332,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1333,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1334,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1335,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1336,((1U & (((IData)(
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
            tracep->chgBit(oldp+1337,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1338,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1339,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1340,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1341,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1342,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1343,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+1344,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1345,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1346,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1347,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1348,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1349,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1350,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1351,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1352,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1353,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1354,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1355,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1356,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1357,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1358,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1359,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1360,((1U & (((IData)(
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
            tracep->chgBit(oldp+1361,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1362,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1363,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1364,((1U & (((IData)(
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
            tracep->chgBit(oldp+1365,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1366,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1367,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1368,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1369,((1U & (((IData)(
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
            tracep->chgBit(oldp+1370,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1371,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1372,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1373,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1374,((1U & (((IData)(
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
            tracep->chgBit(oldp+1375,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1376,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1377,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1378,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1379,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1380,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1381,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1382,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1383,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1384,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1385,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1386,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1387,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1388,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1389,((1U & (((IData)(
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
            tracep->chgBit(oldp+1390,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1391,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1392,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1393,((1U & (((IData)(
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
            tracep->chgBit(oldp+1394,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1395,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1396,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1397,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1398,((1U & (((IData)(
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
            tracep->chgBit(oldp+1399,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1401,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1402,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1403,((1U & (((IData)(
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
            tracep->chgBit(oldp+1404,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1405,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1406,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1407,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1408,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1409,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+1410,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+1411,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1412,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1413,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1414,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1415,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1416,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1417,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1418,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1419,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1420,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1422,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1423,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1424,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1425,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1426,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1427,((1U & (((IData)(
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
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1429,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1430,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1431,((1U & (((IData)(
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
            tracep->chgBit(oldp+1432,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1433,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1434,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1435,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1436,((1U & (((IData)(
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
            tracep->chgBit(oldp+1437,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1438,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1439,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1440,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1441,((1U & (((IData)(
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
            tracep->chgBit(oldp+1442,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1443,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1444,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1445,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1446,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1447,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1448,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1449,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1450,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1451,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1452,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1453,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1454,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1455,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1456,((1U & (((IData)(
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
            tracep->chgBit(oldp+1457,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1458,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1459,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1460,((1U & (((IData)(
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
            tracep->chgBit(oldp+1461,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1462,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1463,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1464,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1465,((1U & (((IData)(
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
            tracep->chgBit(oldp+1466,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1467,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1468,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1469,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1470,((1U & (((IData)(
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
            tracep->chgBit(oldp+1471,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1472,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1473,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1474,(((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                       & (~ (IData)(vlSelf->top__DOT__m_busy)))));
            tracep->chgQData(oldp+1475,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
            tracep->chgQData(oldp+1477,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
            tracep->chgBit(oldp+1479,((((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                        & (0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x1cU))))) 
                                       & (~ (IData)(vlSelf->top__DOT__is_men)))));
            tracep->chgBit(oldp+1480,(((~ (IData)(vlSelf->top__DOT__cpu_halt)) 
                                       & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgQData(oldp+1481,(((1U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                          ? vlSelf->top__DOT__id_imm_o
                                          : ((0U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                              ? vlSelf->top__DOT__id_busb_o
                                              : 4ULL))),64);
            tracep->chgQData(oldp+1483,(((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr))
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
            tracep->chgQData(oldp+1485,(((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                          : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)),64);
            tracep->chgQData(oldp+1487,((QData)((IData)(
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
            tracep->chgBit(oldp+1489,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
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
            tracep->chgQData(oldp+1491,(((0U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
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
                                          : (((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                              & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                              ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))))),64);
            tracep->chgQData(oldp+1493,((((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                          : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient)),64);
            tracep->chgQData(oldp+1495,((((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                          : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder)),64);
            tracep->chgQData(oldp+1497,((((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U]))))),64);
            tracep->chgQData(oldp+1499,(((IData)(vlSelf->top__DOT__is_MemToReg)
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
            tracep->chgCData(oldp+1501,(((4U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                          ? ((2U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                              ? 0U : 
                                             ((1U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                               ? 0U
                                               : ((IData)(vlSelf->top__DOT__d_rw_ready_i)
                                                   ? 2U
                                                   : 4U)))
                                          : ((2U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                              ? ((1U 
                                                  & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                  ? 
                                                 ((IData)(vlSelf->top__DOT__is_MemToReg)
                                                   ? 0U
                                                   : 6U)
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__d_rw_ready_i)
                                                   ? 1U
                                                   : 2U))
                                              : ((1U 
                                                  & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                  ? 
                                                 ((((1U 
                                                     == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                                    & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                    [
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                >> 4U)))]) 
                                                   & (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                                      [
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                  >> 4U)))] 
                                                      == 
                                                      (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                       >> 0xcU)))
                                                   ? 3U
                                                   : 
                                                  ((vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                                    [
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                >> 4U)))] 
                                                    & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__D
                                                    [
                                                    (0xffU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                                >> 4U)))])
                                                    ? 4U
                                                    : 2U))
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid)
                                                   ? 1U
                                                   : 0U))))),3);
            tracep->chgBit(oldp+1502,(((IData)(vlSelf->top__DOT__m_busy) 
                                       | (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cache_doing))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1503,(vlSelf->top__DOT__i_rw_ready_i));
            tracep->chgBit(oldp+1504,(vlSelf->top__DOT__d_rw_ready_i));
            tracep->chgIData(oldp+1505,(vlSelf->top__DOT__if_instr_o),32);
            tracep->chgBit(oldp+1506,(vlSelf->top__DOT__id_en));
            tracep->chgBit(oldp+1507,(vlSelf->top__DOT__ex_en));
            tracep->chgBit(oldp+1508,((1U & (~ (IData)(vlSelf->top__DOT__m_busy)))));
            tracep->chgBit(oldp+1509,(vlSelf->top__DOT__m_busy));
            tracep->chgQData(oldp+1510,(vlSelf->top__DOT__id_busa_o),64);
            tracep->chgQData(oldp+1512,(vlSelf->top__DOT__id_busb_o),64);
            tracep->chgQData(oldp+1514,((0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__my_idu__DOT__addr_res)),64);
            tracep->chgQData(oldp+1516,(vlSelf->top__DOT__my_exu__DOT__res),64);
            tracep->chgQData(oldp+1518,(vlSelf->top__DOT__m_rfdata_o),64);
            tracep->chgBit(oldp+1520,(vlSelf->top__DOT__cpu_halt));
            tracep->chgBit(oldp+1521,(vlSelf->top__DOT__is_Csrwen));
            tracep->chgBit(oldp+1522,(vlSelf->top__DOT__is_MemToReg));
            tracep->chgBit(oldp+1523,(vlSelf->top__DOT__is_men));
            tracep->chgCData(oldp+1524,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status),3);
            tracep->chgBit(oldp+1525,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
            tracep->chgBit(oldp+1526,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
            tracep->chgBit(oldp+1527,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
            tracep->chgBit(oldp+1528,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
            tracep->chgBit(oldp+1529,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [0U]));
            tracep->chgBit(oldp+1530,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [1U]));
            tracep->chgBit(oldp+1531,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [2U]));
            tracep->chgBit(oldp+1532,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [3U]));
            tracep->chgQData(oldp+1533,(vlSelf->top__DOT__my_idu__DOT__addr_res),64);
            tracep->chgQData(oldp+1535,(vlSelf->top__DOT__my_idu__DOT__alu_inA),64);
            tracep->chgBit(oldp+1537,(((0ULL == vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        ? 1U : 0U)));
            tracep->chgQData(oldp+1538,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres),64);
            tracep->chgQData(oldp+1540,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb),64);
            tracep->chgBit(oldp+1542,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1543,((1U & ((((~ (IData)(
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
            tracep->chgBit(oldp+1544,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgIData(oldp+1545,(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1546,(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1547,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1548,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA));
            tracep->chgBit(oldp+1549,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB));
            tracep->chgQData(oldp+1550,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA),64);
            tracep->chgQData(oldp+1552,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB),64);
            tracep->chgQData(oldp+1554,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc),64);
            tracep->chgBit(oldp+1556,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1557,((1U & ((((~ (IData)(
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
            tracep->chgBit(oldp+1558,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1559,(((0ULL == vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc)
                                        ? 1U : 0U)));
            tracep->chgIData(oldp+1560,(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1561,(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1562,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgQData(oldp+1563,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo),64);
            tracep->chgBit(oldp+1565,(vlSelf->top__DOT__my_mu__DOT__vis_mem));
            tracep->chgBit(oldp+1566,((1U & (~ (IData)(vlSelf->top__DOT__is_MemToReg)))));
            tracep->chgBit(oldp+1567,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid));
            tracep->chgWData(oldp+1568,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram),128);
            tracep->chgBit(oldp+1572,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0]));
            tracep->chgBit(oldp+1573,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1]));
            tracep->chgBit(oldp+1574,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2]));
            tracep->chgBit(oldp+1575,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3]));
            tracep->chgBit(oldp+1576,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [0U]));
            tracep->chgBit(oldp+1577,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [1U]));
            tracep->chgBit(oldp+1578,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [2U]));
            tracep->chgBit(oldp+1579,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [3U]));
            tracep->chgQData(oldp+1580,(vlSelf->top__DOT__csrfile__DOT__csrin),64);
            tracep->chgCData(oldp+1582,(vlSelf->top__DOT__arbiter__DOT__next_status),2);
            tracep->chgIData(oldp+1583,((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA)),32);
            tracep->chgIData(oldp+1584,((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb)),32);
            tracep->chgCData(oldp+1585,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+1586,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+1587,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+1588,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+1589,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+1590,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+1591,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+1592,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+1593,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+1594,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+1595,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+1596,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1597,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1598,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1599,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1600,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1601,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1602,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1603,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1604,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1605,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1606,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1607,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1608,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+1609,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))),8);
            tracep->chgBit(oldp+1610,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+1611,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1612,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1613,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1614,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1615,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1616,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+1617,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))),4);
            tracep->chgCData(oldp+1618,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1619,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1620,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1621,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1622,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1623,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1624,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1625,((1U & (((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA) 
                                              ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb)) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+1626,((1U & (((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA) 
                                              & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))) 
                                             | ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+1627,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))));
            tracep->chgBit(oldp+1628,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))));
            tracep->chgBit(oldp+1629,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1630,((1U & (((IData)(
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
            tracep->chgBit(oldp+1631,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1632,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1633,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1634,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1635,((1U & (((IData)(
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
            tracep->chgBit(oldp+1636,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1637,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1638,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1639,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1640,((1U & (((IData)(
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
            tracep->chgBit(oldp+1641,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1642,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1643,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1644,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1645,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1646,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1647,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1648,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1649,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1650,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1651,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1652,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1653,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1654,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1655,((1U & (((IData)(
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
            tracep->chgBit(oldp+1656,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1657,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1658,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1659,((1U & (((IData)(
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
            tracep->chgBit(oldp+1660,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1661,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1662,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1663,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1664,((1U & (((IData)(
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
            tracep->chgBit(oldp+1665,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1666,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1668,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1669,((1U & (((IData)(
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
            tracep->chgBit(oldp+1670,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1671,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1672,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1673,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1674,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1675,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1676,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+1677,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1678,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1679,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1680,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1681,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1682,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1683,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1684,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1685,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1686,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1687,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1688,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1689,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1690,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1691,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1692,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1693,((1U & (((IData)(
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
            tracep->chgBit(oldp+1694,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1695,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1696,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1697,((1U & (((IData)(
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
            tracep->chgBit(oldp+1698,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1699,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1700,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1701,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1702,((1U & (((IData)(
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
            tracep->chgBit(oldp+1703,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1704,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1705,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1706,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1707,((1U & (((IData)(
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
            tracep->chgBit(oldp+1708,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1709,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1710,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1711,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1712,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1713,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1714,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1715,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1716,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1717,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1718,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1719,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1720,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1721,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1722,((1U & (((IData)(
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
            tracep->chgBit(oldp+1723,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1724,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1725,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1726,((1U & (((IData)(
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
            tracep->chgBit(oldp+1727,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1728,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1729,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1730,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1731,((1U & (((IData)(
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
            tracep->chgBit(oldp+1732,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1733,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1735,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1736,((1U & (((IData)(
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
            tracep->chgBit(oldp+1737,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1738,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1739,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1740,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1741,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1742,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1743,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1744,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1745,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1746,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1747,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1748,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1749,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1750,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1751,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1752,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1753,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1754,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1755,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1756,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1757,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1758,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1759,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1760,((1U & (((IData)(
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
            tracep->chgBit(oldp+1761,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1762,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1763,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1764,((1U & (((IData)(
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
            tracep->chgBit(oldp+1765,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1766,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1767,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1768,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1769,((1U & (((IData)(
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
            tracep->chgBit(oldp+1770,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1771,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1772,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1773,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1774,((1U & (((IData)(
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
            tracep->chgBit(oldp+1775,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1776,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1777,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1778,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1779,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1780,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1781,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1782,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1783,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1784,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1785,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1786,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1787,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1788,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1789,((1U & (((IData)(
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
            tracep->chgBit(oldp+1790,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1791,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1792,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1793,((1U & (((IData)(
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
            tracep->chgBit(oldp+1794,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1795,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1796,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1797,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1798,((1U & (((IData)(
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
            tracep->chgBit(oldp+1799,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1800,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1801,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1802,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1803,((1U & (((IData)(
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
            tracep->chgBit(oldp+1804,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1805,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1806,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1807,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1808,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1809,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1810,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1811,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1812,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1813,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1814,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1815,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1816,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1817,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1818,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1819,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1820,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1821,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1822,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1823,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1824,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1825,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1826,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1827,((1U & (((IData)(
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
            tracep->chgBit(oldp+1828,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1829,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1830,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1831,((1U & (((IData)(
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
            tracep->chgBit(oldp+1832,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1833,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1834,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1835,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1836,((1U & (((IData)(
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
            tracep->chgBit(oldp+1837,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1838,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1839,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1840,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1841,((1U & (((IData)(
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
            tracep->chgBit(oldp+1842,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1843,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1844,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1846,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1847,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1848,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1849,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1850,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1851,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1852,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1853,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1854,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1855,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1856,((1U & (((IData)(
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
            tracep->chgBit(oldp+1857,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1858,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1859,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1860,((1U & (((IData)(
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
            tracep->chgBit(oldp+1861,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1862,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1863,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1864,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1865,((1U & (((IData)(
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
            tracep->chgBit(oldp+1866,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1867,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1868,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1869,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1870,((1U & (((IData)(
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
            tracep->chgBit(oldp+1871,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1872,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1873,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1874,((IData)((vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1875,((IData)((vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1876,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1877,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1878,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1879,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1880,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1881,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1882,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1883,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1884,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1885,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1886,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1887,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1888,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1889,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1890,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1891,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1892,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1893,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1894,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1895,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1896,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1897,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1898,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1899,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1900,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1901,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1902,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1903,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1904,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1905,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1906,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1907,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1908,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1909,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1910,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1911,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1912,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1913,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1914,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1915,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1916,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1917,((1U & (((IData)(
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
            tracep->chgBit(oldp+1918,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1919,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1920,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1921,((1U & (((IData)(
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
            tracep->chgBit(oldp+1922,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1923,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1924,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1925,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1926,((1U & (((IData)(
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
            tracep->chgBit(oldp+1927,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1928,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1929,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1930,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1931,((1U & (((IData)(
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
            tracep->chgBit(oldp+1932,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1933,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1934,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1935,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1936,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1937,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1938,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1939,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1940,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1941,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1942,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1943,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1944,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1945,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1946,((1U & (((IData)(
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
            tracep->chgBit(oldp+1947,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1948,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1949,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1950,((1U & (((IData)(
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
            tracep->chgBit(oldp+1951,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1952,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1953,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1954,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1955,((1U & (((IData)(
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
            tracep->chgBit(oldp+1956,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1957,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1958,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1959,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1960,((1U & (((IData)(
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
            tracep->chgBit(oldp+1961,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1962,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1963,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1964,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1965,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1966,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1967,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1968,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1969,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1970,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1971,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1972,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1973,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1974,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1975,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1976,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1977,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1978,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1979,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1980,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1981,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1982,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1983,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1984,((1U & (((IData)(
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
            tracep->chgBit(oldp+1985,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1986,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1987,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1988,((1U & (((IData)(
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
            tracep->chgBit(oldp+1989,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1990,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1991,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1992,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1993,((1U & (((IData)(
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
            tracep->chgBit(oldp+1994,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1995,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1996,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1997,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1998,((1U & (((IData)(
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
            tracep->chgBit(oldp+1999,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+2000,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+2001,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2002,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2003,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+2004,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+2005,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2006,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2007,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2008,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2009,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2010,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2011,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2012,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2013,((1U & (((IData)(
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
            tracep->chgBit(oldp+2014,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+2015,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+2016,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2017,((1U & (((IData)(
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
            tracep->chgBit(oldp+2018,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+2019,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+2020,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2021,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2022,((1U & (((IData)(
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
            tracep->chgBit(oldp+2023,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+2024,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+2025,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2026,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2027,((1U & (((IData)(
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
            tracep->chgBit(oldp+2028,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+2029,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+2030,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2031,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2032,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2033,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2034,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+2035,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2036,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2037,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2038,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2039,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2040,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2041,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+2042,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+2043,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2044,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2045,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2046,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2047,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2048,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2049,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2050,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2051,((1U & (((IData)(
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
            tracep->chgBit(oldp+2052,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+2053,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+2054,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2055,((1U & (((IData)(
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
            tracep->chgBit(oldp+2056,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+2057,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+2058,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2059,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2060,((1U & (((IData)(
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
            tracep->chgBit(oldp+2061,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+2062,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+2063,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2064,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2065,((1U & (((IData)(
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
            tracep->chgBit(oldp+2066,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2067,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2068,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2069,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2070,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+2071,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+2072,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2073,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2074,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2075,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2076,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2077,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2078,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2079,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2080,((1U & (((IData)(
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
            tracep->chgBit(oldp+2081,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+2082,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+2083,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2084,((1U & (((IData)(
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
            tracep->chgBit(oldp+2085,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+2086,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+2087,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2088,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2089,((1U & (((IData)(
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
            tracep->chgBit(oldp+2090,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+2091,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+2092,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2093,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2094,((1U & (((IData)(
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
            tracep->chgBit(oldp+2095,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+2096,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+2097,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2098,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2099,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2100,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+2101,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+2102,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+2103,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2104,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2105,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2106,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2107,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2108,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2109,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2110,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2111,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2112,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2113,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2114,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2115,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2116,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2117,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+2118,((1U & (((IData)(
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
            tracep->chgBit(oldp+2119,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2120,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2121,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2122,((1U & (((IData)(
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
            tracep->chgBit(oldp+2123,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2124,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2125,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2126,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2127,((1U & (((IData)(
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
            tracep->chgBit(oldp+2128,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2129,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2130,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2131,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2132,((1U & (((IData)(
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
            tracep->chgBit(oldp+2133,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2134,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2135,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2136,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2137,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2138,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2139,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2140,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2141,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2142,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2143,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2144,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2145,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2146,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2147,((1U & (((IData)(
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
            tracep->chgBit(oldp+2148,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2149,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2150,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2151,((1U & (((IData)(
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
            tracep->chgBit(oldp+2152,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2153,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2154,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2155,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2156,((1U & (((IData)(
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
            tracep->chgBit(oldp+2157,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2158,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2159,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2160,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2161,((1U & (((IData)(
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
            tracep->chgBit(oldp+2162,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2163,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2164,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+2165,((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA)),32);
            tracep->chgIData(oldp+2166,((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)),32);
            tracep->chgCData(oldp+2167,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+2168,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+2169,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+2170,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+2171,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+2172,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+2173,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+2174,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+2175,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+2176,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+2177,(((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                         << 1U)),5);
            tracep->chgCData(oldp+2178,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+2179,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+2180,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+2181,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+2182,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+2183,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c),4);
            tracep->chgBit(oldp+2184,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg))));
            tracep->chgBit(oldp+2185,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+2186,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+2187,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+2188,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2189,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2190,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),8);
            tracep->chgCData(oldp+2191,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),8);
            tracep->chgBit(oldp+2192,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2193,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2194,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2195,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2196,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2197,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),4);
            tracep->chgCData(oldp+2198,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),4);
            tracep->chgCData(oldp+2199,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2200,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2201,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2202,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
            tracep->chgBit(oldp+2203,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2204,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2205,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2206,((1U & ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2207,((1U & ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2208,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))));
            tracep->chgBit(oldp+2209,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))));
            tracep->chgBit(oldp+2210,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2211,((1U & (((IData)(
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
            tracep->chgBit(oldp+2212,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2213,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2214,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2215,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2216,((1U & (((IData)(
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
            tracep->chgBit(oldp+2217,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2218,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2219,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2220,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2221,((1U & (((IData)(
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
            tracep->chgBit(oldp+2222,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2223,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2224,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2225,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2226,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2227,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2228,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2229,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2230,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2231,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2232,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2233,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2234,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2235,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2236,((1U & (((IData)(
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
            tracep->chgBit(oldp+2237,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2238,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2239,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2240,((1U & (((IData)(
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
            tracep->chgBit(oldp+2241,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2242,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2243,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2244,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2245,((1U & (((IData)(
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
            tracep->chgBit(oldp+2246,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2247,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2248,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2249,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2250,((1U & (((IData)(
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
            tracep->chgBit(oldp+2251,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2252,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2253,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2254,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2255,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2256,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2257,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+2258,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))));
            tracep->chgBit(oldp+2259,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2260,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2261,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2262,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2263,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2264,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2265,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2266,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2267,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2268,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2269,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2270,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2271,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2272,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2273,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c)))));
            tracep->chgBit(oldp+2274,((1U & (((IData)(
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
            tracep->chgBit(oldp+2275,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2276,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2277,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2278,((1U & (((IData)(
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
            tracep->chgBit(oldp+2279,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2280,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2281,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2282,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2283,((1U & (((IData)(
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
            tracep->chgBit(oldp+2284,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2285,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2286,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2287,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2288,((1U & (((IData)(
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
            tracep->chgBit(oldp+2289,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2290,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2291,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2292,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2293,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2294,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2295,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2296,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2297,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2298,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2299,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2300,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2301,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2302,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2303,((1U & (((IData)(
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
            tracep->chgBit(oldp+2304,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2305,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2306,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2307,((1U & (((IData)(
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
            tracep->chgBit(oldp+2308,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2309,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2310,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2311,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2312,((1U & (((IData)(
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
            tracep->chgBit(oldp+2313,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2314,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2315,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2316,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2317,((1U & (((IData)(
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
            tracep->chgBit(oldp+2318,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2319,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2320,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2321,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2322,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2323,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2324,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+2325,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2326,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2327,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2328,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2329,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2330,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2331,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2332,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2333,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2334,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2335,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2336,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2337,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2338,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2339,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2340,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2341,((1U & (((IData)(
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
            tracep->chgBit(oldp+2342,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2343,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2344,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2345,((1U & (((IData)(
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
            tracep->chgBit(oldp+2346,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2347,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2348,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2349,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2350,((1U & (((IData)(
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
            tracep->chgBit(oldp+2351,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2352,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2353,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2354,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2355,((1U & (((IData)(
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
            tracep->chgBit(oldp+2356,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2357,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2358,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2359,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2360,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2361,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2362,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2363,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2364,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2365,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2366,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2367,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2368,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2369,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2370,((1U & (((IData)(
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
            tracep->chgBit(oldp+2371,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2372,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2373,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2374,((1U & (((IData)(
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
            tracep->chgBit(oldp+2375,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2376,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2377,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2378,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2379,((1U & (((IData)(
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
            tracep->chgBit(oldp+2380,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2381,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2382,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2383,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2384,((1U & (((IData)(
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
            tracep->chgBit(oldp+2385,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2386,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2387,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2388,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2389,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2390,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2391,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+2392,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2393,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2394,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2395,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2396,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2397,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2398,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2399,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2400,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2401,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2402,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2403,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2404,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2405,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2406,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2407,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2408,((1U & (((IData)(
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
            tracep->chgBit(oldp+2409,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2410,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2411,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2412,((1U & (((IData)(
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
        }
    }
}
