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
    VlWide<4>/*127:0*/ __Vtemp182;
    VlWide<5>/*159:0*/ __Vtemp184;
    VlWide<5>/*159:0*/ __Vtemp185;
    VlWide<5>/*159:0*/ __Vtemp186;
    VlWide<5>/*159:0*/ __Vtemp187;
    VlWide<5>/*159:0*/ __Vtemp188;
    VlWide<5>/*159:0*/ __Vtemp190;
    VlWide<5>/*159:0*/ __Vtemp191;
    VlWide<5>/*159:0*/ __Vtemp192;
    VlWide<5>/*159:0*/ __Vtemp193;
    VlWide<5>/*159:0*/ __Vtemp194;
    VlWide<3>/*95:0*/ __Vtemp198;
    VlWide<3>/*95:0*/ __Vtemp199;
    VlWide<4>/*127:0*/ __Vtemp205;
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
            tracep->chgBit(oldp+12,((1U & (IData)((vlSelf->top__DOT__csrfile__DOT__mstatus 
                                                   >> 3U)))));
            tracep->chgBit(oldp+13,((1U & (IData)((vlSelf->top__DOT__csrfile__DOT__mie 
                                                   >> 7U)))));
            tracep->chgBit(oldp+14,((((IData)((vlSelf->top__DOT__csrfile__DOT__mie 
                                               >> 7U)) 
                                      & (IData)((vlSelf->top__DOT__csrfile__DOT__mstatus 
                                                 >> 3U))) 
                                     & (vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
                                        >= vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp))));
            tracep->chgIData(oldp+15,(vlSelf->top__DOT__ID_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+16,(vlSelf->top__DOT__EX_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+17,(vlSelf->top__DOT__M_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+18,(vlSelf->top__DOT__WB_Reg__DOT__instr_r),32);
            tracep->chgQData(oldp+19,(vlSelf->top__DOT__if_pc_o),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__ID_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__EX_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__M_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__WB_Reg__DOT__pc_r),64);
            tracep->chgBit(oldp+29,(((IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__id_block)))));
            tracep->chgBit(oldp+30,(((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__alu_busy)))));
            tracep->chgBit(oldp+31,(vlSelf->top__DOT__ID_Reg__DOT__valid_r));
            tracep->chgBit(oldp+32,(vlSelf->top__DOT__EX_Reg__DOT__valid_r));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__M_Reg__DOT__valid_r));
            tracep->chgBit(oldp+34,(vlSelf->top__DOT__WB_Reg__DOT__valid_r));
            tracep->chgBit(oldp+35,(((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                     | (IData)(vlSelf->top__DOT__if_busy))));
            tracep->chgBit(oldp+36,(vlSelf->top__DOT__id_block));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__alu_busy));
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__id_csrres_o),64);
            tracep->chgCData(oldp+40,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+41,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+42,((0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+43,(vlSelf->top__DOT__id_imm_o),64);
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__id_ALUSrcA_o));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__id_MemToReg_o));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__id_MemWen_o));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__id_wen_o));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__id_CsrToReg_o));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__id_Ebreak_o));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__id_Fence_i_o));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__id_Csri_o));
            tracep->chgCData(oldp+53,(vlSelf->top__DOT__id_ALUSrcB_o),2);
            tracep->chgCData(oldp+54,(vlSelf->top__DOT__id_MemOp_o),3);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__id_ALUOp_o),5);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__id_MulOp_o),2);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__id_CsrOp),3);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__id_Ecall));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__id_Mret));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__id_Csrwen));
            tracep->chgQData(oldp+61,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU))])),64);
            tracep->chgQData(oldp+63,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->top__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U))])),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__csrfile__DOT__mtvec),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__csrfile__DOT__mepc),64);
            tracep->chgSData(oldp+69,(vlSelf->top__DOT__id_CsrId),12);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__EX_Reg__DOT__rd_r),5);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__EX_Reg__DOT__busa_r),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__EX_Reg__DOT__busb_r),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__EX_Reg__DOT__imm_r),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__EX_Reg__DOT__Csrres_r),64);
            tracep->chgBit(oldp+79,(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcA_r));
            tracep->chgBit(oldp+80,(vlSelf->top__DOT__EX_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+81,(vlSelf->top__DOT__EX_Reg__DOT__MemWen_r));
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__EX_Reg__DOT__wen_r));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__EX_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+84,(vlSelf->top__DOT__EX_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__EX_Reg__DOT__Fence_i_r));
            tracep->chgCData(oldp+86,(vlSelf->top__DOT__EX_Reg__DOT__ALUSrcB_r),2);
            tracep->chgCData(oldp+87,(vlSelf->top__DOT__EX_Reg__DOT__MemOp_r),3);
            tracep->chgCData(oldp+88,(vlSelf->top__DOT__EX_Reg__DOT__ALUOp_r),5);
            tracep->chgCData(oldp+89,(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r),2);
            tracep->chgCData(oldp+90,(vlSelf->top__DOT__M_Reg__DOT__MemOp_r),3);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__M_Reg__DOT__raddr_r),64);
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__M_Reg__DOT__MemWen_r));
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__M_Reg__DOT__wdata_r),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__M_Reg__DOT__Csrres_r),64);
            tracep->chgCData(oldp+98,(vlSelf->top__DOT__M_Reg__DOT__rd_r),5);
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__M_Reg__DOT__wen_r));
            tracep->chgBit(oldp+100,(vlSelf->top__DOT__M_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+101,(vlSelf->top__DOT__M_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__M_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__M_Reg__DOT__Fence_i_r));
            tracep->chgBit(oldp+104,((vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
                                      >= vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp)));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__WB_Reg__DOT__wen_r));
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__WB_Reg__DOT__wdata_r),64);
            tracep->chgCData(oldp+108,(vlSelf->top__DOT__WB_Reg__DOT__waddr_r),5);
            tracep->chgBit(oldp+109,(vlSelf->top__DOT__WB_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+110,(vlSelf->top__DOT__WB_Reg__DOT__Fence_i_r));
            tracep->chgBit(oldp+111,(vlSelf->top__DOT__id_use_rd));
            tracep->chgBit(oldp+112,(((IData)(vlSelf->top__DOT__EX_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__EX_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+113,(((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__M_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+114,(((IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+115,(((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
            tracep->chgBit(oldp+116,(((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
            tracep->chgCData(oldp+117,((0x7fU & vlSelf->top__DOT__ID_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+118,((0x7fU & vlSelf->top__DOT__EX_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+119,((0x7fU & vlSelf->top__DOT__M_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+120,((0x7fU & vlSelf->top__DOT__WB_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+121,((7U & (vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+122,((vlSelf->top__DOT__ID_Reg__DOT__instr_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__id_ex_hazard));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__id_m_hazard));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__id_wb_hazard));
            tracep->chgBit(oldp+126,(((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                      & (3U == (0x7fU 
                                                & vlSelf->top__DOT__EX_Reg__DOT__instr_r)))));
            tracep->chgBit(oldp+127,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
                                       | (IData)(vlSelf->top__DOT__id_m_hazard)) 
                                      | (IData)(vlSelf->top__DOT__id_wb_hazard))));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__has_fence_i));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__if_busy));
            tracep->chgBit(oldp+130,(((IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r) 
                                      & (~ (IData)(vlSelf->top__DOT__has_fence_i)))));
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__ex_dnpc),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__m_dnpc),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__wb_dnpc),64);
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__is_Fence_i));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__dev_o));
            tracep->chgBit(oldp+139,(vlSelf->top__DOT__wb_commit_r));
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__wb_pc_r),64);
            tracep->chgIData(oldp+142,(vlSelf->top__DOT__wb_instr_r),32);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__next_pc_r),64);
            tracep->chgBit(oldp+145,((0U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status))));
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__my_ifu__DOT__old_instr));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__my_ifu__DOT__cache_doing));
            tracep->chgIData(oldp+148,(vlSelf->top__DOT__my_ifu__DOT__instr_read_r),32);
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready));
            tracep->chgBit(oldp+150,(vlSelf->top__DOT__my_ifu__DOT__cpu_req_valid));
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__my_ifu__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__my_ifu__DOT__start));
            tracep->chgCData(oldp+154,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__if_pc_o 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+155,((0xfU & (IData)(vlSelf->top__DOT__if_pc_o))),4);
            tracep->chgQData(oldp+156,((vlSelf->top__DOT__if_pc_o 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+158,((((1U == (IData)(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
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
            tracep->chgCData(oldp+159,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__cur_status),3);
            tracep->chgWData(oldp+160,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+164,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+168,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+172,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_o[3]),128);
            tracep->chgIData(oldp+176,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__i),32);
            tracep->chgWData(oldp+177,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q),128);
            tracep->chgCData(oldp+181,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__if_pc_o 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+182,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q),128);
            tracep->chgWData(oldp+186,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q),128);
            tracep->chgWData(oldp+190,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q),128);
            tracep->chgCData(oldp+194,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgCData(oldp+195,(vlSelf->top__DOT__my_idu__DOT__Branch),3);
            tracep->chgBit(oldp+196,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            tracep->chgBit(oldp+197,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SIGctr));
            tracep->chgBit(oldp+198,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__ALctr));
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SFTctr));
            tracep->chgBit(oldp+200,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr));
            tracep->chgCData(oldp+201,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr),4);
            tracep->chgBit(oldp+202,(((0ULL == vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__my_exu__DOT__alu_inA),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SIGctr));
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr));
            tracep->chgBit(oldp+210,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr));
            tracep->chgBit(oldp+211,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr));
            tracep->chgCData(oldp+212,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr),4);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres),64);
            tracep->chgQData(oldp+215,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                         : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres)),64);
            tracep->chgQData(oldp+217,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        & vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+219,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        | vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+221,((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                        ^ vlSelf->top__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+223,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SFTctr)
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
            tracep->chgQData(oldp+225,((QData)((IData)(
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
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb),64);
            tracep->chgBit(oldp+229,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
            tracep->chgBit(oldp+230,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+231,((1U & ((((~ (IData)(
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
            tracep->chgIData(oldp+232,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres),32);
            tracep->chgIData(oldp+233,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__srWres),32);
            tracep->chgIData(oldp+234,((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA)),32);
            tracep->chgCData(oldp+235,((0x3fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),6);
            tracep->chgCData(oldp+236,((0x1fU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),5);
            tracep->chgQData(oldp+237,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                         ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__my_exu__DOT__alu_inA, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))
                                         : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+239,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                         : (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+241,(((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__Wctr)
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
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__op_mul));
            tracep->chgWData(oldp+244,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplicand),65);
            tracep->chgWData(oldp+247,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__multiplier),65);
            tracep->chgQData(oldp+250,((((QData)((IData)(
                                                         vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))),64);
            tracep->chgQData(oldp+252,((((QData)((IData)(
                                                         vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U])))),64);
            tracep->chgQData(oldp+254,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r),64);
            tracep->chgQData(oldp+256,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_lo_r),64);
            tracep->chgBit(oldp+258,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_doing));
            tracep->chgBit(oldp+259,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_ready));
            tracep->chgBit(oldp+260,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_out_valid));
            tracep->chgBit(oldp+261,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mul_valid));
            tracep->chgBit(oldp+262,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_mul));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                                            >> 3U))));
            tracep->chgQData(oldp+264,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend),64);
            tracep->chgQData(oldp+266,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor),64);
            tracep->chgQData(oldp+268,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient),64);
            tracep->chgQData(oldp+270,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder),64);
            tracep->chgQData(oldp+272,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r),64);
            tracep->chgQData(oldp+274,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r),64);
            tracep->chgBit(oldp+276,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_doing));
            tracep->chgBit(oldp+277,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r));
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r));
            tracep->chgBit(oldp+279,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__div_valid));
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div));
            tracep->chgBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgIData(oldp+282,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                              [0U])))),32);
            tracep->chgIData(oldp+283,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                              [0U])))),32);
            tracep->chgBit(oldp+284,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                            >> 3U))));
            __Vtemp182[0U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U];
            __Vtemp182[1U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U];
            __Vtemp182[2U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U];
            __Vtemp182[3U] = vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U];
            tracep->chgWData(oldp+285,(__Vtemp182),128);
            tracep->chgWData(oldp+289,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result),132);
            tracep->chgWData(oldp+294,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r),132);
            tracep->chgWData(oldp+299,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r),67);
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r));
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done));
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing));
            tracep->chgWData(oldp+305,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result),132);
            tracep->chgCData(oldp+310,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt),7);
            tracep->chgBit(oldp+311,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp184, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_EXTEND_WI(133,1, __Vtemp185, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            __Vtemp186[0U] = __Vtemp185[0U];
            __Vtemp186[1U] = __Vtemp185[1U];
            __Vtemp186[2U] = __Vtemp185[2U];
            __Vtemp186[3U] = __Vtemp185[3U];
            __Vtemp186[4U] = __Vtemp185[4U];
            VL_ADD_W(5, __Vtemp187, __Vtemp184, __Vtemp186);
            __Vtemp188[0U] = __Vtemp187[0U];
            __Vtemp188[1U] = __Vtemp187[1U];
            __Vtemp188[2U] = __Vtemp187[2U];
            __Vtemp188[3U] = __Vtemp187[3U];
            __Vtemp188[4U] = (0xfU & __Vtemp187[4U]);
            tracep->chgWData(oldp+312,(__Vtemp188),132);
            VL_EXTEND_WW(133,132, __Vtemp190, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
            VL_EXTEND_WW(133,132, __Vtemp191, vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_ADD_W(5, __Vtemp192, __Vtemp190, __Vtemp191);
            VL_EXTEND_WI(133,1, __Vtemp193, (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp194, __Vtemp192, __Vtemp193);
            tracep->chgBit(oldp+317,((1U & (__Vtemp194[4U] 
                                            >> 4U))));
            tracep->chgCData(oldp+318,((7U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])),3);
            tracep->chgBit(oldp+319,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+320,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+321,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])));
            tracep->chgCData(oldp+322,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel),4);
            tracep->chgBit(oldp+323,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+325,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+326,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel))));
            tracep->chgBit(oldp+327,((1U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 2U) 
                                            & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+328,((1U & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
            tracep->chgBit(oldp+329,((1U & ((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+330,((1U & (((~ (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 1U)) 
                                            & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))));
            tracep->chgCData(oldp+331,((2U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              << 1U))),2);
            tracep->chgBit(oldp+332,((1U & (~ (((~ 
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
            tracep->chgBit(oldp+333,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+334,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])),2);
            tracep->chgBit(oldp+335,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+336,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+337,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+338,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+339,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+340,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+341,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+342,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+343,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+344,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+345,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+346,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+347,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+348,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+349,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+350,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+351,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+352,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+353,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+354,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+355,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+356,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+357,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+358,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+359,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+360,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+361,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+362,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+363,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+364,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+365,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+366,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+367,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+368,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+369,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+370,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+371,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+372,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+373,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+374,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+375,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+376,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+377,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+378,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+379,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+380,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+381,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+382,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+383,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+384,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+385,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+386,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+387,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+388,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+389,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+390,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+391,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+392,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+393,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+394,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+395,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+396,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+397,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+398,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+399,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+400,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+401,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+402,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+403,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+404,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+405,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+406,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+407,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+408,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+409,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+410,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+411,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+412,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+413,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+414,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+415,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+416,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+417,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+418,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+419,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+420,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+421,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+422,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+423,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+424,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+425,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+426,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+427,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+428,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+429,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+430,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])));
            tracep->chgCData(oldp+431,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])),2);
            tracep->chgBit(oldp+432,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+433,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+434,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+435,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+436,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+437,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+438,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+440,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+441,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+443,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+444,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+445,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+446,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+447,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+448,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+449,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+450,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+451,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+452,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+453,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+454,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+455,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+456,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+457,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+458,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+459,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+460,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+461,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+462,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+463,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+464,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+465,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+466,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+467,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+468,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+469,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+470,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+471,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+472,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+473,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+474,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+475,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+476,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+477,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+478,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+479,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+480,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+481,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+482,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+483,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+484,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+485,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+486,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+487,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+488,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+489,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+490,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+491,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+492,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+493,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+494,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+495,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+496,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+497,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+498,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+499,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+500,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+501,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+502,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+503,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+504,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+505,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+506,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+507,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+508,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+509,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+510,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+511,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+512,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+513,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+514,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+515,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+516,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+517,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+518,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+519,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+520,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+521,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+522,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+523,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+524,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+525,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+526,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])));
            tracep->chgCData(oldp+527,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])),2);
            tracep->chgBit(oldp+528,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+529,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U))));
            tracep->chgCData(oldp+530,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+531,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+532,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U))));
            tracep->chgCData(oldp+533,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+534,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+535,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U))));
            tracep->chgCData(oldp+536,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+537,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+538,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+539,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+540,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+541,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+542,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+543,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+544,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+545,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+546,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+547,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+548,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+549,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+550,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 8U))));
            tracep->chgCData(oldp+551,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+552,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+553,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+554,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+555,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+556,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+557,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+558,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+559,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+560,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+561,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+562,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+563,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+564,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+565,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+566,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+567,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+568,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+569,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+570,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+571,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+572,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+573,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+574,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+575,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+576,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+577,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+578,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+579,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+580,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+581,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+582,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+583,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+584,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+585,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+586,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+587,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+588,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+589,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+590,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+591,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+592,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+593,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+594,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+595,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+596,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+597,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+598,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+599,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+600,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+601,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+602,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+603,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+604,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+605,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+606,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+607,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+608,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+609,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+610,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+611,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+612,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+613,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+614,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+615,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+616,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+617,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+618,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+619,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+620,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+621,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+622,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])));
            tracep->chgCData(oldp+623,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])),2);
            tracep->chgBit(oldp+624,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+625,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U))));
            tracep->chgCData(oldp+626,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+627,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+628,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U))));
            tracep->chgCData(oldp+629,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+630,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+631,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U))));
            tracep->chgCData(oldp+632,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+633,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+634,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 4U))));
            tracep->chgCData(oldp+635,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+636,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+637,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 5U))));
            tracep->chgCData(oldp+638,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+639,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+640,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 6U))));
            tracep->chgCData(oldp+641,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+642,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+643,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 7U))));
            tracep->chgCData(oldp+644,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+645,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+646,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+647,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+648,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+649,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+650,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+651,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+652,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+653,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+654,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+655,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+656,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+657,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+658,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+659,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+660,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+661,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+662,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+663,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+664,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+665,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+666,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+667,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+668,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+669,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+670,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+671,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+672,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+673,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+674,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+675,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+676,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+677,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+678,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+679,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+680,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+681,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+682,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+683,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+684,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+685,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+686,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+687,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+688,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+689,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+690,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+691,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+692,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+693,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+694,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+695,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+696,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+697,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+698,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+699,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+700,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+701,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+702,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+703,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+704,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+705,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+706,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+707,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+708,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+709,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+710,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+711,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+712,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+713,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+714,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+715,((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+716,((3U & ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+717,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+718,((1U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])));
            tracep->chgCData(oldp+719,((3U & vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])),2);
            tracep->chgBit(oldp+720,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+721,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U))));
            tracep->chgCData(oldp+722,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+723,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+724,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U))));
            tracep->chgCData(oldp+725,((3U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+726,((1U & (~ ((((~ 
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
            tracep->chgBit(oldp+727,((1U & (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+728,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r));
            tracep->chgCData(oldp+729,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt),7);
            tracep->chgWData(oldp+730,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r),128);
            tracep->chgQData(oldp+734,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r),64);
            tracep->chgQData(oldp+736,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r),64);
            tracep->chgQData(oldp+738,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r),64);
            tracep->chgBit(oldp+740,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s));
            tracep->chgBit(oldp+741,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s));
            tracep->chgQData(oldp+742,((1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__dividend))),64);
            tracep->chgQData(oldp+744,((1ULL + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divisor))),64);
            tracep->chgQData(oldp+746,((1ULL + ((((QData)((IData)(
                                                                  vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                                     << 1U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                                       >> 0x1fU))) 
                                                + (~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)))),64);
            tracep->chgBit(oldp+748,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s));
            tracep->chgBit(oldp+749,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing));
            tracep->chgBit(oldp+750,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done));
            __Vtemp198[0U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                               << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                         >> 0x1fU));
            __Vtemp198[1U] = ((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                               << 1U) | (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                         >> 0x1fU));
            __Vtemp198[2U] = (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                              >> 0x1fU);
            tracep->chgWData(oldp+751,(__Vtemp198),65);
            __Vtemp199[0U] = (IData)((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
            __Vtemp199[1U] = (IData)(((~ vlSelf->top__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                                      >> 0x20U));
            __Vtemp199[2U] = 1U;
            tracep->chgWData(oldp+754,(__Vtemp199),65);
            tracep->chgQData(oldp+757,(((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
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
            tracep->chgQData(oldp+759,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataout),64);
            tracep->chgCData(oldp+761,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__wmask),8);
            tracep->chgIData(oldp+762,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__i),32);
            tracep->chgIData(oldp+763,((7U & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))),32);
            tracep->chgIData(oldp+764,((0x38U & ((IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))),32);
            tracep->chgIData(oldp+765,((IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r)),32);
            tracep->chgSData(oldp+766,((0xffffU & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r))),16);
            tracep->chgCData(oldp+767,((0xffU & (IData)(vlSelf->top__DOT__M_Reg__DOT__wdata_r))),8);
            tracep->chgQData(oldp+768,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain),64);
            tracep->chgBit(oldp+770,((0U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))));
            tracep->chgBit(oldp+771,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__d_cpu_ready));
            tracep->chgQData(oldp+772,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+774,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cache_doing));
            tracep->chgBit(oldp+775,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__vis_dev));
            tracep->chgBit(oldp+776,((2U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                             >> 0x1cU))))));
            tracep->chgQData(oldp+777,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp),64);
            tracep->chgQData(oldp+779,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dev_dataout),64);
            tracep->chgQData(oldp+781,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad),64);
            tracep->chgIData(oldp+783,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw),32);
            tracep->chgSData(oldp+784,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah),16);
            tracep->chgCData(oldp+785,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab),8);
            tracep->chgCData(oldp+786,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__bytes),8);
            tracep->chgQData(oldp+787,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime),64);
            tracep->chgCData(oldp+789,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+790,((0xfU & (IData)(vlSelf->top__DOT__M_Reg__DOT__raddr_r))),4);
            tracep->chgQData(oldp+791,((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+793,((((1U == (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
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
            tracep->chgCData(oldp+794,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt),8);
            tracep->chgCData(oldp+795,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status),3);
            tracep->chgWData(oldp+796,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen),128);
            tracep->chgWData(oldp+800,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+804,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+808,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+812,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3]),128);
            tracep->chgIData(oldp+816,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i),32);
            __Vtemp205[0U] = (((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][0U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
            __Vtemp205[1U] = (((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][1U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
            __Vtemp205[2U] = (((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][2U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
            __Vtemp205[3U] = (((IData)((vlSelf->top__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
                              | (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][3U] 
                                 & (~ vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
            tracep->chgWData(oldp+817,(__Vtemp205),128);
            tracep->chgWData(oldp+821,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q),128);
            tracep->chgCData(oldp+825,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+826,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q),128);
            tracep->chgWData(oldp+830,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q),128);
            tracep->chgWData(oldp+834,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q),128);
            tracep->chgQData(oldp+838,(vlSelf->top__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+840,(vlSelf->top__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+842,(vlSelf->top__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+844,(vlSelf->top__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+846,(vlSelf->top__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+848,(vlSelf->top__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+850,(vlSelf->top__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+852,(vlSelf->top__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+854,(vlSelf->top__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+856,(vlSelf->top__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+858,(vlSelf->top__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+860,(vlSelf->top__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+862,(vlSelf->top__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+864,(vlSelf->top__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+866,(vlSelf->top__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+868,(vlSelf->top__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+870,(vlSelf->top__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+872,(vlSelf->top__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+874,(vlSelf->top__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+876,(vlSelf->top__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+878,(vlSelf->top__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+880,(vlSelf->top__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+882,(vlSelf->top__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+884,(vlSelf->top__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+886,(vlSelf->top__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+888,(vlSelf->top__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+890,(vlSelf->top__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+892,(vlSelf->top__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+894,(vlSelf->top__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+896,(vlSelf->top__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+898,(vlSelf->top__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+900,(vlSelf->top__DOT__regfile__DOT__rf[31]),64);
            tracep->chgBit(oldp+902,(vlSelf->top__DOT____Vcellinp__csrfile__Ecall));
            tracep->chgBit(oldp+903,(vlSelf->top__DOT____Vcellinp__csrfile__Mret));
            tracep->chgBit(oldp+904,(((((IData)((vlSelf->top__DOT__csrfile__DOT__mie 
                                                 >> 7U)) 
                                        & (IData)((vlSelf->top__DOT__csrfile__DOT__mstatus 
                                                   >> 3U))) 
                                       & (vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
                                          >= vlSelf->top__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp)) 
                                      & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgQData(oldp+905,(vlSelf->top__DOT__csrfile__DOT__mcause),64);
            tracep->chgQData(oldp+907,(vlSelf->top__DOT__csrfile__DOT__mstatus),64);
            tracep->chgQData(oldp+909,(vlSelf->top__DOT__csrfile__DOT__mscratch),64);
            tracep->chgQData(oldp+911,(vlSelf->top__DOT__csrfile__DOT__mie),64);
            tracep->chgQData(oldp+913,(vlSelf->top__DOT__csrfile__DOT__mip),64);
            tracep->chgCData(oldp+915,(vlSelf->top__DOT__arbiter__DOT__cur_status),2);
            tracep->chgIData(oldp+916,((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)),32);
            tracep->chgCData(oldp+917,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+918,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+919,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+920,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+921,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+922,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+923,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+924,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+925,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+926,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+927,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+928,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+929,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+930,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+931,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+932,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+933,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+934,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+935,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+936,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+937,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+938,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+939,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+940,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+941,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),8);
            tracep->chgBit(oldp+942,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+943,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+944,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+945,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+946,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+947,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+948,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+949,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))),4);
            tracep->chgCData(oldp+950,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+951,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+952,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+953,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+954,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+955,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+956,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+957,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb)) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+958,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA) 
                                             & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))) 
                                            | ((IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+959,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inA))));
            tracep->chgBit(oldp+960,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb))));
            tracep->chgBit(oldp+961,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+962,((1U & (((IData)(
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
            tracep->chgBit(oldp+963,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 1U)))));
            tracep->chgBit(oldp+964,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 1U)))));
            tracep->chgBit(oldp+965,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+966,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+967,((1U & (((IData)(
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
            tracep->chgBit(oldp+968,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 2U)))));
            tracep->chgBit(oldp+969,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 2U)))));
            tracep->chgBit(oldp+970,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+971,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+972,((1U & (((IData)(
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
            tracep->chgBit(oldp+973,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 3U)))));
            tracep->chgBit(oldp+974,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 3U)))));
            tracep->chgBit(oldp+975,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+976,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+977,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+978,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+979,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+980,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+981,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+982,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+983,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+984,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+985,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+986,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+987,((1U & (((IData)(
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
            tracep->chgBit(oldp+988,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 4U)))));
            tracep->chgBit(oldp+989,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 4U)))));
            tracep->chgBit(oldp+990,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+991,((1U & (((IData)(
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
            tracep->chgBit(oldp+992,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 5U)))));
            tracep->chgBit(oldp+993,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 5U)))));
            tracep->chgBit(oldp+994,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+995,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+996,((1U & (((IData)(
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
            tracep->chgBit(oldp+997,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 6U)))));
            tracep->chgBit(oldp+998,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 6U)))));
            tracep->chgBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+1000,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1001,((1U & (((IData)(
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
            tracep->chgBit(oldp+1002,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1003,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1004,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1005,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1006,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1007,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1008,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+1009,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1010,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1011,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1012,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1013,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1014,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1015,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1016,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1017,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1018,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1019,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1020,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1021,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1022,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1023,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1024,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1025,((1U & (((IData)(
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
            tracep->chgBit(oldp+1026,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1027,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1028,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1029,((1U & (((IData)(
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
            tracep->chgBit(oldp+1030,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1031,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1032,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1033,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1034,((1U & (((IData)(
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
            tracep->chgBit(oldp+1035,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1036,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1038,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1039,((1U & (((IData)(
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
            tracep->chgBit(oldp+1040,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1041,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1042,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1043,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1044,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1045,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1046,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1047,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1048,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1049,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1050,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1051,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1052,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1053,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1054,((1U & (((IData)(
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
            tracep->chgBit(oldp+1055,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1056,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1057,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1058,((1U & (((IData)(
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
            tracep->chgBit(oldp+1059,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1060,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1061,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1062,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1063,((1U & (((IData)(
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
            tracep->chgBit(oldp+1064,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1065,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1066,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1067,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1068,((1U & (((IData)(
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
            tracep->chgBit(oldp+1069,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1070,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1071,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1072,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1073,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1074,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1075,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1076,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1077,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1078,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1079,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1080,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1081,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1082,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1083,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1084,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1085,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1086,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1087,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1088,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1089,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1090,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1091,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1092,((1U & (((IData)(
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
            tracep->chgBit(oldp+1093,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1094,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1095,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1096,((1U & (((IData)(
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
            tracep->chgBit(oldp+1097,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1098,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1099,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1100,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1101,((1U & (((IData)(
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
            tracep->chgBit(oldp+1102,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1103,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1104,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1105,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1106,((1U & (((IData)(
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
            tracep->chgBit(oldp+1107,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1108,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1109,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1110,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1111,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1112,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1113,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1114,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1115,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1116,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1117,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1118,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1119,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1120,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1121,((1U & (((IData)(
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
            tracep->chgBit(oldp+1122,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1123,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1124,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1125,((1U & (((IData)(
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
            tracep->chgBit(oldp+1126,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1127,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1128,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1129,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1130,((1U & (((IData)(
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
            tracep->chgBit(oldp+1131,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1132,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1133,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1134,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1135,((1U & (((IData)(
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
            tracep->chgBit(oldp+1136,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1137,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1138,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1139,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1140,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1141,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1142,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1143,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1144,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1145,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1146,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1147,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1148,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1149,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1150,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1151,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1152,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1153,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1154,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1155,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1156,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1157,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1158,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1159,((1U & (((IData)(
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
            tracep->chgBit(oldp+1160,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1161,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1162,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1163,((1U & (((IData)(
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
            tracep->chgBit(oldp+1164,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1165,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1166,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1167,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1168,((1U & (((IData)(
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
            tracep->chgBit(oldp+1169,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1170,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1171,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1172,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1173,((1U & (((IData)(
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
            tracep->chgBit(oldp+1174,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1175,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1176,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1177,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1178,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1179,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1180,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1181,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1182,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1183,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1184,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1185,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1186,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1187,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1188,((1U & (((IData)(
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
            tracep->chgBit(oldp+1189,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1190,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1191,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1192,((1U & (((IData)(
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
            tracep->chgBit(oldp+1193,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1194,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1195,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1196,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1197,((1U & (((IData)(
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
            tracep->chgBit(oldp+1198,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1199,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1200,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1201,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1202,((1U & (((IData)(
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
            tracep->chgBit(oldp+1203,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1204,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1205,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1206,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1207,((IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1208,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1209,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1210,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1211,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1212,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1213,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1214,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1215,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1216,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1217,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1218,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1219,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1220,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1221,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1222,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1223,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1224,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1225,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1226,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1227,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1228,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1229,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1230,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1231,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1232,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1233,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1234,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1235,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1236,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1237,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1238,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1239,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1240,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1241,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1242,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1243,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1244,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1245,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1246,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1247,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1248,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1249,((1U & (((IData)(
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
            tracep->chgBit(oldp+1250,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1251,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1252,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1253,((1U & (((IData)(
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
            tracep->chgBit(oldp+1254,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1255,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1256,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1257,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1258,((1U & (((IData)(
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
            tracep->chgBit(oldp+1259,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1260,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1261,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1262,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1263,((1U & (((IData)(
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
            tracep->chgBit(oldp+1264,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1265,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1266,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1267,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1268,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1269,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1270,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1271,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1272,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1273,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1274,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1275,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1276,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1277,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1278,((1U & (((IData)(
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
            tracep->chgBit(oldp+1279,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1280,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1281,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1282,((1U & (((IData)(
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
            tracep->chgBit(oldp+1283,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1284,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1285,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1286,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1287,((1U & (((IData)(
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
            tracep->chgBit(oldp+1288,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1289,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1290,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1291,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1292,((1U & (((IData)(
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
            tracep->chgBit(oldp+1293,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1294,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1295,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1296,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1297,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1298,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1299,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1300,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1301,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1302,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1303,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1304,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1305,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1306,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1307,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1308,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1309,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1310,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1311,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1312,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1313,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1314,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1315,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1316,((1U & (((IData)(
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
            tracep->chgBit(oldp+1317,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1318,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1319,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1320,((1U & (((IData)(
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
            tracep->chgBit(oldp+1321,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1322,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1323,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1324,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1325,((1U & (((IData)(
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
            tracep->chgBit(oldp+1326,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1327,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1328,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1329,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1330,((1U & (((IData)(
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
            tracep->chgBit(oldp+1331,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1332,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1333,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1334,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1335,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1336,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1337,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1338,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1339,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1340,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1341,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1342,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1343,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1344,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1345,((1U & (((IData)(
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
            tracep->chgBit(oldp+1346,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1347,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1348,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1349,((1U & (((IData)(
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
            tracep->chgBit(oldp+1350,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1351,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1352,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1353,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1354,((1U & (((IData)(
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
            tracep->chgBit(oldp+1355,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1356,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1357,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1358,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1359,((1U & (((IData)(
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
            tracep->chgBit(oldp+1360,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1361,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1362,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1363,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1364,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1365,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1366,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+1367,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1368,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1369,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1370,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1371,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1372,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1373,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1374,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1375,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1376,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1377,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1378,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1379,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1380,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1381,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1382,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1383,((1U & (((IData)(
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
            tracep->chgBit(oldp+1384,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1385,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1386,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1387,((1U & (((IData)(
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
            tracep->chgBit(oldp+1388,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1389,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1390,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1391,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1392,((1U & (((IData)(
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
            tracep->chgBit(oldp+1393,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1394,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1395,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1396,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1397,((1U & (((IData)(
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
            tracep->chgBit(oldp+1398,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1399,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1400,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1401,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1402,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1403,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1404,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1405,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1406,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1407,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1408,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1409,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1410,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1411,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1412,((1U & (((IData)(
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
            tracep->chgBit(oldp+1413,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1414,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1415,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1416,((1U & (((IData)(
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
            tracep->chgBit(oldp+1417,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1418,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1419,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1420,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1421,((1U & (((IData)(
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
            tracep->chgBit(oldp+1422,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1423,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1424,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1425,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1426,((1U & (((IData)(
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
            tracep->chgBit(oldp+1427,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1428,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1429,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1430,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1431,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1432,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+1433,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+1434,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1435,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1436,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1437,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1438,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1439,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1440,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1441,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1442,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1443,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1444,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1445,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1446,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1447,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1448,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1449,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1450,((1U & (((IData)(
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
            tracep->chgBit(oldp+1451,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1452,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1453,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1454,((1U & (((IData)(
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
            tracep->chgBit(oldp+1455,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1456,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1457,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1458,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1459,((1U & (((IData)(
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
            tracep->chgBit(oldp+1460,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1461,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1462,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1463,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1464,((1U & (((IData)(
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
            tracep->chgBit(oldp+1465,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1466,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1467,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1468,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1469,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1470,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1471,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1472,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1473,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1474,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1475,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1476,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1477,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1478,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1479,((1U & (((IData)(
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
            tracep->chgBit(oldp+1480,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1481,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1482,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1483,((1U & (((IData)(
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
            tracep->chgBit(oldp+1484,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1485,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1486,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1487,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1488,((1U & (((IData)(
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
            tracep->chgBit(oldp+1489,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1490,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1491,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1492,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1493,((1U & (((IData)(
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
            tracep->chgBit(oldp+1494,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1495,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1496,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1497,(((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                       & (~ (IData)(vlSelf->top__DOT__m_busy)))));
            tracep->chgQData(oldp+1498,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
            tracep->chgQData(oldp+1500,((((IData)(vlSelf->top__DOT__id_ex_hazard) 
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
            tracep->chgBit(oldp+1502,((((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                        & (0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x1cU))))) 
                                       & (~ (IData)(vlSelf->top__DOT__is_men)))));
            tracep->chgBit(oldp+1503,(((~ (IData)(vlSelf->top__DOT__cpu_halt)) 
                                       & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgQData(oldp+1504,(((1U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                          ? vlSelf->top__DOT__id_imm_o
                                          : ((0U == (IData)(vlSelf->top__DOT__id_ALUSrcB_o))
                                              ? vlSelf->top__DOT__id_busb_o
                                              : 4ULL))),64);
            tracep->chgQData(oldp+1506,(((0U == (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__OPctr))
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
            tracep->chgQData(oldp+1508,(((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                          : vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)),64);
            tracep->chgQData(oldp+1510,((QData)((IData)(
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
            tracep->chgBit(oldp+1512,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))));
            tracep->chgBit(oldp+1513,((1U & (IData)(
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
            tracep->chgQData(oldp+1514,(((0U == (IData)(vlSelf->top__DOT__EX_Reg__DOT__MulOp_r))
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
            tracep->chgQData(oldp+1516,((((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                          : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__quotient)),64);
            tracep->chgQData(oldp+1518,((((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                          : vlSelf->top__DOT__my_exu__DOT__alu64__DOT__remainder)),64);
            tracep->chgQData(oldp+1520,((((~ (IData)(vlSelf->top__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U]))))),64);
            tracep->chgQData(oldp+1522,(((IData)(vlSelf->top__DOT__is_MemToReg)
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
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1524,(vlSelf->top__DOT__i_rw_ready_i));
            tracep->chgBit(oldp+1525,(vlSelf->top__DOT__d_rw_ready_i));
            tracep->chgIData(oldp+1526,(vlSelf->top__DOT__if_instr_o),32);
            tracep->chgBit(oldp+1527,(vlSelf->top__DOT__id_en));
            tracep->chgBit(oldp+1528,(vlSelf->top__DOT__ex_en));
            tracep->chgBit(oldp+1529,((1U & (~ (IData)(vlSelf->top__DOT__m_busy)))));
            tracep->chgBit(oldp+1530,(vlSelf->top__DOT__m_busy));
            tracep->chgQData(oldp+1531,(vlSelf->top__DOT__id_busa_o),64);
            tracep->chgQData(oldp+1533,(vlSelf->top__DOT__id_busb_o),64);
            tracep->chgQData(oldp+1535,((0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__my_idu__DOT__addr_res)),64);
            tracep->chgQData(oldp+1537,(vlSelf->top__DOT__my_exu__DOT__res),64);
            tracep->chgQData(oldp+1539,(vlSelf->top__DOT__m_rfdata_o),64);
            tracep->chgBit(oldp+1541,(vlSelf->top__DOT__cpu_halt));
            tracep->chgBit(oldp+1542,(vlSelf->top__DOT__is_Csrwen));
            tracep->chgBit(oldp+1543,(vlSelf->top__DOT__is_MemToReg));
            tracep->chgBit(oldp+1544,(vlSelf->top__DOT__is_men));
            tracep->chgQData(oldp+1545,(vlSelf->top__DOT__Csr_datain),64);
            tracep->chgCData(oldp+1547,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status),3);
            tracep->chgBit(oldp+1548,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
            tracep->chgBit(oldp+1549,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
            tracep->chgBit(oldp+1550,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
            tracep->chgBit(oldp+1551,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
            tracep->chgBit(oldp+1552,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [0U]));
            tracep->chgBit(oldp+1553,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [1U]));
            tracep->chgBit(oldp+1554,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [2U]));
            tracep->chgBit(oldp+1555,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                      [3U]));
            tracep->chgQData(oldp+1556,(vlSelf->top__DOT__my_idu__DOT__addr_res),64);
            tracep->chgQData(oldp+1558,(vlSelf->top__DOT__my_idu__DOT__alu_inA),64);
            tracep->chgBit(oldp+1560,(((0ULL == vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        ? 1U : 0U)));
            tracep->chgQData(oldp+1561,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres),64);
            tracep->chgQData(oldp+1563,(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb),64);
            tracep->chgBit(oldp+1565,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1566,((1U & ((((~ (IData)(
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
            tracep->chgBit(oldp+1567,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgIData(oldp+1568,(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1569,(((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1570,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1571,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexA));
            tracep->chgBit(oldp+1572,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__NexB));
            tracep->chgQData(oldp+1573,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA),64);
            tracep->chgQData(oldp+1575,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB),64);
            tracep->chgQData(oldp+1577,(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc),64);
            tracep->chgBit(oldp+1579,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1580,((1U & ((((~ (IData)(
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
            tracep->chgBit(oldp+1581,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1582,(((0ULL == vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__respc)
                                        ? 1U : 0U)));
            tracep->chgIData(oldp+1583,(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1584,(((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1585,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgQData(oldp+1586,(vlSelf->top__DOT__my_exu__DOT__alu64__DOT__rlo),64);
            tracep->chgBit(oldp+1588,(vlSelf->top__DOT__my_mu__DOT__vis_mem));
            tracep->chgBit(oldp+1589,((1U & (~ (IData)(vlSelf->top__DOT__is_MemToReg)))));
            tracep->chgBit(oldp+1590,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid));
            tracep->chgCData(oldp+1591,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status),3);
            tracep->chgWData(oldp+1592,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram),128);
            tracep->chgBit(oldp+1596,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0]));
            tracep->chgBit(oldp+1597,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1]));
            tracep->chgBit(oldp+1598,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2]));
            tracep->chgBit(oldp+1599,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3]));
            tracep->chgBit(oldp+1600,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [0U]));
            tracep->chgBit(oldp+1601,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [1U]));
            tracep->chgBit(oldp+1602,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [2U]));
            tracep->chgBit(oldp+1603,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                      [3U]));
            tracep->chgQData(oldp+1604,(vlSelf->top__DOT__csrfile__DOT__csrin),64);
            tracep->chgCData(oldp+1606,(vlSelf->top__DOT__arbiter__DOT__next_status),2);
            tracep->chgIData(oldp+1607,((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA)),32);
            tracep->chgIData(oldp+1608,((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb)),32);
            tracep->chgCData(oldp+1609,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+1610,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+1611,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+1612,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+1613,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+1614,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+1615,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+1616,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+1617,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+1618,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+1619,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+1620,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1621,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1622,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1623,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1624,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1625,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1626,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1627,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1628,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1629,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1630,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1631,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1632,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+1633,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))),8);
            tracep->chgBit(oldp+1634,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+1635,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1636,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1637,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1638,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1639,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1640,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+1641,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))),4);
            tracep->chgCData(oldp+1642,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1643,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1644,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1645,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1646,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1647,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1648,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1649,((1U & (((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA) 
                                              ^ (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb)) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+1650,((1U & (((IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA) 
                                              & ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))) 
                                             | ((IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+1651,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__alu_inA))));
            tracep->chgBit(oldp+1652,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb))));
            tracep->chgBit(oldp+1653,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1654,((1U & (((IData)(
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
            tracep->chgBit(oldp+1655,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1656,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1657,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1658,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1659,((1U & (((IData)(
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
            tracep->chgBit(oldp+1660,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1661,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1662,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1663,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1664,((1U & (((IData)(
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
            tracep->chgBit(oldp+1665,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1666,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1667,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1668,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1669,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1670,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1671,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1672,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1673,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1674,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1675,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1676,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1677,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1678,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1679,((1U & (((IData)(
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
            tracep->chgBit(oldp+1680,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1681,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1682,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1683,((1U & (((IData)(
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
            tracep->chgBit(oldp+1684,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1685,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1686,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1687,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1688,((1U & (((IData)(
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
            tracep->chgBit(oldp+1689,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1690,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1691,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1692,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1693,((1U & (((IData)(
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
            tracep->chgBit(oldp+1694,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1695,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1697,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1698,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1699,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1700,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+1701,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1702,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1703,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1704,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1705,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1706,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1707,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1708,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1709,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1710,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1711,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1712,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1713,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1714,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1715,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1716,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1717,((1U & (((IData)(
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
            tracep->chgBit(oldp+1718,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1719,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1720,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1721,((1U & (((IData)(
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
            tracep->chgBit(oldp+1722,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1723,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1724,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1725,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1726,((1U & (((IData)(
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
            tracep->chgBit(oldp+1727,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1728,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1729,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1730,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1731,((1U & (((IData)(
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
            tracep->chgBit(oldp+1732,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1733,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1734,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1735,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1736,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1737,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1738,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1740,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1741,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1742,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1743,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1744,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1745,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1746,((1U & (((IData)(
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
            tracep->chgBit(oldp+1747,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1748,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1749,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1750,((1U & (((IData)(
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
            tracep->chgBit(oldp+1751,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1752,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1753,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1754,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1755,((1U & (((IData)(
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
            tracep->chgBit(oldp+1756,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1757,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1758,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1759,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1760,((1U & (((IData)(
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
            tracep->chgBit(oldp+1761,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1762,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1763,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1764,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1765,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1766,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1767,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1768,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1769,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1770,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1771,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1772,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1773,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1774,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1775,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1776,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1777,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1778,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1779,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1780,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1781,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1782,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1783,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1784,((1U & (((IData)(
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
            tracep->chgBit(oldp+1785,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1786,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1787,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1788,((1U & (((IData)(
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
            tracep->chgBit(oldp+1789,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1790,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1791,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1792,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1793,((1U & (((IData)(
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
            tracep->chgBit(oldp+1794,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1795,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1796,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1797,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1798,((1U & (((IData)(
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
            tracep->chgBit(oldp+1799,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1800,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1801,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1802,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1803,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1804,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1805,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1806,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1807,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1808,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1809,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1810,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1811,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1812,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1813,((1U & (((IData)(
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
            tracep->chgBit(oldp+1814,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1815,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1816,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1817,((1U & (((IData)(
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
            tracep->chgBit(oldp+1818,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1819,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1820,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1821,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1822,((1U & (((IData)(
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
            tracep->chgBit(oldp+1823,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1824,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1826,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1827,((1U & (((IData)(
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
            tracep->chgBit(oldp+1828,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1829,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1831,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1832,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1833,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1834,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1835,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1836,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1837,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1838,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1839,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1840,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1841,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1842,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1843,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1844,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1845,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1846,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1847,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1848,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1849,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1850,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1851,((1U & (((IData)(
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
            tracep->chgBit(oldp+1852,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1853,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1854,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1855,((1U & (((IData)(
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
            tracep->chgBit(oldp+1856,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1857,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1858,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1859,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1860,((1U & (((IData)(
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
            tracep->chgBit(oldp+1861,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1862,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1863,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1864,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1865,((1U & (((IData)(
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
            tracep->chgBit(oldp+1866,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1867,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1868,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1869,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1870,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1871,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1872,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1873,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1874,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1875,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1876,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1877,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1878,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1879,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1880,((1U & (((IData)(
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
            tracep->chgBit(oldp+1881,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1882,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1883,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1884,((1U & (((IData)(
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
            tracep->chgBit(oldp+1885,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1886,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1887,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1888,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1889,((1U & (((IData)(
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
            tracep->chgBit(oldp+1890,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1891,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1892,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1893,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1894,((1U & (((IData)(
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
            tracep->chgBit(oldp+1895,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1896,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1897,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1898,((IData)((vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1899,((IData)((vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1900,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1901,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1902,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1903,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1904,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1905,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1906,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1907,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1908,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1909,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1910,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1911,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1912,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1913,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1914,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1915,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1916,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1917,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1918,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1919,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1920,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1921,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1922,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1923,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1924,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1925,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1926,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1927,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1928,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1929,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1930,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1931,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1932,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1933,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1934,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1935,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1936,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1937,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1938,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1939,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1940,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1941,((1U & (((IData)(
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
            tracep->chgBit(oldp+1942,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1943,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1944,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1945,((1U & (((IData)(
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
            tracep->chgBit(oldp+1946,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1947,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1948,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1949,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1950,((1U & (((IData)(
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
            tracep->chgBit(oldp+1951,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1952,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1953,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1954,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1955,((1U & (((IData)(
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
            tracep->chgBit(oldp+1956,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1957,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1958,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1959,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1960,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1961,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1962,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1963,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1964,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1965,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1966,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1967,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1968,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1969,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1970,((1U & (((IData)(
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
            tracep->chgBit(oldp+1971,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1972,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1973,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1974,((1U & (((IData)(
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
            tracep->chgBit(oldp+1975,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1976,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1977,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1978,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1979,((1U & (((IData)(
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
            tracep->chgBit(oldp+1980,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1981,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1982,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1983,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1984,((1U & (((IData)(
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
            tracep->chgBit(oldp+1985,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1986,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1987,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1988,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1989,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1990,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1991,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1992,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1993,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1994,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1995,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1996,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1997,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1998,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1999,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+2000,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2001,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2002,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2003,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2004,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2005,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2006,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2007,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2008,((1U & (((IData)(
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
            tracep->chgBit(oldp+2009,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+2010,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+2011,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2012,((1U & (((IData)(
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
            tracep->chgBit(oldp+2013,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+2014,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+2015,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2016,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2017,((1U & (((IData)(
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
            tracep->chgBit(oldp+2018,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+2019,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+2020,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2021,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2022,((1U & (((IData)(
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
            tracep->chgBit(oldp+2023,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+2024,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+2025,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2026,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2027,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+2028,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+2029,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2030,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2031,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2032,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2033,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2034,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2035,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2036,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2037,((1U & (((IData)(
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
            tracep->chgBit(oldp+2038,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+2039,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+2040,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2041,((1U & (((IData)(
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
            tracep->chgBit(oldp+2042,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+2043,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+2044,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2045,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2046,((1U & (((IData)(
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
            tracep->chgBit(oldp+2047,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+2048,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+2049,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2050,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2051,((1U & (((IData)(
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
            tracep->chgBit(oldp+2052,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+2053,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+2054,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2055,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2056,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2057,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2058,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+2059,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2060,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2061,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2062,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2063,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2064,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2065,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+2066,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+2067,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2068,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2069,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2070,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2071,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2072,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2073,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2074,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2075,((1U & (((IData)(
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
            tracep->chgBit(oldp+2076,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+2077,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+2078,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2079,((1U & (((IData)(
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
            tracep->chgBit(oldp+2080,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+2081,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+2082,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2083,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2084,((1U & (((IData)(
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
            tracep->chgBit(oldp+2085,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+2086,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+2087,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2088,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2089,((1U & (((IData)(
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
            tracep->chgBit(oldp+2090,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2091,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2092,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2093,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2094,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+2095,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+2096,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2097,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2098,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2099,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2100,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2101,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2102,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2103,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2104,((1U & (((IData)(
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
            tracep->chgBit(oldp+2105,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+2106,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+2107,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2108,((1U & (((IData)(
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
            tracep->chgBit(oldp+2109,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+2110,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+2111,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2112,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2113,((1U & (((IData)(
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
            tracep->chgBit(oldp+2114,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+2115,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+2116,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2117,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2118,((1U & (((IData)(
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
            tracep->chgBit(oldp+2119,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+2120,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+2121,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2122,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2123,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2124,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+2125,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+2126,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+2127,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2128,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2129,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2130,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2131,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2132,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2133,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2134,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2135,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2136,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2137,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2138,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2139,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2140,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2141,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+2142,((1U & (((IData)(
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
            tracep->chgBit(oldp+2143,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2144,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2145,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2146,((1U & (((IData)(
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
            tracep->chgBit(oldp+2147,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2148,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2149,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2150,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2151,((1U & (((IData)(
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
            tracep->chgBit(oldp+2152,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2153,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2154,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2155,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2156,((1U & (((IData)(
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
            tracep->chgBit(oldp+2157,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2158,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2159,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2160,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2161,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2162,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2163,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2164,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2165,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2166,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2167,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2168,(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2169,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2170,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2171,((1U & (((IData)(
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
            tracep->chgBit(oldp+2172,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2173,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2174,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2175,((1U & (((IData)(
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
            tracep->chgBit(oldp+2176,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2177,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2178,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2179,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2180,((1U & (((IData)(
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
            tracep->chgBit(oldp+2181,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2182,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2183,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2184,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2185,((1U & (((IData)(
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
            tracep->chgBit(oldp+2186,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2187,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2188,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+2189,((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA)),32);
            tracep->chgIData(oldp+2190,((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)),32);
            tracep->chgCData(oldp+2191,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+2192,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+2193,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+2194,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+2195,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+2196,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+2197,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+2198,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+2199,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+2200,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+2201,(((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                         << 1U)),5);
            tracep->chgCData(oldp+2202,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+2203,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+2204,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+2205,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+2206,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+2207,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c),4);
            tracep->chgBit(oldp+2208,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg))));
            tracep->chgBit(oldp+2209,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+2210,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+2211,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+2212,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2213,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2214,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),8);
            tracep->chgCData(oldp+2215,((0xffU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),8);
            tracep->chgBit(oldp+2216,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2217,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2218,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2219,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2220,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2221,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),4);
            tracep->chgCData(oldp+2222,((0xfU & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),4);
            tracep->chgCData(oldp+2223,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2224,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2225,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2226,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
            tracep->chgBit(oldp+2227,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2228,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2229,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2230,((1U & ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             ^ (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2231,((1U & ((IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2232,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA))));
            tracep->chgBit(oldp+2233,((1U & (IData)(vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB))));
            tracep->chgBit(oldp+2234,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2235,((1U & (((IData)(
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
            tracep->chgBit(oldp+2236,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2237,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2238,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2239,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2240,((1U & (((IData)(
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
            tracep->chgBit(oldp+2241,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2242,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2243,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2244,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2245,((1U & (((IData)(
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
            tracep->chgBit(oldp+2246,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2247,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2248,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2249,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2250,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2251,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2252,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2253,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2254,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2255,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2256,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2257,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2258,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2259,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2260,((1U & (((IData)(
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
            tracep->chgBit(oldp+2261,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2262,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2263,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2264,((1U & (((IData)(
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
            tracep->chgBit(oldp+2265,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2266,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2267,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2268,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2269,((1U & (((IData)(
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
            tracep->chgBit(oldp+2270,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2271,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2272,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2273,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2274,((1U & (((IData)(
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
            tracep->chgBit(oldp+2275,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2276,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2277,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2278,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2279,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2280,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2281,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+2282,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))));
            tracep->chgBit(oldp+2283,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2284,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2285,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2286,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2287,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2288,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2289,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2290,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2291,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2292,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2293,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2294,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2295,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2296,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2297,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c)))));
            tracep->chgBit(oldp+2298,((1U & (((IData)(
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
            tracep->chgBit(oldp+2299,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2300,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2301,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2302,((1U & (((IData)(
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
            tracep->chgBit(oldp+2303,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2304,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2305,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2306,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2307,((1U & (((IData)(
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
            tracep->chgBit(oldp+2308,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2309,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2310,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2311,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2312,((1U & (((IData)(
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
            tracep->chgBit(oldp+2313,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2314,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2315,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2316,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2317,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2318,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2320,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2321,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2322,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2323,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2324,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2325,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2326,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2327,((1U & (((IData)(
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
            tracep->chgBit(oldp+2328,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2329,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2330,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2331,((1U & (((IData)(
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
            tracep->chgBit(oldp+2332,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2333,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2334,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2335,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2336,((1U & (((IData)(
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
            tracep->chgBit(oldp+2337,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2338,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2339,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2340,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2341,((1U & (((IData)(
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
            tracep->chgBit(oldp+2342,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2343,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2344,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2345,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2346,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2347,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2348,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+2349,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2350,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2351,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2352,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2353,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2354,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2355,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2356,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2357,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2358,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2359,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2360,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2361,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2362,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2363,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2364,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2365,((1U & (((IData)(
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
            tracep->chgBit(oldp+2366,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2367,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2368,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2369,((1U & (((IData)(
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
            tracep->chgBit(oldp+2370,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2371,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2372,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2373,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2374,((1U & (((IData)(
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
            tracep->chgBit(oldp+2375,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2376,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2377,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2378,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2379,((1U & (((IData)(
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
            tracep->chgBit(oldp+2380,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2381,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2382,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2383,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2384,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2385,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2386,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2387,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2388,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2389,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2390,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2391,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2392,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2393,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2394,((1U & (((IData)(
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
            tracep->chgBit(oldp+2395,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2396,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2397,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2398,((1U & (((IData)(
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
            tracep->chgBit(oldp+2399,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2400,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2401,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2402,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2403,((1U & (((IData)(
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
            tracep->chgBit(oldp+2404,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2405,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2406,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2407,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2408,((1U & (((IData)(
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
            tracep->chgBit(oldp+2409,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2410,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2411,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2412,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2413,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2414,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2415,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+2416,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2417,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2418,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2419,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2420,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2421,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2422,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2423,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2424,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2425,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2426,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2427,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2428,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2429,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2430,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2431,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2432,((1U & (((IData)(
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
            tracep->chgBit(oldp+2433,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2434,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+2435,((1U & (((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2436,((1U & (((IData)(
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
            tracep->chgBit(oldp+2437,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2438,((1U & (IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+2439,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        }
    }
}
