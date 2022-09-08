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
    VlWide<4>/*127:0*/ __Vtemp185;
    VlWide<5>/*159:0*/ __Vtemp187;
    VlWide<5>/*159:0*/ __Vtemp188;
    VlWide<5>/*159:0*/ __Vtemp189;
    VlWide<5>/*159:0*/ __Vtemp190;
    VlWide<5>/*159:0*/ __Vtemp191;
    VlWide<5>/*159:0*/ __Vtemp193;
    VlWide<5>/*159:0*/ __Vtemp194;
    VlWide<5>/*159:0*/ __Vtemp195;
    VlWide<5>/*159:0*/ __Vtemp196;
    VlWide<5>/*159:0*/ __Vtemp197;
    VlWide<3>/*95:0*/ __Vtemp201;
    VlWide<3>/*95:0*/ __Vtemp202;
    VlWide<4>/*127:0*/ __Vtemp208;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__rw_addr_o),64);
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__rw_req_o));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__rw_valid_o));
            tracep->chgWData(oldp+4,(vlSelf->top__DOT__core__DOT__d_rw_w_data_o),128);
            tracep->chgWData(oldp+8,(vlSelf->top__DOT__data_read_i),128);
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__axi__DOT__rw_ready_r));
            tracep->chgCData(oldp+13,(vlSelf->top__DOT__rw_size_o),8);
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__rw_dev_o));
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__core__DOT__i_rw_addr_o),64);
            tracep->chgBit(oldp+17,(vlSelf->top__DOT__core__DOT__i_rw_req_o));
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__core__DOT__i_rw_valid_o));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__core__DOT__i_rw_ready_i));
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__core__DOT__d_rw_addr_o),64);
            tracep->chgBit(oldp+22,(vlSelf->top__DOT__core__DOT__d_rw_req_o));
            tracep->chgBit(oldp+23,(vlSelf->top__DOT__core__DOT__d_rw_valid_o));
            tracep->chgBit(oldp+24,(vlSelf->top__DOT__core__DOT__d_rw_ready_i));
            tracep->chgBit(oldp+25,((1U & (IData)((vlSelf->top__DOT__core__DOT__csrfile__DOT__mstatus 
                                                   >> 3U)))));
            tracep->chgBit(oldp+26,((1U & (IData)((vlSelf->top__DOT__core__DOT__csrfile__DOT__mie 
                                                   >> 7U)))));
            tracep->chgBit(oldp+27,(vlSelf->top__DOT__core__DOT__Time_interrupt));
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+29,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+30,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+31,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__instr_r),32);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__core__DOT__if_pc_o),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__pc_r),64);
            tracep->chgBit(oldp+42,((((IData)(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                      & (~ (IData)(vlSelf->top__DOT__core__DOT__id_block))) 
                                     & (~ (IData)(vlSelf->top__DOT__core__DOT__Time_interrupt)))));
            tracep->chgBit(oldp+43,(((IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__core__DOT__alu_busy)))));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__valid_r));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__valid_r));
            tracep->chgBit(oldp+46,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__valid_r));
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__valid_r));
            tracep->chgBit(oldp+48,(((IData)(vlSelf->top__DOT__core__DOT__id_Ebreak_o) 
                                     | (IData)(vlSelf->top__DOT__core__DOT__if_busy))));
            tracep->chgBit(oldp+49,(vlSelf->top__DOT__core__DOT__id_block));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__core__DOT__alu_busy));
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__core__DOT__id_csrres_o),64);
            tracep->chgCData(oldp+53,((0x1fU & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+54,((0x1fU & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+55,((0x1fU & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__core__DOT__id_imm_o),64);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__core__DOT__id_ALUSrcA_o));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__core__DOT__id_MemToReg_o));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__core__DOT__id_MemWen_o));
            tracep->chgBit(oldp+61,(vlSelf->top__DOT__core__DOT__id_wen_o));
            tracep->chgBit(oldp+62,(vlSelf->top__DOT__core__DOT__id_CsrToReg_o));
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__core__DOT__id_Ebreak_o));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__core__DOT__id_Fence_i_o));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__core__DOT__id_Csri_o));
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__core__DOT__id_ALUSrcB_o),2);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__core__DOT__id_MemOp_o),3);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__core__DOT__id_ALUOp_o),5);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__core__DOT__id_MulOp_o),2);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__core__DOT__id_CsrOp),3);
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__core__DOT__id_Ecall));
            tracep->chgBit(oldp+72,(vlSelf->top__DOT__core__DOT__id_Mret));
            tracep->chgBit(oldp+73,(vlSelf->top__DOT__core__DOT__id_Csrwen));
            tracep->chgQData(oldp+74,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->top__DOT__core__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU))])),64);
            tracep->chgQData(oldp+76,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->top__DOT__core__DOT__regfile__DOT__rf
                                       [(0x1fU & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U))])),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mtvec),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mepc),64);
            tracep->chgSData(oldp+82,(vlSelf->top__DOT__core__DOT__id_CsrId),12);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__rd_r),5);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__busa_r),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__busb_r),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__imm_r),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__Csrres_r),64);
            tracep->chgBit(oldp+92,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r));
            tracep->chgBit(oldp+93,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+94,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__MemWen_r));
            tracep->chgBit(oldp+95,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__wen_r));
            tracep->chgBit(oldp+96,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+97,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+98,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__Fence_i_r));
            tracep->chgCData(oldp+99,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r),2);
            tracep->chgCData(oldp+100,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__MemOp_r),3);
            tracep->chgCData(oldp+101,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__ALUOp_r),5);
            tracep->chgCData(oldp+102,(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__MulOp_r),2);
            tracep->chgCData(oldp+103,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r),3);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r),64);
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemWen_r));
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__wdata_r),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__Csrres_r),64);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__rd_r),5);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__wen_r));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+115,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+116,(vlSelf->top__DOT__core__DOT__M_Reg__DOT__Fence_i_r));
            tracep->chgBit(oldp+117,((vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
                                      >= vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp)));
            tracep->chgBit(oldp+118,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__wen_r));
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__wdata_r),64);
            tracep->chgCData(oldp+121,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__waddr_r),5);
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__Fence_i_r));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__core__DOT__id_use_rd));
            tracep->chgBit(oldp+125,(((IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+126,(((IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+127,(((IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+128,(((((IData)(vlSelf->top__DOT__core__DOT__id_ex_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
                                       | ((IData)(vlSelf->top__DOT__core__DOT__id_m_hazard) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
                                      | ((IData)(vlSelf->top__DOT__core__DOT__id_wb_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgBit(oldp+129,(((((IData)(vlSelf->top__DOT__core__DOT__id_ex_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
                                       | ((IData)(vlSelf->top__DOT__core__DOT__id_m_hazard) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
                                      | ((IData)(vlSelf->top__DOT__core__DOT__id_wb_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgCData(oldp+130,((0x7fU & vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+131,((0x7fU & vlSelf->top__DOT__core__DOT__EX_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+132,((0x7fU & vlSelf->top__DOT__core__DOT__M_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+133,((0x7fU & vlSelf->top__DOT__core__DOT__WB_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+134,((7U & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+135,((vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__core__DOT__id_ex_hazard));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__core__DOT__id_m_hazard));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__core__DOT__id_wb_hazard));
            tracep->chgBit(oldp+139,(((IData)(vlSelf->top__DOT__core__DOT__id_ex_hazard) 
                                      & (3U == (0x7fU 
                                                & vlSelf->top__DOT__core__DOT__EX_Reg__DOT__instr_r)))));
            tracep->chgBit(oldp+140,((((IData)(vlSelf->top__DOT__core__DOT__id_ex_hazard) 
                                       | (IData)(vlSelf->top__DOT__core__DOT__id_m_hazard)) 
                                      | (IData)(vlSelf->top__DOT__core__DOT__id_wb_hazard))));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__core__DOT__has_fence_i));
            tracep->chgBit(oldp+142,(vlSelf->top__DOT__core__DOT__if_busy));
            tracep->chgBit(oldp+143,(((IData)(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                      & (~ (IData)(vlSelf->top__DOT__core__DOT__has_fence_i)))));
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__core__DOT__ex_dnpc),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__core__DOT__m_dnpc),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__core__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+150,(vlSelf->top__DOT__core__DOT__d_rw_size_o),8);
            tracep->chgBit(oldp+151,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                          >> 0x1cU))))));
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__core__DOT__is_Fence_i));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__core__DOT__dev_o));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__core__DOT__wb_commit_r));
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__core__DOT__wb_pc_r),64);
            tracep->chgIData(oldp+157,(vlSelf->top__DOT__core__DOT__wb_instr_r),32);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__core__DOT__next_pc_r),64);
            tracep->chgBit(oldp+160,((0U == (IData)(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__old_instr));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__cache_doing));
            tracep->chgIData(oldp+163,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__instr_read_r),32);
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__i_cpu_ready));
            tracep->chgBit(oldp+165,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__cpu_req_valid));
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+168,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__start));
            tracep->chgCData(oldp+169,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__if_pc_o 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+170,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__if_pc_o))),4);
            tracep->chgQData(oldp+171,((vlSelf->top__DOT__core__DOT__if_pc_o 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+173,((((1U == (IData)(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                                       & vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__V
                                       [(0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__if_pc_o 
                                                          >> 4U)))]) 
                                      & (vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag
                                         [(0xffU & (IData)(
                                                           (vlSelf->top__DOT__core__DOT__if_pc_o 
                                                            >> 4U)))] 
                                         == (vlSelf->top__DOT__core__DOT__if_pc_o 
                                             >> 0xcU)))));
            tracep->chgCData(oldp+174,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status),3);
            tracep->chgCData(oldp+175,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status),3);
            tracep->chgWData(oldp+176,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+180,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+184,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+188,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3]),128);
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
            tracep->chgBit(oldp+193,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
            tracep->chgBit(oldp+194,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
            tracep->chgBit(oldp+195,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
            tracep->chgIData(oldp+196,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__i),32);
            tracep->chgWData(oldp+197,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram0__Q),128);
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [0U]));
            tracep->chgCData(oldp+202,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__if_pc_o 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+203,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram1__Q),128);
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [1U]));
            tracep->chgWData(oldp+208,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram2__Q),128);
            tracep->chgBit(oldp+212,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [2U]));
            tracep->chgWData(oldp+213,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT____Vcellout__ram3__Q),128);
            tracep->chgBit(oldp+217,(vlSelf->top__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [3U]));
            tracep->chgCData(oldp+218,(vlSelf->top__DOT__core__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgCData(oldp+219,(vlSelf->top__DOT__core__DOT__my_idu__DOT__Branch),3);
            tracep->chgBit(oldp+220,(((IData)(vlSelf->top__DOT__core__DOT__Time_interrupt) 
                                      | (IData)(vlSelf->top__DOT__core__DOT__id_Ecall))));
            tracep->chgBit(oldp+221,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            tracep->chgBit(oldp+222,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr));
            tracep->chgBit(oldp+223,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr));
            tracep->chgBit(oldp+224,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr));
            tracep->chgBit(oldp+225,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr));
            tracep->chgCData(oldp+226,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr),4);
            tracep->chgBit(oldp+227,(((0ULL == vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+228,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA),64);
            tracep->chgQData(oldp+230,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr));
            tracep->chgBit(oldp+235,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr));
            tracep->chgBit(oldp+236,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr));
            tracep->chgCData(oldp+237,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr),4);
            tracep->chgQData(oldp+238,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres),64);
            tracep->chgQData(oldp+240,(((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                         : vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)),64);
            tracep->chgQData(oldp+242,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+244,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        | vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+246,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        ^ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+248,(((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                         ? ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                             : ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                                 ? 
                                                VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                                 : 
                                                (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                         : ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                             : (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                << 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)))))),64);
            tracep->chgQData(oldp+250,((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                            ? 
                                                           (((((~ (IData)(
                                                                          (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                           >> 0x3fU))) 
                                                               & (~ (IData)(
                                                                            (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                             >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                         >> 0x3fU))) 
                                                             | (((IData)(
                                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                          >> 0x3fU)) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                              >> 0x3fU))))) 
                                                            ^ (IData)(
                                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                       >> 0x3fU)))
                                                            : 
                                                           (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                             >> 3U) 
                                                            ^ (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))),64);
            tracep->chgQData(oldp+252,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb),64);
            tracep->chgBit(oldp+254,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
            tracep->chgBit(oldp+255,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+256,((1U & ((((~ (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x3fU))) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                            >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                        >> 0x3fU))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                             >> 0x3fU))))))));
            tracep->chgIData(oldp+257,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres),32);
            tracep->chgIData(oldp+258,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres),32);
            tracep->chgIData(oldp+259,((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA)),32);
            tracep->chgCData(oldp+260,((0x3fU & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB))),6);
            tracep->chgCData(oldp+261,((0x1fU & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB))),5);
            tracep->chgQData(oldp+262,(((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                         ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                         : (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+264,(((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                         : (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+266,(((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                         : ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                             ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                             : (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inB)))))),64);
            tracep->chgBit(oldp+268,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul));
            tracep->chgWData(oldp+269,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand),65);
            tracep->chgWData(oldp+272,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier),65);
            tracep->chgQData(oldp+275,((((QData)((IData)(
                                                         vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))),64);
            tracep->chgQData(oldp+277,((((QData)((IData)(
                                                         vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U])))),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r),64);
            tracep->chgBit(oldp+283,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing));
            tracep->chgBit(oldp+284,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready));
            tracep->chgBit(oldp+285,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid));
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid));
            tracep->chgBit(oldp+287,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul));
            tracep->chgBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr) 
                                            >> 3U))));
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor),64);
            tracep->chgQData(oldp+293,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient),64);
            tracep->chgQData(oldp+295,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder),64);
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r),64);
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing));
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r));
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r));
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                            >> 3U))));
            tracep->chgIData(oldp+307,(((vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                              [0U])))),32);
            tracep->chgIData(oldp+308,(((vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                         [3U] << 0x18U) 
                                        | ((vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                            [2U] << 0x10U) 
                                           | ((vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                               [1U] 
                                               << 8U) 
                                              | vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                              [0U])))),32);
            tracep->chgBit(oldp+309,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                            >> 3U))));
            __Vtemp185[0U] = vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[0U];
            __Vtemp185[1U] = vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[1U];
            __Vtemp185[2U] = vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U];
            __Vtemp185[3U] = vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U];
            tracep->chgWData(oldp+310,(__Vtemp185),128);
            tracep->chgWData(oldp+314,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result),132);
            tracep->chgWData(oldp+319,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r),132);
            tracep->chgWData(oldp+324,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r),67);
            tracep->chgBit(oldp+327,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r));
            tracep->chgBit(oldp+328,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__calculate_done));
            tracep->chgBit(oldp+329,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__ready_to_doing));
            tracep->chgWData(oldp+330,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result),132);
            tracep->chgCData(oldp+335,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt),7);
            tracep->chgBit(oldp+336,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp187, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_EXTEND_WI(133,1, __Vtemp188, (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            __Vtemp189[0U] = __Vtemp188[0U];
            __Vtemp189[1U] = __Vtemp188[1U];
            __Vtemp189[2U] = __Vtemp188[2U];
            __Vtemp189[3U] = __Vtemp188[3U];
            __Vtemp189[4U] = __Vtemp188[4U];
            VL_ADD_W(5, __Vtemp190, __Vtemp187, __Vtemp189);
            __Vtemp191[0U] = __Vtemp190[0U];
            __Vtemp191[1U] = __Vtemp190[1U];
            __Vtemp191[2U] = __Vtemp190[2U];
            __Vtemp191[3U] = __Vtemp190[3U];
            __Vtemp191[4U] = (0xfU & __Vtemp190[4U]);
            tracep->chgWData(oldp+337,(__Vtemp191),132);
            VL_EXTEND_WW(133,132, __Vtemp193, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
            VL_EXTEND_WW(133,132, __Vtemp194, vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result);
            VL_ADD_W(5, __Vtemp195, __Vtemp193, __Vtemp194);
            VL_EXTEND_WI(133,1, __Vtemp196, (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp197, __Vtemp195, __Vtemp196);
            tracep->chgBit(oldp+342,((1U & (__Vtemp197[4U] 
                                            >> 4U))));
            tracep->chgCData(oldp+343,((7U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])),3);
            tracep->chgBit(oldp+344,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+346,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])));
            tracep->chgCData(oldp+347,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel),4);
            tracep->chgBit(oldp+348,((1U & ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+349,((1U & ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+350,((1U & ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+351,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel))));
            tracep->chgBit(oldp+352,((1U & ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 2U) 
                                            & (((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+353,((1U & (((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
            tracep->chgBit(oldp+354,((1U & ((~ (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+355,((1U & (((~ (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 1U)) 
                                            & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))));
            tracep->chgCData(oldp+356,((2U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              << 1U))),2);
            tracep->chgBit(oldp+357,((1U & (~ (((~ 
                                                 (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 1U))) 
                                               & (~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+358,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+359,((3U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])),2);
            tracep->chgBit(oldp+360,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+361,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+362,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+363,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+364,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+366,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+367,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+368,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+369,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+370,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+372,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+373,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+374,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+375,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+376,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+377,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+378,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+379,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+380,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+381,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+382,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+383,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+384,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+385,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+386,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+387,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+388,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+389,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+390,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+391,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+392,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+393,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+394,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+395,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+396,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+397,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+398,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+399,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+400,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+401,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+402,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+403,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+404,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+405,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+406,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+407,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+408,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+409,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+410,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+411,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+412,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+413,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+414,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+415,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+416,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+417,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+418,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+419,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+420,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+421,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+423,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+424,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+426,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+427,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+429,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+430,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+432,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+433,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+435,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+436,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+437,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+438,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+439,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+440,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+441,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+442,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+444,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+445,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+446,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+447,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+448,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+450,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+451,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+452,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+453,((3U & ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+454,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+455,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])));
            tracep->chgCData(oldp+456,((3U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])),2);
            tracep->chgBit(oldp+457,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))))));
            tracep->chgBit(oldp+458,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+459,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+460,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+462,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+463,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+465,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+466,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+467,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+468,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+469,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+470,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+471,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+472,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+474,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+475,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+476,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+477,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+478,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+479,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+480,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+481,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+482,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+483,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+484,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+485,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+486,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+487,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+488,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+489,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+490,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+491,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+492,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+493,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+494,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+495,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+496,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+497,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+498,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+499,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+500,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+501,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+502,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+503,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+504,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+505,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+506,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+507,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+508,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+509,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+510,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+511,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+512,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+513,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+514,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+515,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+516,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+517,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+519,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+520,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+521,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+522,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+523,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+525,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+526,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+527,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+528,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+529,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+530,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+531,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+532,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+533,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+534,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+535,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+537,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+538,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+539,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+540,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+541,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+543,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+544,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+545,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+546,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+547,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+548,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+549,((3U & ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+550,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+551,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])));
            tracep->chgCData(oldp+552,((3U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])),2);
            tracep->chgBit(oldp+553,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))))));
            tracep->chgBit(oldp+554,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U))));
            tracep->chgCData(oldp+555,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+556,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+557,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U))));
            tracep->chgCData(oldp+558,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+559,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+560,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U))));
            tracep->chgCData(oldp+561,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+562,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+563,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+564,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+565,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+566,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+567,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+568,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+569,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+570,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+571,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+572,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+573,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+574,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+575,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 8U))));
            tracep->chgCData(oldp+576,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+577,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+578,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+579,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+580,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+581,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+582,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+583,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+584,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+585,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+586,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+587,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+588,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+589,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+590,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+591,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+592,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+593,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+594,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+595,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+596,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+597,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+598,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+599,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+600,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+601,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+602,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+603,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+604,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+605,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+606,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+607,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+608,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+609,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+610,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+611,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+612,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+613,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+614,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+615,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+616,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+617,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+618,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+619,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+620,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+621,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+622,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+623,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+624,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+625,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+626,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+627,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+628,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+629,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+630,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+631,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+632,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+633,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+634,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+635,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+636,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+637,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+638,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+639,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+640,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+641,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+642,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+643,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+644,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+645,((3U & ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+646,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+647,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])));
            tracep->chgCData(oldp+648,((3U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])),2);
            tracep->chgBit(oldp+649,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))))));
            tracep->chgBit(oldp+650,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U))));
            tracep->chgCData(oldp+651,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+652,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+653,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U))));
            tracep->chgCData(oldp+654,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+655,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+656,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U))));
            tracep->chgCData(oldp+657,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+658,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+659,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 4U))));
            tracep->chgCData(oldp+660,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+661,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+662,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 5U))));
            tracep->chgCData(oldp+663,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+664,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+665,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 6U))));
            tracep->chgCData(oldp+666,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+667,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+668,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 7U))));
            tracep->chgCData(oldp+669,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+670,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+671,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+672,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+673,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+674,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+675,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+676,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+677,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+678,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+679,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+680,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+681,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+682,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+683,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+684,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+685,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+686,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+687,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+688,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+689,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+690,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+691,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+692,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+693,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+694,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+695,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+696,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+697,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+698,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+699,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+700,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+701,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+702,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+703,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+704,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+705,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+706,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+707,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+708,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+709,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+710,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+711,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+712,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+713,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+714,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+715,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+716,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+717,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+718,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+719,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+720,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+721,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+722,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+723,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+724,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+725,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+726,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+727,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+728,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+729,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+730,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+732,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+733,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+734,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+735,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+736,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+737,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+738,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+739,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+740,((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+741,((3U & ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+742,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+743,((1U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])));
            tracep->chgCData(oldp+744,((3U & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])),2);
            tracep->chgBit(oldp+745,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))))));
            tracep->chgBit(oldp+746,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U))));
            tracep->chgCData(oldp+747,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+748,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     & vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U))));
            tracep->chgCData(oldp+750,((3U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+751,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__booth_partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+752,((1U & (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+753,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r));
            tracep->chgCData(oldp+754,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt),7);
            tracep->chgWData(oldp+755,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r),128);
            tracep->chgQData(oldp+759,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r),64);
            tracep->chgQData(oldp+761,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r),64);
            tracep->chgQData(oldp+763,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r),64);
            tracep->chgBit(oldp+765,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s));
            tracep->chgBit(oldp+766,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s));
            tracep->chgQData(oldp+767,((1ULL + (~ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend))),64);
            tracep->chgQData(oldp+769,((1ULL + (~ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor))),64);
            tracep->chgQData(oldp+771,((1ULL + ((((QData)((IData)(
                                                                  vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                                     << 1U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                                       >> 0x1fU))) 
                                                + (~ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)))),64);
            tracep->chgBit(oldp+773,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s));
            tracep->chgBit(oldp+774,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_to_doing));
            tracep->chgBit(oldp+775,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__calculate_done));
            __Vtemp201[0U] = ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                               << 1U) | (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                         >> 0x1fU));
            __Vtemp201[1U] = ((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                               << 1U) | (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                         >> 0x1fU));
            __Vtemp201[2U] = (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                              >> 0x1fU);
            tracep->chgWData(oldp+776,(__Vtemp201),65);
            __Vtemp202[0U] = (IData)((~ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
            __Vtemp202[1U] = (IData)(((~ vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                                      >> 0x20U));
            __Vtemp202[2U] = 1U;
            tracep->chgWData(oldp+779,(__Vtemp202),65);
            tracep->chgQData(oldp+782,(((4U & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                         ? ((2U & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                                                 : (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                                         : ((2U & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datad
                                                 : 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                         >> 0xfU))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                                                 : 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))),64);
            tracep->chgQData(oldp+784,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout),64);
            tracep->chgCData(oldp+786,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask),8);
            tracep->chgIData(oldp+787,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__i),32);
            tracep->chgIData(oldp+788,((7U & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r))),32);
            tracep->chgIData(oldp+789,((0x38U & ((IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r) 
                                                 << 3U))),32);
            tracep->chgIData(oldp+790,((IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__wdata_r)),32);
            tracep->chgSData(oldp+791,((0xffffU & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__wdata_r))),16);
            tracep->chgCData(oldp+792,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__wdata_r))),8);
            tracep->chgQData(oldp+793,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datain),64);
            tracep->chgBit(oldp+795,((0U == (IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))));
            tracep->chgBit(oldp+796,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready));
            tracep->chgQData(oldp+797,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+799,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing));
            tracep->chgBit(oldp+800,((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 0x18U))))));
            tracep->chgQData(oldp+801,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp),64);
            tracep->chgQData(oldp+803,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datad),64);
            tracep->chgIData(oldp+805,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw),32);
            tracep->chgSData(oldp+806,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah),16);
            tracep->chgCData(oldp+807,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab),8);
            tracep->chgCData(oldp+808,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__bytes),8);
            tracep->chgQData(oldp+809,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime),64);
            tracep->chgCData(oldp+811,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+812,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r))),4);
            tracep->chgQData(oldp+813,((vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+815,((((1U == (IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                       & vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                       [(0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                          >> 4U)))]) 
                                      & (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                         [(0xffU & (IData)(
                                                           (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                            >> 4U)))] 
                                         == (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xcU)))));
            tracep->chgCData(oldp+816,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt),8);
            tracep->chgCData(oldp+817,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status),4);
            tracep->chgWData(oldp+818,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram),128);
            tracep->chgWData(oldp+822,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen),128);
            tracep->chgWData(oldp+826,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+830,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+834,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+838,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3]),128);
            tracep->chgBit(oldp+842,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0]));
            tracep->chgBit(oldp+843,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1]));
            tracep->chgBit(oldp+844,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2]));
            tracep->chgBit(oldp+845,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3]));
            tracep->chgIData(oldp+846,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i),32);
            __Vtemp208[0U] = (((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
                              | (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][0U] 
                                 & (~ vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
            __Vtemp208[1U] = (((IData)((vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
                              | (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][1U] 
                                 & (~ vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
            __Vtemp208[2U] = (((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
                              | (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][2U] 
                                 & (~ vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
            __Vtemp208[3U] = (((IData)((vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
                              | (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][3U] 
                                 & (~ vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
            tracep->chgWData(oldp+847,(__Vtemp208),128);
            tracep->chgWData(oldp+851,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram0__Q),128);
            tracep->chgBit(oldp+855,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                     [0U]));
            tracep->chgCData(oldp+856,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+857,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram1__Q),128);
            tracep->chgBit(oldp+861,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                     [1U]));
            tracep->chgWData(oldp+862,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram2__Q),128);
            tracep->chgBit(oldp+866,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                     [2U]));
            tracep->chgWData(oldp+867,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT____Vcellout__ram3__Q),128);
            tracep->chgBit(oldp+871,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                     [3U]));
            tracep->chgQData(oldp+872,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+874,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+876,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+878,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+880,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+882,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+884,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+886,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+888,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+890,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+892,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+894,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+896,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+898,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+900,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+902,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+904,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+906,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+908,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+910,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+912,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+914,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+916,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+918,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+920,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+922,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+924,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+926,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+928,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+930,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+932,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+934,(vlSelf->top__DOT__core__DOT__regfile__DOT__rf[31]),64);
            tracep->chgBit(oldp+936,(vlSelf->top__DOT__core__DOT____Vcellinp__csrfile__Ecall));
            tracep->chgBit(oldp+937,(((IData)(vlSelf->top__DOT__core__DOT__id_Mret) 
                                      & (IData)(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgBit(oldp+938,(vlSelf->top__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt));
            tracep->chgQData(oldp+939,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mcause),64);
            tracep->chgQData(oldp+941,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mstatus),64);
            tracep->chgQData(oldp+943,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mscratch),64);
            tracep->chgQData(oldp+945,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mie),64);
            tracep->chgQData(oldp+947,(vlSelf->top__DOT__core__DOT__csrfile__DOT__mip),64);
            tracep->chgCData(oldp+949,(vlSelf->top__DOT__core__DOT__arbiter__DOT__cur_status),2);
            tracep->chgCData(oldp+950,(vlSelf->top__DOT__axi__DOT__w_status),3);
            tracep->chgCData(oldp+951,(vlSelf->top__DOT__axi__DOT__r_status),3);
            tracep->chgBit(oldp+952,((0U == (IData)(vlSelf->top__DOT__axi__DOT__w_status))));
            tracep->chgBit(oldp+953,((1U == (IData)(vlSelf->top__DOT__axi__DOT__w_status))));
            tracep->chgBit(oldp+954,((2U == (IData)(vlSelf->top__DOT__axi__DOT__w_status))));
            tracep->chgBit(oldp+955,((3U == (IData)(vlSelf->top__DOT__axi__DOT__w_status))));
            tracep->chgBit(oldp+956,((0U == (IData)(vlSelf->top__DOT__axi__DOT__r_status))));
            tracep->chgBit(oldp+957,((1U == (IData)(vlSelf->top__DOT__axi__DOT__r_status))));
            tracep->chgBit(oldp+958,((2U == (IData)(vlSelf->top__DOT__axi__DOT__r_status))));
            tracep->chgCData(oldp+959,(vlSelf->top__DOT__axi__DOT__rcnt),8);
            tracep->chgCData(oldp+960,(vlSelf->top__DOT__axi__DOT__wcnt),8);
            tracep->chgCData(oldp+961,(((IData)(vlSelf->top__DOT__rw_dev_o)
                                         ? 0U : 1U)),8);
            tracep->chgBit(oldp+962,(vlSelf->top__DOT__axi__DOT__axi_w_last_r));
            tracep->chgQData(oldp+963,(vlSelf->top__DOT__axi__DOT__rw_w_data_r),64);
            tracep->chgCData(oldp+965,(vlSelf->top__DOT__axi__DOT__rw_size_r),8);
            tracep->chgIData(oldp+966,((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb)),32);
            tracep->chgCData(oldp+967,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+968,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+969,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+970,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+971,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+972,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+973,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+974,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+975,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+976,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+977,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+978,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+979,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+980,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+981,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+982,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+983,(((8U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+984,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+985,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+986,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+987,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+988,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+989,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+990,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+991,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb))),8);
            tracep->chgBit(oldp+992,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+993,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+994,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+995,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+996,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+997,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+998,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+999,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb))),4);
            tracep->chgCData(oldp+1000,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1001,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1002,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1003,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1004,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1005,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1006,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1007,((1U & (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA) 
                                              ^ (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb)) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+1008,((1U & (((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA) 
                                              & ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))) 
                                             | ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+1009,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA))));
            tracep->chgBit(oldp+1010,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb))));
            tracep->chgBit(oldp+1011,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1012,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 1U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 1U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1013,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1014,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1015,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1016,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1017,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 2U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 2U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 2U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1018,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1019,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1020,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1021,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1022,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 3U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 3U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 3U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1023,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1024,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1025,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1026,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1027,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1028,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1029,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1030,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1031,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1032,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1033,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1034,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1035,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1036,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1037,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 4U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 4U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 4U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1038,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1039,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1040,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1041,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 5U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 5U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1042,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1043,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1044,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1045,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1046,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 6U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 6U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 6U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1047,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1048,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1049,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1050,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1051,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 7U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 7U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 7U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1052,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1053,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1055,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1056,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1057,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1058,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+1059,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1060,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1061,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1062,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1063,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1064,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1065,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1066,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1067,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1068,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1069,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1070,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1071,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1072,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1073,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1074,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1075,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 8U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 8U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1076,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1077,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1078,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1079,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 9U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 9U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 9U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1080,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1081,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1082,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1083,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1084,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0xaU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xaU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1085,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1086,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1087,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1088,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1089,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0xbU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xbU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1090,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1091,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1092,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1093,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1094,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1095,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1096,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1097,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1098,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1099,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1100,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1101,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1102,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1103,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1104,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0xcU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xcU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1105,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1106,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1107,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1108,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0xdU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xdU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1109,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1110,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1111,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1112,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1113,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0xeU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xeU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1114,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1115,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1116,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1117,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1118,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0xfU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0xfU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1119,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1120,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1121,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1122,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1123,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1124,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1125,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1126,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1127,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1128,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1129,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1130,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1131,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1132,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1133,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1134,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1135,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1136,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1137,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1138,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1139,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1140,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1141,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1142,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x10U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1143,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1144,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1145,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1146,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x11U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x11U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1147,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1148,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1149,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1150,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1151,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x12U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x12U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1152,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1153,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1155,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1156,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x13U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x13U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1157,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1158,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1159,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1160,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1161,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1162,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1163,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1164,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1165,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1166,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1167,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1168,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1169,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1170,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1171,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x14U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x14U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1172,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1173,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1174,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1175,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x15U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x15U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1176,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1177,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1178,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1179,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1180,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x16U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x16U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1181,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1182,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1183,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1184,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1185,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x17U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x17U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1186,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1187,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1188,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1189,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1190,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1191,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1192,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1193,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1194,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1195,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1196,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1197,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1198,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1199,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1200,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1201,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1202,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1203,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1204,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1205,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1206,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1207,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1208,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1209,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x18U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x18U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1210,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1211,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1212,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1213,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x19U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x19U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1214,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1215,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1216,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1217,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1218,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1219,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1220,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1221,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1222,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1223,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1224,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1225,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1226,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1227,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1228,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1229,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1230,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1231,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1232,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1233,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1234,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1235,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1236,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1237,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1238,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1239,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1240,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1241,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1242,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1243,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1244,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1245,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1246,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1247,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1248,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1249,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1250,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1251,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1252,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x1fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x1fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1253,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1254,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1255,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1256,((IData)((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1257,((IData)((vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1258,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1259,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1260,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1261,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1262,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1263,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1264,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1265,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1266,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1267,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1268,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1269,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1270,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1271,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1272,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1273,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1274,(((8U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1275,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1276,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1277,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1278,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1279,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1280,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1281,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1282,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1283,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1284,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1285,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1286,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1287,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1288,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1289,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1290,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1291,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1292,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1293,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1294,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1295,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1296,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1297,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1298,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1299,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x20U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x20U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+1300,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1301,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1302,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1303,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x21U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x21U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1304,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1305,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1306,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1307,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1308,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x22U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x22U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1309,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1310,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1311,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1312,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1313,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x23U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x23U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1314,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1315,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1316,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1317,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1318,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1319,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1320,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1321,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1322,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1323,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1324,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1325,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1326,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1327,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1328,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x24U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x24U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1329,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1330,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+1331,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1332,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x25U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x25U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1333,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1334,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+1335,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1336,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1337,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x26U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x26U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1338,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1339,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+1340,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1341,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1342,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x27U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x27U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1343,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1344,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+1345,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1346,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1347,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1348,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+1349,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+1350,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1351,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1352,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1353,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1354,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1355,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1356,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1357,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+1358,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1359,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1360,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1361,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1362,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1363,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1364,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1365,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1366,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x28U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x28U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1367,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1368,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+1369,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1370,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x29U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x29U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1371,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1372,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+1373,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1374,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1375,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1376,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1377,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+1378,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1379,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1380,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1381,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1382,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+1383,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1384,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1385,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1386,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+1387,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1388,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1389,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1390,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1391,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1392,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1393,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1394,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1395,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1396,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1397,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+1398,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1399,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1400,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1401,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+1402,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1403,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1404,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1405,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1406,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+1407,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1408,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1409,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x2fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x2fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1410,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1411,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+1412,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1413,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1414,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1415,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+1416,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+1417,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1418,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1419,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1420,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1421,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1422,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1423,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1424,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+1425,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1426,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1427,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1428,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1429,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1430,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1431,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1432,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1433,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x30U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1434,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1435,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+1436,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1437,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x31U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x31U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1438,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1439,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+1440,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1441,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1442,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x32U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x32U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1443,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1444,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+1445,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1446,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1447,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x33U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x33U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1448,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1449,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+1450,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1451,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1452,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1453,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+1454,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1455,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1456,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1457,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1458,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1459,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1460,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1461,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1462,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x34U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x34U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1463,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1464,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+1465,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1466,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x35U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x35U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1467,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1468,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+1469,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1470,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1471,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x36U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x36U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1472,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1473,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+1474,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1475,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1476,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x37U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x37U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1477,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1478,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+1479,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1480,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1481,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1482,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+1483,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+1484,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1485,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1486,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1487,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1488,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1489,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1490,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1491,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+1492,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1493,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1494,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1495,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1496,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1497,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1498,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1499,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1500,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x38U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1501,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1502,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+1503,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1504,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x39U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x39U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1505,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1506,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+1507,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1508,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1509,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1510,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1511,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+1512,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1513,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1514,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1515,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1516,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+1517,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1518,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1519,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1520,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+1521,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1522,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1523,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1524,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1525,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1526,(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1527,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1528,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1529,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1530,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1531,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+1532,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1533,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1534,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1535,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+1536,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1537,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1538,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1539,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1540,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+1541,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1542,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1543,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                          >> 0x3fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x3fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1544,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1545,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1546,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1547,(((IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                       & (~ (IData)(vlSelf->top__DOT__core__DOT__m_busy)))));
            tracep->chgQData(oldp+1548,((((IData)(vlSelf->top__DOT__core__DOT__id_ex_hazard) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                                          ? ((IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                                              ? vlSelf->top__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                                              : vlSelf->top__DOT__core__DOT__my_exu__DOT__res)
                                          : (((IData)(vlSelf->top__DOT__core__DOT__id_m_hazard) 
                                              & ((0x1fU 
                                                  & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__rd_r)))
                                              ? vlSelf->top__DOT__core__DOT__m_rfdata_o
                                              : (((IData)(vlSelf->top__DOT__core__DOT__id_wb_hazard) 
                                                  & ((0x1fU 
                                                      & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                         >> 0xfU)) 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                                                  ? vlSelf->top__DOT__core__DOT__WB_Reg__DOT__wdata_r
                                                  : 0ULL)))),64);
            tracep->chgQData(oldp+1550,((((IData)(vlSelf->top__DOT__core__DOT__id_ex_hazard) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                                          ? ((IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                                              ? vlSelf->top__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                                              : vlSelf->top__DOT__core__DOT__my_exu__DOT__res)
                                          : (((IData)(vlSelf->top__DOT__core__DOT__id_m_hazard) 
                                              & ((0x1fU 
                                                  & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                     >> 0x14U)) 
                                                 == (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__rd_r)))
                                              ? vlSelf->top__DOT__core__DOT__m_rfdata_o
                                              : (((IData)(vlSelf->top__DOT__core__DOT__id_wb_hazard) 
                                                  & ((0x1fU 
                                                      & (vlSelf->top__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                         >> 0x14U)) 
                                                     == (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                                                  ? vlSelf->top__DOT__core__DOT__WB_Reg__DOT__wdata_r
                                                  : 0ULL)))),64);
            tracep->chgBit(oldp+1552,((((IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                        & (0xaU == 
                                           (0xfU & (IData)(
                                                           (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x1cU))))) 
                                       & (~ (IData)(vlSelf->top__DOT__core__DOT__is_men)))));
            tracep->chgBit(oldp+1553,(((~ (IData)(vlSelf->top__DOT__core__DOT__cpu_halt)) 
                                       & (IData)(vlSelf->top__DOT__core__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgQData(oldp+1554,(((1U == (IData)(vlSelf->top__DOT__core__DOT__id_ALUSrcB_o))
                                          ? vlSelf->top__DOT__core__DOT__id_imm_o
                                          : ((0U == (IData)(vlSelf->top__DOT__core__DOT__id_ALUSrcB_o))
                                              ? vlSelf->top__DOT__core__DOT__id_busb_o
                                              : 4ULL))),64);
            tracep->chgQData(oldp+1556,(((0U == (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                          ? ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                              : vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                          : (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                                 ? 
                                                                (((((~ (IData)(
                                                                               (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                    & (~ (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                              >> 0x3fU))) 
                                                                  | (((IData)(
                                                                              (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                               >> 0x3fU)) 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                     & (~ (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                 ^ (IData)(
                                                                           (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                            >> 0x3fU)))
                                                                 : 
                                                                (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                  >> 3U) 
                                                                 ^ (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))),64);
            tracep->chgQData(oldp+1558,(((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                          : vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)),64);
            tracep->chgQData(oldp+1560,((QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                             ? 
                                                            (((((~ (IData)(
                                                                           (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                              >> 0x3fU)))) 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                          >> 0x3fU))) 
                                                              | (((IData)(
                                                                          (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                           >> 0x3fU)) 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                             >> 0x3fU))) 
                                                                 & (~ (IData)(
                                                                              (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                               >> 0x3fU))))) 
                                                             ^ (IData)(
                                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                        >> 0x3fU)))
                                                             : 
                                                            (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                              >> 3U) 
                                                             ^ (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr))))))),64);
            tracep->chgBit(oldp+1562,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))));
            tracep->chgBit(oldp+1563,((1U & (IData)(
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                                       : vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                                      : (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                                             ? 
                                                                            (((((~ (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))) 
                                                                              | (((IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                             ^ (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU)))
                                                                             : 
                                                                            (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                                                              >> 3U) 
                                                                             ^ (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))))));
            tracep->chgQData(oldp+1564,(((0U == (IData)(vlSelf->top__DOT__core__DOT__EX_Reg__DOT__MulOp_r))
                                          ? ((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)))
                                              : vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)
                                          : (((~ (IData)(vlSelf->top__DOT__core__DOT__m_busy)) 
                                              & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                              ? vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                              : (((QData)((IData)(
                                                                  vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U])))))),64);
            tracep->chgQData(oldp+1566,((((~ (IData)(vlSelf->top__DOT__core__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                          : vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient)),64);
            tracep->chgQData(oldp+1568,((((~ (IData)(vlSelf->top__DOT__core__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                          : vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder)),64);
            tracep->chgQData(oldp+1570,((((~ (IData)(vlSelf->top__DOT__core__DOT__m_busy)) 
                                          & (IData)(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                          ? vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                          : (((QData)((IData)(
                                                              vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tem_result[2U]))))),64);
            tracep->chgQData(oldp+1572,(((IData)(vlSelf->top__DOT__core__DOT__is_MemToReg)
                                          ? ((4U & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                              ? ((2U 
                                                  & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                   ? 0ULL
                                                   : (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                   ? (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                                                   : (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                                              : ((2U 
                                                  & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                   ? vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datad
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                                                   : 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                          : vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r)),64);
            tracep->chgBit(oldp+1574,(((IData)(vlSelf->top__DOT__core__DOT__is_men) 
                                       & (2U == (0xffU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x18U)))))));
            tracep->chgBit(oldp+1575,(((IData)(vlSelf->top__DOT__rw_req_o)
                                        ? (IData)(vlSelf->top__DOT__axi__DOT__b_fire)
                                        : (IData)(vlSelf->top__DOT__axi__DOT__r_last))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+1576,(vlSelf->top__DOT__core__DOT__if_instr_o),32);
            tracep->chgBit(oldp+1577,(vlSelf->top__DOT__core__DOT__id_en));
            tracep->chgBit(oldp+1578,(vlSelf->top__DOT__core__DOT__ex_en));
            tracep->chgBit(oldp+1579,((1U & (~ (IData)(vlSelf->top__DOT__core__DOT__m_busy)))));
            tracep->chgBit(oldp+1580,(vlSelf->top__DOT__core__DOT__m_busy));
            tracep->chgQData(oldp+1581,(vlSelf->top__DOT__core__DOT__id_busa_o),64);
            tracep->chgQData(oldp+1583,(vlSelf->top__DOT__core__DOT__id_busb_o),64);
            tracep->chgQData(oldp+1585,((0xfffffffffffffffeULL 
                                         & vlSelf->top__DOT__core__DOT__my_idu__DOT__addr_res)),64);
            tracep->chgQData(oldp+1587,(vlSelf->top__DOT__core__DOT__my_exu__DOT__res),64);
            tracep->chgQData(oldp+1589,(vlSelf->top__DOT__core__DOT__m_rfdata_o),64);
            tracep->chgBit(oldp+1591,(vlSelf->top__DOT__core__DOT__cpu_halt));
            tracep->chgBit(oldp+1592,(vlSelf->top__DOT__core__DOT__is_Csrwen));
            tracep->chgBit(oldp+1593,(vlSelf->top__DOT__core__DOT__is_MemToReg));
            tracep->chgBit(oldp+1594,(vlSelf->top__DOT__core__DOT__is_men));
            tracep->chgQData(oldp+1595,(vlSelf->top__DOT__core__DOT__Csr_datain),64);
            tracep->chgQData(oldp+1597,(vlSelf->top__DOT__core__DOT__my_idu__DOT__addr_res),64);
            tracep->chgQData(oldp+1599,(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA),64);
            tracep->chgBit(oldp+1601,(((0ULL == vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        ? 1U : 0U)));
            tracep->chgQData(oldp+1602,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres),64);
            tracep->chgQData(oldp+1604,(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb),64);
            tracep->chgBit(oldp+1606,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1607,((1U & ((((~ (IData)(
                                                          (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                         >> 0x3fU))) 
                                             | (((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                              >> 0x3fU))))))));
            tracep->chgBit(oldp+1608,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgIData(oldp+1609,(((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1610,(((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1611,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1612,(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA));
            tracep->chgBit(oldp+1613,(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB));
            tracep->chgQData(oldp+1614,(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA),64);
            tracep->chgQData(oldp+1616,(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB),64);
            tracep->chgQData(oldp+1618,(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc),64);
            tracep->chgBit(oldp+1620,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgBit(oldp+1621,((1U & ((((~ (IData)(
                                                          (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                         >> 0x3fU))) 
                                             | (((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                              >> 0x3fU))))))));
            tracep->chgBit(oldp+1622,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1623,(((0ULL == vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc)
                                        ? 1U : 0U)));
            tracep->chgIData(oldp+1624,(((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff
                                               [0U])))),32);
            tracep->chgIData(oldp+1625,(((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff
                                               [0U])))),32);
            tracep->chgBit(oldp+1626,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp) 
                                             >> 3U))));
            tracep->chgQData(oldp+1627,(vlSelf->top__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo),64);
            tracep->chgBit(oldp+1629,(vlSelf->top__DOT__core__DOT__my_mu__DOT__vis_mem));
            tracep->chgBit(oldp+1630,((1U & (~ (IData)(vlSelf->top__DOT__core__DOT__is_MemToReg)))));
            tracep->chgBit(oldp+1631,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid));
            tracep->chgCData(oldp+1632,(vlSelf->top__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status),4);
            tracep->chgQData(oldp+1633,(vlSelf->top__DOT__core__DOT__csrfile__DOT__csrin),64);
            tracep->chgCData(oldp+1635,(vlSelf->top__DOT__core__DOT__arbiter__DOT__next_status),2);
            tracep->chgBit(oldp+1636,(vlSelf->top__DOT__axi__DOT__aw_fire));
            tracep->chgBit(oldp+1637,(vlSelf->top__DOT__axi__DOT__w_fire));
            tracep->chgBit(oldp+1638,(vlSelf->top__DOT__axi__DOT__b_fire));
            tracep->chgBit(oldp+1639,(vlSelf->top__DOT__axi__DOT__r_fire));
            tracep->chgBit(oldp+1640,(vlSelf->top__DOT__axi__DOT__r_last));
            tracep->chgIData(oldp+1641,((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA)),32);
            tracep->chgIData(oldp+1642,((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb)),32);
            tracep->chgCData(oldp+1643,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+1644,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+1645,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+1646,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+1647,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+1648,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+1649,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+1650,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+1651,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+1652,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+1653,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+1654,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1655,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1656,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1657,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1658,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1659,(((8U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1660,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1661,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1662,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1663,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1664,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1665,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1666,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA))),8);
            tracep->chgCData(oldp+1667,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb))),8);
            tracep->chgBit(oldp+1668,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+1669,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1670,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1671,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1672,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1673,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1674,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA))),4);
            tracep->chgCData(oldp+1675,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb))),4);
            tracep->chgCData(oldp+1676,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1677,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1678,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1679,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1680,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1681,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1682,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1683,((1U & (((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA) 
                                              ^ (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb)) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+1684,((1U & (((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA) 
                                              & ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))) 
                                             | ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+1685,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA))));
            tracep->chgBit(oldp+1686,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb))));
            tracep->chgBit(oldp+1687,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1688,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 1U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 1U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1689,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1690,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1691,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1692,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1693,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 2U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 2U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 2U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1694,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1695,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1696,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1697,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1698,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 3U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 3U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 3U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1699,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1700,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 3U)))));
            tracep->chgBit(oldp+1701,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1702,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1703,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1704,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+1705,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1706,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1707,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1708,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1709,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1710,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1711,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1712,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1713,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 4U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 4U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 4U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1714,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1715,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 4U)))));
            tracep->chgBit(oldp+1716,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1717,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 5U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 5U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1718,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1719,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 5U)))));
            tracep->chgBit(oldp+1720,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1721,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1722,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 6U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 6U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 6U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1723,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1724,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 6U)))));
            tracep->chgBit(oldp+1725,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1726,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1727,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 7U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 7U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 7U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1728,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1729,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 7U)))));
            tracep->chgBit(oldp+1730,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1731,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1732,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1733,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+1734,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+1735,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1736,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1737,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1738,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1739,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1740,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1741,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1742,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+1743,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1744,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1745,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1746,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1747,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1748,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1749,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1750,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1751,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 8U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 8U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1752,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1753,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 8U)))));
            tracep->chgBit(oldp+1754,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1755,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 9U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 9U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 9U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1756,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1757,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 9U)))));
            tracep->chgBit(oldp+1758,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1759,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1760,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xaU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xaU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xaU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1761,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1762,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+1763,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1764,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1765,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xbU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xbU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1766,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1767,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+1768,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1769,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1770,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1771,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+1772,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1773,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1774,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1775,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1776,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1777,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1778,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1779,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1780,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xcU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xcU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xcU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1781,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1782,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+1783,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1784,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xdU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xdU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xdU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1785,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1786,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+1787,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1788,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1789,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xeU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xeU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1790,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1791,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+1792,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1793,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1794,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0xfU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0xfU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0xfU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1795,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1796,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+1797,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1798,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1799,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1800,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+1801,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+1802,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+1803,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1804,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1805,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1806,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1807,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1808,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1809,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+1810,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1811,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1812,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1813,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1814,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1815,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1816,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1817,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1818,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x10U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x10U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1819,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1820,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+1821,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1822,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x11U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x11U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1823,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1824,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+1825,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1826,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1827,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x12U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x12U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x12U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1828,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1829,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+1830,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1831,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1832,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x13U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x13U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x13U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1833,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1834,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+1835,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1836,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1837,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1838,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+1839,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1840,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1841,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1842,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1843,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1844,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1845,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1846,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1847,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x14U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x14U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1848,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1849,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+1850,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1851,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x15U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x15U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x15U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1852,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1853,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+1854,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1855,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1856,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x16U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x16U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x16U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1857,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1858,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+1859,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1860,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1861,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x17U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x17U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1862,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1863,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+1864,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1865,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1866,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1867,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+1868,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+1869,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+1870,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1871,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1872,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1873,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1874,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1875,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1876,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+1877,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1878,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1879,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1880,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1881,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1882,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1883,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1884,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+1885,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x18U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x18U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x18U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+1886,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1887,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x18U)))));
            tracep->chgBit(oldp+1888,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x19U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1889,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x19U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x19U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x19U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1890,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1891,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x19U)))));
            tracep->chgBit(oldp+1892,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1893,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1894,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1895,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1896,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1aU)))));
            tracep->chgBit(oldp+1897,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1898,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1899,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1900,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1901,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1bU)))));
            tracep->chgBit(oldp+1902,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1903,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1904,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1905,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU)))),4);
            tracep->chgCData(oldp+1906,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1907,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1908,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1909,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1910,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1911,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1912,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1913,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+1914,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+1915,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1916,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1cU)))));
            tracep->chgBit(oldp+1917,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1918,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1919,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1920,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1dU)))));
            tracep->chgBit(oldp+1921,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1922,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1923,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1924,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1925,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1eU)))));
            tracep->chgBit(oldp+1926,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1927,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1928,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x1fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x1fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x1fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1929,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1930,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x1fU)))));
            tracep->chgBit(oldp+1931,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+1932,((IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1933,((IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1934,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+1935,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+1936,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+1937,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+1938,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+1939,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+1940,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+1941,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+1942,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+1943,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+1944,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+1945,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+1946,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+1947,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+1948,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+1949,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+1950,(((8U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                   & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                      << 3U)))) 
                                         | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                             << 2U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+1951,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+1952,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+1953,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+1954,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+1955,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+1956,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1957,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x20U)))),8);
            tracep->chgCData(oldp+1958,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x20U)))),8);
            tracep->chgBit(oldp+1959,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+1960,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+1961,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+1962,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+1963,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+1964,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+1965,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1966,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U)))),4);
            tracep->chgCData(oldp+1967,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+1968,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+1969,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1970,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+1971,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+1972,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+1973,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+1974,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+1975,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x20U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x20U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x20U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+1976,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1977,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x20U)))));
            tracep->chgBit(oldp+1978,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x21U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+1979,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x21U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x21U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x21U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+1980,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1981,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1982,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+1983,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x22U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+1984,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x22U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x22U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x22U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+1985,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1986,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x22U)))));
            tracep->chgBit(oldp+1987,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+1988,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x23U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+1989,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x23U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x23U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x23U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+1990,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1991,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x23U)))));
            tracep->chgBit(oldp+1992,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+1993,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+1994,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1995,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U)))),4);
            tracep->chgCData(oldp+1996,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+1997,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+1998,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+1999,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2000,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2001,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2002,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2003,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2004,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x24U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x24U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x24U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2005,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+2006,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x24U)))));
            tracep->chgBit(oldp+2007,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x25U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2008,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x25U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x25U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x25U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2009,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+2010,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x25U)))));
            tracep->chgBit(oldp+2011,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2012,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x26U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2013,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x26U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x26U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x26U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2014,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+2015,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x26U)))));
            tracep->chgBit(oldp+2016,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2017,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x27U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2018,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x27U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x27U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x27U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2019,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+2020,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x27U)))));
            tracep->chgBit(oldp+2021,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2022,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2023,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2024,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x28U)))),8);
            tracep->chgCData(oldp+2025,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x28U)))),8);
            tracep->chgBit(oldp+2026,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2027,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2028,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2029,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2030,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2031,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2032,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+2033,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U)))),4);
            tracep->chgCData(oldp+2034,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2035,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2036,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2037,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2038,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2039,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2040,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2041,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2042,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x28U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x28U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x28U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2043,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+2044,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x28U)))));
            tracep->chgBit(oldp+2045,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x29U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2046,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x29U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x29U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x29U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2047,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+2048,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x29U)))));
            tracep->chgBit(oldp+2049,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2050,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2051,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2052,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+2053,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2aU)))));
            tracep->chgBit(oldp+2054,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2055,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2056,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2057,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+2058,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2bU)))));
            tracep->chgBit(oldp+2059,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2060,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2061,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+2062,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU)))),4);
            tracep->chgCData(oldp+2063,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2064,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2065,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2066,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2067,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2068,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2069,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2070,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2071,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2072,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+2073,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2cU)))));
            tracep->chgBit(oldp+2074,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2075,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2076,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+2077,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2dU)))));
            tracep->chgBit(oldp+2078,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2079,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2080,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2081,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+2082,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2eU)))));
            tracep->chgBit(oldp+2083,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2084,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2085,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x2fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x2fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x2fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2086,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+2087,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x2fU)))));
            tracep->chgBit(oldp+2088,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2089,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2090,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2091,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x30U)))),8);
            tracep->chgCData(oldp+2092,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x30U)))),8);
            tracep->chgBit(oldp+2093,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2094,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2095,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2096,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2097,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2098,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2099,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+2100,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U)))),4);
            tracep->chgCData(oldp+2101,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2102,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2103,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2104,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2105,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2106,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2107,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2108,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2109,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x30U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x30U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x30U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2110,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+2111,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x30U)))));
            tracep->chgBit(oldp+2112,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x31U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2113,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x31U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x31U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x31U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2114,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+2115,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x31U)))));
            tracep->chgBit(oldp+2116,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2117,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x32U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2118,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x32U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x32U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x32U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2119,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+2120,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x32U)))));
            tracep->chgBit(oldp+2121,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2122,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x33U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2123,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x33U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x33U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x33U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2124,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2125,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x33U)))));
            tracep->chgBit(oldp+2126,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2127,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2128,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+2129,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U)))),4);
            tracep->chgCData(oldp+2130,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2131,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2132,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2133,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2134,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2135,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2136,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2137,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2138,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x34U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x34U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x34U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2139,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+2140,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x34U)))));
            tracep->chgBit(oldp+2141,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x35U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2142,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x35U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x35U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x35U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2143,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+2144,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x35U)))));
            tracep->chgBit(oldp+2145,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2146,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x36U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2147,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x36U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x36U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x36U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2148,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+2149,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x36U)))));
            tracep->chgBit(oldp+2150,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2151,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x37U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2152,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x37U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x37U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x37U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2153,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+2154,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x37U)))));
            tracep->chgBit(oldp+2155,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2156,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2157,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2158,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x38U)))),8);
            tracep->chgCData(oldp+2159,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x38U)))),8);
            tracep->chgBit(oldp+2160,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                             >> 3U))));
            tracep->chgBit(oldp+2161,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2162,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2163,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2164,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2165,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2166,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2167,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U)))),4);
            tracep->chgCData(oldp+2168,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2169,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2170,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2171,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2172,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2173,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2174,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2175,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U)))));
            tracep->chgBit(oldp+2176,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x38U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x38U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                    >> 3U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x38U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))))));
            tracep->chgBit(oldp+2177,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2178,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x38U)))));
            tracep->chgBit(oldp+2179,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x39U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2180,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x39U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x39U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x39U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2181,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2182,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x39U)))));
            tracep->chgBit(oldp+2183,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2184,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3aU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2185,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3aU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3aU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3aU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2186,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2187,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3aU)))));
            tracep->chgBit(oldp+2188,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2189,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3bU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2190,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3bU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3bU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3bU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2191,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2192,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3bU)))));
            tracep->chgBit(oldp+2193,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2194,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2195,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2196,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU)))),4);
            tracep->chgCData(oldp+2197,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2198,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2199,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2200,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2201,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2202,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2203,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2204,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2205,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3cU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3cU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3cU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2206,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2207,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3cU)))));
            tracep->chgBit(oldp+2208,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3dU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2209,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3dU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3dU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3dU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2210,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2211,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3dU)))));
            tracep->chgBit(oldp+2212,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2213,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3eU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2214,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3eU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3eU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3eU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2215,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2216,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3eU)))));
            tracep->chgBit(oldp+2217,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2218,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3fU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2219,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                       >> 0x3fU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                          >> 0x3fU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                         >> 0x3fU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2220,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2221,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+2222,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgIData(oldp+2223,((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA)),32);
            tracep->chgIData(oldp+2224,((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB)),32);
            tracep->chgCData(oldp+2225,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+2226,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+2227,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+2228,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+2229,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+2230,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+2231,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+2232,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+2233,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+2234,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+2235,(((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                         << 1U)),5);
            tracep->chgCData(oldp+2236,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+2237,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+2238,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+2239,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+2240,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+2241,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c),4);
            tracep->chgBit(oldp+2242,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg))));
            tracep->chgBit(oldp+2243,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+2244,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+2245,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Gg) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__Pg) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+2246,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2247,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2248,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),8);
            tracep->chgCData(oldp+2249,((0xffU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),8);
            tracep->chgBit(oldp+2250,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2251,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2252,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2253,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2254,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2255,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA))),4);
            tracep->chgCData(oldp+2256,((0xfU & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB))),4);
            tracep->chgCData(oldp+2257,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2258,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2259,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2260,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
            tracep->chgBit(oldp+2261,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2262,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2263,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2264,((1U & ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             ^ (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2265,((1U & ((IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA) 
                                             & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB)))));
            tracep->chgBit(oldp+2266,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA))));
            tracep->chgBit(oldp+2267,((1U & (IData)(vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB))));
            tracep->chgBit(oldp+2268,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 1U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2269,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 1U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 1U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 1U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2270,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2271,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 1U)))));
            tracep->chgBit(oldp+2272,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2273,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 2U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2274,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 2U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 2U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 2U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2275,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2276,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 2U)))));
            tracep->chgBit(oldp+2277,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2278,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 3U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2279,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 3U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 3U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 3U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2280,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2281,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 3U)))));
            tracep->chgBit(oldp+2282,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2283,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2284,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2285,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)))),4);
            tracep->chgCData(oldp+2286,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2287,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2288,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2289,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2290,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2291,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2292,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2293,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 4U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2294,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 4U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 4U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 4U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2295,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2296,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 4U)))));
            tracep->chgBit(oldp+2297,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 5U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2298,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 5U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 5U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 5U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2299,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2300,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 5U)))));
            tracep->chgBit(oldp+2301,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2302,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 6U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2303,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 6U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 6U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 6U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2304,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2305,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 6U)))));
            tracep->chgBit(oldp+2306,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2307,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 7U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2308,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 7U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 7U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 7U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2309,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2310,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 7U)))));
            tracep->chgBit(oldp+2311,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2312,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2313,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2314,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 8U)))),8);
            tracep->chgCData(oldp+2315,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 8U)))),8);
            tracep->chgBit(oldp+2316,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))));
            tracep->chgBit(oldp+2317,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2318,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2319,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2320,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2321,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2322,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2323,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)))),4);
            tracep->chgCData(oldp+2324,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2325,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2326,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2327,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2328,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2329,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2330,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2331,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 8U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c)))));
            tracep->chgBit(oldp+2332,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 8U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 8U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 8U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c))))));
            tracep->chgBit(oldp+2333,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2334,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 8U)))));
            tracep->chgBit(oldp+2335,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 9U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2336,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 9U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 9U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 9U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2337,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2338,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 9U)))));
            tracep->chgBit(oldp+2339,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2340,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xaU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2341,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xaU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xaU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xaU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2342,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2343,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xaU)))));
            tracep->chgBit(oldp+2344,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2345,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xbU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2346,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xbU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xbU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xbU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2347,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2348,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xbU)))));
            tracep->chgBit(oldp+2349,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2350,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2351,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2352,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)))),4);
            tracep->chgCData(oldp+2353,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2354,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2355,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2356,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2357,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2358,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2359,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2360,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xcU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2361,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xcU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xcU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xcU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2362,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2363,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xcU)))));
            tracep->chgBit(oldp+2364,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xdU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2365,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xdU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xdU)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xdU)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2366,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2367,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xdU)))));
            tracep->chgBit(oldp+2368,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2369,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xeU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2370,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xeU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xeU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xeU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2371,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2372,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xeU)))));
            tracep->chgBit(oldp+2373,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2374,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xfU)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2375,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0xfU)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0xfU)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0xfU)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2376,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2377,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0xfU)))));
            tracep->chgBit(oldp+2378,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2379,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2380,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2381,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x10U)))),8);
            tracep->chgCData(oldp+2382,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x10U)))),8);
            tracep->chgBit(oldp+2383,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2384,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2385,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2386,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2387,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2388,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2389,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2390,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)))),4);
            tracep->chgCData(oldp+2391,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2392,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2393,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2394,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2395,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2396,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2397,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2398,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x10U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2399,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x10U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x10U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x10U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2400,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2401,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x10U)))));
            tracep->chgBit(oldp+2402,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x11U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2403,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x11U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x11U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x11U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2404,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2405,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x11U)))));
            tracep->chgBit(oldp+2406,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2407,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x12U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2408,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x12U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x12U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x12U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2409,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2410,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x12U)))));
            tracep->chgBit(oldp+2411,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2412,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x13U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2413,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x13U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x13U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x13U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2414,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2415,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x13U)))));
            tracep->chgBit(oldp+2416,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2417,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+2418,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2419,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)))),4);
            tracep->chgCData(oldp+2420,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+2421,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+2422,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2423,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2424,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2425,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2426,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2427,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x14U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+2428,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x14U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x14U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x14U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+2429,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2430,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x14U)))));
            tracep->chgBit(oldp+2431,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x15U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U))) 
                                             ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+2432,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x15U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x15U)) 
                                                 | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x15U)) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+2433,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2434,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x15U)))));
            tracep->chgBit(oldp+2435,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+2436,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x16U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U)))));
            tracep->chgBit(oldp+2437,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x16U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x16U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 1U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x16U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))))));
            tracep->chgBit(oldp+2438,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2439,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x16U)))));
            tracep->chgBit(oldp+2440,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U))));
            tracep->chgBit(oldp+2441,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x17U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2442,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x17U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x17U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x17U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))))));
            tracep->chgBit(oldp+2443,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2444,((1U & (IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                     >> 0x17U)))));
            tracep->chgBit(oldp+2445,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgCData(oldp+2446,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+2447,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2448,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x18U)))),8);
            tracep->chgCData(oldp+2449,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x18U)))),8);
            tracep->chgBit(oldp+2450,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                             >> 2U))));
            tracep->chgBit(oldp+2451,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+2452,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+2453,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+2454,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+2455,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 3U))));
            tracep->chgCData(oldp+2456,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2457,((0xfU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)))),4);
            tracep->chgCData(oldp+2458,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+2459,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+2460,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+2461,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2462,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+2463,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+2464,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                              >> 3U) 
                                             | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                 >> 3U) 
                                                & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+2465,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)) 
                                              ^ (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U))) 
                                             ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 2U)))));
            tracep->chgBit(oldp+2466,((1U & (((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)) 
                                              & ((IData)(
                                                         (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                          >> 0x18U)) 
                                                 | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                    >> 2U))) 
                                             | ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x18U)) 
                                                & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 2U))))));
        }
    }
}
