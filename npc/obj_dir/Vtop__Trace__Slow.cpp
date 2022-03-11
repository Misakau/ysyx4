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
        tracep->declBit(c+588,"clk", false,-1);
        tracep->declBit(c+589,"rst", false,-1);
        tracep->declBus(c+590,"instr_i", false,-1, 31,0);
        tracep->declQuad(c+591,"pc", false,-1, 63,0);
        tracep->declBit(c+588,"top clk", false,-1);
        tracep->declBit(c+589,"top rst", false,-1);
        tracep->declBus(c+590,"top instr_i", false,-1, 31,0);
        tracep->declQuad(c+591,"top pc", false,-1, 63,0);
        tracep->declBus(c+593,"top op", false,-1, 6,0);
        tracep->declBus(c+594,"top func7", false,-1, 6,0);
        tracep->declBus(c+595,"top rd", false,-1, 4,0);
        tracep->declBus(c+596,"top rs1", false,-1, 4,0);
        tracep->declBus(c+597,"top rs2", false,-1, 4,0);
        tracep->declBus(c+598,"top func3", false,-1, 2,0);
        tracep->declQuad(c+1,"top immI", false,-1, 63,0);
        tracep->declBit(c+3,"top wen", false,-1);
        tracep->declBit(c+588,"top my_ifu clk", false,-1);
        tracep->declBit(c+589,"top my_ifu rst", false,-1);
        tracep->declQuad(c+591,"top my_ifu pc", false,-1, 63,0);
        tracep->declQuad(c+599,"top my_ifu now_pc", false,-1, 63,0);
        tracep->declQuad(c+601,"top my_ifu dnpc", false,-1, 63,0);
        tracep->declBus(c+606,"top my_ifu PC WIDTH", false,-1, 31,0);
        tracep->declQuad(c+607,"top my_ifu PC RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+588,"top my_ifu PC clk", false,-1);
        tracep->declBit(c+589,"top my_ifu PC rst", false,-1);
        tracep->declQuad(c+601,"top my_ifu PC din", false,-1, 63,0);
        tracep->declQuad(c+599,"top my_ifu PC dout", false,-1, 63,0);
        tracep->declBit(c+609,"top my_ifu PC wen", false,-1);
        tracep->declBus(c+590,"top my_idu instr_i", false,-1, 31,0);
        tracep->declBus(c+593,"top my_idu op", false,-1, 6,0);
        tracep->declBus(c+595,"top my_idu rd", false,-1, 4,0);
        tracep->declBus(c+596,"top my_idu rs1", false,-1, 4,0);
        tracep->declBus(c+597,"top my_idu rs2", false,-1, 4,0);
        tracep->declBus(c+598,"top my_idu func3", false,-1, 2,0);
        tracep->declBus(c+594,"top my_idu func7", false,-1, 6,0);
        tracep->declQuad(c+1,"top my_idu immI", false,-1, 63,0);
        tracep->declQuad(c+610,"top my_idu immS", false,-1, 63,0);
        tracep->declQuad(c+612,"top my_idu immJ", false,-1, 63,0);
        tracep->declQuad(c+614,"top my_idu immB", false,-1, 63,0);
        tracep->declBit(c+3,"top my_idu wen", false,-1);
        tracep->declBit(c+588,"top my_exu clk", false,-1);
        tracep->declBus(c+595,"top my_exu rd", false,-1, 4,0);
        tracep->declBus(c+596,"top my_exu rs1", false,-1, 4,0);
        tracep->declBus(c+597,"top my_exu rs2", false,-1, 4,0);
        tracep->declBit(c+3,"top my_exu wen", false,-1);
        tracep->declQuad(c+1,"top my_exu immI", false,-1, 63,0);
        tracep->declQuad(c+4,"top my_exu busa", false,-1, 63,0);
        tracep->declQuad(c+603,"top my_exu busb", false,-1, 63,0);
        tracep->declQuad(c+6,"top my_exu res", false,-1, 63,0);
        tracep->declBus(c+616,"top my_exu regfile ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+606,"top my_exu regfile DATA_WIDTH", false,-1, 31,0);
        tracep->declBit(c+605,"top my_exu regfile clk", false,-1);
        tracep->declBus(c+596,"top my_exu regfile raaddr", false,-1, 4,0);
        tracep->declBus(c+597,"top my_exu regfile rbaddr", false,-1, 4,0);
        tracep->declQuad(c+4,"top my_exu regfile radata", false,-1, 63,0);
        tracep->declQuad(c+603,"top my_exu regfile rbdata", false,-1, 63,0);
        tracep->declQuad(c+6,"top my_exu regfile wdata", false,-1, 63,0);
        tracep->declBus(c+595,"top my_exu regfile waddr", false,-1, 4,0);
        tracep->declBit(c+3,"top my_exu regfile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+524+i*2,"top my_exu regfile rf", true,(i+0), 63,0);}}
        tracep->declQuad(c+6,"top my_exu adder result", false,-1, 63,0);
        tracep->declBit(c+8,"top my_exu adder cout", false,-1);
        tracep->declQuad(c+4,"top my_exu adder x", false,-1, 63,0);
        tracep->declQuad(c+1,"top my_exu adder y", false,-1, 63,0);
        tracep->declBit(c+617,"top my_exu adder sub", false,-1);
        tracep->declBus(c+9,"top my_exu adder res_l", false,-1, 31,0);
        tracep->declBus(c+10,"top my_exu adder res_h", false,-1, 31,0);
        tracep->declBit(c+11,"top my_exu adder c_l", false,-1);
        tracep->declBus(c+9,"top my_exu adder adder_low result", false,-1, 31,0);
        tracep->declBit(c+11,"top my_exu adder adder_low cout", false,-1);
        tracep->declBus(c+12,"top my_exu adder adder_low x", false,-1, 31,0);
        tracep->declQuad(c+13,"top my_exu adder adder_low y", false,-1, 32,0);
        tracep->declBit(c+617,"top my_exu adder adder_low sub", false,-1);
        tracep->declBus(c+618,"top my_exu adder adder_low t", false,-1, 31,0);
        tracep->declBus(c+15,"top my_exu adder adder_low Gg", false,-1, 3,0);
        tracep->declBus(c+16,"top my_exu adder adder_low Pg", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+17+i*1,"top my_exu adder adder_low p", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+21+i*1,"top my_exu adder adder_low g", true,(i+0), 7,0);}}
        tracep->declBus(c+25,"top my_exu adder adder_low c", false,-1, 4,0);
        tracep->declBus(c+26,"top my_exu adder adder_low cout_temp", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+27+i*1,"top my_exu adder adder_low ff", true,(i+0), 7,0);}}
        tracep->declBus(c+31,"top my_exu adder adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+16,"top my_exu adder adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+15,"top my_exu adder adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+617,"top my_exu adder adder_low gen c0", false,-1);
        tracep->declBus(c+32,"top my_exu adder adder_low genblk2[0] adder8 f", false,-1, 7,0);
        tracep->declBit(c+33,"top my_exu adder adder_low genblk2[0] adder8 cout", false,-1);
        tracep->declBus(c+34,"top my_exu adder adder_low genblk2[0] adder8 x", false,-1, 7,0);
        tracep->declBus(c+35,"top my_exu adder adder_low genblk2[0] adder8 y", false,-1, 7,0);
        tracep->declBit(c+36,"top my_exu adder adder_low genblk2[0] adder8 cin", false,-1);
        tracep->declBit(c+37,"top my_exu adder adder_low genblk2[0] adder8 cin2", false,-1);
        tracep->declBus(c+38,"top my_exu adder adder_low genblk2[0] adder8 p", false,-1, 3,0);
        tracep->declBus(c+39,"top my_exu adder adder_low genblk2[0] adder8 g", false,-1, 3,0);
        tracep->declBus(c+40,"top my_exu adder adder_low genblk2[0] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+41,"top my_exu adder adder_low genblk2[0] adder8 adder_low cout", false,-1);
        tracep->declBus(c+42,"top my_exu adder adder_low genblk2[0] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+43,"top my_exu adder adder_low genblk2[0] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+36,"top my_exu adder adder_low genblk2[0] adder8 adder_low cin", false,-1);
        tracep->declBus(c+44,"top my_exu adder adder_low genblk2[0] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+45,"top my_exu adder adder_low genblk2[0] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+46,"top my_exu adder adder_low genblk2[0] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+46,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+44,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+45,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+36,"top my_exu adder adder_low genblk2[0] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+47,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+48,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+49,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+50,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+36,"top my_exu adder adder_low genblk2[0] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+51,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+52,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+53,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+54,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+55,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+56,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+57,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+58,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+59,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+60,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+61,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+62,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+63,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+64,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+65,"top my_exu adder adder_low genblk2[0] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+66,"top my_exu adder adder_low genblk2[0] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+33,"top my_exu adder adder_low genblk2[0] adder8 adder_high cout", false,-1);
        tracep->declBus(c+67,"top my_exu adder adder_low genblk2[0] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+68,"top my_exu adder adder_low genblk2[0] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+37,"top my_exu adder adder_low genblk2[0] adder8 adder_high cin", false,-1);
        tracep->declBus(c+69,"top my_exu adder adder_low genblk2[0] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+70,"top my_exu adder adder_low genblk2[0] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+71,"top my_exu adder adder_low genblk2[0] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+71,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+69,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+70,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+37,"top my_exu adder adder_low genblk2[0] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+72,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+73,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+74,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+75,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+37,"top my_exu adder adder_low genblk2[0] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+76,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+77,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+78,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+79,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+80,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+81,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+82,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+83,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+84,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+85,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+86,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+87,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+88,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+89,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+90,"top my_exu adder adder_low genblk2[0] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+91,"top my_exu adder adder_low genblk2[1] adder8 f", false,-1, 7,0);
        tracep->declBit(c+92,"top my_exu adder adder_low genblk2[1] adder8 cout", false,-1);
        tracep->declBus(c+93,"top my_exu adder adder_low genblk2[1] adder8 x", false,-1, 7,0);
        tracep->declBus(c+94,"top my_exu adder adder_low genblk2[1] adder8 y", false,-1, 7,0);
        tracep->declBit(c+95,"top my_exu adder adder_low genblk2[1] adder8 cin", false,-1);
        tracep->declBit(c+96,"top my_exu adder adder_low genblk2[1] adder8 cin2", false,-1);
        tracep->declBus(c+97,"top my_exu adder adder_low genblk2[1] adder8 p", false,-1, 3,0);
        tracep->declBus(c+98,"top my_exu adder adder_low genblk2[1] adder8 g", false,-1, 3,0);
        tracep->declBus(c+99,"top my_exu adder adder_low genblk2[1] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+100,"top my_exu adder adder_low genblk2[1] adder8 adder_low cout", false,-1);
        tracep->declBus(c+101,"top my_exu adder adder_low genblk2[1] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+102,"top my_exu adder adder_low genblk2[1] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+95,"top my_exu adder adder_low genblk2[1] adder8 adder_low cin", false,-1);
        tracep->declBus(c+103,"top my_exu adder adder_low genblk2[1] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+104,"top my_exu adder adder_low genblk2[1] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+105,"top my_exu adder adder_low genblk2[1] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+105,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+103,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+104,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+95,"top my_exu adder adder_low genblk2[1] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+106,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+107,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+108,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+109,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+95,"top my_exu adder adder_low genblk2[1] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+110,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+111,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+112,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+113,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+114,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+115,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+116,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+117,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+118,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+119,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+120,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+121,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+122,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+123,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+124,"top my_exu adder adder_low genblk2[1] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+125,"top my_exu adder adder_low genblk2[1] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+92,"top my_exu adder adder_low genblk2[1] adder8 adder_high cout", false,-1);
        tracep->declBus(c+126,"top my_exu adder adder_low genblk2[1] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+127,"top my_exu adder adder_low genblk2[1] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+96,"top my_exu adder adder_low genblk2[1] adder8 adder_high cin", false,-1);
        tracep->declBus(c+128,"top my_exu adder adder_low genblk2[1] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+129,"top my_exu adder adder_low genblk2[1] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+130,"top my_exu adder adder_low genblk2[1] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+130,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+128,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+129,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+96,"top my_exu adder adder_low genblk2[1] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+131,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+132,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+133,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+134,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+96,"top my_exu adder adder_low genblk2[1] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+135,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+136,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+137,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+138,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+139,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+140,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+141,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+142,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+143,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+144,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+145,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+146,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+147,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+148,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+149,"top my_exu adder adder_low genblk2[1] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+150,"top my_exu adder adder_low genblk2[2] adder8 f", false,-1, 7,0);
        tracep->declBit(c+151,"top my_exu adder adder_low genblk2[2] adder8 cout", false,-1);
        tracep->declBus(c+152,"top my_exu adder adder_low genblk2[2] adder8 x", false,-1, 7,0);
        tracep->declBus(c+153,"top my_exu adder adder_low genblk2[2] adder8 y", false,-1, 7,0);
        tracep->declBit(c+154,"top my_exu adder adder_low genblk2[2] adder8 cin", false,-1);
        tracep->declBit(c+155,"top my_exu adder adder_low genblk2[2] adder8 cin2", false,-1);
        tracep->declBus(c+156,"top my_exu adder adder_low genblk2[2] adder8 p", false,-1, 3,0);
        tracep->declBus(c+157,"top my_exu adder adder_low genblk2[2] adder8 g", false,-1, 3,0);
        tracep->declBus(c+158,"top my_exu adder adder_low genblk2[2] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+159,"top my_exu adder adder_low genblk2[2] adder8 adder_low cout", false,-1);
        tracep->declBus(c+160,"top my_exu adder adder_low genblk2[2] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+161,"top my_exu adder adder_low genblk2[2] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+154,"top my_exu adder adder_low genblk2[2] adder8 adder_low cin", false,-1);
        tracep->declBus(c+162,"top my_exu adder adder_low genblk2[2] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+163,"top my_exu adder adder_low genblk2[2] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+164,"top my_exu adder adder_low genblk2[2] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+164,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+162,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+163,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+154,"top my_exu adder adder_low genblk2[2] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+165,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+166,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+167,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+168,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+154,"top my_exu adder adder_low genblk2[2] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+169,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+170,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+171,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+172,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+173,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+174,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+175,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+176,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+177,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+178,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+179,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+180,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+181,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+182,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+183,"top my_exu adder adder_low genblk2[2] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+184,"top my_exu adder adder_low genblk2[2] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+151,"top my_exu adder adder_low genblk2[2] adder8 adder_high cout", false,-1);
        tracep->declBus(c+185,"top my_exu adder adder_low genblk2[2] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+186,"top my_exu adder adder_low genblk2[2] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+155,"top my_exu adder adder_low genblk2[2] adder8 adder_high cin", false,-1);
        tracep->declBus(c+187,"top my_exu adder adder_low genblk2[2] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+188,"top my_exu adder adder_low genblk2[2] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+189,"top my_exu adder adder_low genblk2[2] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+189,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+187,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+188,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+155,"top my_exu adder adder_low genblk2[2] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+190,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+191,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+192,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+193,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+155,"top my_exu adder adder_low genblk2[2] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+194,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+195,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+196,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+197,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+198,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+199,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+200,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+201,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+202,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+203,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+204,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+205,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+206,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+207,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+208,"top my_exu adder adder_low genblk2[2] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+209,"top my_exu adder adder_low genblk2[3] adder8 f", false,-1, 7,0);
        tracep->declBit(c+210,"top my_exu adder adder_low genblk2[3] adder8 cout", false,-1);
        tracep->declBus(c+211,"top my_exu adder adder_low genblk2[3] adder8 x", false,-1, 7,0);
        tracep->declBus(c+212,"top my_exu adder adder_low genblk2[3] adder8 y", false,-1, 7,0);
        tracep->declBit(c+213,"top my_exu adder adder_low genblk2[3] adder8 cin", false,-1);
        tracep->declBit(c+214,"top my_exu adder adder_low genblk2[3] adder8 cin2", false,-1);
        tracep->declBus(c+215,"top my_exu adder adder_low genblk2[3] adder8 p", false,-1, 3,0);
        tracep->declBus(c+216,"top my_exu adder adder_low genblk2[3] adder8 g", false,-1, 3,0);
        tracep->declBus(c+217,"top my_exu adder adder_low genblk2[3] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+218,"top my_exu adder adder_low genblk2[3] adder8 adder_low cout", false,-1);
        tracep->declBus(c+219,"top my_exu adder adder_low genblk2[3] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+220,"top my_exu adder adder_low genblk2[3] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+213,"top my_exu adder adder_low genblk2[3] adder8 adder_low cin", false,-1);
        tracep->declBus(c+221,"top my_exu adder adder_low genblk2[3] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+222,"top my_exu adder adder_low genblk2[3] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+223,"top my_exu adder adder_low genblk2[3] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+223,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+221,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+222,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+213,"top my_exu adder adder_low genblk2[3] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+224,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+225,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+226,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+227,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+213,"top my_exu adder adder_low genblk2[3] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+228,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+229,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+230,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+231,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+232,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+233,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+234,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+235,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+236,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+237,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+238,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+239,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+240,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+241,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+242,"top my_exu adder adder_low genblk2[3] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+243,"top my_exu adder adder_low genblk2[3] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+210,"top my_exu adder adder_low genblk2[3] adder8 adder_high cout", false,-1);
        tracep->declBus(c+244,"top my_exu adder adder_low genblk2[3] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+245,"top my_exu adder adder_low genblk2[3] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+214,"top my_exu adder adder_low genblk2[3] adder8 adder_high cin", false,-1);
        tracep->declBus(c+246,"top my_exu adder adder_low genblk2[3] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+247,"top my_exu adder adder_low genblk2[3] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+248,"top my_exu adder adder_low genblk2[3] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+248,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+246,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+247,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+214,"top my_exu adder adder_low genblk2[3] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+249,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+250,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+251,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+252,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+214,"top my_exu adder adder_low genblk2[3] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+253,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+254,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+255,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+256,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+257,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+258,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+259,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+260,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+261,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+262,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+263,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+264,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+265,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+266,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+267,"top my_exu adder adder_low genblk2[3] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+10,"top my_exu adder adder_high result", false,-1, 31,0);
        tracep->declBit(c+8,"top my_exu adder adder_high cout", false,-1);
        tracep->declBus(c+268,"top my_exu adder adder_high x", false,-1, 31,0);
        tracep->declQuad(c+269,"top my_exu adder adder_high y", false,-1, 32,0);
        tracep->declBit(c+11,"top my_exu adder adder_high sub", false,-1);
        tracep->declBus(c+618,"top my_exu adder adder_high t", false,-1, 31,0);
        tracep->declBus(c+271,"top my_exu adder adder_high Gg", false,-1, 3,0);
        tracep->declBus(c+272,"top my_exu adder adder_high Pg", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+273+i*1,"top my_exu adder adder_high p", true,(i+0), 7,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+277+i*1,"top my_exu adder adder_high g", true,(i+0), 7,0);}}
        tracep->declBus(c+281,"top my_exu adder adder_high c", false,-1, 4,0);
        tracep->declBus(c+282,"top my_exu adder adder_high cout_temp", false,-1, 3,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+283+i*1,"top my_exu adder adder_high ff", true,(i+0), 7,0);}}
        tracep->declBus(c+287,"top my_exu adder adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+272,"top my_exu adder adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+271,"top my_exu adder adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+11,"top my_exu adder adder_high gen c0", false,-1);
        tracep->declBus(c+288,"top my_exu adder adder_high genblk2[0] adder8 f", false,-1, 7,0);
        tracep->declBit(c+289,"top my_exu adder adder_high genblk2[0] adder8 cout", false,-1);
        tracep->declBus(c+290,"top my_exu adder adder_high genblk2[0] adder8 x", false,-1, 7,0);
        tracep->declBus(c+291,"top my_exu adder adder_high genblk2[0] adder8 y", false,-1, 7,0);
        tracep->declBit(c+292,"top my_exu adder adder_high genblk2[0] adder8 cin", false,-1);
        tracep->declBit(c+293,"top my_exu adder adder_high genblk2[0] adder8 cin2", false,-1);
        tracep->declBus(c+294,"top my_exu adder adder_high genblk2[0] adder8 p", false,-1, 3,0);
        tracep->declBus(c+295,"top my_exu adder adder_high genblk2[0] adder8 g", false,-1, 3,0);
        tracep->declBus(c+296,"top my_exu adder adder_high genblk2[0] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+297,"top my_exu adder adder_high genblk2[0] adder8 adder_low cout", false,-1);
        tracep->declBus(c+298,"top my_exu adder adder_high genblk2[0] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+299,"top my_exu adder adder_high genblk2[0] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+292,"top my_exu adder adder_high genblk2[0] adder8 adder_low cin", false,-1);
        tracep->declBus(c+300,"top my_exu adder adder_high genblk2[0] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+301,"top my_exu adder adder_high genblk2[0] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+302,"top my_exu adder adder_high genblk2[0] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+302,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+300,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+301,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+292,"top my_exu adder adder_high genblk2[0] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+303,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+304,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+305,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+306,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+292,"top my_exu adder adder_high genblk2[0] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+307,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+308,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+309,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+310,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+311,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+312,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+313,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+314,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+315,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+316,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+317,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+318,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+319,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+320,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+321,"top my_exu adder adder_high genblk2[0] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+322,"top my_exu adder adder_high genblk2[0] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+289,"top my_exu adder adder_high genblk2[0] adder8 adder_high cout", false,-1);
        tracep->declBus(c+323,"top my_exu adder adder_high genblk2[0] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+324,"top my_exu adder adder_high genblk2[0] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+293,"top my_exu adder adder_high genblk2[0] adder8 adder_high cin", false,-1);
        tracep->declBus(c+325,"top my_exu adder adder_high genblk2[0] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+326,"top my_exu adder adder_high genblk2[0] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+327,"top my_exu adder adder_high genblk2[0] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+327,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+325,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+326,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+293,"top my_exu adder adder_high genblk2[0] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+328,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+329,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+330,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+331,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+293,"top my_exu adder adder_high genblk2[0] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+332,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+333,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+334,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+335,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+336,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+337,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+338,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+339,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+340,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+341,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+342,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+343,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+344,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+345,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+346,"top my_exu adder adder_high genblk2[0] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+347,"top my_exu adder adder_high genblk2[1] adder8 f", false,-1, 7,0);
        tracep->declBit(c+348,"top my_exu adder adder_high genblk2[1] adder8 cout", false,-1);
        tracep->declBus(c+349,"top my_exu adder adder_high genblk2[1] adder8 x", false,-1, 7,0);
        tracep->declBus(c+350,"top my_exu adder adder_high genblk2[1] adder8 y", false,-1, 7,0);
        tracep->declBit(c+351,"top my_exu adder adder_high genblk2[1] adder8 cin", false,-1);
        tracep->declBit(c+352,"top my_exu adder adder_high genblk2[1] adder8 cin2", false,-1);
        tracep->declBus(c+353,"top my_exu adder adder_high genblk2[1] adder8 p", false,-1, 3,0);
        tracep->declBus(c+354,"top my_exu adder adder_high genblk2[1] adder8 g", false,-1, 3,0);
        tracep->declBus(c+355,"top my_exu adder adder_high genblk2[1] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+356,"top my_exu adder adder_high genblk2[1] adder8 adder_low cout", false,-1);
        tracep->declBus(c+357,"top my_exu adder adder_high genblk2[1] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+358,"top my_exu adder adder_high genblk2[1] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+351,"top my_exu adder adder_high genblk2[1] adder8 adder_low cin", false,-1);
        tracep->declBus(c+359,"top my_exu adder adder_high genblk2[1] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+360,"top my_exu adder adder_high genblk2[1] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+361,"top my_exu adder adder_high genblk2[1] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+361,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+359,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+360,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+351,"top my_exu adder adder_high genblk2[1] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+362,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+363,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+364,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+365,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+351,"top my_exu adder adder_high genblk2[1] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+366,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+367,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+368,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+369,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+370,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+371,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+372,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+373,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+374,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+375,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+376,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+377,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+378,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+379,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+380,"top my_exu adder adder_high genblk2[1] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+381,"top my_exu adder adder_high genblk2[1] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+348,"top my_exu adder adder_high genblk2[1] adder8 adder_high cout", false,-1);
        tracep->declBus(c+382,"top my_exu adder adder_high genblk2[1] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+383,"top my_exu adder adder_high genblk2[1] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+352,"top my_exu adder adder_high genblk2[1] adder8 adder_high cin", false,-1);
        tracep->declBus(c+384,"top my_exu adder adder_high genblk2[1] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+385,"top my_exu adder adder_high genblk2[1] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+386,"top my_exu adder adder_high genblk2[1] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+386,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+384,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+385,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+352,"top my_exu adder adder_high genblk2[1] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+387,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+388,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+389,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+390,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+352,"top my_exu adder adder_high genblk2[1] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+391,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+392,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+393,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+394,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+395,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+396,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+397,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+398,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+399,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+400,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+401,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+402,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+403,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+404,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+405,"top my_exu adder adder_high genblk2[1] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+406,"top my_exu adder adder_high genblk2[2] adder8 f", false,-1, 7,0);
        tracep->declBit(c+407,"top my_exu adder adder_high genblk2[2] adder8 cout", false,-1);
        tracep->declBus(c+408,"top my_exu adder adder_high genblk2[2] adder8 x", false,-1, 7,0);
        tracep->declBus(c+409,"top my_exu adder adder_high genblk2[2] adder8 y", false,-1, 7,0);
        tracep->declBit(c+410,"top my_exu adder adder_high genblk2[2] adder8 cin", false,-1);
        tracep->declBit(c+411,"top my_exu adder adder_high genblk2[2] adder8 cin2", false,-1);
        tracep->declBus(c+412,"top my_exu adder adder_high genblk2[2] adder8 p", false,-1, 3,0);
        tracep->declBus(c+413,"top my_exu adder adder_high genblk2[2] adder8 g", false,-1, 3,0);
        tracep->declBus(c+414,"top my_exu adder adder_high genblk2[2] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+415,"top my_exu adder adder_high genblk2[2] adder8 adder_low cout", false,-1);
        tracep->declBus(c+416,"top my_exu adder adder_high genblk2[2] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+417,"top my_exu adder adder_high genblk2[2] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+410,"top my_exu adder adder_high genblk2[2] adder8 adder_low cin", false,-1);
        tracep->declBus(c+418,"top my_exu adder adder_high genblk2[2] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+419,"top my_exu adder adder_high genblk2[2] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+420,"top my_exu adder adder_high genblk2[2] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+420,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+418,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+419,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+410,"top my_exu adder adder_high genblk2[2] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+421,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+422,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+423,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+424,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+410,"top my_exu adder adder_high genblk2[2] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+425,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+426,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+427,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+428,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+429,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+430,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+431,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+432,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+433,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+434,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+435,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+436,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+437,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+438,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+439,"top my_exu adder adder_high genblk2[2] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+440,"top my_exu adder adder_high genblk2[2] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+407,"top my_exu adder adder_high genblk2[2] adder8 adder_high cout", false,-1);
        tracep->declBus(c+441,"top my_exu adder adder_high genblk2[2] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+442,"top my_exu adder adder_high genblk2[2] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+411,"top my_exu adder adder_high genblk2[2] adder8 adder_high cin", false,-1);
        tracep->declBus(c+443,"top my_exu adder adder_high genblk2[2] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+444,"top my_exu adder adder_high genblk2[2] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+445,"top my_exu adder adder_high genblk2[2] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+445,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+443,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+444,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+411,"top my_exu adder adder_high genblk2[2] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+446,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+447,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+448,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+449,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+411,"top my_exu adder adder_high genblk2[2] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+450,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+451,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+452,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+453,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+454,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+455,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+456,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+457,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+458,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+459,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+460,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+461,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+462,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+463,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+464,"top my_exu adder adder_high genblk2[2] adder8 adder_high genblk1[3] adder cin", false,-1);
        tracep->declBus(c+465,"top my_exu adder adder_high genblk2[3] adder8 f", false,-1, 7,0);
        tracep->declBit(c+466,"top my_exu adder adder_high genblk2[3] adder8 cout", false,-1);
        tracep->declBus(c+467,"top my_exu adder adder_high genblk2[3] adder8 x", false,-1, 7,0);
        tracep->declBus(c+468,"top my_exu adder adder_high genblk2[3] adder8 y", false,-1, 7,0);
        tracep->declBit(c+469,"top my_exu adder adder_high genblk2[3] adder8 cin", false,-1);
        tracep->declBit(c+470,"top my_exu adder adder_high genblk2[3] adder8 cin2", false,-1);
        tracep->declBus(c+471,"top my_exu adder adder_high genblk2[3] adder8 p", false,-1, 3,0);
        tracep->declBus(c+472,"top my_exu adder adder_high genblk2[3] adder8 g", false,-1, 3,0);
        tracep->declBus(c+473,"top my_exu adder adder_high genblk2[3] adder8 adder_low f", false,-1, 3,0);
        tracep->declBit(c+474,"top my_exu adder adder_high genblk2[3] adder8 adder_low cout", false,-1);
        tracep->declBus(c+475,"top my_exu adder adder_high genblk2[3] adder8 adder_low x", false,-1, 3,0);
        tracep->declBus(c+476,"top my_exu adder adder_high genblk2[3] adder8 adder_low y", false,-1, 3,0);
        tracep->declBit(c+469,"top my_exu adder adder_high genblk2[3] adder8 adder_low cin", false,-1);
        tracep->declBus(c+477,"top my_exu adder adder_high genblk2[3] adder8 adder_low p", false,-1, 4,1);
        tracep->declBus(c+478,"top my_exu adder adder_high genblk2[3] adder8 adder_low g", false,-1, 4,1);
        tracep->declBus(c+479,"top my_exu adder adder_high genblk2[3] adder8 adder_low c", false,-1, 4,1);
        tracep->declBus(c+479,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c", false,-1, 4,1);
        tracep->declBus(c+477,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen p", false,-1, 4,1);
        tracep->declBus(c+478,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen g", false,-1, 4,1);
        tracep->declBit(c+469,"top my_exu adder adder_high genblk2[3] adder8 adder_low gen c0", false,-1);
        tracep->declBit(c+480,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder f", false,-1);
        tracep->declBit(c+481,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder cout", false,-1);
        tracep->declBit(c+482,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder x", false,-1);
        tracep->declBit(c+483,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder y", false,-1);
        tracep->declBit(c+469,"top my_exu adder adder_high genblk2[3] adder8 adder_low adder cin", false,-1);
        tracep->declBit(c+484,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder f", false,-1);
        tracep->declBit(c+485,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder cout", false,-1);
        tracep->declBit(c+486,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder x", false,-1);
        tracep->declBit(c+487,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder y", false,-1);
        tracep->declBit(c+488,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[1] adder cin", false,-1);
        tracep->declBit(c+489,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder f", false,-1);
        tracep->declBit(c+490,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder cout", false,-1);
        tracep->declBit(c+491,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder x", false,-1);
        tracep->declBit(c+492,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder y", false,-1);
        tracep->declBit(c+493,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[2] adder cin", false,-1);
        tracep->declBit(c+494,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder f", false,-1);
        tracep->declBit(c+495,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder cout", false,-1);
        tracep->declBit(c+496,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder x", false,-1);
        tracep->declBit(c+497,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder y", false,-1);
        tracep->declBit(c+498,"top my_exu adder adder_high genblk2[3] adder8 adder_low genblk1[3] adder cin", false,-1);
        tracep->declBus(c+499,"top my_exu adder adder_high genblk2[3] adder8 adder_high f", false,-1, 3,0);
        tracep->declBit(c+466,"top my_exu adder adder_high genblk2[3] adder8 adder_high cout", false,-1);
        tracep->declBus(c+500,"top my_exu adder adder_high genblk2[3] adder8 adder_high x", false,-1, 3,0);
        tracep->declBus(c+501,"top my_exu adder adder_high genblk2[3] adder8 adder_high y", false,-1, 3,0);
        tracep->declBit(c+470,"top my_exu adder adder_high genblk2[3] adder8 adder_high cin", false,-1);
        tracep->declBus(c+502,"top my_exu adder adder_high genblk2[3] adder8 adder_high p", false,-1, 4,1);
        tracep->declBus(c+503,"top my_exu adder adder_high genblk2[3] adder8 adder_high g", false,-1, 4,1);
        tracep->declBus(c+504,"top my_exu adder adder_high genblk2[3] adder8 adder_high c", false,-1, 4,1);
        tracep->declBus(c+504,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c", false,-1, 4,1);
        tracep->declBus(c+502,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen p", false,-1, 4,1);
        tracep->declBus(c+503,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen g", false,-1, 4,1);
        tracep->declBit(c+470,"top my_exu adder adder_high genblk2[3] adder8 adder_high gen c0", false,-1);
        tracep->declBit(c+505,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder f", false,-1);
        tracep->declBit(c+506,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder cout", false,-1);
        tracep->declBit(c+507,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder x", false,-1);
        tracep->declBit(c+508,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder y", false,-1);
        tracep->declBit(c+470,"top my_exu adder adder_high genblk2[3] adder8 adder_high adder cin", false,-1);
        tracep->declBit(c+509,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder f", false,-1);
        tracep->declBit(c+510,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder cout", false,-1);
        tracep->declBit(c+511,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder x", false,-1);
        tracep->declBit(c+512,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder y", false,-1);
        tracep->declBit(c+513,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[1] adder cin", false,-1);
        tracep->declBit(c+514,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder f", false,-1);
        tracep->declBit(c+515,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder cout", false,-1);
        tracep->declBit(c+516,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder x", false,-1);
        tracep->declBit(c+517,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder y", false,-1);
        tracep->declBit(c+518,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[2] adder cin", false,-1);
        tracep->declBit(c+519,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder f", false,-1);
        tracep->declBit(c+520,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder cout", false,-1);
        tracep->declBit(c+521,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder x", false,-1);
        tracep->declBit(c+522,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder y", false,-1);
        tracep->declBit(c+523,"top my_exu adder adder_high genblk2[3] adder8 adder_high genblk1[3] adder cin", false,-1);
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
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__immI),64);
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__wen));
        tracep->fullQData(oldp+4,(vlSelf->top__DOT__my_exu__DOT__busa),64);
        tracep->fullQData(oldp+6,((((QData)((IData)(
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
        tracep->fullBit(oldp+8,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__cout_temp) 
                                       >> 3U))));
        tracep->fullIData(oldp+9,(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                    [3U] << 0x18U) 
                                   | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                       [2U] << 0x10U) 
                                      | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                          [1U] << 8U) 
                                         | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff
                                         [0U])))),32);
        tracep->fullIData(oldp+10,(((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                     [3U] << 0x18U) 
                                    | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                        [2U] << 0x10U) 
                                       | ((vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                           [1U] << 8U) 
                                          | vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff
                                          [0U])))),32);
        tracep->fullBit(oldp+11,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp) 
                                        >> 3U))));
        tracep->fullIData(oldp+12,((IData)(vlSelf->top__DOT__my_exu__DOT__busa)),32);
        tracep->fullQData(oldp+13,((QData)((IData)(vlSelf->top__DOT__immI))),33);
        tracep->fullCData(oldp+15,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Gg),4);
        tracep->fullCData(oldp+16,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__Pg),4);
        tracep->fullCData(oldp+17,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[0]),8);
        tracep->fullCData(oldp+18,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[1]),8);
        tracep->fullCData(oldp+19,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[2]),8);
        tracep->fullCData(oldp+20,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__p[3]),8);
        tracep->fullCData(oldp+21,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[0]),8);
        tracep->fullCData(oldp+22,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[1]),8);
        tracep->fullCData(oldp+23,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[2]),8);
        tracep->fullCData(oldp+24,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__g[3]),8);
        tracep->fullCData(oldp+25,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c),5);
        tracep->fullCData(oldp+26,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__cout_temp),4);
        tracep->fullCData(oldp+27,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[0]),8);
        tracep->fullCData(oldp+28,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[1]),8);
        tracep->fullCData(oldp+29,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[2]),8);
        tracep->fullCData(oldp+30,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__ff[3]),8);
        tracep->fullCData(oldp+31,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__gen__c),4);
        tracep->fullCData(oldp+32,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+33,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                        >> 3U))));
        tracep->fullCData(oldp+34,((0xffU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),8);
        tracep->fullCData(oldp+35,((0xffU & (IData)((QData)((IData)(vlSelf->top__DOT__immI))))),8);
        tracep->fullBit(oldp+36,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c))));
        tracep->fullBit(oldp+37,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+38,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+39,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+40,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+41,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                        >> 3U))));
        tracep->fullCData(oldp+42,((0xfU & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))),4);
        tracep->fullCData(oldp+43,((0xfU & (IData)((QData)((IData)(vlSelf->top__DOT__immI))))),4);
        tracep->fullCData(oldp+44,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+45,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+46,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+47,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                         ^ (IData)((QData)((IData)(vlSelf->top__DOT__immI)))) 
                                        ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c)))));
        tracep->fullBit(oldp+48,((1U & (((IData)(vlSelf->top__DOT__my_exu__DOT__busa) 
                                         & ((IData)((QData)((IData)(vlSelf->top__DOT__immI))) 
                                            | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c))) 
                                        | ((IData)((QData)((IData)(vlSelf->top__DOT__immI))) 
                                           & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c))))));
        tracep->fullBit(oldp+49,((1U & (IData)(vlSelf->top__DOT__my_exu__DOT__busa))));
        tracep->fullBit(oldp+50,((1U & (IData)((QData)((IData)(vlSelf->top__DOT__immI))))));
        tracep->fullBit(oldp+51,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 1U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 1U))) 
                                        ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+52,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 1U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 1U)) 
                                            | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 1U)) 
                                           & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+53,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 1U)))));
        tracep->fullBit(oldp+54,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 1U)))));
        tracep->fullBit(oldp+55,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+56,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 2U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 2U))) 
                                        ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                           >> 1U)))));
        tracep->fullBit(oldp+57,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 2U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 2U)) 
                                            | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 2U)) 
                                           & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              >> 1U))))));
        tracep->fullBit(oldp+58,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 2U)))));
        tracep->fullBit(oldp+59,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 2U)))));
        tracep->fullBit(oldp+60,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                        >> 1U))));
        tracep->fullBit(oldp+61,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 3U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 3U))) 
                                        ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                           >> 2U)))));
        tracep->fullBit(oldp+62,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 3U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 3U)) 
                                            | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 3U)) 
                                           & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                              >> 2U))))));
        tracep->fullBit(oldp+63,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 3U)))));
        tracep->fullBit(oldp+64,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 3U)))));
        tracep->fullBit(oldp+65,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                        >> 2U))));
        tracep->fullCData(oldp+66,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+67,((0xfU & (IData)(
                                                   (vlSelf->top__DOT__my_exu__DOT__busa 
                                                    >> 4U)))),4);
        tracep->fullCData(oldp+68,((0xfU & (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 4U)))),4);
        tracep->fullCData(oldp+69,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+70,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+71,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+72,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 4U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 4U))) 
                                        ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+73,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 4U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 4U)) 
                                            | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 4U)) 
                                           & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+74,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 4U)))));
        tracep->fullBit(oldp+75,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 4U)))));
        tracep->fullBit(oldp+76,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 5U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 5U))) 
                                        ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+77,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 5U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 5U)) 
                                            | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 5U)) 
                                           & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+78,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 5U)))));
        tracep->fullBit(oldp+79,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 5U)))));
        tracep->fullBit(oldp+80,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+81,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 6U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 6U))) 
                                        ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                           >> 1U)))));
        tracep->fullBit(oldp+82,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 6U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 6U)) 
                                            | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 6U)) 
                                           & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              >> 1U))))));
        tracep->fullBit(oldp+83,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 6U)))));
        tracep->fullBit(oldp+84,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 6U)))));
        tracep->fullBit(oldp+85,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                        >> 1U))));
        tracep->fullBit(oldp+86,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 7U)) 
                                         ^ (IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 7U))) 
                                        ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                           >> 2U)))));
        tracep->fullBit(oldp+87,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                  >> 7U)) 
                                         & ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 7U)) 
                                            | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                    >> 7U)) 
                                           & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                              >> 2U))))));
        tracep->fullBit(oldp+88,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                >> 7U)))));
        tracep->fullBit(oldp+89,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                >> 7U)))));
        tracep->fullBit(oldp+90,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                        >> 2U))));
        tracep->fullCData(oldp+91,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+92,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                        >> 3U))));
        tracep->fullCData(oldp+93,((0xffU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 8U)))),8);
        tracep->fullCData(oldp+94,((0xffU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 8U)))),8);
        tracep->fullBit(oldp+95,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                        >> 1U))));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+97,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+98,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+99,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+100,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+101,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+102,((0xfU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+103,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+104,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+105,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+106,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 8U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 8U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+107,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 8U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 8U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 8U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+108,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 8U)))));
        tracep->fullBit(oldp+109,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 8U)))));
        tracep->fullBit(oldp+110,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 9U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 9U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+111,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 9U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 9U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 9U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+112,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 9U)))));
        tracep->fullBit(oldp+113,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 9U)))));
        tracep->fullBit(oldp+114,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+115,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xaU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xaU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+116,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xaU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0xaU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xaU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+117,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+118,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+119,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+120,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xbU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xbU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+121,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xbU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0xbU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xbU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+122,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xbU)))));
        tracep->fullBit(oldp+123,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0xbU)))));
        tracep->fullBit(oldp+124,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+125,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+126,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+127,((0xfU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+128,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+129,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+130,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+131,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xcU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+132,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xcU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0xcU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xcU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+133,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+134,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+135,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xdU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+136,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xdU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0xdU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xdU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+137,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xdU)))));
        tracep->fullBit(oldp+138,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0xdU)))));
        tracep->fullBit(oldp+139,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+140,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xeU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xeU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+141,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xeU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0xeU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xeU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+142,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xeU)))));
        tracep->fullBit(oldp+143,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0xeU)))));
        tracep->fullBit(oldp+144,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+145,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xfU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xfU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+146,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0xfU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0xfU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0xfU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+147,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+148,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+149,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+150,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+151,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+152,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x10U)))),8);
        tracep->fullCData(oldp+153,((0xffU & (IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x10U)))),8);
        tracep->fullBit(oldp+154,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                         >> 2U))));
        tracep->fullBit(oldp+155,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+156,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+157,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+158,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+159,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+160,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+161,((0xfU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+162,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+163,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+164,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+165,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x10U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x10U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+166,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x10U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x10U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x10U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+167,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+168,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+169,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x11U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+170,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x11U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x11U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x11U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+171,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x11U)))));
        tracep->fullBit(oldp+172,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x11U)))));
        tracep->fullBit(oldp+173,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+174,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x12U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x12U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+175,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x12U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x12U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x12U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+176,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+177,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+178,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+179,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x13U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x13U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+180,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x13U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x13U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x13U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+181,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x13U)))));
        tracep->fullBit(oldp+182,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x13U)))));
        tracep->fullBit(oldp+183,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+184,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+185,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+186,((0xfU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+187,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+188,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+189,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+190,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x14U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+191,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x14U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x14U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x14U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+192,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+193,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+194,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x15U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+195,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x15U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x15U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x15U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+196,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x15U)))));
        tracep->fullBit(oldp+197,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x15U)))));
        tracep->fullBit(oldp+198,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+199,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x16U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x16U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+200,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x16U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x16U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x16U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+201,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x16U)))));
        tracep->fullBit(oldp+202,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x16U)))));
        tracep->fullBit(oldp+203,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+204,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x17U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x17U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+205,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x17U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x17U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x17U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+206,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x17U)))));
        tracep->fullBit(oldp+207,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x17U)))));
        tracep->fullBit(oldp+208,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+209,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+210,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+211,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x18U)))),8);
        tracep->fullCData(oldp+212,((0xffU & (IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x18U)))),8);
        tracep->fullBit(oldp+213,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                         >> 3U))));
        tracep->fullBit(oldp+214,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+215,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+216,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+217,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+218,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+219,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+220,((0xfU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+221,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+222,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+223,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+224,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x18U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x18U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                            >> 3U)))));
        tracep->fullBit(oldp+225,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x18U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x18U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                                >> 3U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x18U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__c) 
                                               >> 3U))))));
        tracep->fullBit(oldp+226,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x18U)))));
        tracep->fullBit(oldp+227,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x18U)))));
        tracep->fullBit(oldp+228,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x19U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+229,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x19U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x19U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x19U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+230,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x19U)))));
        tracep->fullBit(oldp+231,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x19U)))));
        tracep->fullBit(oldp+232,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+233,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1aU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1aU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+234,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1aU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x1aU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1aU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+235,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+236,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+237,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+238,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1bU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1bU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+239,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1bU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x1bU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1bU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+240,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+241,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+242,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+243,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+244,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+245,((0xfU & (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+246,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+247,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+248,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+249,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1cU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+250,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1cU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x1cU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1cU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+251,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+252,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+253,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1dU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+254,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1dU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x1dU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1dU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+255,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1dU)))));
        tracep->fullBit(oldp+256,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x1dU)))));
        tracep->fullBit(oldp+257,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+258,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1eU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1eU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+259,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1eU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x1eU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1eU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+260,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1eU)))));
        tracep->fullBit(oldp+261,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x1eU)))));
        tracep->fullBit(oldp+262,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+263,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1fU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1fU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+264,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x1fU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                      >> 0x1fU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                     >> 0x1fU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+265,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x1fU)))));
        tracep->fullBit(oldp+266,((1U & (IData)(((QData)((IData)(vlSelf->top__DOT__immI)) 
                                                 >> 0x1fU)))));
        tracep->fullBit(oldp+267,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_low.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullIData(oldp+268,((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                             >> 0x20U))),32);
        tracep->fullQData(oldp+269,((QData)((IData)(
                                                    (vlSelf->top__DOT__immI 
                                                     >> 0x20U)))),33);
        tracep->fullCData(oldp+271,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Gg),4);
        tracep->fullCData(oldp+272,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__Pg),4);
        tracep->fullCData(oldp+273,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[0]),8);
        tracep->fullCData(oldp+274,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[1]),8);
        tracep->fullCData(oldp+275,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[2]),8);
        tracep->fullCData(oldp+276,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__p[3]),8);
        tracep->fullCData(oldp+277,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[0]),8);
        tracep->fullCData(oldp+278,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[1]),8);
        tracep->fullCData(oldp+279,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[2]),8);
        tracep->fullCData(oldp+280,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__g[3]),8);
        tracep->fullCData(oldp+281,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c),5);
        tracep->fullCData(oldp+282,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__cout_temp),4);
        tracep->fullCData(oldp+283,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[0]),8);
        tracep->fullCData(oldp+284,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[1]),8);
        tracep->fullCData(oldp+285,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[2]),8);
        tracep->fullCData(oldp+286,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__ff[3]),8);
        tracep->fullCData(oldp+287,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__gen__c),4);
        tracep->fullCData(oldp+288,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__0__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+289,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+290,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x20U)))),8);
        tracep->fullCData(oldp+291,((0xffU & (IData)((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U)))))),8);
        tracep->fullBit(oldp+292,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))));
        tracep->fullBit(oldp+293,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+294,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+295,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+296,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+297,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+298,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x20U)))),4);
        tracep->fullCData(oldp+299,((0xfU & (IData)((QData)((IData)(
                                                                    (vlSelf->top__DOT__immI 
                                                                     >> 0x20U)))))),4);
        tracep->fullCData(oldp+300,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+301,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+302,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+303,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x20U)) 
                                          ^ (IData)((QData)((IData)(
                                                                    (vlSelf->top__DOT__immI 
                                                                     >> 0x20U))))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c)))));
        tracep->fullBit(oldp+304,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x20U)) 
                                          & ((IData)((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U)))) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))) 
                                         | ((IData)((QData)((IData)(
                                                                    (vlSelf->top__DOT__immI 
                                                                     >> 0x20U)))) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c))))));
        tracep->fullBit(oldp+305,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x20U)))));
        tracep->fullBit(oldp+306,((1U & (IData)((QData)((IData)(
                                                                (vlSelf->top__DOT__immI 
                                                                 >> 0x20U)))))));
        tracep->fullBit(oldp+307,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x21U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 1U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+308,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x21U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 1U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 1U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+309,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x21U)))));
        tracep->fullBit(oldp+310,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 1U)))));
        tracep->fullBit(oldp+311,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+312,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x22U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 2U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+313,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x22U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 2U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 2U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+314,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x22U)))));
        tracep->fullBit(oldp+315,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 2U)))));
        tracep->fullBit(oldp+316,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+317,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x23U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 3U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+318,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x23U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 3U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 3U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+319,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x23U)))));
        tracep->fullBit(oldp+320,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 3U)))));
        tracep->fullBit(oldp+321,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+322,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__0__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+323,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x24U)))),4);
        tracep->fullCData(oldp+324,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 4U)))),4);
        tracep->fullCData(oldp+325,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+326,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+327,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+328,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x24U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 4U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+329,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x24U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 4U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 4U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+330,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x24U)))));
        tracep->fullBit(oldp+331,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 4U)))));
        tracep->fullBit(oldp+332,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x25U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 5U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+333,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x25U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 5U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 5U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+334,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x25U)))));
        tracep->fullBit(oldp+335,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 5U)))));
        tracep->fullBit(oldp+336,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+337,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x26U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 6U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+338,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x26U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 6U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 6U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+339,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x26U)))));
        tracep->fullBit(oldp+340,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 6U)))));
        tracep->fullBit(oldp+341,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+342,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x27U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 7U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+343,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x27U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 7U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 7U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+344,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x27U)))));
        tracep->fullBit(oldp+345,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 7U)))));
        tracep->fullBit(oldp+346,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__0__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+347,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__1__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+348,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+349,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x28U)))),8);
        tracep->fullCData(oldp+350,((0xffU & (IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 8U)))),8);
        tracep->fullBit(oldp+351,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+352,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+353,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+354,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+355,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+356,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+357,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x28U)))),4);
        tracep->fullCData(oldp+358,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 8U)))),4);
        tracep->fullCData(oldp+359,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+360,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+361,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+362,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x28U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 8U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+363,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x28U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 8U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 8U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+364,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x28U)))));
        tracep->fullBit(oldp+365,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 8U)))));
        tracep->fullBit(oldp+366,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x29U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 9U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+367,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x29U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 9U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 9U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+368,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x29U)))));
        tracep->fullBit(oldp+369,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 9U)))));
        tracep->fullBit(oldp+370,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+371,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2aU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xaU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+372,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2aU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0xaU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xaU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+373,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2aU)))));
        tracep->fullBit(oldp+374,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0xaU)))));
        tracep->fullBit(oldp+375,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+376,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2bU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xbU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+377,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2bU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0xbU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xbU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+378,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2bU)))));
        tracep->fullBit(oldp+379,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0xbU)))));
        tracep->fullBit(oldp+380,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+381,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__1__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+382,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x2cU)))),4);
        tracep->fullCData(oldp+383,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xcU)))),4);
        tracep->fullCData(oldp+384,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+385,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+386,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+387,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2cU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xcU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+388,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2cU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0xcU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xcU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+389,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2cU)))));
        tracep->fullBit(oldp+390,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0xcU)))));
        tracep->fullBit(oldp+391,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2dU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xdU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+392,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2dU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0xdU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xdU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+393,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2dU)))));
        tracep->fullBit(oldp+394,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0xdU)))));
        tracep->fullBit(oldp+395,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+396,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2eU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xeU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+397,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2eU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0xeU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xeU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+398,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2eU)))));
        tracep->fullBit(oldp+399,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0xeU)))));
        tracep->fullBit(oldp+400,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+401,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2fU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xfU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+402,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x2fU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0xfU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0xfU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+403,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x2fU)))));
        tracep->fullBit(oldp+404,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0xfU)))));
        tracep->fullBit(oldp+405,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__1__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+406,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__2__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+407,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+408,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x30U)))),8);
        tracep->fullCData(oldp+409,((0xffU & (IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x10U)))),8);
        tracep->fullBit(oldp+410,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                         >> 2U))));
        tracep->fullBit(oldp+411,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+412,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+413,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+414,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+415,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+416,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x30U)))),4);
        tracep->fullCData(oldp+417,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x10U)))),4);
        tracep->fullCData(oldp+418,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+419,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+420,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+421,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x30U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x10U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+422,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x30U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x10U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x10U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+423,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x30U)))));
        tracep->fullBit(oldp+424,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x10U)))));
        tracep->fullBit(oldp+425,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x31U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x11U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+426,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x31U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x11U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x11U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+427,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x31U)))));
        tracep->fullBit(oldp+428,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x11U)))));
        tracep->fullBit(oldp+429,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+430,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x32U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x12U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+431,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x32U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x12U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x12U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+432,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x32U)))));
        tracep->fullBit(oldp+433,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x12U)))));
        tracep->fullBit(oldp+434,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+435,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x33U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x13U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+436,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x33U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x13U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x13U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+437,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x33U)))));
        tracep->fullBit(oldp+438,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x13U)))));
        tracep->fullBit(oldp+439,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+440,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__2__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+441,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x34U)))),4);
        tracep->fullCData(oldp+442,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x14U)))),4);
        tracep->fullCData(oldp+443,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+444,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+445,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+446,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x34U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x14U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+447,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x34U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x14U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x14U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+448,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x34U)))));
        tracep->fullBit(oldp+449,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x14U)))));
        tracep->fullBit(oldp+450,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x35U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x15U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+451,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x35U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x15U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x15U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+452,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x35U)))));
        tracep->fullBit(oldp+453,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x15U)))));
        tracep->fullBit(oldp+454,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+455,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x36U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x16U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+456,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x36U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x16U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x16U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+457,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x36U)))));
        tracep->fullBit(oldp+458,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x16U)))));
        tracep->fullBit(oldp+459,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+460,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x37U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x17U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+461,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x37U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x17U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x17U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+462,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x37U)))));
        tracep->fullBit(oldp+463,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x17U)))));
        tracep->fullBit(oldp+464,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__2__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+465,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__Vcellout__genblk2__BRA__3__KET____DOT__adder8__f),8);
        tracep->fullBit(oldp+466,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+467,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__my_exu__DOT__busa 
                                                      >> 0x38U)))),8);
        tracep->fullCData(oldp+468,((0xffU & (IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x18U)))),8);
        tracep->fullBit(oldp+469,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                         >> 3U))));
        tracep->fullBit(oldp+470,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2));
        tracep->fullCData(oldp+471,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__p),4);
        tracep->fullCData(oldp+472,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__g),4);
        tracep->fullCData(oldp+473,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_low__f),4);
        tracep->fullBit(oldp+474,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 3U))));
        tracep->fullCData(oldp+475,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x38U)))),4);
        tracep->fullCData(oldp+476,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x18U)))),4);
        tracep->fullCData(oldp+477,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__p),4);
        tracep->fullCData(oldp+478,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__g),4);
        tracep->fullCData(oldp+479,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c),4);
        tracep->fullBit(oldp+480,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x38U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x18U))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                            >> 3U)))));
        tracep->fullBit(oldp+481,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x38U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x18U)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                                >> 3U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x18U)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__c) 
                                               >> 3U))))));
        tracep->fullBit(oldp+482,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x38U)))));
        tracep->fullBit(oldp+483,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x18U)))));
        tracep->fullBit(oldp+484,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x39U)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x19U))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c)))));
        tracep->fullBit(oldp+485,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x39U)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x19U)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x19U)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))))));
        tracep->fullBit(oldp+486,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x39U)))));
        tracep->fullBit(oldp+487,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x19U)))));
        tracep->fullBit(oldp+488,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c))));
        tracep->fullBit(oldp+489,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3aU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1aU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+490,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3aU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x1aU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1aU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+491,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3aU)))));
        tracep->fullBit(oldp+492,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x1aU)))));
        tracep->fullBit(oldp+493,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+494,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3bU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1bU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+495,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3bU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x1bU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1bU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+496,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3bU)))));
        tracep->fullBit(oldp+497,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x1bU)))));
        tracep->fullBit(oldp+498,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_low__DOT__c) 
                                         >> 2U))));
        tracep->fullCData(oldp+499,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.genblk2__BRA__3__KET____DOT__adder8__DOT____Vcellout__adder_high__f),4);
        tracep->fullCData(oldp+500,((0xfU & (IData)(
                                                    (vlSelf->top__DOT__my_exu__DOT__busa 
                                                     >> 0x3cU)))),4);
        tracep->fullCData(oldp+501,((0xfU & (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1cU)))),4);
        tracep->fullCData(oldp+502,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__p),4);
        tracep->fullCData(oldp+503,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__g),4);
        tracep->fullCData(oldp+504,(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c),4);
        tracep->fullBit(oldp+505,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3cU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1cU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2)))));
        tracep->fullBit(oldp+506,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3cU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x1cU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1cU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__cin2))))));
        tracep->fullBit(oldp+507,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3cU)))));
        tracep->fullBit(oldp+508,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x1cU)))));
        tracep->fullBit(oldp+509,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3dU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1dU))) 
                                         ^ (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c)))));
        tracep->fullBit(oldp+510,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3dU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x1dU)) 
                                             | (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1dU)) 
                                            & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))))));
        tracep->fullBit(oldp+511,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3dU)))));
        tracep->fullBit(oldp+512,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x1dU)))));
        tracep->fullBit(oldp+513,((1U & (IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c))));
        tracep->fullBit(oldp+514,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3eU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1eU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 1U)))));
        tracep->fullBit(oldp+515,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3eU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x1eU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 1U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1eU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 1U))))));
        tracep->fullBit(oldp+516,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3eU)))));
        tracep->fullBit(oldp+517,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x1eU)))));
        tracep->fullBit(oldp+518,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 1U))));
        tracep->fullBit(oldp+519,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3fU)) 
                                          ^ (IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1fU))) 
                                         ^ ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                            >> 2U)))));
        tracep->fullBit(oldp+520,((1U & (((IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                   >> 0x3fU)) 
                                          & ((IData)(
                                                     ((QData)((IData)(
                                                                      (vlSelf->top__DOT__immI 
                                                                       >> 0x20U))) 
                                                      >> 0x1fU)) 
                                             | ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                                >> 2U))) 
                                         | ((IData)(
                                                    ((QData)((IData)(
                                                                     (vlSelf->top__DOT__immI 
                                                                      >> 0x20U))) 
                                                     >> 0x1fU)) 
                                            & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                               >> 2U))))));
        tracep->fullBit(oldp+521,((1U & (IData)((vlSelf->top__DOT__my_exu__DOT__busa 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+522,((1U & (IData)(((QData)((IData)(
                                                                 (vlSelf->top__DOT__immI 
                                                                  >> 0x20U))) 
                                                 >> 0x1fU)))));
        tracep->fullBit(oldp+523,((1U & ((IData)(vlSymsp->TOP__top__DOT__my_exu__DOT__adder__DOT__adder_high.__PVT__genblk2__BRA__3__KET____DOT__adder8__DOT__adder_high__DOT__c) 
                                         >> 2U))));
        tracep->fullQData(oldp+524,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+526,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+528,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+530,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+532,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+534,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+536,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+538,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+540,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+542,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+544,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+546,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+548,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+550,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+552,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+554,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+556,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+558,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+560,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+562,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+564,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+566,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+568,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+570,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+572,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+574,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+576,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+578,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+580,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+582,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+584,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+586,(vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf[31]),64);
        tracep->fullBit(oldp+588,(vlSelf->clk));
        tracep->fullBit(oldp+589,(vlSelf->rst));
        tracep->fullIData(oldp+590,(vlSelf->instr_i),32);
        tracep->fullQData(oldp+591,(vlSelf->pc),64);
        tracep->fullCData(oldp+593,((0x7fU & vlSelf->instr_i)),7);
        tracep->fullCData(oldp+594,((vlSelf->instr_i 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+595,((0x1fU & (vlSelf->instr_i 
                                              >> 7U))),5);
        tracep->fullCData(oldp+596,((0x1fU & (vlSelf->instr_i 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+597,((0x1fU & (vlSelf->instr_i 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+598,((7U & (vlSelf->instr_i 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+599,(vlSelf->top__DOT__my_ifu__DOT__now_pc),64);
        tracep->fullQData(oldp+601,((4ULL + vlSelf->top__DOT__my_ifu__DOT__now_pc)),64);
        tracep->fullQData(oldp+603,(((0U == (0x1fU 
                                             & (vlSelf->instr_i 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__my_exu__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->instr_i 
                                                >> 0x14U))])),64);
        tracep->fullBit(oldp+605,((1U & (~ (IData)(vlSelf->clk)))));
        tracep->fullIData(oldp+606,(0x40U),32);
        tracep->fullQData(oldp+607,(0x80000000ULL),64);
        tracep->fullBit(oldp+609,(1U));
        tracep->fullQData(oldp+610,(vlSelf->top__DOT__my_idu__DOT__immS),64);
        tracep->fullQData(oldp+612,(vlSelf->top__DOT__my_idu__DOT__immJ),64);
        tracep->fullQData(oldp+614,(vlSelf->top__DOT__my_idu__DOT__immB),64);
        tracep->fullIData(oldp+616,(5U),32);
        tracep->fullBit(oldp+617,(0U));
        tracep->fullIData(oldp+618,(0x20U),32);
    }
}
