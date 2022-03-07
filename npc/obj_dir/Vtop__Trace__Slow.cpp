// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+70,"clk", false,-1);
        tracep->declBit(c+71,"rst", false,-1);
        tracep->declBus(c+72,"instr_i", false,-1, 31,0);
        tracep->declQuad(c+73,"pc", false,-1, 63,0);
        tracep->declBit(c+70,"top clk", false,-1);
        tracep->declBit(c+71,"top rst", false,-1);
        tracep->declBus(c+72,"top instr_i", false,-1, 31,0);
        tracep->declQuad(c+73,"top pc", false,-1, 63,0);
        tracep->declBus(c+75,"top op", false,-1, 6,0);
        tracep->declBus(c+76,"top func7", false,-1, 6,0);
        tracep->declBus(c+77,"top rd", false,-1, 4,0);
        tracep->declBus(c+78,"top rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top func3", false,-1, 2,0);
        tracep->declQuad(c+81,"top immI", false,-1, 63,0);
        tracep->declBit(c+65,"top wen", false,-1);
        tracep->declBit(c+70,"top my_ifu clk", false,-1);
        tracep->declBit(c+71,"top my_ifu rst", false,-1);
        tracep->declQuad(c+73,"top my_ifu pc", false,-1, 63,0);
        tracep->declQuad(c+83,"top my_ifu now_pc", false,-1, 63,0);
        tracep->declQuad(c+85,"top my_ifu dnpc", false,-1, 63,0);
        tracep->declBus(c+90,"top my_ifu PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+91,"top my_ifu PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+70,"top my_ifu PC clk", false,-1);
        tracep->declBit(c+71,"top my_ifu PC rst", false,-1);
        tracep->declQuad(c+85,"top my_ifu PC din", false,-1, 63,0);
        tracep->declQuad(c+83,"top my_ifu PC dout", false,-1, 63,0);
        tracep->declBit(c+93,"top my_ifu PC wen", false,-1);
        tracep->declBus(c+72,"top my_idu instr_i", false,-1, 31,0);
        tracep->declBus(c+75,"top my_idu op", false,-1, 6,0);
        tracep->declBus(c+77,"top my_idu rd", false,-1, 4,0);
        tracep->declBus(c+78,"top my_idu rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top my_idu rs2", false,-1, 4,0);
        tracep->declBus(c+80,"top my_idu func3", false,-1, 2,0);
        tracep->declBus(c+76,"top my_idu func7", false,-1, 6,0);
        tracep->declQuad(c+81,"top my_idu immI", false,-1, 63,0);
        tracep->declQuad(c+94,"top my_idu immS", false,-1, 63,0);
        tracep->declQuad(c+96,"top my_idu immJ", false,-1, 63,0);
        tracep->declQuad(c+98,"top my_idu immB", false,-1, 63,0);
        tracep->declBit(c+65,"top my_idu wen", false,-1);
        tracep->declBit(c+70,"top my_exu clk", false,-1);
        tracep->declBus(c+77,"top my_exu rd", false,-1, 4,0);
        tracep->declBus(c+78,"top my_exu rs1", false,-1, 4,0);
        tracep->declBus(c+79,"top my_exu rs2", false,-1, 4,0);
        tracep->declBit(c+65,"top my_exu wen", false,-1);
        tracep->declQuad(c+81,"top my_exu immI", false,-1, 63,0);
        tracep->declQuad(c+66,"top my_exu busa", false,-1, 63,0);
        tracep->declQuad(c+87,"top my_exu busb", false,-1, 63,0);
        tracep->declQuad(c+68,"top my_exu res", false,-1, 63,0);
        tracep->declBus(c+100,"top my_exu regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+90,"top my_exu regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+89,"top my_exu regfile clk", false,-1);
        tracep->declBus(c+78,"top my_exu regfile raaddr", false,-1, 4,0);
        tracep->declBus(c+79,"top my_exu regfile rbaddr", false,-1, 4,0);
        tracep->declQuad(c+66,"top my_exu regfile radata", false,-1, 63,0);
        tracep->declQuad(c+87,"top my_exu regfile rbdata", false,-1, 63,0);
        tracep->declQuad(c+68,"top my_exu regfile wdata", false,-1, 63,0);
        tracep->declBus(c+77,"top my_exu regfile waddr", false,-1, 4,0);
        tracep->declBit(c+65,"top my_exu regfile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+1+i*2,"top my_exu regfile rf", true,(i+0), 63,0);}}
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[31]),64);
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__wen));
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__my_exu__DOT__busa),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__my_exu__DOT__res),64);
        tracep->fullBit(oldp+70,(vlSelf->clk));
        tracep->fullBit(oldp+71,(vlSelf->rst));
        tracep->fullIData(oldp+72,(vlSelf->instr_i),32);
        tracep->fullQData(oldp+73,(vlSelf->pc),64);
        tracep->fullCData(oldp+75,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+76,((vlSelf->instr_i 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+77,((0x1fU & (vlSelf->instr_i 
                                             >> 7U))),5);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->instr_i 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+79,((0x1fU & (vlSelf->instr_i 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+80,((7U & (vlSelf->instr_i 
                                          >> 0xcU))),3);
        tracep->fullQData(oldp+81,((((- (QData)((IData)(
                                                        (vlSelf->instr_i 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->instr_i 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__my_ifu__DOT__now_pc),64);
        tracep->fullQData(oldp+85,((4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc)),64);
        tracep->fullQData(oldp+87,(((0U == (0x1fU & 
                                            (vlSelf->instr_i 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                    [(0x1fU & (vlSelf->instr_i 
                                               >> 0x14U))])),64);
        tracep->fullBit(oldp+89,((1U & (~ (IData)(vlSelf->clk)))));
        tracep->fullIData(oldp+90,(0x40U),32);
        tracep->fullQData(oldp+91,(0x80000000ULL),64);
        tracep->fullBit(oldp+93,(1U));
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__my_idu__DOT__immS),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__my_idu__DOT__immJ),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__my_idu__DOT__immB),64);
        tracep->fullIData(oldp+100,(5U),32);
    }
}
