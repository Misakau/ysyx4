// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2415);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+0,((1U & (((IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1eU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x1eU))) 
                                          ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 1U)))));
            tracep->chgBit(oldp+1,((1U & (((IData)(
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
            tracep->chgBit(oldp+2,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x1eU)))));
            tracep->chgBit(oldp+3,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x1eU)))));
            tracep->chgBit(oldp+4,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                          >> 1U))));
            tracep->chgBit(oldp+5,((1U & (((IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x1fU)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x1fU))) 
                                          ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                             >> 2U)))));
            tracep->chgBit(oldp+6,((1U & (((IData)(
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
            tracep->chgBit(oldp+7,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x1fU)))));
            tracep->chgBit(oldp+8,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x1fU)))));
            tracep->chgBit(oldp+9,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                          >> 2U))));
            tracep->chgIData(oldp+10,((IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                               >> 0x20U))),32);
            tracep->chgIData(oldp+11,((IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                               >> 0x20U))),32);
            tracep->chgCData(oldp+12,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+13,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+14,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+15,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+16,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+17,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+18,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+19,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+20,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+21,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+22,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+23,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+24,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+25,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+26,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+27,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+28,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                              | ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                 & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                    << 3U)))) 
                                       | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                           << 2U) | 
                                          (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+29,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+30,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+32,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+33,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+34,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+35,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x20U)))),8);
            tracep->chgCData(oldp+36,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)))),8);
            tracep->chgBit(oldp+37,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+38,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+40,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+41,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+42,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+43,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+44,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U)))),4);
            tracep->chgCData(oldp+45,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+46,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+47,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+48,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+49,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+50,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+51,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+52,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x20U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x20U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+53,((1U & (((IData)(
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
            tracep->chgBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+55,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x20U)))));
            tracep->chgBit(oldp+56,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x21U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x21U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+57,((1U & (((IData)(
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
            tracep->chgBit(oldp+58,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+59,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x21U)))));
            tracep->chgBit(oldp+60,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+61,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x22U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x22U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+62,((1U & (((IData)(
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
            tracep->chgBit(oldp+63,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+64,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x22U)))));
            tracep->chgBit(oldp+65,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+66,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x23U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x23U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+67,((1U & (((IData)(
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
            tracep->chgBit(oldp+68,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x23U)))));
            tracep->chgBit(oldp+69,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x23U)))));
            tracep->chgBit(oldp+70,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+71,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+72,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x24U)))),4);
            tracep->chgCData(oldp+73,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x24U)))),4);
            tracep->chgCData(oldp+74,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+75,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+76,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+79,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+80,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+81,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x24U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x24U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+82,((1U & (((IData)(
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
            tracep->chgBit(oldp+83,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x24U)))));
            tracep->chgBit(oldp+84,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x24U)))));
            tracep->chgBit(oldp+85,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x25U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x25U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+86,((1U & (((IData)(
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
            tracep->chgBit(oldp+87,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x25U)))));
            tracep->chgBit(oldp+88,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x25U)))));
            tracep->chgBit(oldp+89,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+90,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x26U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x26U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+91,((1U & (((IData)(
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
            tracep->chgBit(oldp+92,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x26U)))));
            tracep->chgBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x26U)))));
            tracep->chgBit(oldp+94,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+95,((1U & (((IData)(
                                                    (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x27U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x27U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+96,((1U & (((IData)(
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
            tracep->chgBit(oldp+97,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x27U)))));
            tracep->chgBit(oldp+98,((1U & (IData)((vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x27U)))));
            tracep->chgBit(oldp+99,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+100,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+101,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+102,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+103,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+104,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+105,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+106,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+107,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+109,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+110,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+111,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+113,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+114,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+115,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+118,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+119,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+120,((1U & (((IData)(
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
            tracep->chgBit(oldp+121,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+122,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+123,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+124,((1U & (((IData)(
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
            tracep->chgBit(oldp+125,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+126,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+127,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+128,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+129,((1U & (((IData)(
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
            tracep->chgBit(oldp+130,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+131,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+132,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+133,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+134,((1U & (((IData)(
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
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+136,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+137,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+138,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+139,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+140,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+141,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+143,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+145,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+146,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+147,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+148,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+149,((1U & (((IData)(
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
            tracep->chgBit(oldp+150,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+151,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+152,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+153,((1U & (((IData)(
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
            tracep->chgBit(oldp+154,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+156,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+157,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+158,((1U & (((IData)(
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
            tracep->chgBit(oldp+159,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+161,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+162,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+163,((1U & (((IData)(
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
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+165,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+167,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+168,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+169,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+170,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+171,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+172,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+173,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+174,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+175,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+176,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+177,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+178,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+179,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+180,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+181,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+182,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+185,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+186,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+187,((1U & (((IData)(
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
            tracep->chgBit(oldp+188,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+189,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+190,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+191,((1U & (((IData)(
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
            tracep->chgBit(oldp+192,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+193,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+194,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+195,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+196,((1U & (((IData)(
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
            tracep->chgBit(oldp+197,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+199,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+200,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+201,((1U & (((IData)(
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
            tracep->chgBit(oldp+202,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+203,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+204,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+205,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+206,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+207,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+208,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+209,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+210,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+211,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+212,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+213,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+214,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+215,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+216,((1U & (((IData)(
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
            tracep->chgBit(oldp+217,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+218,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+219,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+220,((1U & (((IData)(
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
            tracep->chgBit(oldp+221,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+223,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+224,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+225,((1U & (((IData)(
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
            tracep->chgBit(oldp+226,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+228,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+229,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+230,((1U & (((IData)(
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
            tracep->chgBit(oldp+231,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+232,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+234,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+235,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+236,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+237,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+238,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+239,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+240,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+241,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+244,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+245,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+246,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+247,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+248,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+249,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+250,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+251,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+252,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+253,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+254,((1U & (((IData)(
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
            tracep->chgBit(oldp+255,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+256,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+257,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+258,((1U & (((IData)(
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
            tracep->chgBit(oldp+259,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+260,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+261,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+262,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+263,((1U & (((IData)(
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
            tracep->chgBit(oldp+264,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+265,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+266,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+267,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+268,((1U & (((IData)(
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
            tracep->chgBit(oldp+269,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+270,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+272,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+273,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+274,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+275,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+276,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+277,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+278,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+279,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+280,(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+281,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+282,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+283,((1U & (((IData)(
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
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+286,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+287,((1U & (((IData)(
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
            tracep->chgBit(oldp+288,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+290,((1U & (IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+291,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+292,((1U & (((IData)(
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
            tracep->chgBit(oldp+293,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+294,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+297,((1U & (((IData)(
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
            tracep->chgBit(oldp+298,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad),64);
            tracep->chgIData(oldp+303,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw),32);
            tracep->chgSData(oldp+304,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah),16);
            tracep->chgCData(oldp+305,(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab),8);
        }
        tracep->chgBit(oldp+306,(vlSelf->clk));
        tracep->chgBit(oldp+307,(vlSelf->rst));
        tracep->chgIData(oldp+308,(vlSelf->instr),32);
        tracep->chgQData(oldp+309,(vlSelf->pc),64);
        tracep->chgBit(oldp+311,(vlSelf->wb_commit));
        tracep->chgQData(oldp+312,(vlSelf->wb_pc),64);
        tracep->chgIData(oldp+314,(vlSelf->wb_instr),32);
        tracep->chgQData(oldp+315,(vlSelf->next_pc),64);
        tracep->chgQData(oldp+317,(vlSelf->i_rw_addr_o),64);
        tracep->chgBit(oldp+319,(vlSelf->i_rw_req_o));
        tracep->chgBit(oldp+320,(vlSelf->i_rw_valid_o));
        tracep->chgWData(oldp+321,(vlSelf->i_data_read_i),128);
        tracep->chgBit(oldp+325,(vlSelf->i_rw_ready_i));
        tracep->chgQData(oldp+326,(vlSelf->d_rw_addr_o),64);
        tracep->chgBit(oldp+328,(vlSelf->d_rw_req_o));
        tracep->chgBit(oldp+329,(vlSelf->d_rw_valid_o));
        tracep->chgWData(oldp+330,(vlSelf->d_rw_w_data_o),128);
        tracep->chgWData(oldp+334,(vlSelf->d_data_read_i),128);
        tracep->chgBit(oldp+338,(vlSelf->d_rw_ready_i));
        tracep->chgBit(oldp+339,(vlSelf->mem_valid));
        tracep->chgBit(oldp+340,(vlSelf->wb_dev_o));
        tracep->chgBit(oldp+341,((1U & (~ (((IData)(vlSelf->rst) 
                                            | ((IData)(vlSelf->top__DOT__id_Ebreak_o) 
                                               | ((~ (IData)(vlSelf->top__DOT__my_ifu__DOT__i_cpu_ready)) 
                                                  & (~ (IData)(vlSelf->top__DOT__my_ifu__DOT__old_instr))))) 
                                           | (IData)(vlSelf->top__DOT__cpu_halt))))));
        tracep->chgBit(oldp+342,((((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->top__DOT__WB_Reg__DOT__wen_r)) 
                                  & (IData)(vlSelf->top__DOT__WB_Reg__DOT__valid_r))));
        tracep->chgQData(oldp+343,(((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                     ? ((2U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                         ? ((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? 0ULL
                                             : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah)))
                                         : ((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab))
                                             : (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))
                                     : ((2U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                         ? ((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? vlSelf->top__DOT__my_mu__DOT__mem__DOT__datad
                                             : (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                        >> 0xfU))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datah))))
                                         : ((1U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                        >> 7U))))) 
                                                 << 8U) 
                                                | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__datab)))
                                             : (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))))),64);
        tracep->chgQData(oldp+345,(((IData)(vlSelf->top__DOT__is_MemToReg)
                                     ? ((4U & (IData)(vlSelf->top__DOT__M_Reg__DOT__MemOp_r))
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
                                                 | (QData)((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                     : vlSelf->top__DOT__M_Reg__DOT__raddr_r)),64);
        tracep->chgBit(oldp+347,((1U & (~ (IData)(vlSelf->clk)))));
        tracep->chgCData(oldp+348,(((4U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                     ? ((2U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                         ? 0U : ((1U 
                                                  & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->d_rw_ready_i)
                                                   ? 5U
                                                   : 4U)))
                                     : ((2U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                         ? ((1U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                             ? ((IData)(vlSelf->top__DOT__is_MemToReg)
                                                 ? 0U
                                                 : 6U)
                                             : ((IData)(vlSelf->d_rw_ready_i)
                                                 ? 1U
                                                 : 2U))
                                         : ((1U & (IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))
                                             ? ((((1U 
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
                                             : ((IData)(vlSelf->top__DOT__my_mu__DOT__mem__DOT__cpu_req_valid)
                                                 ? 1U
                                                 : 0U))))),3);
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
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    }
}
