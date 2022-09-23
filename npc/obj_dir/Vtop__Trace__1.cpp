// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub1(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 2474);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+0,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss),3);
            tracep->chgBit(oldp+1,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+2,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+3,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+4,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                           >> 3U) | 
                                          (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                            >> 3U) 
                                           & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+5,((1U & (((IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x14U)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x14U))) 
                                          ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+6,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                  >> 0x14U)))));
            tracep->chgBit(oldp+7,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                  >> 0x14U)))));
            tracep->chgBit(oldp+8,((1U & (((IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x15U)) 
                                           ^ (IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x15U))) 
                                          ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+9,((1U & (((IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x15U)) 
                                           & ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x15U)) 
                                              | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                      >> 0x15U)) 
                                             & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+10,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x15U)))));
            tracep->chgBit(oldp+11,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x15U)))));
            tracep->chgBit(oldp+12,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+13,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x16U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x16U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+14,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x16U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x16U)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x16U)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+15,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x16U)))));
            tracep->chgBit(oldp+16,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x16U)))));
            tracep->chgBit(oldp+17,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+18,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x17U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x17U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+19,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x17U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x17U)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x17U)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+20,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x17U)))));
            tracep->chgBit(oldp+21,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x17U)))));
            tracep->chgBit(oldp+22,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+23,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+24,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+25,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x18U)))),8);
            tracep->chgCData(oldp+26,((0xffU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x18U)))),8);
            tracep->chgBit(oldp+27,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+29,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+30,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgBit(oldp+31,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 3U))));
            tracep->chgCData(oldp+32,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgCData(oldp+33,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x18U)))),4);
            tracep->chgCData(oldp+34,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x18U)))),4);
            tracep->chgCData(oldp+35,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+36,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+37,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+38,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x18U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x18U)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x18U)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgCData(oldp+39,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss),3);
            tracep->chgBit(oldp+40,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+42,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+43,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+44,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x18U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x18U))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+45,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x18U)))));
            tracep->chgBit(oldp+46,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x18U)))));
            tracep->chgBit(oldp+47,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x19U)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x19U))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+48,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x19U)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x19U)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x19U)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+49,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+50,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+51,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+52,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1aU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1aU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+53,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1aU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1aU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1aU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+54,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1aU)))));
            tracep->chgBit(oldp+55,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1aU)))));
            tracep->chgBit(oldp+56,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+57,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1bU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1bU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+58,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1bU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1bU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1bU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+59,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1bU)))));
            tracep->chgBit(oldp+60,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1bU)))));
            tracep->chgBit(oldp+61,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgCData(oldp+62,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+63,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                       >> 0x1cU)))),4);
            tracep->chgCData(oldp+64,((0xfU & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU)))),4);
            tracep->chgCData(oldp+65,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+66,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+67,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+68,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1cU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1cU)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgCData(oldp+69,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss),3);
            tracep->chgBit(oldp+70,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+71,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+72,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+73,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                            >> 3U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                               >> 3U) 
                                              & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+74,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1cU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1cU))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+75,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+76,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1cU)))));
            tracep->chgBit(oldp+77,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1dU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1dU))) 
                                           ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+78,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1dU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1dU)) 
                                               | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1dU)) 
                                              & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+79,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+80,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1dU)))));
            tracep->chgBit(oldp+81,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+82,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1eU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1eU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 1U)))));
            tracep->chgBit(oldp+83,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1eU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1eU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1eU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                 >> 1U))))));
            tracep->chgBit(oldp+84,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+85,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1eU)))));
            tracep->chgBit(oldp+86,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 1U))));
            tracep->chgBit(oldp+87,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1fU)) 
                                            ^ (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1fU))) 
                                           ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                              >> 2U)))));
            tracep->chgBit(oldp+88,((1U & (((IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                     >> 0x1fU)) 
                                            & ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x1fU)) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))) 
                                           | ((IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                       >> 0x1fU)) 
                                              & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                 >> 2U))))));
            tracep->chgBit(oldp+89,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+90,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                   >> 0x1fU)))));
            tracep->chgBit(oldp+91,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                           >> 2U))));
            tracep->chgIData(oldp+92,((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                               >> 0x20U))),32);
            tracep->chgIData(oldp+93,((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                               >> 0x20U))),32);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+98,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+102,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+106,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+107,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+108,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+109,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+110,(((8U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+114,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+115,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+116,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+117,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x20U)))),8);
            tracep->chgCData(oldp+118,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x20U)))),8);
            tracep->chgBit(oldp+119,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+120,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+121,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+122,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgBit(oldp+123,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+124,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgCData(oldp+125,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+126,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+127,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+128,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+129,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+130,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x20U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c))))));
            tracep->chgCData(oldp+131,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss),3);
            tracep->chgBit(oldp+132,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+133,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+134,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+135,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+136,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x20U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x20U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+137,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+138,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+139,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x21U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x21U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+140,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x21U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x21U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+141,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+142,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+143,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+144,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x22U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x22U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+145,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x22U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x22U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+146,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+147,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+149,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x23U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x23U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+150,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x23U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x23U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+151,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+152,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+153,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+154,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+155,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+156,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+157,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+158,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+159,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+160,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x24U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgCData(oldp+161,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss),3);
            tracep->chgBit(oldp+162,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+163,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+164,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+165,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+166,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x24U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x24U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+167,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+168,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+169,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x25U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x25U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+170,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x25U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x25U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+172,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+173,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+174,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x26U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x26U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+175,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x26U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x26U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+176,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+177,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+178,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+179,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x27U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x27U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+180,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x27U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x27U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+181,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+182,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+183,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+184,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+185,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+186,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+187,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+188,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+190,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+191,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgBit(oldp+192,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+193,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgCData(oldp+194,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+195,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+196,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+197,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+198,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+199,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x28U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgCData(oldp+200,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss),3);
            tracep->chgBit(oldp+201,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+202,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+203,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+204,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+205,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+206,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+207,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+208,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+209,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x29U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x29U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+210,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+211,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+212,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+213,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+214,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+215,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+216,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+217,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+218,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+219,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+220,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+221,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+222,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+223,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+224,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+225,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+227,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+228,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+229,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgCData(oldp+230,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss),3);
            tracep->chgBit(oldp+231,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+232,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+233,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+234,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+235,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+236,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+238,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+239,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+240,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+241,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+242,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+243,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+244,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+245,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+246,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+248,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+249,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x2fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x2fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+250,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+251,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+253,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+255,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+256,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+258,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+259,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+260,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+262,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgCData(oldp+263,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+264,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+265,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+266,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+267,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+268,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x30U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgCData(oldp+269,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss),3);
            tracep->chgBit(oldp+270,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+271,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+272,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+273,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+274,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+276,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+277,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+278,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x31U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x31U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+279,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+280,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+281,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+282,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+283,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x32U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x32U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+284,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+285,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+286,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+287,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+288,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x33U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x33U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+290,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+292,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+293,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+294,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+295,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+296,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+297,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+298,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x34U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgCData(oldp+299,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss),3);
            tracep->chgBit(oldp+300,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+301,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+302,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+303,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+304,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+305,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+306,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+307,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+308,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x35U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x35U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+310,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+311,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+312,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+313,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x36U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x36U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+314,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+315,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+316,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+317,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+318,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x37U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x37U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+319,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+320,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+321,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+322,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+323,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+324,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+325,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+326,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+327,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+328,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+329,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgBit(oldp+330,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+331,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgCData(oldp+332,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+333,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+334,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+335,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+336,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+337,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x38U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgCData(oldp+338,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__cout_miss),3);
            tracep->chgBit(oldp+339,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+340,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+341,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+342,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+343,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+344,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+345,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+346,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+347,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x39U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x39U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+348,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+349,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+350,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+351,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+352,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+353,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+354,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+355,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+356,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+357,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+358,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+359,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+360,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+361,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+362,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+363,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+364,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+365,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+366,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+367,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgCData(oldp+368,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__cout_miss),3);
            tracep->chgBit(oldp+369,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+370,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+371,(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+372,((1U & (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+373,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+374,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+375,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+376,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+377,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+378,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+379,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+380,((1U & (IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+381,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+382,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+383,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+384,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+385,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+386,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+387,((1U & (((IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                         >> 0x3fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                        >> 0x3fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+388,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+389,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+390,((1U & ((IData)(vlSymsp->TOP__top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__pcadder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        tracep->chgBit(oldp+391,(vlSelf->clk));
        tracep->chgBit(oldp+392,(vlSelf->rst));
        tracep->chgIData(oldp+393,(vlSelf->instr),32);
        tracep->chgQData(oldp+394,(vlSelf->pc),64);
        tracep->chgBit(oldp+396,(vlSelf->wb_commit));
        tracep->chgQData(oldp+397,(vlSelf->wb_pc),64);
        tracep->chgIData(oldp+399,(vlSelf->wb_instr),32);
        tracep->chgQData(oldp+400,(vlSelf->next_pc),64);
        tracep->chgBit(oldp+402,(vlSelf->mem_valid));
        tracep->chgBit(oldp+403,(vlSelf->wb_dev_o));
        tracep->chgBit(oldp+404,(vlSelf->d_rw_ready));
        tracep->chgBit(oldp+405,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+406,(vlSelf->axi_aw_valid_o));
        tracep->chgIData(oldp+407,(vlSelf->axi_aw_addr_o),32);
        tracep->chgCData(oldp+408,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+409,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+410,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+411,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+412,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+413,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+414,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+415,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+416,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+417,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+418,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+419,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+420,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+422,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+423,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+424,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+425,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+426,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+427,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+428,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+429,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+430,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+431,(vlSelf->axi_ar_valid_o));
        tracep->chgIData(oldp+432,(vlSelf->axi_ar_addr_o),32);
        tracep->chgCData(oldp+433,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+434,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+435,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+436,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+437,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+438,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+439,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+440,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+441,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+442,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+443,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+444,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+445,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+446,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+448,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+449,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+450,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+451,((1U & (~ ((((IData)(vlSelf->rst) 
                                             | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                                | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))) 
                                            | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                                           | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))))));
        tracep->chgBit(oldp+452,((((~ (IData)(vlSelf->rst)) 
                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r)) 
                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))));
        tracep->chgBit(oldp+453,(((IData)(vlSelf->axi_aw_ready_i) 
                                  & (IData)(vlSelf->axi_aw_valid_o))));
        tracep->chgBit(oldp+454,(((IData)(vlSelf->axi_ar_ready_i) 
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
