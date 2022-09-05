// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2441);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+0,((1U & (((IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1aU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x1aU))) 
                                          ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U)))));
            tracep->chgBit(oldp+1,((1U & (((IData)(
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
            tracep->chgBit(oldp+2,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x1aU)))));
            tracep->chgBit(oldp+3,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x1aU)))));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                          >> 1U))));
            tracep->chgBit(oldp+5,((1U & (((IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1bU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x1bU))) 
                                          ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 2U)))));
            tracep->chgBit(oldp+6,((1U & (((IData)(
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
            tracep->chgBit(oldp+7,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x1bU)))));
            tracep->chgBit(oldp+8,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x1bU)))));
            tracep->chgBit(oldp+9,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                          >> 2U))));
            tracep->chgCData(oldp+10,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+11,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1cU)))),4);
            tracep->chgCData(oldp+12,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU)))),4);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+14,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+19,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+20,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1cU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+21,((1U & (((IData)(
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
            tracep->chgBit(oldp+22,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+23,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+24,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1dU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1dU))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+25,((1U & (((IData)(
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
            tracep->chgBit(oldp+26,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+27,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+28,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+29,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1eU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1eU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+30,((1U & (((IData)(
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
            tracep->chgBit(oldp+31,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+32,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+33,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+34,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1fU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+35,((1U & (((IData)(
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
            tracep->chgBit(oldp+36,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+37,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+38,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgIData(oldp+39,((IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                               >> 0x20U))),32);
            tracep->chgIData(oldp+40,((IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                               >> 0x20U))),32);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+42,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+43,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+44,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+45,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+46,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+47,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+48,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+50,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+52,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+54,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+56,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+57,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                              | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                    << 3U)))) 
                                       | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+58,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+59,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+60,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+61,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+62,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+63,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+64,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x20U)))),8);
            tracep->chgCData(oldp+65,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)))),8);
            tracep->chgBit(oldp+66,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+68,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+69,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+70,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+71,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+72,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+73,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+74,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+80,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+81,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x20U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+82,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x20U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+83,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+84,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+85,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x21U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x21U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+86,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x21U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x21U)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x21U)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+87,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+88,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+89,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+90,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x22U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x22U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+91,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x22U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x22U)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x22U)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+92,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+94,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+95,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x23U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x23U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+96,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x23U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x23U)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x23U)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+97,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x23U)))));
            tracep->chgBit(oldp+98,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x23U)))));
            tracep->chgBit(oldp+99,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+100,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+101,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+102,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+106,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+107,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+108,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+109,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+110,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x24U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+111,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x24U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+112,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+113,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+114,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x25U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x25U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+115,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x25U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x25U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+116,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+117,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+118,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+119,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x26U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x26U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+120,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x26U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x26U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+122,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+124,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x27U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x27U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+125,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x27U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x27U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+126,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+127,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+128,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+129,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+130,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+131,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+132,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+133,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+135,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+136,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+137,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+138,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+139,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+140,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+143,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+147,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+148,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+149,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+151,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+152,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+153,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x29U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+156,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+157,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+158,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+159,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+161,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+162,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+163,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+165,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+167,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+168,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+169,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+170,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+171,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+172,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+173,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+175,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+176,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+177,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+178,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+179,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+180,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+181,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+182,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+183,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+184,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+185,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+186,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+187,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+188,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+189,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+190,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+191,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+192,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+193,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+194,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+195,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+196,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+198,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+199,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+200,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+201,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+202,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+203,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+204,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+205,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+206,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+207,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+208,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+209,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+210,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+211,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+212,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+213,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+214,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+215,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+216,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+217,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+218,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+219,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+220,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x31U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+221,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+223,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+224,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+225,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x32U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+226,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+229,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+230,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x33U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+231,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+232,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+234,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+235,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+236,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+237,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+238,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+239,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+240,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+241,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+242,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+243,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+244,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+245,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x34U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+246,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+247,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+248,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+249,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x35U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+250,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+251,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+252,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+253,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+254,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x36U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+255,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+256,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+258,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+259,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x37U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+260,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+261,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+263,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+265,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+266,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+267,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+268,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+269,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+270,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+271,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+273,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+274,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+275,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+276,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+277,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+278,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+280,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+281,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+282,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+283,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+286,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+287,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x39U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+288,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+290,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+291,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+292,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+293,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+294,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+297,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+298,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+301,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+302,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+303,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+304,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+305,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+306,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+307,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+308,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+309,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+310,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+311,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+312,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+313,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+315,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+316,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+317,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+318,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+319,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+320,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+321,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+322,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+323,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+324,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+325,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+326,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+327,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+328,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+329,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        tracep->chgBit(oldp+330,(vlSelf->clk));
        tracep->chgBit(oldp+331,(vlSelf->rst));
        tracep->chgIData(oldp+332,(vlSelf->instr),32);
        tracep->chgQData(oldp+333,(vlSelf->pc),64);
        tracep->chgBit(oldp+335,(vlSelf->wb_commit));
        tracep->chgQData(oldp+336,(vlSelf->wb_pc),64);
        tracep->chgIData(oldp+338,(vlSelf->wb_instr),32);
        tracep->chgQData(oldp+339,(vlSelf->next_pc),64);
        tracep->chgQData(oldp+341,(vlSelf->rw_addr_o),64);
        tracep->chgBit(oldp+343,(vlSelf->rw_req_o));
        tracep->chgBit(oldp+344,(vlSelf->rw_valid_o));
        tracep->chgWData(oldp+345,(vlSelf->rw_w_data_o),128);
        tracep->chgWData(oldp+349,(vlSelf->data_read_i),128);
        tracep->chgBit(oldp+353,(vlSelf->rw_ready_i));
        tracep->chgBit(oldp+354,(vlSelf->d_rw_ready));
        tracep->chgBit(oldp+355,(vlSelf->mem_valid));
        tracep->chgBit(oldp+356,(vlSelf->wb_dev_o));
        tracep->chgBit(oldp+357,((1U & (~ (((IData)(vlSelf->rst) 
                                            | ((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                               | (IData)(vlSelf->top__DOT__if_busy))) 
                                           | (IData)(vlSelf->top__DOT__cpu_halt))))));
        tracep->chgBit(oldp+358,((((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r)) 
                                  & (IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r))));
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
