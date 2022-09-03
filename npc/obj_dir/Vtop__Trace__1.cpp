// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2343);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                          >> 1U))));
            tracep->chgBit(oldp+1,((1U & (((IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x1fU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                      >> 0x1fU))) 
                                          ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U)))));
            tracep->chgBit(oldp+2,((1U & (((IData)(
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
            tracep->chgBit(oldp+3,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                  >> 0x1fU)))));
            tracep->chgBit(oldp+4,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                  >> 0x1fU)))));
            tracep->chgBit(oldp+5,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                          >> 2U))));
            tracep->chgIData(oldp+6,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                              >> 0x20U))),32);
            tracep->chgIData(oldp+7,((IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                              >> 0x20U))),32);
            tracep->chgCData(oldp+8,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+9,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+10,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+11,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+12,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+14,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+16,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+17,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+18,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+19,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+21,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+22,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+23,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+24,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                              | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                    << 3U)))) 
                                       | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+25,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+26,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+28,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+29,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+30,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+31,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x20U)))),8);
            tracep->chgCData(oldp+32,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x20U)))),8);
            tracep->chgBit(oldp+33,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+34,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+35,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+36,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+37,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+39,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+40,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+42,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+44,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+45,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+47,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+48,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x20U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x20U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+49,((1U & (((IData)(
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
            tracep->chgBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+51,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+52,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x21U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x21U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+53,((1U & (((IData)(
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
            tracep->chgBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+55,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+56,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+57,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x22U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x22U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+58,((1U & (((IData)(
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
            tracep->chgBit(oldp+59,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+60,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+61,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+62,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x23U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x23U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+63,((1U & (((IData)(
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
            tracep->chgBit(oldp+64,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x23U)))));
            tracep->chgBit(oldp+65,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x23U)))));
            tracep->chgBit(oldp+66,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+67,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+68,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                       >> 0x24U)))),4);
            tracep->chgCData(oldp+69,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x24U)))),4);
            tracep->chgCData(oldp+70,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+71,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+72,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+73,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+75,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+76,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+77,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x24U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x24U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+78,((1U & (((IData)(
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
            tracep->chgBit(oldp+79,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x24U)))));
            tracep->chgBit(oldp+80,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x24U)))));
            tracep->chgBit(oldp+81,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x25U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x25U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+82,((1U & (((IData)(
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
            tracep->chgBit(oldp+83,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x25U)))));
            tracep->chgBit(oldp+84,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x25U)))));
            tracep->chgBit(oldp+85,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+86,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x26U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x26U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+87,((1U & (((IData)(
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
            tracep->chgBit(oldp+88,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x26U)))));
            tracep->chgBit(oldp+89,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x26U)))));
            tracep->chgBit(oldp+90,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+91,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                     >> 0x27U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                       >> 0x27U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+92,((1U & (((IData)(
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
            tracep->chgBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                   >> 0x27U)))));
            tracep->chgBit(oldp+94,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                   >> 0x27U)))));
            tracep->chgBit(oldp+95,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+96,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+97,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+98,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x28U)))),8);
            tracep->chgCData(oldp+99,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x28U)))),8);
            tracep->chgBit(oldp+100,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+101,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+102,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+105,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+106,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+107,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+109,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+110,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+114,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+115,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+116,((1U & (((IData)(
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
            tracep->chgBit(oldp+117,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+118,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+119,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+120,((1U & (((IData)(
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
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+122,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+123,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+124,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+125,((1U & (((IData)(
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
            tracep->chgBit(oldp+126,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+127,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+128,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+129,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+130,((1U & (((IData)(
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
            tracep->chgBit(oldp+131,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+132,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+133,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+134,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+135,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+136,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+137,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+138,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+139,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+140,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+142,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+143,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+144,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+145,((1U & (((IData)(
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
            tracep->chgBit(oldp+146,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+147,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+148,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+149,((1U & (((IData)(
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
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+151,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+152,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+153,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+154,((1U & (((IData)(
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
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+156,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+157,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+158,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+159,((1U & (((IData)(
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
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+161,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+162,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+163,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+164,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+165,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+166,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+167,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+168,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+169,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+170,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+171,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+172,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+173,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+174,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+175,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+176,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+177,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+178,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+179,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+180,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+181,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+182,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+183,((1U & (((IData)(
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
            tracep->chgBit(oldp+184,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+185,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+186,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+187,((1U & (((IData)(
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
            tracep->chgBit(oldp+188,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+189,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+190,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+191,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+192,((1U & (((IData)(
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
            tracep->chgBit(oldp+193,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+194,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+195,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+196,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+197,((1U & (((IData)(
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
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+200,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+201,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+202,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+203,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+204,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+205,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+206,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+207,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+209,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+210,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+211,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+212,((1U & (((IData)(
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
            tracep->chgBit(oldp+213,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+214,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+215,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+216,((1U & (((IData)(
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
            tracep->chgBit(oldp+217,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+218,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+219,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+220,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+221,((1U & (((IData)(
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
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+223,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+224,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+225,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+226,((1U & (((IData)(
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
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+229,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+230,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+231,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+232,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+233,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+234,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+235,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+236,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+240,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+241,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+243,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+244,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+245,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+246,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+247,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+248,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+249,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+250,((1U & (((IData)(
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
            tracep->chgBit(oldp+251,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+252,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+253,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+254,((1U & (((IData)(
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
            tracep->chgBit(oldp+255,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+256,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+257,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+258,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+259,((1U & (((IData)(
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
            tracep->chgBit(oldp+260,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+261,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+263,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+264,((1U & (((IData)(
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
            tracep->chgBit(oldp+265,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+266,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+268,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+269,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+270,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+271,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+272,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+273,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+274,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+275,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+276,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+277,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+278,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+279,((1U & (((IData)(
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
            tracep->chgBit(oldp+280,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+281,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+282,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+283,((1U & (((IData)(
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
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+286,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+287,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+288,((1U & (((IData)(
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
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+290,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+292,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+293,((1U & (((IData)(
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
            tracep->chgBit(oldp+294,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inA 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+295,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+296,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__cpu_halt));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__is_Csrwen));
            tracep->chgCData(oldp+299,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__next_status),3);
            tracep->chgBit(oldp+300,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
            tracep->chgBit(oldp+301,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
            tracep->chgBit(oldp+302,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
            tracep->chgBit(oldp+303,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [0U]));
            tracep->chgBit(oldp+305,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [1U]));
            tracep->chgBit(oldp+306,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [2U]));
            tracep->chgBit(oldp+307,(vlSelf->top__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [3U]));
        }
        tracep->chgBit(oldp+308,(vlSelf->clk));
        tracep->chgBit(oldp+309,(vlSelf->rst));
        tracep->chgIData(oldp+310,(vlSelf->instr),32);
        tracep->chgQData(oldp+311,(vlSelf->pc),64);
        tracep->chgBit(oldp+313,(vlSelf->wb_commit));
        tracep->chgQData(oldp+314,(vlSelf->wb_pc),64);
        tracep->chgIData(oldp+316,(vlSelf->wb_instr),32);
        tracep->chgQData(oldp+317,(vlSelf->next_pc),64);
        tracep->chgQData(oldp+319,(vlSelf->i_rw_addr_o),64);
        tracep->chgBit(oldp+321,(vlSelf->i_rw_req_o));
        tracep->chgBit(oldp+322,(vlSelf->i_rw_valid_o));
        tracep->chgWData(oldp+323,(vlSelf->i_data_read_i),128);
        tracep->chgBit(oldp+327,(vlSelf->i_rw_ready_i));
        tracep->chgBit(oldp+328,(vlSelf->mem_valid));
        tracep->chgBit(oldp+329,(vlSelf->wb_dev_o));
        tracep->chgBit(oldp+330,((1U & (~ (((IData)(vlSelf->rst) 
                                            | ((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                               | ((~ (IData)(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready)) 
                                                  & (~ (IData)(vlSelf->top__DOT__my_ifu__DOT__old_instr))))) 
                                           | (IData)(vlSelf->top__DOT__cpu_halt))))));
        tracep->chgBit(oldp+331,((((IData)(vlSelf->top__DOT__M_Reg__DOT__MemWen_r) 
                                   & (~ (IData)(vlSelf->rst))) 
                                  & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r))));
        tracep->chgBit(oldp+332,((((IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r) 
                                   & (0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__M_Reg__DOT__raddr_r 
                                                          >> 0x1cU))))) 
                                  & (~ (((IData)(vlSelf->top__DOT__M_Reg__DOT__MemWen_r) 
                                         & (~ (IData)(vlSelf->rst))) 
                                        & (IData)(vlSelf->top__DOT__M_Reg__DOT__valid_r))))));
        tracep->chgBit(oldp+333,((((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r)) 
                                  & (IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r))));
        tracep->chgBit(oldp+334,(((~ (IData)(vlSelf->top__DOT__cpu_halt)) 
                                  & (IData)(vlSelf->top__DOT__ID_Reg__DOT__valid_r))));
        tracep->chgBit(oldp+335,((1U & (~ (IData)(vlSelf->clk)))));
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
