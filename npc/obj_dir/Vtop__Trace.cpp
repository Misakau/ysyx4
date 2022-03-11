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
            tracep->chgBit(oldp+71,(vlSelf->top__DOT__my_idu__DOT__ALUSrcB));
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__my_exu__DOT__busa),64);
            tracep->chgQData(oldp+75,((((QData)((IData)(
                                                        ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                          [3U] 
                                                          << 0x18U) 
                                                         | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                             [2U] 
                                                             << 0x10U) 
                                                            | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                                [1U] 
                                                                << 8U) 
                                                               | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                                               [0U]))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                      [3U] 
                                                                      << 0x18U) 
                                                                     | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                         [2U] 
                                                                         << 0x10U) 
                                                                        | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                            [1U] 
                                                                            << 8U) 
                                                                           | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                                                           [0U]))))))),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+79,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                           >> 3U))));
            tracep->chgIData(oldp+80,(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                        [3U] << 0x18U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                           [2U] << 0x10U) 
                                          | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                              [1U] 
                                              << 8U) 
                                             | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                             [0U])))),32);
            tracep->chgIData(oldp+81,(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                        [3U] << 0x18U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                           [2U] << 0x10U) 
                                          | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                              [1U] 
                                              << 8U) 
                                             | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                             [0U])))),32);
            tracep->chgBit(oldp+82,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                           >> 3U))));
            tracep->chgIData(oldp+83,((IData)(vlSelf->top__DOT__my_exu__DOT__busa)),32);
            tracep->chgIData(oldp+84,((IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)),32);
            tracep->chgCData(oldp+85,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
            tracep->chgCData(oldp+86,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
            tracep->chgCData(oldp+87,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
            tracep->chgCData(oldp+88,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
            tracep->chgCData(oldp+89,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
            tracep->chgCData(oldp+90,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
            tracep->chgCData(oldp+91,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
            tracep->chgCData(oldp+92,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
            tracep->chgCData(oldp+93,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
            tracep->chgCData(oldp+94,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
            tracep->chgCData(oldp+95,(((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                       << 1U)),5);
            tracep->chgCData(oldp+96,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
            tracep->chgCData(oldp+97,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
            tracep->chgCData(oldp+98,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
            tracep->chgCData(oldp+99,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
            tracep->chgCData(oldp+100,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
            tracep->chgCData(oldp+101,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c),4);
            tracep->chgBit(oldp+102,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg))));
            tracep->chgBit(oldp+103,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+104,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+105,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+106,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+107,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+108,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),8);
            tracep->chgCData(oldp+109,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),8);
            tracep->chgBit(oldp+110,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+111,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+112,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+113,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+114,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+115,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),4);
            tracep->chgCData(oldp+116,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))),4);
            tracep->chgCData(oldp+117,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+118,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+119,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+120,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
            tracep->chgBit(oldp+121,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+122,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+123,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+124,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                            ^ (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                            & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB)))));
            tracep->chgBit(oldp+126,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))));
            tracep->chgBit(oldp+127,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__alu_inB))));
            tracep->chgBit(oldp+128,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 1U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 1U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+129,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 1U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 1U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 1U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+130,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 1U)))));
            tracep->chgBit(oldp+131,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 1U)))));
            tracep->chgBit(oldp+132,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+133,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 2U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 2U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+134,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 2U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 2U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 2U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+135,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 2U)))));
            tracep->chgBit(oldp+136,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 2U)))));
            tracep->chgBit(oldp+137,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+138,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 3U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 3U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+139,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 3U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 3U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 3U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+140,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 3U)))));
            tracep->chgBit(oldp+141,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 3U)))));
            tracep->chgBit(oldp+142,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+143,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+144,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+145,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 4U)))),4);
            tracep->chgCData(oldp+146,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+147,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+148,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+149,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+150,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+151,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+152,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+153,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 4U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 4U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+154,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 4U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 4U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 4U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+155,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 4U)))));
            tracep->chgBit(oldp+156,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 4U)))));
            tracep->chgBit(oldp+157,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 5U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 5U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+158,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 5U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 5U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 5U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+159,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 5U)))));
            tracep->chgBit(oldp+160,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 5U)))));
            tracep->chgBit(oldp+161,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+162,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 6U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 6U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+163,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 6U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 6U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 6U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 6U)))));
            tracep->chgBit(oldp+165,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 6U)))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+167,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 7U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 7U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+168,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 7U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 7U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 7U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+169,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 7U)))));
            tracep->chgBit(oldp+170,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 7U)))));
            tracep->chgBit(oldp+171,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+172,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+173,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+174,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+175,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 8U)))),8);
            tracep->chgBit(oldp+176,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c))));
            tracep->chgBit(oldp+177,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+178,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+179,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+180,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+181,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+182,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+183,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 8U)))),4);
            tracep->chgCData(oldp+184,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+185,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+186,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+187,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+188,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+189,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+190,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+191,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 8U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 8U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c)))));
            tracep->chgBit(oldp+192,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 8U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 8U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 8U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c))))));
            tracep->chgBit(oldp+193,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 8U)))));
            tracep->chgBit(oldp+194,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 8U)))));
            tracep->chgBit(oldp+195,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 9U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 9U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+196,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 9U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 9U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 9U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+197,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 9U)))));
            tracep->chgBit(oldp+198,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 9U)))));
            tracep->chgBit(oldp+199,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+200,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xaU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xaU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+201,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xaU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xaU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xaU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+202,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+203,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xaU)))));
            tracep->chgBit(oldp+204,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+205,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xbU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xbU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+206,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xbU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xbU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xbU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+207,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+208,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xbU)))));
            tracep->chgBit(oldp+209,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+210,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+211,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+212,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xcU)))),4);
            tracep->chgCData(oldp+213,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+214,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+215,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+216,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+217,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+218,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+219,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+220,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xcU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xcU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+221,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xcU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xcU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xcU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+222,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+223,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xcU)))));
            tracep->chgBit(oldp+224,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xdU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xdU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+225,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xdU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xdU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xdU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+226,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+227,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xdU)))));
            tracep->chgBit(oldp+228,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+229,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xeU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xeU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+230,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xeU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xeU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xeU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+231,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+232,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xeU)))));
            tracep->chgBit(oldp+233,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+234,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xfU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xfU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+235,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0xfU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0xfU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0xfU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+236,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+237,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0xfU)))));
            tracep->chgBit(oldp+238,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+239,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+241,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+242,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x10U)))),8);
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+244,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+245,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+246,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+247,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+248,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+249,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+250,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x10U)))),4);
            tracep->chgCData(oldp+251,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+252,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+253,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+254,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+255,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+256,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+257,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+258,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x10U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x10U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+259,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x10U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x10U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x10U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+260,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+261,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x10U)))));
            tracep->chgBit(oldp+262,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x11U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x11U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+263,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x11U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x11U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x11U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+264,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+265,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x11U)))));
            tracep->chgBit(oldp+266,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+267,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x12U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x12U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+268,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x12U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x12U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x12U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+269,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+270,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x12U)))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+272,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x13U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x13U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+273,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x13U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x13U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x13U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+274,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+275,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x13U)))));
            tracep->chgBit(oldp+276,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+277,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+278,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+279,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x14U)))),4);
            tracep->chgCData(oldp+280,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+281,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+282,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+283,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+284,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+285,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+286,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+287,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x14U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x14U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+288,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x14U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x14U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x14U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+289,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+290,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x14U)))));
            tracep->chgBit(oldp+291,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x15U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x15U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+292,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x15U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x15U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x15U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+293,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+294,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x15U)))));
            tracep->chgBit(oldp+295,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+296,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x16U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x16U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+297,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x16U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x16U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x16U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+298,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+299,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x16U)))));
            tracep->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+301,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x17U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x17U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+302,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x17U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x17U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x17U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+303,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+304,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x17U)))));
            tracep->chgBit(oldp+305,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+306,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+308,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+309,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x18U)))),8);
            tracep->chgBit(oldp+310,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+311,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+312,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+313,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+314,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+315,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+316,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+317,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x18U)))),4);
            tracep->chgCData(oldp+318,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+319,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+320,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+321,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+322,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+323,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+324,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+325,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x18U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x18U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+326,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x18U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x18U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x18U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+327,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+328,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x18U)))));
            tracep->chgBit(oldp+329,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x19U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x19U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+330,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x19U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x19U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x19U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+331,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+332,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x19U)))));
            tracep->chgBit(oldp+333,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+334,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+335,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+336,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+337,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1aU)))));
            tracep->chgBit(oldp+338,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+339,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+340,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+341,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+342,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1bU)))));
            tracep->chgBit(oldp+343,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+344,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+345,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+346,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1cU)))),4);
            tracep->chgCData(oldp+347,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+348,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+349,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+350,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+351,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+352,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+353,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+354,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+355,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+356,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+357,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1cU)))));
            tracep->chgBit(oldp+358,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+359,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+360,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+361,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1dU)))));
            tracep->chgBit(oldp+362,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+363,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+364,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+365,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+366,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1eU)))));
            tracep->chgBit(oldp+367,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+368,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+369,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x1fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x1fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x1fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+370,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+371,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x1fU)))));
            tracep->chgBit(oldp+372,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgIData(oldp+373,((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 0x20U))),32);
            tracep->chgIData(oldp+374,((IData)((vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                >> 0x20U))),32);
            tracep->chgCData(oldp+375,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
            tracep->chgCData(oldp+376,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
            tracep->chgCData(oldp+377,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
            tracep->chgCData(oldp+378,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
            tracep->chgCData(oldp+379,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
            tracep->chgCData(oldp+380,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
            tracep->chgCData(oldp+381,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
            tracep->chgCData(oldp+382,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
            tracep->chgCData(oldp+383,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
            tracep->chgCData(oldp+384,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
            tracep->chgCData(oldp+385,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c),5);
            tracep->chgCData(oldp+386,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
            tracep->chgCData(oldp+387,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
            tracep->chgCData(oldp+388,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
            tracep->chgCData(oldp+389,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
            tracep->chgCData(oldp+390,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
            tracep->chgCData(oldp+391,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                               | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                  & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                     << 3U)))) 
                                        | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                            << 2U) 
                                           | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
            tracep->chgBit(oldp+392,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
            tracep->chgBit(oldp+393,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
            tracep->chgBit(oldp+394,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
            tracep->chgBit(oldp+395,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
            tracep->chgCData(oldp+396,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+397,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+398,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x20U)))),8);
            tracep->chgCData(oldp+399,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x20U)))),8);
            tracep->chgBit(oldp+400,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))));
            tracep->chgBit(oldp+401,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+402,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+403,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+404,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+405,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+406,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+407,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x20U)))),4);
            tracep->chgCData(oldp+408,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+409,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+410,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+411,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+412,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+413,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+414,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+415,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x20U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x20U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c)))));
            tracep->chgBit(oldp+416,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x20U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x20U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x20U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))))));
            tracep->chgBit(oldp+417,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+418,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x20U)))));
            tracep->chgBit(oldp+419,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x21U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x21U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+420,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x21U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x21U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x21U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+421,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+422,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+423,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+424,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x22U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x22U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+425,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x22U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x22U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x22U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+426,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+427,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x22U)))));
            tracep->chgBit(oldp+428,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+429,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x23U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x23U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+430,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x23U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x23U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x23U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+431,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+432,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x23U)))));
            tracep->chgBit(oldp+433,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+434,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+435,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+436,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x24U)))),4);
            tracep->chgCData(oldp+437,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+438,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+439,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+440,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+441,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+442,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+443,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+444,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x24U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x24U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+445,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x24U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x24U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x24U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+446,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+447,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x24U)))));
            tracep->chgBit(oldp+448,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x25U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x25U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+449,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x25U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x25U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x25U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+450,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+451,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x25U)))));
            tracep->chgBit(oldp+452,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+453,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x26U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x26U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+454,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x26U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x26U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x26U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+455,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+456,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x26U)))));
            tracep->chgBit(oldp+457,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+458,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x27U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x27U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+459,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x27U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x27U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x27U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+460,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+461,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x27U)))));
            tracep->chgBit(oldp+462,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+463,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+464,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+465,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+466,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x28U)))),8);
            tracep->chgBit(oldp+467,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+468,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+469,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+470,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+471,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+472,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+473,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+474,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x28U)))),4);
            tracep->chgCData(oldp+475,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+476,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+477,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+478,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+479,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+480,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+481,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+482,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x28U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x28U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+483,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x28U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x28U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x28U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+484,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+485,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x28U)))));
            tracep->chgBit(oldp+486,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x29U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x29U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+487,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x29U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x29U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x29U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+488,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+489,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x29U)))));
            tracep->chgBit(oldp+490,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+491,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+492,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+493,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+494,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2aU)))));
            tracep->chgBit(oldp+495,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+496,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+497,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+498,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+499,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2bU)))));
            tracep->chgBit(oldp+500,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+501,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+502,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+503,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2cU)))),4);
            tracep->chgCData(oldp+504,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+505,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+506,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+507,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+508,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+509,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+510,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+511,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+512,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+513,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+514,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2cU)))));
            tracep->chgBit(oldp+515,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+516,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+517,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+518,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2dU)))));
            tracep->chgBit(oldp+519,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+520,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+521,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+522,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+523,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2eU)))));
            tracep->chgBit(oldp+524,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+525,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+526,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x2fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x2fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x2fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+527,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+528,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x2fU)))));
            tracep->chgBit(oldp+529,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+530,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+531,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+532,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+533,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x30U)))),8);
            tracep->chgBit(oldp+534,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 2U))));
            tracep->chgBit(oldp+535,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+536,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+537,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+538,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+539,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+540,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+541,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x30U)))),4);
            tracep->chgCData(oldp+542,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+543,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+544,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+545,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+546,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+547,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+548,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+549,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x30U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x30U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+550,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x30U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x30U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x30U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+551,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+552,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x30U)))));
            tracep->chgBit(oldp+553,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x31U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x31U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+554,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x31U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x31U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x31U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+555,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+556,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x31U)))));
            tracep->chgBit(oldp+557,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+558,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x32U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x32U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+559,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x32U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x32U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x32U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+560,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+561,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x32U)))));
            tracep->chgBit(oldp+562,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+563,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x33U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x33U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+564,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x33U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x33U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x33U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+565,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+566,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x33U)))));
            tracep->chgBit(oldp+567,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+568,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+569,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+570,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x34U)))),4);
            tracep->chgCData(oldp+571,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+572,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+573,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+574,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+575,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+576,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+577,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+578,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x34U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x34U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+579,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x34U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x34U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x34U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+580,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+581,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x34U)))));
            tracep->chgBit(oldp+582,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x35U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x35U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+583,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x35U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x35U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x35U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+584,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+585,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x35U)))));
            tracep->chgBit(oldp+586,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+587,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x36U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x36U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+588,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x36U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x36U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x36U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+589,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+590,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x36U)))));
            tracep->chgBit(oldp+591,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+592,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x37U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x37U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+593,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x37U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x37U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x37U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+594,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+595,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x37U)))));
            tracep->chgBit(oldp+596,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+597,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
            tracep->chgBit(oldp+598,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+599,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__busa 
                                                         >> 0x38U)))),8);
            tracep->chgCData(oldp+600,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x38U)))),8);
            tracep->chgBit(oldp+601,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 3U))));
            tracep->chgBit(oldp+602,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
            tracep->chgCData(oldp+603,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
            tracep->chgCData(oldp+604,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
            tracep->chgCData(oldp+605,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
            tracep->chgBit(oldp+606,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 3U))));
            tracep->chgCData(oldp+607,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+608,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x38U)))),4);
            tracep->chgCData(oldp+609,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
            tracep->chgCData(oldp+610,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
            tracep->chgCData(oldp+611,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+612,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+613,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+614,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+615,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+616,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x38U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x38U))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 3U)))));
            tracep->chgBit(oldp+617,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x38U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x38U)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                   >> 3U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x38U)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                  >> 3U))))));
            tracep->chgBit(oldp+618,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+619,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x38U)))));
            tracep->chgBit(oldp+620,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x39U)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x39U))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+621,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x39U)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x39U)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x39U)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+622,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+623,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x39U)))));
            tracep->chgBit(oldp+624,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+625,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3aU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3aU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+626,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3aU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3aU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3aU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+627,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+628,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3aU)))));
            tracep->chgBit(oldp+629,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+630,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3bU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3bU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+631,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3bU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3bU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3bU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+632,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+633,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3bU)))));
            tracep->chgBit(oldp+634,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U))));
            tracep->chgCData(oldp+635,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
            tracep->chgCData(oldp+636,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__busa 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+637,((0xfU & (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3cU)))),4);
            tracep->chgCData(oldp+638,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
            tracep->chgCData(oldp+639,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
            tracep->chgCData(oldp+640,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
            tracep->chgBit(oldp+641,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
            tracep->chgBit(oldp+642,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
            tracep->chgBit(oldp+643,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
            tracep->chgBit(oldp+644,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                             >> 3U) 
                                            | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                                >> 3U) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
            tracep->chgBit(oldp+645,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3cU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3cU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
            tracep->chgBit(oldp+646,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3cU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3cU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3cU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
            tracep->chgBit(oldp+647,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+648,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3cU)))));
            tracep->chgBit(oldp+649,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3dU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3dU))) 
                                            ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
            tracep->chgBit(oldp+650,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3dU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3dU)) 
                                                | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3dU)) 
                                               & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
            tracep->chgBit(oldp+651,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+652,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3dU)))));
            tracep->chgBit(oldp+653,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
            tracep->chgBit(oldp+654,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3eU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3eU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U)))));
            tracep->chgBit(oldp+655,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3eU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3eU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 1U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3eU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 1U))))));
            tracep->chgBit(oldp+656,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+657,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3eU)))));
            tracep->chgBit(oldp+658,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U))));
            tracep->chgBit(oldp+659,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3fU)) 
                                             ^ (IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3fU))) 
                                            ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U)))));
            tracep->chgBit(oldp+660,((1U & (((IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x3fU)) 
                                             & ((IData)(
                                                        (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                         >> 0x3fU)) 
                                                | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                   >> 2U))) 
                                            | ((IData)(
                                                       (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                        >> 0x3fU)) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                  >> 2U))))));
            tracep->chgBit(oldp+661,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+662,((1U & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__alu_inB 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+663,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U))));
        }
        tracep->chgBit(oldp+664,(vlSelf->clk));
        tracep->chgBit(oldp+665,(vlSelf->rst));
        tracep->chgIData(oldp+666,(vlSelf->instr_i),32);
        tracep->chgQData(oldp+667,(vlSelf->pc),64);
        tracep->chgCData(oldp+669,((0x7fU & vlSelf->instr_i)),7);
        tracep->chgCData(oldp+670,((vlSelf->instr_i 
                                    >> 0x19U)),7);
        tracep->chgCData(oldp+671,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->chgCData(oldp+672,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->chgCData(oldp+673,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+674,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->chgQData(oldp+675,(((0U == (0x1fU & 
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
