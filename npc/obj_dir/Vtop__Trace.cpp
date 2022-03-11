// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__my_ifu__DOT__now_pc),64);
            tracep->chgQData(oldp+2,((4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc)),64);
            tracep->chgQData(oldp+4,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+6,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+8,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+10,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+26,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+28,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+30,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+32,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__imm),64);
            tracep->chgBit(oldp+70,(vlSelf->top__DOT__wen));
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__ALUSrcB));
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__ALUOp),4);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__my_exu__DOT__busa),64);
            tracep->chgQData(oldp+76,(((0xfU == (IData)(vlSelf->top__DOT__ALUOp))
                                        ? (QData)((IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))))
                                        : (QData)((IData)(
                                                          (1U 
                                                           & vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                           [0U]))))),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+80,((1U & vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                     [0U])));
            tracep->chgBit(oldp+81,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))));
            tracep->chgBit(oldp+82,((1U & ((IData)(vlSelf->top__DOT__ALUOp) 
                                           >> 3U))));
            tracep->chgQData(oldp+83,((((QData)((IData)(
                                                        ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                          [3U] 
                                                          << 0x18U) 
                                                         | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                             [2U] 
                                                             << 0x10U) 
                                                            | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                                [1U] 
                                                                << 8U) 
                                                               | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                                               [0U]))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                                      [3U] 
                                                                      << 0x18U) 
                                                                     | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                                         [2U] 
                                                                         << 0x10U) 
                                                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                                            [1U] 
                                                                            << 8U) 
                                                                           | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                                                           [0U]))))))),64);
            tracep->chgBit(oldp+85,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                           >> 3U))));
            tracep->chgIData(oldp+86,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                        [3U] << 0x18U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                           [2U] << 0x10U) 
                                          | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                              [1U] 
                                              << 8U) 
                                             | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff
                                             [0U])))),32);
            tracep->chgIData(oldp+87,(((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                        [3U] << 0x18U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                           [2U] << 0x10U) 
                                          | ((vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                              [1U] 
                                              << 8U) 
                                             | vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff
                                             [0U])))),32);
            tracep->chgBit(oldp+88,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                           >> 3U))));
            tracep->chgIData(oldp+89,((IData)(vlSelf->top__DOT__my_exu__DOT__busa)),32);
            tracep->chgIData(oldp+90,((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)),32);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+92,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+93,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+95,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+98,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c),5);
            tracep->chgCData(oldp+102,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+103,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+104,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+105,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+106,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+107,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+109,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+110,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+111,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+112,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+113,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+114,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),8);
            tracep->chgCData(oldp+115,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),8);
            tracep->chgBit(oldp+116,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+118,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+119,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+120,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+121,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+122,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),4);
            tracep->chgCData(oldp+123,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),4);
            tracep->chgCData(oldp+124,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+125,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+126,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+127,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+128,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+129,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+130,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+131,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                             ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c)))));
            tracep->chgBit(oldp+132,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                             & ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))) 
                                            | ((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c))))));
            tracep->chgBit(oldp+133,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))));
            tracep->chgBit(oldp+134,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+135,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 1U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 1U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+136,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 1U)))));
            tracep->chgBit(oldp+137,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 1U)))));
            tracep->chgBit(oldp+138,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+139,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+140,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 2U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+141,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 2U)))));
            tracep->chgBit(oldp+142,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 2U)))));
            tracep->chgBit(oldp+143,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+144,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+145,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 3U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 3U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+146,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 3U)))));
            tracep->chgBit(oldp+147,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 3U)))));
            tracep->chgBit(oldp+148,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+149,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+150,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+151,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+152,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+153,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+154,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+155,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+156,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+157,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+158,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+159,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+160,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 4U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 4U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+161,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 4U)))));
            tracep->chgBit(oldp+162,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 4U)))));
            tracep->chgBit(oldp+163,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+164,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 5U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 5U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+165,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 5U)))));
            tracep->chgBit(oldp+166,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 5U)))));
            tracep->chgBit(oldp+167,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+168,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+169,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 6U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+170,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 6U)))));
            tracep->chgBit(oldp+171,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 6U)))));
            tracep->chgBit(oldp+172,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+173,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 7U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 7U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+174,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 7U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+175,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 7U)))));
            tracep->chgBit(oldp+176,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 7U)))));
            tracep->chgBit(oldp+177,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+178,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+179,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+180,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+181,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 8U)))),8);
            tracep->chgBit(oldp+182,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+184,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+185,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+186,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+187,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+188,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+189,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+190,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+191,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+192,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+193,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+194,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+195,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+196,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+197,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 8U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+198,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 8U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 8U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+199,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 8U)))));
            tracep->chgBit(oldp+200,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 8U)))));
            tracep->chgBit(oldp+201,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 9U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 9U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+202,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 9U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 9U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+203,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 9U)))));
            tracep->chgBit(oldp+204,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 9U)))));
            tracep->chgBit(oldp+205,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+206,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xaU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xaU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+207,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xaU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xaU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+209,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+210,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+211,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xbU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xbU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+212,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xbU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xbU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+213,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+214,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+215,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+216,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+217,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+218,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+219,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+220,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+221,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+222,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+223,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+224,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+225,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+226,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xcU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xcU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+227,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xcU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xcU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+228,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+229,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+230,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xdU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xdU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+231,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xdU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xdU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+232,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+233,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+234,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+235,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xeU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xeU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+236,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xeU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xeU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+238,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+240,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xfU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xfU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+241,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xfU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xfU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+242,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+243,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+244,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+245,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+246,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+247,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+248,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x10U)))),8);
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+250,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+251,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+252,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+253,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+255,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+256,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+257,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+258,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+259,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+260,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+261,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+262,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+263,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+264,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x10U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+265,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x10U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x10U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+266,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+267,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+268,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x11U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x11U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+269,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x11U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x11U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+270,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+271,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+272,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+273,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x12U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x12U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+274,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x12U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x12U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+276,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+277,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+278,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x13U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x13U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+279,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x13U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x13U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+280,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+281,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+282,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+283,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+284,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+285,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+286,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+287,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+288,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+289,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+290,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+291,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+292,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+293,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x14U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x14U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+294,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x14U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x14U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+295,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+296,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+297,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x15U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+298,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x15U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x15U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+300,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+301,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+302,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x16U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x16U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+303,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x16U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x16U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+305,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+307,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x17U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x17U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+308,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x17U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x17U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+309,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+310,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+311,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+312,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+313,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+314,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+315,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x18U)))),8);
            tracep->chgBit(oldp+316,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+317,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+318,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+319,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+320,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+321,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+322,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+323,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+324,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+325,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+326,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+327,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+328,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+329,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+330,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+331,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x18U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+332,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x18U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x18U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+333,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+334,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+335,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x19U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+336,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x19U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x19U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+337,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+338,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+339,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+340,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+341,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+343,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+344,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+345,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+346,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+347,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+348,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+349,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+350,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+351,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+352,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+353,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+354,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+355,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+356,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+357,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+358,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+359,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+360,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+361,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+362,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+363,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+364,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+365,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+366,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+367,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+368,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+369,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+370,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+371,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+372,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+373,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+374,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+375,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+376,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+377,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+378,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgIData(oldp+379,((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+380,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                >> 0x20U))),32);
            tracep->chgCData(oldp+381,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+382,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+383,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+384,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+385,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+386,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+387,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+388,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+389,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+390,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+391,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+392,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+393,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+394,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+395,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+396,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+397,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+398,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+399,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+400,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+401,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+402,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+403,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+404,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x20U)))),8);
            tracep->chgCData(oldp+405,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x20U)))),8);
            tracep->chgBit(oldp+406,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+407,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+408,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+409,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+410,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+411,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+412,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+413,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+414,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+415,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+416,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+417,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+418,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+419,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+420,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+421,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x20U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x20U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+422,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x20U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x20U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+423,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+424,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+425,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x21U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x21U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+426,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x21U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x21U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+428,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+429,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+430,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x22U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x22U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+431,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x22U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x22U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+432,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+433,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+434,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+435,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x23U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x23U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+436,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x23U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x23U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+437,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+438,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+439,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+440,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+441,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+442,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+443,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+444,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+445,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+446,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+447,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+448,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+449,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+450,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x24U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x24U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+451,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x24U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x24U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+452,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+453,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+454,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x25U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x25U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+455,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x25U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x25U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+456,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+457,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+458,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+459,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x26U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x26U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+460,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x26U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x26U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+461,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+462,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+463,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+464,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x27U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x27U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+465,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x27U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x27U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+466,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+467,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+468,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+469,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+470,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+471,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+472,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+473,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+474,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+475,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+476,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+477,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+478,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+479,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+480,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+481,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+482,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+483,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+484,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+485,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+486,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+487,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+488,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+489,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x28U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x28U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+490,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+491,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+492,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+493,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x29U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x29U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+495,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+496,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+497,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+498,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+499,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+500,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+501,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+502,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+503,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+504,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+505,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+506,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+507,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+508,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+509,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+510,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+511,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+512,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+513,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+514,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+515,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+516,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+517,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+518,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+519,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+520,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+521,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+522,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+523,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+524,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+525,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+526,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+527,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+528,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+529,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+530,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+531,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+532,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+533,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+534,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+535,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+536,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+537,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+538,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+539,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+540,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+541,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+542,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+543,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+544,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+545,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+546,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+547,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+548,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+549,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+550,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+551,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+552,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+553,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+554,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+555,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+556,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x30U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x30U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+557,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+558,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+559,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+560,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x31U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x31U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+561,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+562,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+563,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+564,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+565,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x32U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x32U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+567,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+568,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+569,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+570,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x33U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x33U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+571,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+572,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+573,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+574,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+575,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+576,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+577,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+578,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+579,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+580,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+581,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+582,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+583,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+584,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+585,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x34U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x34U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+586,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+587,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+588,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+589,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x35U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x35U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+590,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+591,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+592,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+593,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+594,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x36U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x36U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+595,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+596,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+597,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+598,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+599,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x37U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x37U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+600,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+601,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+602,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+603,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+604,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+605,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+606,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+607,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+608,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+609,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+610,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+611,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+612,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+613,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+614,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+615,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+616,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+617,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+618,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+619,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+620,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+621,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+622,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+623,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x38U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x38U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+624,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+625,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+626,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+627,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x39U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x39U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+629,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+630,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+631,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+632,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+634,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+635,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+636,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+637,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+638,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+639,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+640,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+641,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+642,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+643,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+644,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+645,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+646,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+647,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+648,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+649,(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+650,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+651,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+652,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+653,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+654,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+655,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+656,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+657,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+658,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+659,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+660,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+661,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+662,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+663,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+664,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+665,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+666,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+667,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+668,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+669,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__alu64__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        tracep->chgBit(oldp+670,(vlSelf->clk));
        tracep->chgBit(oldp+671,(vlSelf->rst));
        tracep->chgIData(oldp+672,(vlSelf->instr_i),32);
        tracep->chgQData(oldp+673,(vlSelf->pc),64);
        tracep->chgCData(oldp+675,((0x7fU & vlSelf->instr_i)),7);
        tracep->chgCData(oldp+676,((vlSelf->instr_i 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+677,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->chgCData(oldp+678,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+679,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+680,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->chgQData(oldp+681,(((0U == (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                    [(0x1fU & (vlSelf->instr_i 
                                               >> 0x14U))])),64);
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
