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
        tracep->declBit(c+662,"clk", false,-1);
        tracep->declBit(c+663,"rst", false,-1);
        tracep->declBus(c+664,"instr_i", false,-1, 31,0);
        tracep->declQuad(c+665,"pc", false,-1, 63,0);
        tracep->declBit(c+662,"top clk", false,-1);
        tracep->declBit(c+663,"top rst", false,-1);
        tracep->declBus(c+664,"top instr_i", false,-1, 31,0);
        tracep->declQuad(c+665,"top pc", false,-1, 63,0);
        tracep->declBus(c+667,"top op", false,-1, 6,0);
        tracep->declBus(c+668,"top func7", false,-1, 6,0);
        tracep->declBus(c+669,"top rd", false,-1, 4,0);
        tracep->declBus(c+670,"top rs1", false,-1, 4,0);
        tracep->declBus(c+671,"top rs2", false,-1, 4,0);
        tracep->declBus(c+672,"top func3", false,-1, 2,0);
        tracep->declQuad(c+69,"top imm", false,-1, 63,0);
        tracep->declBit(c+71,"top wen", false,-1);
        tracep->declBit(c+662,"top my_ifu clk", false,-1);
        tracep->declBit(c+663,"top my_ifu rst", false,-1);
        tracep->declQuad(c+665,"top my_ifu pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top my_ifu now_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top my_ifu dnpc", false,-1, 63,0);
        tracep->declBus(c+675,"top my_ifu PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+676,"top my_ifu PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+662,"top my_ifu PC clk", false,-1);
        tracep->declBit(c+663,"top my_ifu PC rst", false,-1);
        tracep->declQuad(c+3,"top my_ifu PC din", false,-1, 63,0);
        tracep->declQuad(c+1,"top my_ifu PC dout", false,-1, 63,0);
        tracep->declBit(c+678,"top my_ifu PC wen", false,-1);
        tracep->declBus(c+664,"top my_idu instr_i", false,-1, 31,0);
        tracep->declBus(c+667,"top my_idu op", false,-1, 6,0);
        tracep->declBus(c+669,"top my_idu rd", false,-1, 4,0);
        tracep->declBus(c+670,"top my_idu rs1", false,-1, 4,0);
        tracep->declBus(c+671,"top my_idu rs2", false,-1, 4,0);
        tracep->declBus(c+672,"top my_idu func3", false,-1, 2,0);
        tracep->declBus(c+668,"top my_idu func7", false,-1, 6,0);
        tracep->declQuad(c+69,"top my_idu imm", false,-1, 63,0);
        tracep->declBit(c+71,"top my_idu wen", false,-1);
        tracep->declBus(c+72,"top my_idu ExtOp", false,-1, 2,0);
        tracep->declQuad(c+679,"top my_idu my_imm", false,-1, 63,0);
        tracep->declBus(c+664,"top my_idu insttoimm instr", false,-1, 31,0);
        tracep->declBus(c+72,"top my_idu insttoimm ExtOp", false,-1, 2,0);
        tracep->declQuad(c+69,"top my_idu insttoimm imm", false,-1, 63,0);
        tracep->declQuad(c+69,"top my_idu control imm", false,-1, 63,0);
        tracep->declBus(c+667,"top my_idu control op", false,-1, 6,0);
        tracep->declBus(c+672,"top my_idu control func3", false,-1, 2,0);
        tracep->declBus(c+72,"top my_idu control ExtOp", false,-1, 2,0);
        tracep->declBit(c+71,"top my_idu control wen", false,-1);
        tracep->declBit(c+662,"top my_exu clk", false,-1);
        tracep->declBus(c+669,"top my_exu rd", false,-1, 4,0);
        tracep->declBus(c+670,"top my_exu rs1", false,-1, 4,0);
        tracep->declBus(c+671,"top my_exu rs2", false,-1, 4,0);
        tracep->declBit(c+71,"top my_exu wen", false,-1);
        tracep->declQuad(c+69,"top my_exu imm", false,-1, 63,0);
        tracep->declQuad(c+73,"top my_exu busa", false,-1, 63,0);
        tracep->declQuad(c+673,"top my_exu busb", false,-1, 63,0);
        tracep->declQuad(c+75,"top my_exu res", false,-1, 63,0);
        tracep->declBus(c+681,"top my_exu regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+675,"top my_exu regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+662,"top my_exu regfile clk", false,-1);
        tracep->declBus(c+670,"top my_exu regfile raaddr", false,-1, 4,0);
        tracep->declBus(c+671,"top my_exu regfile rbaddr", false,-1, 4,0);
        tracep->declQuad(c+73,"top my_exu regfile radata", false,-1, 63,0);
        tracep->declQuad(c+673,"top my_exu regfile rbdata", false,-1, 63,0);
        tracep->declQuad(c+75,"top my_exu regfile wdata", false,-1, 63,0);
        tracep->declBus(c+669,"top my_exu regfile waddr", false,-1, 4,0);
        tracep->declBit(c+71,"top my_exu regfile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+5+i*2,"top my_exu regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+75,"top my_exu adder result", false,-1, 63,0);
        tracep->declBit(c+77,"top my_exu adder cout", false,-1);
        tracep->declQuad(c+73,"top my_exu adder x", false,-1, 63,0);
        tracep->declQuad(c+69,"top my_exu adder y", false,-1, 63,0);
        tracep->declBit(c+682,"top my_exu adder sub", false,-1);
        tracep->declBus(c+78,"top my_exu adder res_l", false,-1, 31,0);
        tracep->declBus(c+79,"top my_exu adder res_h", false,-1, 31,0);
        tracep->declBit(c+80,"top my_exu adder c_l", false,-1);
        tracep->declBus(c+78,"top my_exu adder adder_low result", false,-1, 31,0);
        tracep->declBit(c+80,"top my_exu adder adder_low cout", false,-1);
        tracep->declBus(c+81,"top my_exu adder adder_low x", false,-1, 31,0);
        tracep->declBus(c+82,"top my_exu adder adder_low y", false,-1, 31,0);
        tracep->declBit(c+682,"top my_exu adder adder_low sub", false,-1);
        tracep->declBus(c+83,"top my_exu adder adder_low Gg", false,-1, 3,0);
        tracep->declBus(c+84,"top my_exu adder adder_low Pg", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+85+i*1,"top my_exu adder adder_low p", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+89+i*1,"top my_exu adder adder_low g", true,(i+0), 7,0);}}
        tracep->declBus(c+93,"top my_exu adder adder_low c", false,-1, 4,0);
        tracep->declBus(c+94,"top my_exu adder adder_low cout_temp", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+95+i*1,"top my_exu adder adder_low ff", true,(i+0), 7,0);}}
        tracep->declBus(c+84,"top my_exu adder adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+83,"top my_exu adder adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+682,"top my_exu adder adder_low gen c0", false,-1);
        tracep->declBus(c+99,"top my_exu adder adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+100,"top my_exu adder adder_low gen c1", false,-1);
        tracep->declBit(c+101,"top my_exu adder adder_low gen c2", false,-1);
        tracep->declBit(c+102,"top my_exu adder adder_low gen c3", false,-1);
        tracep->declBit(c+103,"top my_exu adder adder_low gen c4", false,-1);
        tracep->declBus(c+104,"top my_exu adder adder_low genblk2[0] adder8 f", false,-1, 7,0);
        tracep->declBit(c+105,"top my_exu adder adder_low genblk2[0] adder8 cout", false,-1);
        tracep->declBus(c+106,"top my_exu adder adder_low genblk2[0] adder8 x", false,-1, 7,0);
        tracep->declBus(c+107,"top my_exu adder adder_low genblk2[0] adder8 y", false,-1, 7,0);
        tracep->declBit(c+682,"top my_exu adder adder_low genblk2[0] adder8 cin", false,-1);
        tracep->declBit(c+108,"top my_exu adder adder_low genblk2[0] adder8 cin2", false,-1);
        tracep->declBus(c+109,"top my_exu adder adder_low genblk2[0] adder8 p", false,-1, 3,0);
        tracep->declBus(c+110,"top my_exu adder adder_low genblk2[0] adder8 g", false,-1, 3,0);
        tracep->declBus(c+111,"top my_exu adder adder_low genblk2[0] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+112,"top my_exu adder adder_low genblk2[0] adder8 adder_low cout", false,-1);
        tracep->declBus(c+113,"top my_exu adder adder_low genblk2[0] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+114,"top my_exu adder adder_low genblk2[0] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+682,"top my_exu adder adder_low genblk2[0] adder8 adder_low cin", false,-1);
        tracep->declBus(c+115,"top my_exu adder adder_low genblk2[0] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+116,"top my_exu adder adder_low genblk2[0] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+117,"top my_exu adder adder_low genblk2[0] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+115,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+116,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+682,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+117,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+118,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+119,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+120,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+121,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+122,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+123,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+124,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+125,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+682,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+126,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+127,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+128,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+129,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+130,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+131,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+132,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+133,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+134,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+135,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+136,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+137,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+138,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+139,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+140,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+141,"top my_exu adder adder_low genblk2[0] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+105,"top my_exu adder adder_low genblk2[0] adder8 adder_high cout", false,-1);
        tracep->declBus(c+142,"top my_exu adder adder_low genblk2[0] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+143,"top my_exu adder adder_low genblk2[0] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+108,"top my_exu adder adder_low genblk2[0] adder8 adder_high cin", false,-1);
        tracep->declBus(c+144,"top my_exu adder adder_low genblk2[0] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+145,"top my_exu adder adder_low genblk2[0] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+146,"top my_exu adder adder_low genblk2[0] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+144,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+145,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+108,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+146,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+147,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+148,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+149,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+150,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+151,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+152,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+153,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+154,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+108,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+155,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+156,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+157,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+158,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+159,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+160,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+161,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+162,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+163,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+164,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+165,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+166,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+167,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+168,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+169,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+170,"top my_exu adder adder_low genblk2[1] adder8 f", false,-1, 7,0);
        tracep->declBit(c+171,"top my_exu adder adder_low genblk2[1] adder8 cout", false,-1);
        tracep->declBus(c+172,"top my_exu adder adder_low genblk2[1] adder8 x", false,-1, 7,0);
        tracep->declBus(c+173,"top my_exu adder adder_low genblk2[1] adder8 y", false,-1, 7,0);
        tracep->declBit(c+174,"top my_exu adder adder_low genblk2[1] adder8 cin", false,-1);
        tracep->declBit(c+175,"top my_exu adder adder_low genblk2[1] adder8 cin2", false,-1);
        tracep->declBus(c+176,"top my_exu adder adder_low genblk2[1] adder8 p", false,-1, 3,0);
        tracep->declBus(c+177,"top my_exu adder adder_low genblk2[1] adder8 g", false,-1, 3,0);
        tracep->declBus(c+178,"top my_exu adder adder_low genblk2[1] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+179,"top my_exu adder adder_low genblk2[1] adder8 adder_low cout", false,-1);
        tracep->declBus(c+180,"top my_exu adder adder_low genblk2[1] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+181,"top my_exu adder adder_low genblk2[1] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+174,"top my_exu adder adder_low genblk2[1] adder8 adder_low cin", false,-1);
        tracep->declBus(c+182,"top my_exu adder adder_low genblk2[1] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+183,"top my_exu adder adder_low genblk2[1] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+184,"top my_exu adder adder_low genblk2[1] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+182,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+183,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+174,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+184,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+185,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+186,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+187,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+188,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+189,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+190,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+191,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+192,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+174,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+193,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+194,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+195,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+196,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+197,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+198,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+199,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+200,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+201,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+202,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+203,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+204,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+205,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+206,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+207,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+208,"top my_exu adder adder_low genblk2[1] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+171,"top my_exu adder adder_low genblk2[1] adder8 adder_high cout", false,-1);
        tracep->declBus(c+209,"top my_exu adder adder_low genblk2[1] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+210,"top my_exu adder adder_low genblk2[1] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+175,"top my_exu adder adder_low genblk2[1] adder8 adder_high cin", false,-1);
        tracep->declBus(c+211,"top my_exu adder adder_low genblk2[1] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+212,"top my_exu adder adder_low genblk2[1] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+213,"top my_exu adder adder_low genblk2[1] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+211,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+212,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+175,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+213,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+214,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+215,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+216,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+217,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+218,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+219,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+220,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+221,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+175,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+222,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+223,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+224,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+225,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+226,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+227,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+228,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+229,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+230,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+231,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+232,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+233,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+234,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+235,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+236,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+237,"top my_exu adder adder_low genblk2[2] adder8 f", false,-1, 7,0);
        tracep->declBit(c+238,"top my_exu adder adder_low genblk2[2] adder8 cout", false,-1);
        tracep->declBus(c+239,"top my_exu adder adder_low genblk2[2] adder8 x", false,-1, 7,0);
        tracep->declBus(c+240,"top my_exu adder adder_low genblk2[2] adder8 y", false,-1, 7,0);
        tracep->declBit(c+241,"top my_exu adder adder_low genblk2[2] adder8 cin", false,-1);
        tracep->declBit(c+242,"top my_exu adder adder_low genblk2[2] adder8 cin2", false,-1);
        tracep->declBus(c+243,"top my_exu adder adder_low genblk2[2] adder8 p", false,-1, 3,0);
        tracep->declBus(c+244,"top my_exu adder adder_low genblk2[2] adder8 g", false,-1, 3,0);
        tracep->declBus(c+245,"top my_exu adder adder_low genblk2[2] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+246,"top my_exu adder adder_low genblk2[2] adder8 adder_low cout", false,-1);
        tracep->declBus(c+247,"top my_exu adder adder_low genblk2[2] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+248,"top my_exu adder adder_low genblk2[2] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+241,"top my_exu adder adder_low genblk2[2] adder8 adder_low cin", false,-1);
        tracep->declBus(c+249,"top my_exu adder adder_low genblk2[2] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+250,"top my_exu adder adder_low genblk2[2] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+251,"top my_exu adder adder_low genblk2[2] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+249,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+250,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+241,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+251,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+252,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+253,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+254,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+255,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+256,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+257,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+258,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+259,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+241,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+260,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+261,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+262,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+263,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+264,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+265,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+266,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+267,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+268,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+269,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+270,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+271,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+272,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+273,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+274,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+275,"top my_exu adder adder_low genblk2[2] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+238,"top my_exu adder adder_low genblk2[2] adder8 adder_high cout", false,-1);
        tracep->declBus(c+276,"top my_exu adder adder_low genblk2[2] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+277,"top my_exu adder adder_low genblk2[2] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+242,"top my_exu adder adder_low genblk2[2] adder8 adder_high cin", false,-1);
        tracep->declBus(c+278,"top my_exu adder adder_low genblk2[2] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+279,"top my_exu adder adder_low genblk2[2] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+280,"top my_exu adder adder_low genblk2[2] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+278,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+279,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+242,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+280,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+281,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+282,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+283,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+284,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+285,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+286,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+287,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+288,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+242,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+289,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+290,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+291,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+292,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+293,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+294,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+295,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+296,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+297,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+298,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+299,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+300,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+301,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+302,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+303,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+304,"top my_exu adder adder_low genblk2[3] adder8 f", false,-1, 7,0);
        tracep->declBit(c+305,"top my_exu adder adder_low genblk2[3] adder8 cout", false,-1);
        tracep->declBus(c+306,"top my_exu adder adder_low genblk2[3] adder8 x", false,-1, 7,0);
        tracep->declBus(c+307,"top my_exu adder adder_low genblk2[3] adder8 y", false,-1, 7,0);
        tracep->declBit(c+308,"top my_exu adder adder_low genblk2[3] adder8 cin", false,-1);
        tracep->declBit(c+309,"top my_exu adder adder_low genblk2[3] adder8 cin2", false,-1);
        tracep->declBus(c+310,"top my_exu adder adder_low genblk2[3] adder8 p", false,-1, 3,0);
        tracep->declBus(c+311,"top my_exu adder adder_low genblk2[3] adder8 g", false,-1, 3,0);
        tracep->declBus(c+312,"top my_exu adder adder_low genblk2[3] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+313,"top my_exu adder adder_low genblk2[3] adder8 adder_low cout", false,-1);
        tracep->declBus(c+314,"top my_exu adder adder_low genblk2[3] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+315,"top my_exu adder adder_low genblk2[3] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+308,"top my_exu adder adder_low genblk2[3] adder8 adder_low cin", false,-1);
        tracep->declBus(c+316,"top my_exu adder adder_low genblk2[3] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+317,"top my_exu adder adder_low genblk2[3] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+318,"top my_exu adder adder_low genblk2[3] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+316,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+317,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+308,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+318,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+319,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+320,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+321,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+322,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+323,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+324,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+325,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+326,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+308,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+327,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+328,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+329,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+330,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+331,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+332,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+333,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+334,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+335,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+336,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+337,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+338,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+339,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+340,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+341,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+342,"top my_exu adder adder_low genblk2[3] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+305,"top my_exu adder adder_low genblk2[3] adder8 adder_high cout", false,-1);
        tracep->declBus(c+343,"top my_exu adder adder_low genblk2[3] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+344,"top my_exu adder adder_low genblk2[3] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+309,"top my_exu adder adder_low genblk2[3] adder8 adder_high cin", false,-1);
        tracep->declBus(c+345,"top my_exu adder adder_low genblk2[3] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+346,"top my_exu adder adder_low genblk2[3] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+347,"top my_exu adder adder_low genblk2[3] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+345,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+346,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+309,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+347,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+348,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+349,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+350,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+351,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+352,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+353,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+354,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+355,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+309,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+356,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+357,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+358,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+359,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+360,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+361,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+362,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+363,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+364,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+365,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+366,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+367,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+368,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+369,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+370,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+79,"top my_exu adder adder_high result", false,-1, 31,0);
        tracep->declBit(c+77,"top my_exu adder adder_high cout", false,-1);
        tracep->declBus(c+371,"top my_exu adder adder_high x", false,-1, 31,0);
        tracep->declBus(c+372,"top my_exu adder adder_high y", false,-1, 31,0);
        tracep->declBit(c+80,"top my_exu adder adder_high sub", false,-1);
        tracep->declBus(c+373,"top my_exu adder adder_high Gg", false,-1, 3,0);
        tracep->declBus(c+374,"top my_exu adder adder_high Pg", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+375+i*1,"top my_exu adder adder_high p", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+379+i*1,"top my_exu adder adder_high g", true,(i+0), 7,0);}}
        tracep->declBus(c+383,"top my_exu adder adder_high c", false,-1, 4,0);
        tracep->declBus(c+384,"top my_exu adder adder_high cout_temp", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+385+i*1,"top my_exu adder adder_high ff", true,(i+0), 7,0);}}
        tracep->declBus(c+374,"top my_exu adder adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+373,"top my_exu adder adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+80,"top my_exu adder adder_high gen c0", false,-1);
        tracep->declBus(c+389,"top my_exu adder adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+390,"top my_exu adder adder_high gen c1", false,-1);
        tracep->declBit(c+391,"top my_exu adder adder_high gen c2", false,-1);
        tracep->declBit(c+392,"top my_exu adder adder_high gen c3", false,-1);
        tracep->declBit(c+393,"top my_exu adder adder_high gen c4", false,-1);
        tracep->declBus(c+394,"top my_exu adder adder_high genblk2[0] adder8 f", false,-1, 7,0);
        tracep->declBit(c+395,"top my_exu adder adder_high genblk2[0] adder8 cout", false,-1);
        tracep->declBus(c+396,"top my_exu adder adder_high genblk2[0] adder8 x", false,-1, 7,0);
        tracep->declBus(c+397,"top my_exu adder adder_high genblk2[0] adder8 y", false,-1, 7,0);
        tracep->declBit(c+398,"top my_exu adder adder_high genblk2[0] adder8 cin", false,-1);
        tracep->declBit(c+399,"top my_exu adder adder_high genblk2[0] adder8 cin2", false,-1);
        tracep->declBus(c+400,"top my_exu adder adder_high genblk2[0] adder8 p", false,-1, 3,0);
        tracep->declBus(c+401,"top my_exu adder adder_high genblk2[0] adder8 g", false,-1, 3,0);
        tracep->declBus(c+402,"top my_exu adder adder_high genblk2[0] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+403,"top my_exu adder adder_high genblk2[0] adder8 adder_low cout", false,-1);
        tracep->declBus(c+404,"top my_exu adder adder_high genblk2[0] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+405,"top my_exu adder adder_high genblk2[0] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+398,"top my_exu adder adder_high genblk2[0] adder8 adder_low cin", false,-1);
        tracep->declBus(c+406,"top my_exu adder adder_high genblk2[0] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+407,"top my_exu adder adder_high genblk2[0] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+408,"top my_exu adder adder_high genblk2[0] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+406,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+407,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+398,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+408,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+409,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+410,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+411,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+412,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+413,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+414,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+415,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+416,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+398,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+417,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+418,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+419,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+420,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+421,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+422,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+423,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+424,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+425,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+426,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+427,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+428,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+429,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+430,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+431,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+432,"top my_exu adder adder_high genblk2[0] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+395,"top my_exu adder adder_high genblk2[0] adder8 adder_high cout", false,-1);
        tracep->declBus(c+433,"top my_exu adder adder_high genblk2[0] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+434,"top my_exu adder adder_high genblk2[0] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+399,"top my_exu adder adder_high genblk2[0] adder8 adder_high cin", false,-1);
        tracep->declBus(c+435,"top my_exu adder adder_high genblk2[0] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+436,"top my_exu adder adder_high genblk2[0] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+437,"top my_exu adder adder_high genblk2[0] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+435,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+436,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+399,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+437,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+438,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+439,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+440,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+441,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+442,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+443,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+444,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+445,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+399,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+446,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+447,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+448,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+449,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+450,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+451,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+452,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+453,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+454,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+455,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+456,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+457,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+458,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+459,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+460,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+461,"top my_exu adder adder_high genblk2[1] adder8 f", false,-1, 7,0);
        tracep->declBit(c+462,"top my_exu adder adder_high genblk2[1] adder8 cout", false,-1);
        tracep->declBus(c+463,"top my_exu adder adder_high genblk2[1] adder8 x", false,-1, 7,0);
        tracep->declBus(c+464,"top my_exu adder adder_high genblk2[1] adder8 y", false,-1, 7,0);
        tracep->declBit(c+465,"top my_exu adder adder_high genblk2[1] adder8 cin", false,-1);
        tracep->declBit(c+466,"top my_exu adder adder_high genblk2[1] adder8 cin2", false,-1);
        tracep->declBus(c+467,"top my_exu adder adder_high genblk2[1] adder8 p", false,-1, 3,0);
        tracep->declBus(c+468,"top my_exu adder adder_high genblk2[1] adder8 g", false,-1, 3,0);
        tracep->declBus(c+469,"top my_exu adder adder_high genblk2[1] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+470,"top my_exu adder adder_high genblk2[1] adder8 adder_low cout", false,-1);
        tracep->declBus(c+471,"top my_exu adder adder_high genblk2[1] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+472,"top my_exu adder adder_high genblk2[1] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+465,"top my_exu adder adder_high genblk2[1] adder8 adder_low cin", false,-1);
        tracep->declBus(c+473,"top my_exu adder adder_high genblk2[1] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+474,"top my_exu adder adder_high genblk2[1] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+475,"top my_exu adder adder_high genblk2[1] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+473,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+474,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+465,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+475,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+476,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+477,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+478,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+479,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+480,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+481,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+482,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+483,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+465,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+484,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+485,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+486,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+487,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+488,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+489,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+490,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+491,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+492,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+493,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+494,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+495,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+496,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+497,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+498,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+499,"top my_exu adder adder_high genblk2[1] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+462,"top my_exu adder adder_high genblk2[1] adder8 adder_high cout", false,-1);
        tracep->declBus(c+500,"top my_exu adder adder_high genblk2[1] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+501,"top my_exu adder adder_high genblk2[1] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+466,"top my_exu adder adder_high genblk2[1] adder8 adder_high cin", false,-1);
        tracep->declBus(c+502,"top my_exu adder adder_high genblk2[1] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+503,"top my_exu adder adder_high genblk2[1] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+504,"top my_exu adder adder_high genblk2[1] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+502,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+503,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+466,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+504,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+505,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+506,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+507,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+508,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+509,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+510,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+511,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+512,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+466,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+513,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+514,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+515,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+516,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+517,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+518,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+519,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+520,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+521,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+522,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+523,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+524,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+525,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+526,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+527,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+528,"top my_exu adder adder_high genblk2[2] adder8 f", false,-1, 7,0);
        tracep->declBit(c+529,"top my_exu adder adder_high genblk2[2] adder8 cout", false,-1);
        tracep->declBus(c+530,"top my_exu adder adder_high genblk2[2] adder8 x", false,-1, 7,0);
        tracep->declBus(c+531,"top my_exu adder adder_high genblk2[2] adder8 y", false,-1, 7,0);
        tracep->declBit(c+532,"top my_exu adder adder_high genblk2[2] adder8 cin", false,-1);
        tracep->declBit(c+533,"top my_exu adder adder_high genblk2[2] adder8 cin2", false,-1);
        tracep->declBus(c+534,"top my_exu adder adder_high genblk2[2] adder8 p", false,-1, 3,0);
        tracep->declBus(c+535,"top my_exu adder adder_high genblk2[2] adder8 g", false,-1, 3,0);
        tracep->declBus(c+536,"top my_exu adder adder_high genblk2[2] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+537,"top my_exu adder adder_high genblk2[2] adder8 adder_low cout", false,-1);
        tracep->declBus(c+538,"top my_exu adder adder_high genblk2[2] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+539,"top my_exu adder adder_high genblk2[2] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+532,"top my_exu adder adder_high genblk2[2] adder8 adder_low cin", false,-1);
        tracep->declBus(c+540,"top my_exu adder adder_high genblk2[2] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+541,"top my_exu adder adder_high genblk2[2] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+542,"top my_exu adder adder_high genblk2[2] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+540,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+541,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+532,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+542,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+543,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+544,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+545,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+546,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+547,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+548,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+549,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+550,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+532,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+551,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+552,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+553,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+554,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+555,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+556,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+557,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+558,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+559,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+560,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+561,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+562,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+563,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+564,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+565,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+566,"top my_exu adder adder_high genblk2[2] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+529,"top my_exu adder adder_high genblk2[2] adder8 adder_high cout", false,-1);
        tracep->declBus(c+567,"top my_exu adder adder_high genblk2[2] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+568,"top my_exu adder adder_high genblk2[2] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+533,"top my_exu adder adder_high genblk2[2] adder8 adder_high cin", false,-1);
        tracep->declBus(c+569,"top my_exu adder adder_high genblk2[2] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+570,"top my_exu adder adder_high genblk2[2] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+571,"top my_exu adder adder_high genblk2[2] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+569,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+570,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+533,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+571,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+572,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+573,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+574,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+575,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+576,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+577,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+578,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+579,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+533,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+580,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+581,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+582,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+583,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+584,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+585,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+586,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+587,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+588,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+589,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+590,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+591,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+592,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+593,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+594,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+595,"top my_exu adder adder_high genblk2[3] adder8 f", false,-1, 7,0);
        tracep->declBit(c+596,"top my_exu adder adder_high genblk2[3] adder8 cout", false,-1);
        tracep->declBus(c+597,"top my_exu adder adder_high genblk2[3] adder8 x", false,-1, 7,0);
        tracep->declBus(c+598,"top my_exu adder adder_high genblk2[3] adder8 y", false,-1, 7,0);
        tracep->declBit(c+599,"top my_exu adder adder_high genblk2[3] adder8 cin", false,-1);
        tracep->declBit(c+600,"top my_exu adder adder_high genblk2[3] adder8 cin2", false,-1);
        tracep->declBus(c+601,"top my_exu adder adder_high genblk2[3] adder8 p", false,-1, 3,0);
        tracep->declBus(c+602,"top my_exu adder adder_high genblk2[3] adder8 g", false,-1, 3,0);
        tracep->declBus(c+603,"top my_exu adder adder_high genblk2[3] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+604,"top my_exu adder adder_high genblk2[3] adder8 adder_low cout", false,-1);
        tracep->declBus(c+605,"top my_exu adder adder_high genblk2[3] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+606,"top my_exu adder adder_high genblk2[3] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+599,"top my_exu adder adder_high genblk2[3] adder8 adder_low cin", false,-1);
        tracep->declBus(c+607,"top my_exu adder adder_high genblk2[3] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+608,"top my_exu adder adder_high genblk2[3] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+609,"top my_exu adder adder_high genblk2[3] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+607,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen p", false,-1, 3,0);
        tracep->declBus(c+608,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen g", false,-1, 3,0);
        tracep->declBit(c+599,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c0", false,-1);
        tracep->declBus(c+609,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c", false,-1, 3,0);
        tracep->declBit(c+610,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c1", false,-1);
        tracep->declBit(c+611,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c2", false,-1);
        tracep->declBit(c+612,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c3", false,-1);
        tracep->declBit(c+613,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c4", false,-1);
        tracep->declBit(c+614,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+615,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+616,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+617,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+599,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+618,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+619,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+620,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+621,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+622,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+623,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+624,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+625,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+626,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+627,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+628,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+629,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+630,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+631,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+632,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+633,"top my_exu adder adder_high genblk2[3] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+596,"top my_exu adder adder_high genblk2[3] adder8 adder_high cout", false,-1);
        tracep->declBus(c+634,"top my_exu adder adder_high genblk2[3] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+635,"top my_exu adder adder_high genblk2[3] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+600,"top my_exu adder adder_high genblk2[3] adder8 adder_high cin", false,-1);
        tracep->declBus(c+636,"top my_exu adder adder_high genblk2[3] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+637,"top my_exu adder adder_high genblk2[3] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+638,"top my_exu adder adder_high genblk2[3] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+636,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen p", false,-1, 3,0);
        tracep->declBus(c+637,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen g", false,-1, 3,0);
        tracep->declBit(c+600,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c0", false,-1);
        tracep->declBus(c+638,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c", false,-1, 3,0);
        tracep->declBit(c+639,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c1", false,-1);
        tracep->declBit(c+640,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c2", false,-1);
        tracep->declBit(c+641,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c3", false,-1);
        tracep->declBit(c+642,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c4", false,-1);
        tracep->declBit(c+643,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+644,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+645,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+646,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+600,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+647,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+648,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+649,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+650,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+651,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+652,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+653,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+654,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+655,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+656,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+657,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+658,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+659,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+660,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+661,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder cin", false,-1);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__my_ifu__DOT__now_pc),64);
        tracep->fullQData(oldp+3,((4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc)),64);
        tracep->fullQData(oldp+5,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+7,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+9,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+11,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+27,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+29,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+31,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+33,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[31]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__imm),64);
        tracep->fullBit(oldp+71,(vlSelf->top__DOT__wen));
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__my_idu__DOT__ExtOp),3);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__my_exu__DOT__busa),64);
        tracep->fullQData(oldp+75,((((QData)((IData)(
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
        tracep->fullBit(oldp+77,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                        >> 3U))));
        tracep->fullIData(oldp+78,(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                     [3U] << 0x18U) 
                                    | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                        [2U] << 0x10U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                           [1U] << 8U) 
                                          | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [0U])))),32);
        tracep->fullIData(oldp+79,(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                     [3U] << 0x18U) 
                                    | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                        [2U] << 0x10U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                           [1U] << 8U) 
                                          | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [0U])))),32);
        tracep->fullBit(oldp+80,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                        >> 3U))));
        tracep->fullIData(oldp+81,((IData)(vlSelf->top__DOT__my_exu__DOT__busa)),32);
        tracep->fullIData(oldp+82,((IData)(vlSelf->top__DOT__imm)),32);
        tracep->fullCData(oldp+83,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
        tracep->fullCData(oldp+84,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
        tracep->fullCData(oldp+85,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
        tracep->fullCData(oldp+86,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
        tracep->fullCData(oldp+87,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
        tracep->fullCData(oldp+88,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
        tracep->fullCData(oldp+89,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
        tracep->fullCData(oldp+90,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
        tracep->fullCData(oldp+91,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
        tracep->fullCData(oldp+92,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
        tracep->fullCData(oldp+93,(((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                    << 1U)),5);
        tracep->fullCData(oldp+94,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
        tracep->fullCData(oldp+95,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
        tracep->fullCData(oldp+96,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
        tracep->fullCData(oldp+97,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
        tracep->fullCData(oldp+98,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
        tracep->fullCData(oldp+99,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c),4);
        tracep->fullBit(oldp+100,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg))));
        tracep->fullBit(oldp+101,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c2));
        tracep->fullBit(oldp+102,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3));
        tracep->fullBit(oldp+103,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Pg) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__gen__DOT__c3))))));
        tracep->fullCData(oldp+104,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+105,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+106,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),8);
        tracep->fullCData(oldp+107,((0xffU & (IData)(vlSelf->top__DOT__imm))),8);
        tracep->fullBit(oldp+108,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+109,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+110,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+111,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+112,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+113,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),4);
        tracep->fullCData(oldp+114,((0xfU & (IData)(vlSelf->top__DOT__imm))),4);
        tracep->fullCData(oldp+115,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+116,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+117,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+118,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g))));
        tracep->fullBit(oldp+119,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+120,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+121,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+122,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                         ^ (IData)(vlSelf->top__DOT__imm)))));
        tracep->fullBit(oldp+123,((1U & ((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                         & (IData)(vlSelf->top__DOT__imm)))));
        tracep->fullBit(oldp+124,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))));
        tracep->fullBit(oldp+125,((1U & (IData)(vlSelf->top__DOT__imm))));
        tracep->fullBit(oldp+126,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 1U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 1U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+127,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 1U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 1U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 1U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+128,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 1U)))));
        tracep->fullBit(oldp+129,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 1U)))));
        tracep->fullBit(oldp+130,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+131,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 2U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 2U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+132,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 2U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 2U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 2U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+133,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 2U)))));
        tracep->fullBit(oldp+134,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 2U)))));
        tracep->fullBit(oldp+135,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+136,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 3U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 3U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+137,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 3U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 3U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 3U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+138,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 3U)))));
        tracep->fullBit(oldp+139,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 3U)))));
        tracep->fullBit(oldp+140,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+141,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+142,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+143,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+144,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+145,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+146,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+147,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+148,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+149,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+150,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+151,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 4U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 4U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+152,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 4U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 4U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 4U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+153,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 4U)))));
        tracep->fullBit(oldp+154,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 4U)))));
        tracep->fullBit(oldp+155,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 5U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 5U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+156,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 5U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 5U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 5U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+157,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 5U)))));
        tracep->fullBit(oldp+158,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 5U)))));
        tracep->fullBit(oldp+159,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+160,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 6U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 6U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+161,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 6U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 6U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 6U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+162,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 6U)))));
        tracep->fullBit(oldp+163,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 6U)))));
        tracep->fullBit(oldp+164,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+165,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 7U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 7U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+166,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 7U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 7U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 7U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+167,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 7U)))));
        tracep->fullBit(oldp+168,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 7U)))));
        tracep->fullBit(oldp+169,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+170,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+171,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+172,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 8U)))),8);
        tracep->fullCData(oldp+173,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 8U)))),8);
        tracep->fullBit(oldp+174,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c))));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+176,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+177,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+178,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+179,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+180,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+181,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+182,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+183,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+184,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+185,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+186,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+187,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+188,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+189,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 8U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c)))));
        tracep->fullBit(oldp+190,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 8U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 8U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 8U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c))))));
        tracep->fullBit(oldp+191,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 8U)))));
        tracep->fullBit(oldp+192,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 8U)))));
        tracep->fullBit(oldp+193,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 9U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+194,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 9U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 9U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 9U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+195,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 9U)))));
        tracep->fullBit(oldp+196,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 9U)))));
        tracep->fullBit(oldp+197,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+198,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xaU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+199,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xaU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0xaU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xaU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+200,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+201,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+202,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+203,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xbU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+204,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xbU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0xbU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xbU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+205,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xbU)))));
        tracep->fullBit(oldp+206,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0xbU)))));
        tracep->fullBit(oldp+207,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+208,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+209,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+210,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+211,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+212,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+213,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+214,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+215,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+217,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+218,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+219,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xcU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0xcU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xcU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+220,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+221,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+222,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+223,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xdU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0xdU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xdU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+224,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xdU)))));
        tracep->fullBit(oldp+225,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0xdU)))));
        tracep->fullBit(oldp+226,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+227,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xeU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+228,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xeU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0xeU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xeU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+229,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xeU)))));
        tracep->fullBit(oldp+230,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0xeU)))));
        tracep->fullBit(oldp+231,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+232,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xfU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+233,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xfU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0xfU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0xfU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+234,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+235,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+236,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+237,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+238,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+239,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x10U)))),8);
        tracep->fullCData(oldp+240,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x10U)))),8);
        tracep->fullBit(oldp+241,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+242,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+243,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+244,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+245,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+246,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+247,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+248,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+249,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+250,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+251,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+252,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+253,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+254,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+255,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+256,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x10U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+257,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x10U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x10U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x10U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+258,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+259,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+260,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+261,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x11U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x11U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x11U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+262,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x11U)))));
        tracep->fullBit(oldp+263,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x11U)))));
        tracep->fullBit(oldp+264,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+265,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x12U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+266,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x12U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x12U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x12U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+267,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+268,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+269,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+270,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x13U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+271,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x13U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x13U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x13U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+272,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x13U)))));
        tracep->fullBit(oldp+273,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x13U)))));
        tracep->fullBit(oldp+274,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+275,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+276,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+277,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+278,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+279,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+280,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+281,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+282,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+283,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+284,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+285,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+286,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x14U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x14U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x14U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+287,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+288,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+289,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+290,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x15U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x15U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x15U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+291,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x15U)))));
        tracep->fullBit(oldp+292,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x15U)))));
        tracep->fullBit(oldp+293,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+294,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x16U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+295,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x16U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x16U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x16U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+296,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x16U)))));
        tracep->fullBit(oldp+297,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x16U)))));
        tracep->fullBit(oldp+298,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+299,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x17U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+300,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x17U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x17U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x17U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+301,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x17U)))));
        tracep->fullBit(oldp+302,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x17U)))));
        tracep->fullBit(oldp+303,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+304,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+305,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+306,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x18U)))),8);
        tracep->fullCData(oldp+307,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x18U)))),8);
        tracep->fullBit(oldp+308,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullBit(oldp+309,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+310,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+311,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+312,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+313,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+314,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+315,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+316,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+317,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+318,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+319,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+320,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+321,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+322,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+323,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x18U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+324,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x18U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x18U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x18U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+325,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x18U)))));
        tracep->fullBit(oldp+326,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x18U)))));
        tracep->fullBit(oldp+327,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+328,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x19U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x19U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x19U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+329,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x19U)))));
        tracep->fullBit(oldp+330,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x19U)))));
        tracep->fullBit(oldp+331,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+332,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1aU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+333,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1aU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x1aU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1aU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+334,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+335,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+336,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+337,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1bU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+338,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1bU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x1bU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1bU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+339,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+340,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+342,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+343,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+344,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+345,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+346,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+347,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+348,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+349,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+350,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+351,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+352,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+353,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1cU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x1cU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1cU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+354,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+355,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+356,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+357,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1dU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x1dU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1dU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+358,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1dU)))));
        tracep->fullBit(oldp+359,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x1dU)))));
        tracep->fullBit(oldp+360,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+361,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1eU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+362,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1eU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x1eU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1eU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+363,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1eU)))));
        tracep->fullBit(oldp+364,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x1eU)))));
        tracep->fullBit(oldp+365,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+366,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1fU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+367,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1fU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x1fU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x1fU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+368,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1fU)))));
        tracep->fullBit(oldp+369,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x1fU)))));
        tracep->fullBit(oldp+370,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullIData(oldp+371,((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                             >> 0x20U))),32);
        tracep->fullIData(oldp+372,((IData)((vlSelf->top__DOT__imm 
                                             >> 0x20U))),32);
        tracep->fullCData(oldp+373,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
        tracep->fullCData(oldp+374,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
        tracep->fullCData(oldp+375,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
        tracep->fullCData(oldp+376,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
        tracep->fullCData(oldp+377,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
        tracep->fullCData(oldp+378,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
        tracep->fullCData(oldp+379,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
        tracep->fullCData(oldp+380,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
        tracep->fullCData(oldp+381,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
        tracep->fullCData(oldp+382,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
        tracep->fullCData(oldp+383,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c),5);
        tracep->fullCData(oldp+384,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
        tracep->fullCData(oldp+385,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
        tracep->fullCData(oldp+386,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
        tracep->fullCData(oldp+387,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
        tracep->fullCData(oldp+388,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
        tracep->fullCData(oldp+389,(((8U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                            | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                               & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                                  << 3U)))) 
                                     | (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3) 
                                         << 2U) | (
                                                   ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1))))),4);
        tracep->fullBit(oldp+390,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c1));
        tracep->fullBit(oldp+391,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c2));
        tracep->fullBit(oldp+392,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3));
        tracep->fullBit(oldp+393,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__gen__DOT__c3))))));
        tracep->fullCData(oldp+394,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+395,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+396,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x20U)))),8);
        tracep->fullCData(oldp+397,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x20U)))),8);
        tracep->fullBit(oldp+398,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))));
        tracep->fullBit(oldp+399,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+400,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+401,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+402,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+403,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+404,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+405,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+406,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+407,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+408,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+409,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+410,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+411,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+412,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+413,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x20U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x20U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c)))));
        tracep->fullBit(oldp+414,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x20U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x20U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x20U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))))));
        tracep->fullBit(oldp+415,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x20U)))));
        tracep->fullBit(oldp+416,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x20U)))));
        tracep->fullBit(oldp+417,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x21U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+418,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x21U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x21U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x21U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+419,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x21U)))));
        tracep->fullBit(oldp+420,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x21U)))));
        tracep->fullBit(oldp+421,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+422,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x22U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+423,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x22U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x22U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x22U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+424,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x22U)))));
        tracep->fullBit(oldp+425,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x22U)))));
        tracep->fullBit(oldp+426,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+427,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x23U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+428,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x23U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x23U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x23U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+429,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x23U)))));
        tracep->fullBit(oldp+430,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x23U)))));
        tracep->fullBit(oldp+431,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+432,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+433,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+434,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+435,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+436,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+437,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+438,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+439,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+440,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+441,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+442,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x24U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+443,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x24U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x24U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x24U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+444,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x24U)))));
        tracep->fullBit(oldp+445,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x24U)))));
        tracep->fullBit(oldp+446,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x25U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+447,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x25U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x25U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x25U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+448,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x25U)))));
        tracep->fullBit(oldp+449,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x25U)))));
        tracep->fullBit(oldp+450,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+451,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x26U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+452,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x26U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x26U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x26U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+453,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x26U)))));
        tracep->fullBit(oldp+454,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x26U)))));
        tracep->fullBit(oldp+455,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+456,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x27U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+457,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x27U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x27U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x27U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+458,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x27U)))));
        tracep->fullBit(oldp+459,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x27U)))));
        tracep->fullBit(oldp+460,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+461,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+462,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+463,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x28U)))),8);
        tracep->fullCData(oldp+464,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x28U)))),8);
        tracep->fullBit(oldp+465,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+466,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+467,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+468,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+469,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+470,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+471,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+472,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+473,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+474,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+475,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+476,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+477,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+478,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+479,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+480,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x28U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+481,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x28U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x28U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x28U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+482,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x28U)))));
        tracep->fullBit(oldp+483,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x28U)))));
        tracep->fullBit(oldp+484,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x29U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+485,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x29U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x29U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x29U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+486,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x29U)))));
        tracep->fullBit(oldp+487,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x29U)))));
        tracep->fullBit(oldp+488,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+489,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2aU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+490,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2aU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x2aU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2aU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+491,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2aU)))));
        tracep->fullBit(oldp+492,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x2aU)))));
        tracep->fullBit(oldp+493,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+494,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2bU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+495,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2bU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x2bU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2bU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+496,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2bU)))));
        tracep->fullBit(oldp+497,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x2bU)))));
        tracep->fullBit(oldp+498,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+499,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+500,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+501,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+502,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+503,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+504,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+505,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+506,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+507,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+508,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+509,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2cU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+510,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2cU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x2cU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2cU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+511,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2cU)))));
        tracep->fullBit(oldp+512,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x2cU)))));
        tracep->fullBit(oldp+513,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2dU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+514,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2dU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x2dU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2dU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+515,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2dU)))));
        tracep->fullBit(oldp+516,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x2dU)))));
        tracep->fullBit(oldp+517,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+518,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2eU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+519,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2eU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x2eU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2eU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+520,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2eU)))));
        tracep->fullBit(oldp+521,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x2eU)))));
        tracep->fullBit(oldp+522,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+523,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2fU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+524,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2fU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x2fU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x2fU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+525,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2fU)))));
        tracep->fullBit(oldp+526,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x2fU)))));
        tracep->fullBit(oldp+527,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+528,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+529,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+530,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x30U)))),8);
        tracep->fullCData(oldp+531,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x30U)))),8);
        tracep->fullBit(oldp+532,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                         >> 2U))));
        tracep->fullBit(oldp+533,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+534,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+535,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+536,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+537,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+538,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+539,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+540,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+541,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+542,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+543,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+544,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+545,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+546,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+547,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x30U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+548,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x30U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x30U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x30U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+549,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x30U)))));
        tracep->fullBit(oldp+550,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x30U)))));
        tracep->fullBit(oldp+551,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x31U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+552,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x31U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x31U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x31U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+553,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x31U)))));
        tracep->fullBit(oldp+554,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x31U)))));
        tracep->fullBit(oldp+555,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+556,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x32U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+557,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x32U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x32U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x32U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+558,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x32U)))));
        tracep->fullBit(oldp+559,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x32U)))));
        tracep->fullBit(oldp+560,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+561,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x33U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+562,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x33U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x33U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x33U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+563,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x33U)))));
        tracep->fullBit(oldp+564,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x33U)))));
        tracep->fullBit(oldp+565,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+566,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+567,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+568,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+569,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+570,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+571,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+572,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+573,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+574,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+575,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+576,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x34U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+577,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x34U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x34U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x34U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+578,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x34U)))));
        tracep->fullBit(oldp+579,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x34U)))));
        tracep->fullBit(oldp+580,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x35U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+581,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x35U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x35U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x35U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+582,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x35U)))));
        tracep->fullBit(oldp+583,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x35U)))));
        tracep->fullBit(oldp+584,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+585,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x36U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+586,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x36U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x36U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x36U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+587,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x36U)))));
        tracep->fullBit(oldp+588,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x36U)))));
        tracep->fullBit(oldp+589,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+590,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x37U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+591,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x37U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x37U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x37U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+592,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x37U)))));
        tracep->fullBit(oldp+593,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x37U)))));
        tracep->fullBit(oldp+594,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+595,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+596,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+597,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x38U)))),8);
        tracep->fullCData(oldp+598,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x38U)))),8);
        tracep->fullBit(oldp+599,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                         >> 3U))));
        tracep->fullBit(oldp+600,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+601,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+602,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+603,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+604,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+605,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+606,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+607,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+608,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+609,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+610,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+611,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+612,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+613,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+614,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x38U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 3U)))));
        tracep->fullBit(oldp+615,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x38U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x38U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x38U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 3U))))));
        tracep->fullBit(oldp+616,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x38U)))));
        tracep->fullBit(oldp+617,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x38U)))));
        tracep->fullBit(oldp+618,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x39U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+619,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x39U)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x39U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x39U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+620,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x39U)))));
        tracep->fullBit(oldp+621,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x39U)))));
        tracep->fullBit(oldp+622,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+623,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3aU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+624,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3aU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x3aU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3aU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+625,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3aU)))));
        tracep->fullBit(oldp+626,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x3aU)))));
        tracep->fullBit(oldp+627,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+628,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3bU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+629,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3bU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x3bU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3bU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+630,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3bU)))));
        tracep->fullBit(oldp+631,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x3bU)))));
        tracep->fullBit(oldp+632,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+633,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+634,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+635,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+636,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+637,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+638,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c),4);
        tracep->fullBit(oldp+639,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c1));
        tracep->fullBit(oldp+640,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c2));
        tracep->fullBit(oldp+641,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3));
        tracep->fullBit(oldp+642,((1U & (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g) 
                                          >> 3U) | 
                                         (((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p) 
                                           >> 3U) & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__gen__DOT__c3))))));
        tracep->fullBit(oldp+643,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3cU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+644,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3cU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x3cU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3cU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+645,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3cU)))));
        tracep->fullBit(oldp+646,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x3cU)))));
        tracep->fullBit(oldp+647,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3dU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c)))));
        tracep->fullBit(oldp+648,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3dU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x3dU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3dU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))))));
        tracep->fullBit(oldp+649,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3dU)))));
        tracep->fullBit(oldp+650,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x3dU)))));
        tracep->fullBit(oldp+651,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c))));
        tracep->fullBit(oldp+652,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3eU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+653,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3eU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x3eU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3eU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+654,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3eU)))));
        tracep->fullBit(oldp+655,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x3eU)))));
        tracep->fullBit(oldp+656,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+657,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3fU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+658,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3fU)) 
                                          & ((IData)(
                                                     (vlSelf->top__DOT__imm 
                                                      >> 0x3fU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    (vlSelf->top__DOT__imm 
                                                     >> 0x3fU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+659,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+660,((1U & (IData)((vlSelf->top__DOT__imm 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+661,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT____Vcellout__gen__c) 
                                         >> 2U))));
        tracep->fullBit(oldp+662,(vlSelf->clk));
        tracep->fullBit(oldp+663,(vlSelf->rst));
        tracep->fullIData(oldp+664,(vlSelf->instr_i),32);
        tracep->fullQData(oldp+665,(vlSelf->pc),64);
        tracep->fullCData(oldp+667,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+668,((vlSelf->instr_i 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+669,((0x1fU & (vlSelf->instr_i 
                                              >> 7U))),5);
        tracep->fullCData(oldp+670,((0x1fU & (vlSelf->instr_i 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+671,((0x1fU & (vlSelf->instr_i 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+672,((7U & (vlSelf->instr_i 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+673,(((0U == (0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->instr_i 
                                                >> 0x14U))])),64);
        tracep->fullIData(oldp+675,(0x40U),32);
        tracep->fullQData(oldp+676,(0x80000000ULL),64);
        tracep->fullBit(oldp+678,(1U));
        tracep->fullQData(oldp+679,(vlSelf->top__DOT__my_idu__DOT__my_imm),64);
        tracep->fullIData(oldp+681,(5U),32);
        tracep->fullBit(oldp+682,(0U));
    }
}
