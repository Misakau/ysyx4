// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2467);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+0,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x18U)))));
            tracep->chgBit(oldp+1,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x18U)))));
            tracep->chgBit(oldp+2,((1U & (((IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x19U)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x19U))) 
                                          ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+3,((1U & (((IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x19U)) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x19U)) 
                                              | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x19U)) 
                                             & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+4,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+5,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x19U)))));
            tracep->chgBit(oldp+6,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+7,((1U & (((IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1aU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x1aU))) 
                                          ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                             >> 1U)))));
            tracep->chgBit(oldp+8,((1U & (((IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1aU)) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1aU)) 
                                              | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 1U))) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x1aU)) 
                                             & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))))));
            tracep->chgBit(oldp+9,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x1aU)))));
            tracep->chgBit(oldp+10,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1aU)))));
            tracep->chgBit(oldp+11,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+12,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1bU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1bU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+13,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1bU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1bU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1bU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+14,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1bU)))));
            tracep->chgBit(oldp+15,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1bU)))));
            tracep->chgBit(oldp+16,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+17,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+18,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1cU)))),4);
            tracep->chgCData(oldp+19,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU)))),4);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+21,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+22,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+23,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+24,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+25,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+26,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+27,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1cU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+28,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1cU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1cU)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+29,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+30,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+31,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1dU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1dU))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+32,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1dU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1dU)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1dU)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+33,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+34,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+35,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+36,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1eU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1eU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+37,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1eU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1eU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1eU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+38,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+39,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+40,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+41,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1fU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+42,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1fU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1fU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1fU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+43,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+44,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+45,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgIData(oldp+46,((IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                               >> 0x20U))),32);
            tracep->chgIData(oldp+47,((IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                               >> 0x20U))),32);
            tracep->chgCData(oldp+48,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+49,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+50,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+51,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+52,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+53,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+54,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+55,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+56,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+57,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+58,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+59,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+60,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+61,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+62,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+63,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+64,(((8U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                              | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                    << 3U)))) 
                                       | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+65,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+66,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+67,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+68,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+69,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+71,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x20U)))),8);
            tracep->chgCData(oldp+72,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)))),8);
            tracep->chgBit(oldp+73,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+74,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+75,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+77,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+78,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+79,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+80,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+81,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+82,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+83,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+84,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+85,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+86,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+87,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+88,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x20U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+89,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x20U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+90,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+91,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+92,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x21U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x21U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+93,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x21U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x21U)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x21U)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+94,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+95,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+96,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+97,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x22U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x22U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+98,((1U & (((IData)(
                                                    (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x22U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x22U)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x22U)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+99,((1U & (IData)((vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+100,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+101,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+102,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x23U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x23U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+103,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x23U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x23U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+104,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+105,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+106,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+107,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+108,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+109,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+110,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+111,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+113,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+116,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+117,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x24U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+118,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x24U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+119,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+120,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+121,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x25U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x25U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+122,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x25U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x25U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+123,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+124,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+125,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+126,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x26U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x26U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+127,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x26U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x26U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+128,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+129,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+130,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+131,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x27U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x27U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+132,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x27U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x27U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+133,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+134,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+135,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+136,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+137,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+138,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+139,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+140,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+141,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+142,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+143,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+144,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+145,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+146,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+147,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+148,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+149,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+150,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+151,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+152,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+153,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+154,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+155,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+156,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+157,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+158,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+159,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+160,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x29U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+161,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+162,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+163,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+164,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+165,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+166,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+167,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+168,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+169,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+170,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+173,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+174,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+175,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+176,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+177,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+178,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+179,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+180,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+181,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+182,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+183,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+184,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+185,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+186,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+187,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+188,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+189,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+190,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+191,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+192,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+193,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+194,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+195,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+196,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+198,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+199,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+200,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+201,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+202,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+203,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+204,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+205,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+206,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+207,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+208,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+209,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+210,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+211,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+212,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+213,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+214,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+215,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+216,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+217,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+218,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+219,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+220,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+221,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+222,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+223,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+224,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+225,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+226,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+227,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x31U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+229,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+230,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+231,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+232,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x32U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+233,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+234,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+236,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+237,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x33U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+238,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+239,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+241,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+242,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+243,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+244,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+245,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+246,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+247,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+248,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+249,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+250,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+251,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+252,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x34U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+253,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+254,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+255,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+256,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x35U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+257,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+258,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+259,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+260,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+261,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x36U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+262,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+263,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+265,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+266,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x37U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+267,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+268,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+270,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+272,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+273,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+274,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+275,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+276,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+277,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+278,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+279,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+280,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+281,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+282,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+283,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+284,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+285,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+286,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+287,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+288,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+289,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+290,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+291,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+292,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+293,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+294,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x39U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+295,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+296,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+297,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+298,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+299,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+300,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+301,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+302,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+303,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+304,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+305,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+306,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+308,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+309,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+310,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+311,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+312,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+313,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+314,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+315,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+316,(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+317,((1U & (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+318,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+319,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+320,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+321,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+322,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+323,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+324,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+325,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+326,((1U & (IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+327,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+328,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+329,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+330,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+331,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+332,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+333,((1U & (((IData)(
                                                     (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+334,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+335,((1U & (IData)(
                                                   (vlSelf->top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+336,((1U & ((IData)(vlSymsp->TOP__top__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        tracep->chgBit(oldp+337,(vlSelf->clk));
        tracep->chgBit(oldp+338,(vlSelf->rst));
        tracep->chgIData(oldp+339,(vlSelf->instr),32);
        tracep->chgQData(oldp+340,(vlSelf->pc),64);
        tracep->chgBit(oldp+342,(vlSelf->wb_commit));
        tracep->chgQData(oldp+343,(vlSelf->wb_pc),64);
        tracep->chgIData(oldp+345,(vlSelf->wb_instr),32);
        tracep->chgQData(oldp+346,(vlSelf->next_pc),64);
        tracep->chgBit(oldp+348,(vlSelf->mem_valid));
        tracep->chgBit(oldp+349,(vlSelf->wb_dev_o));
        tracep->chgBit(oldp+350,(vlSelf->d_rw_ready));
        tracep->chgBit(oldp+351,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+352,(vlSelf->axi_aw_valid_o));
        tracep->chgQData(oldp+353,(vlSelf->axi_aw_addr_o),64);
        tracep->chgCData(oldp+355,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+356,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+357,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+358,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+359,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+360,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+361,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+362,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+363,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+364,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+365,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+366,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+367,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+369,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+370,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+371,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+372,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+373,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+374,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+375,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+376,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+377,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+378,(vlSelf->axi_ar_valid_o));
        tracep->chgQData(oldp+379,(vlSelf->axi_ar_addr_o),64);
        tracep->chgCData(oldp+381,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+382,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+383,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+384,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+385,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+386,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+387,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+388,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+389,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+390,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+391,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+392,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+393,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+394,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+396,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+397,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+398,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+399,((1U & (~ (((IData)(vlSelf->rst) 
                                            | ((IData)(vlSelf->top__DOT__core__DOT__id_Ebreak_o) 
                                               | (IData)(vlSelf->top__DOT__core__DOT__if_busy))) 
                                           | (IData)(vlSelf->top__DOT__core__DOT__cpu_halt))))));
        tracep->chgBit(oldp+400,((((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__wen_r)) 
                                  & (IData)(vlSelf->top__DOT__core__DOT__WB_Reg__DOT__valid_r))));
        tracep->chgBit(oldp+401,((1U & (IData)(vlSelf->axi_b_resp_i))));
        tracep->chgBit(oldp+402,((1U & (IData)(vlSelf->axi_b_id_i))));
        tracep->chgBit(oldp+403,((1U & (IData)(vlSelf->axi_r_resp_i))));
        tracep->chgBit(oldp+404,((1U & (IData)(vlSelf->axi_r_id_i))));
        tracep->chgBit(oldp+405,(((IData)(vlSelf->top__DOT__axi__DOT__w_fire) 
                                  & (IData)(vlSelf->axi_w_last_o))));
        tracep->chgBit(oldp+406,(((IData)(vlSelf->axi_ar_ready_i) 
                                  & (IData)(vlSelf->axi_ar_valid_o))));
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
