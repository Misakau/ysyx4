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
    VlWide<3>/*95:0*/ __Vtemp255;
    VlWide<3>/*95:0*/ __Vtemp256;
    VlWide<3>/*95:0*/ __Vtemp257;
    VlWide<3>/*95:0*/ __Vtemp258;
    VlWide<3>/*95:0*/ __Vtemp259;
    VlWide<3>/*95:0*/ __Vtemp262;
    VlWide<3>/*95:0*/ __Vtemp263;
    VlWide<3>/*95:0*/ __Vtemp264;
    VlWide<3>/*95:0*/ __Vtemp265;
    VlWide<3>/*95:0*/ __Vtemp266;
    VlWide<3>/*95:0*/ __Vtemp269;
    VlWide<3>/*95:0*/ __Vtemp270;
    VlWide<3>/*95:0*/ __Vtemp271;
    VlWide<3>/*95:0*/ __Vtemp272;
    VlWide<3>/*95:0*/ __Vtemp273;
    VlWide<4>/*127:0*/ __Vtemp275;
    VlWide<5>/*159:0*/ __Vtemp277;
    VlWide<5>/*159:0*/ __Vtemp278;
    VlWide<5>/*159:0*/ __Vtemp279;
    VlWide<5>/*159:0*/ __Vtemp280;
    VlWide<5>/*159:0*/ __Vtemp281;
    VlWide<5>/*159:0*/ __Vtemp283;
    VlWide<5>/*159:0*/ __Vtemp284;
    VlWide<5>/*159:0*/ __Vtemp285;
    VlWide<5>/*159:0*/ __Vtemp286;
    VlWide<5>/*159:0*/ __Vtemp287;
    VlWide<3>/*95:0*/ __Vtemp291;
    VlWide<3>/*95:0*/ __Vtemp292;
    VlWide<4>/*127:0*/ __Vtemp298;
    VlWide<3>/*95:0*/ __Vtemp300;
    VlWide<3>/*95:0*/ __Vtemp301;
    VlWide<3>/*95:0*/ __Vtemp302;
    VlWide<3>/*95:0*/ __Vtemp303;
    VlWide<3>/*95:0*/ __Vtemp304;
    VlWide<3>/*95:0*/ __Vtemp307;
    VlWide<3>/*95:0*/ __Vtemp308;
    VlWide<3>/*95:0*/ __Vtemp309;
    VlWide<3>/*95:0*/ __Vtemp310;
    VlWide<3>/*95:0*/ __Vtemp311;
    VlWide<3>/*95:0*/ __Vtemp314;
    VlWide<3>/*95:0*/ __Vtemp315;
    VlWide<3>/*95:0*/ __Vtemp316;
    VlWide<3>/*95:0*/ __Vtemp317;
    VlWide<3>/*95:0*/ __Vtemp318;
    VlWide<3>/*95:0*/ __Vtemp321;
    VlWide<3>/*95:0*/ __Vtemp322;
    VlWide<3>/*95:0*/ __Vtemp323;
    VlWide<3>/*95:0*/ __Vtemp324;
    VlWide<3>/*95:0*/ __Vtemp325;
    VlWide<3>/*95:0*/ __Vtemp328;
    VlWide<3>/*95:0*/ __Vtemp329;
    VlWide<3>/*95:0*/ __Vtemp330;
    VlWide<3>/*95:0*/ __Vtemp331;
    VlWide<3>/*95:0*/ __Vtemp332;
    VlWide<3>/*95:0*/ __Vtemp335;
    VlWide<3>/*95:0*/ __Vtemp336;
    VlWide<3>/*95:0*/ __Vtemp337;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+0,(vlSelf->top__DOT__mycpu__DOT__data_read_i),128);
            tracep->chgWData(oldp+4,(vlSelf->top__DOT__io_sram0_rdata),128);
            tracep->chgWData(oldp+8,(vlSelf->top__DOT__io_sram1_rdata),128);
            tracep->chgWData(oldp+12,(vlSelf->top__DOT__io_sram2_rdata),128);
            tracep->chgWData(oldp+16,(vlSelf->top__DOT__io_sram3_rdata),128);
            tracep->chgCData(oldp+20,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr),6);
            tracep->chgBit(oldp+21,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                    [0U]));
            tracep->chgWData(oldp+22,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram),128);
            tracep->chgWData(oldp+26,(vlSelf->top__DOT__io_sram4_rdata),128);
            tracep->chgBit(oldp+30,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                    [1U]));
            tracep->chgWData(oldp+31,(vlSelf->top__DOT__io_sram5_rdata),128);
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                    [2U]));
            tracep->chgWData(oldp+36,(vlSelf->top__DOT__io_sram6_rdata),128);
            tracep->chgBit(oldp+40,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                    [3U]));
            tracep->chgWData(oldp+41,(vlSelf->top__DOT__io_sram7_rdata),128);
            tracep->chgQData(oldp+45,(vlSelf->top__DOT__mycpu__DOT__rw_addr_o),64);
            tracep->chgBit(oldp+47,(vlSelf->top__DOT__mycpu__DOT__rw_req_o));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__mycpu__DOT__rw_valid_o));
            tracep->chgWData(oldp+49,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o),128);
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r));
            tracep->chgCData(oldp+54,(((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                        ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o)
                                        : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                            ? ((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                                                           >> 2U)))
                                                ? 0xf0U
                                                : 0xfU)
                                            : 0U))),8);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o),4);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o),64);
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o));
            tracep->chgBit(oldp+59,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_valid_o));
            tracep->chgBit(oldp+60,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i));
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o),64);
            tracep->chgBit(oldp+63,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o));
            tracep->chgBit(oldp+64,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o));
            tracep->chgBit(oldp+65,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i));
            tracep->chgBit(oldp+66,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                   >> 3U)))));
            tracep->chgBit(oldp+67,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie 
                                                   >> 7U)))));
            tracep->chgBit(oldp+68,(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt));
            tracep->chgIData(oldp+69,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+70,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+71,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__instr_r),32);
            tracep->chgIData(oldp+72,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__instr_r),32);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__pc_r),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__pc_r),64);
            tracep->chgBit(oldp+83,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                      & ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block)) 
                                         | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o) 
                                            & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r))))) 
                                     & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt)))));
            tracep->chgBit(oldp+84,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
                                     & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy)))));
            tracep->chgBit(oldp+85,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
            tracep->chgBit(oldp+86,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r));
            tracep->chgBit(oldp+87,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
            tracep->chgBit(oldp+88,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r));
            tracep->chgBit(oldp+89,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                     | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))));
            tracep->chgBit(oldp+90,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block));
            tracep->chgBit(oldp+91,(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy));
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o),64);
            tracep->chgCData(oldp+94,((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 7U))),5);
            tracep->chgCData(oldp+95,((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+96,((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))),5);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o),64);
            tracep->chgBit(oldp+99,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o));
            tracep->chgBit(oldp+100,((IData)((3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))));
            tracep->chgBit(oldp+101,((IData)((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))));
            tracep->chgBit(oldp+102,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o));
            tracep->chgBit(oldp+103,((1U & (IData)(
                                                   ((0x73U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)) 
                                                    & ((0x4000U 
                                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                        ? (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))
                                                        : (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3000U 
                                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))))))));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o));
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o));
            tracep->chgCData(oldp+107,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o),2);
            tracep->chgCData(oldp+108,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MemOp_o),3);
            tracep->chgCData(oldp+109,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o),5);
            tracep->chgCData(oldp+110,(((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                         ? 0U : ((0x20U 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                  ? 
                                                 ((0x10U 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                       ? 
                                                      ((1U 
                                                        == 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                         >> 0x19U))
                                                        ? 
                                                       ((0x4000U 
                                                         & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                         ? 0U
                                                         : 
                                                        ((0x2000U 
                                                          & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                          ? 
                                                         ((0x1000U 
                                                           & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                           ? 1U
                                                           : 2U)
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                                           ? 3U
                                                           : 0U)))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)))
                                                   : 0U)
                                                  : 0U))),2);
            tracep->chgCData(oldp+111,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp),3);
            tracep->chgBit(oldp+112,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall));
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret));
            tracep->chgQData(oldp+114,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0xfU)))
                                         ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0xfU))])),64);
            tracep->chgQData(oldp+116,(((0U == (0x1fU 
                                                & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U)))
                                         ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                        [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U))])),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc),64);
            tracep->chgSData(oldp+122,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId),12);
            tracep->chgCData(oldp+123,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r),5);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r),64);
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemWen_r));
            tracep->chgBit(oldp+135,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r));
            tracep->chgBit(oldp+136,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+137,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+138,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r));
            tracep->chgCData(oldp+139,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r),2);
            tracep->chgCData(oldp+140,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemOp_r),3);
            tracep->chgCData(oldp+141,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r),5);
            tracep->chgCData(oldp+142,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r),2);
            tracep->chgCData(oldp+143,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r),3);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r),64);
            tracep->chgBit(oldp+146,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r));
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r),64);
            tracep->chgCData(oldp+151,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r),5);
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r));
            tracep->chgBit(oldp+153,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r));
            tracep->chgBit(oldp+154,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r));
            tracep->chgBit(oldp+155,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r));
            tracep->chgBit(oldp+157,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
                                      >= vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp)));
            tracep->chgBit(oldp+158,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r));
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r),64);
            tracep->chgCData(oldp+161,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r),5);
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Ebreak_r));
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r));
            tracep->chgBit(oldp+164,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd));
            tracep->chgBit(oldp+165,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+166,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+167,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r))));
            tracep->chgBit(oldp+168,(((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
                                       | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0xfU)) 
                                             == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
                                      | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgBit(oldp+169,(((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                        & ((0x1fU & 
                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
                                       | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                                          & ((0x1fU 
                                              & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                 >> 0x14U)) 
                                             == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
                                      | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))));
            tracep->chgCData(oldp+170,((0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)),7);
            tracep->chgCData(oldp+171,((0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r)),7);
            tracep->chgBit(oldp+172,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard));
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard));
            tracep->chgBit(oldp+174,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard));
            tracep->chgBit(oldp+175,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                      & (3U == (0x7fU 
                                                & vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r)))));
            tracep->chgBit(oldp+176,(vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit));
            tracep->chgBit(oldp+177,(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i));
            tracep->chgBit(oldp+178,(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy));
            tracep->chgBit(oldp+179,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                       & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))) 
                                      | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r) 
                                         & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r)))));
            tracep->chgCData(oldp+180,(((1U & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                                                       >> 2U)))
                                         ? 0xf0U : 0xfU)),8);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_dnpc),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_dnpc),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_dnpc),64);
            tracep->chgCData(oldp+187,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o),8);
            tracep->chgBit(oldp+188,((0xaU == (0xfU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                          >> 0x1cU))))));
            tracep->chgCData(oldp+189,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o),4);
            tracep->chgBit(oldp+190,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i));
            tracep->chgBit(oldp+191,(vlSelf->top__DOT__mycpu__DOT__core__DOT__dev_o));
            tracep->chgBit(oldp+192,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_commit_r));
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_pc_r),64);
            tracep->chgIData(oldp+195,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_instr_r),32);
            tracep->chgQData(oldp+196,(vlSelf->top__DOT__mycpu__DOT__core__DOT__next_pc_r),64);
            tracep->chgBit(oldp+198,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))));
            tracep->chgBit(oldp+199,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr));
            tracep->chgBit(oldp+200,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing));
            tracep->chgIData(oldp+201,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r),32);
            tracep->chgQData(oldp+202,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid));
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__start));
            tracep->chgCData(oldp+207,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status),3);
            tracep->chgWData(oldp+208,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+212,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+216,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+220,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3]),128);
            tracep->chgIData(oldp+224,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__i),32);
            tracep->chgCData(oldp+225,((7U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+226,((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+227,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp),3);
            tracep->chgCData(oldp+228,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch),3);
            tracep->chgBit(oldp+229,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt) 
                                      | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall))));
            tracep->chgBit(oldp+230,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            tracep->chgBit(oldp+231,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr));
            tracep->chgBit(oldp+232,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr));
            tracep->chgBit(oldp+233,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr));
            tracep->chgBit(oldp+234,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr));
            tracep->chgCData(oldp+235,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr),4);
            tracep->chgBit(oldp+236,(((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)
                                       ? 1U : 0U)));
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB),64);
            tracep->chgBit(oldp+241,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            tracep->chgBit(oldp+242,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr));
            tracep->chgBit(oldp+243,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr));
            tracep->chgBit(oldp+244,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr));
            tracep->chgBit(oldp+245,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr));
            tracep->chgCData(oldp+246,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr),4);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres),64);
            tracep->chgQData(oldp+249,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                         : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)),64);
            tracep->chgQData(oldp+251,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+253,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+255,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                        ^ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
            tracep->chgQData(oldp+257,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                         ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                             : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                                 ? 
                                                VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                               (0x3fU 
                                                                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                                 : 
                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                 >> 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                         : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                             : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                << 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))),64);
            VL_EXTEND_WQ(65,64, __Vtemp255, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp256, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb);
            VL_ADD_W(3, __Vtemp257, __Vtemp255, __Vtemp256);
            VL_EXTEND_WI(65,1, __Vtemp258, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp259, __Vtemp257, __Vtemp258);
            tracep->chgQData(oldp+259,((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr)
                                                            ? 
                                                           (((((~ (IData)(
                                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                           >> 0x3fU))) 
                                                               & (~ (IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                             >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                         >> 0x3fU))) 
                                                             | (((IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                                          >> 0x3fU)) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                              >> 0x3fU))))) 
                                                            ^ (IData)(
                                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                       >> 0x3fU)))
                                                            : 
                                                           ((1U 
                                                             & __Vtemp259[2U]) 
                                                            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb),64);
            VL_EXTEND_WQ(65,64, __Vtemp262, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp263, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb);
            VL_ADD_W(3, __Vtemp264, __Vtemp262, __Vtemp263);
            VL_EXTEND_WI(65,1, __Vtemp265, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp266, __Vtemp264, __Vtemp265);
            tracep->chgBit(oldp+263,((1U & ((1U & __Vtemp266[2U]) 
                                            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
            tracep->chgBit(oldp+264,((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                    >> 0x3fU)))));
            tracep->chgBit(oldp+265,((1U & ((((~ (IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                          >> 0x3fU))) 
                                              & (~ (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                            >> 0x3fU)))) 
                                             & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                        >> 0x3fU))) 
                                            | (((IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                         >> 0x3fU)) 
                                                & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                             >> 0x3fU))))))));
            VL_EXTEND_WQ(65,64, __Vtemp269, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp270, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb);
            VL_ADD_W(3, __Vtemp271, __Vtemp269, __Vtemp270);
            VL_EXTEND_WI(65,1, __Vtemp272, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp273, __Vtemp271, __Vtemp272);
            tracep->chgBit(oldp+266,((1U & __Vtemp273[2U])));
            tracep->chgIData(oldp+267,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres),32);
            tracep->chgIData(oldp+268,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres),32);
            tracep->chgIData(oldp+269,((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA)),32);
            tracep->chgCData(oldp+270,((0x3fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))),6);
            tracep->chgCData(oldp+271,((0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))),5);
            tracep->chgQData(oldp+272,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                         ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                         : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+274,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                         : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))))),64);
            tracep->chgQData(oldp+276,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres)))
                                         : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                             ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                             : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))),64);
            tracep->chgBit(oldp+278,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul));
            tracep->chgWData(oldp+279,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand),65);
            tracep->chgWData(oldp+282,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier),65);
            tracep->chgQData(oldp+285,((((QData)((IData)(
                                                         vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U])))),64);
            tracep->chgQData(oldp+287,((((QData)((IData)(
                                                         vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U])))),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r),64);
            tracep->chgQData(oldp+291,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r),64);
            tracep->chgBit(oldp+293,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing));
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready));
            tracep->chgBit(oldp+295,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid));
            tracep->chgBit(oldp+296,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid));
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul));
            tracep->chgBit(oldp+298,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_div));
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor),64);
            tracep->chgQData(oldp+303,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient),64);
            tracep->chgQData(oldp+305,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder),64);
            tracep->chgQData(oldp+307,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r),64);
            tracep->chgQData(oldp+309,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r),64);
            tracep->chgBit(oldp+311,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing));
            tracep->chgBit(oldp+312,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r));
            tracep->chgBit(oldp+313,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r));
            tracep->chgBit(oldp+314,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid));
            tracep->chgBit(oldp+315,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div));
            __Vtemp275[0U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U];
            __Vtemp275[1U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U];
            __Vtemp275[2U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U];
            __Vtemp275[3U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U];
            tracep->chgWData(oldp+316,(__Vtemp275),128);
            tracep->chgWData(oldp+320,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result),132);
            tracep->chgWData(oldp+325,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r),132);
            tracep->chgWData(oldp+330,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r),67);
            tracep->chgBit(oldp+333,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r));
            tracep->chgBit(oldp+334,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__mul_fire));
            tracep->chgBit(oldp+335,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__done));
            tracep->chgWData(oldp+336,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result),132);
            tracep->chgCData(oldp+341,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt),7);
            tracep->chgBit(oldp+342,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp277, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
            VL_EXTEND_WI(133,1, __Vtemp278, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            __Vtemp279[0U] = __Vtemp278[0U];
            __Vtemp279[1U] = __Vtemp278[1U];
            __Vtemp279[2U] = __Vtemp278[2U];
            __Vtemp279[3U] = __Vtemp278[3U];
            __Vtemp279[4U] = __Vtemp278[4U];
            VL_ADD_W(5, __Vtemp280, __Vtemp277, __Vtemp279);
            __Vtemp281[0U] = __Vtemp280[0U];
            __Vtemp281[1U] = __Vtemp280[1U];
            __Vtemp281[2U] = __Vtemp280[2U];
            __Vtemp281[3U] = __Vtemp280[3U];
            __Vtemp281[4U] = (0xfU & __Vtemp280[4U]);
            tracep->chgWData(oldp+343,(__Vtemp281),132);
            VL_EXTEND_WW(133,132, __Vtemp283, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
            VL_EXTEND_WW(133,132, __Vtemp284, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
            VL_ADD_W(5, __Vtemp285, __Vtemp283, __Vtemp284);
            VL_EXTEND_WI(133,1, __Vtemp286, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
            VL_ADD_W(5, __Vtemp287, __Vtemp285, __Vtemp286);
            tracep->chgBit(oldp+348,((1U & (__Vtemp287[4U] 
                                            >> 4U))));
            tracep->chgCData(oldp+349,((7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])),3);
            tracep->chgCData(oldp+350,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel),4);
            tracep->chgBit(oldp+351,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+352,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+353,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 2U))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+355,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])));
            tracep->chgBit(oldp+356,((1U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 2U) 
                                            & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+357,((1U & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 2U) 
                                             & (~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                   >> 1U))) 
                                            & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
            tracep->chgBit(oldp+358,((1U & ((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 2U)) 
                                            & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U) 
                                                & (~ 
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                               | ((~ 
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                    >> 1U)) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
            tracep->chgBit(oldp+359,((1U & (((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 2U)) 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                >> 1U)) 
                                            & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))));
            tracep->chgCData(oldp+360,((2U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              << 1U))),2);
            tracep->chgBit(oldp+361,((1U & (~ (((~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 1U))) 
                                               & (~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+362,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgBit(oldp+363,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                            >> 3U))));
            tracep->chgBit(oldp+364,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                            >> 1U))));
            tracep->chgBit(oldp+365,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                            >> 2U))));
            tracep->chgBit(oldp+366,((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel))));
            tracep->chgCData(oldp+367,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])),2);
            tracep->chgBit(oldp+368,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+370,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
            tracep->chgCData(oldp+371,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+372,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+373,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 2U))));
            tracep->chgCData(oldp+374,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+375,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+376,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 3U))));
            tracep->chgCData(oldp+377,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+378,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+379,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 4U))));
            tracep->chgCData(oldp+380,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+381,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+382,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+383,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+384,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+385,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 6U))));
            tracep->chgCData(oldp+386,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+387,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+388,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 7U))));
            tracep->chgCData(oldp+389,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+390,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+391,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 8U))));
            tracep->chgCData(oldp+392,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+393,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+394,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 9U))));
            tracep->chgCData(oldp+395,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+396,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+397,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+398,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+399,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+400,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+401,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+402,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+403,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+404,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+405,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+406,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+407,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+408,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+409,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+410,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+411,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+412,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+413,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+414,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+415,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+416,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+417,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+418,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+419,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+420,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+422,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+423,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+425,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+426,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+428,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+429,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+431,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+432,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+434,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+435,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+436,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+437,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+438,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+440,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+441,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+443,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+444,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+446,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+447,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+448,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+449,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+450,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+452,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+453,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+454,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+455,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+456,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+457,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+458,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+459,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+460,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+461,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+462,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+463,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])));
            tracep->chgCData(oldp+464,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])),2);
            tracep->chgBit(oldp+465,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))))));
            tracep->chgBit(oldp+466,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 1U))));
            tracep->chgCData(oldp+467,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+468,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 2U))));
            tracep->chgCData(oldp+470,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+471,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 3U))));
            tracep->chgCData(oldp+473,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+474,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+475,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 4U))));
            tracep->chgCData(oldp+476,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+477,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+478,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 5U))));
            tracep->chgCData(oldp+479,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+480,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+481,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 6U))));
            tracep->chgCData(oldp+482,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+483,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+484,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 7U))));
            tracep->chgCData(oldp+485,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+486,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+487,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 8U))));
            tracep->chgCData(oldp+488,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+489,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+490,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 9U))));
            tracep->chgCData(oldp+491,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+492,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+493,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+494,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+495,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+496,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+497,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+498,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+499,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+500,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+501,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+502,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+503,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+504,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+505,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+506,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+507,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+508,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+509,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+510,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+511,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+512,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+513,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+514,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+515,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+516,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+518,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+519,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+520,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+521,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+522,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+524,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+525,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+526,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+527,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+528,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+529,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+530,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+531,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+532,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+533,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+534,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+536,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+537,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+538,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+539,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+540,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+542,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+543,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+544,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+545,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+546,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+547,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+548,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+549,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+550,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+551,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+552,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+553,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+554,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+555,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+556,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+557,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+558,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+559,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])));
            tracep->chgCData(oldp+560,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])),2);
            tracep->chgBit(oldp+561,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))))));
            tracep->chgBit(oldp+562,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 1U))));
            tracep->chgCData(oldp+563,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+564,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+565,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 2U))));
            tracep->chgCData(oldp+566,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+567,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+568,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 3U))));
            tracep->chgCData(oldp+569,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+570,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+571,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+572,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+573,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+574,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+575,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+576,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+577,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 6U))));
            tracep->chgCData(oldp+578,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+579,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+580,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 7U))));
            tracep->chgCData(oldp+581,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+582,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+583,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 8U))));
            tracep->chgCData(oldp+584,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+585,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+586,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 9U))));
            tracep->chgCData(oldp+587,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+588,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+589,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+590,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+591,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+592,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+593,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+594,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+595,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+596,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+597,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+598,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+599,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+600,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+601,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+602,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+603,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+604,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+605,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+606,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+607,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+608,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+609,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+610,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+611,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+612,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+613,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+614,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+615,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+616,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+617,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+618,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+619,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+620,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+621,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+622,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+623,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+624,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+625,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+626,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+627,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+628,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+629,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+630,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+631,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+632,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+633,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+634,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+635,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+636,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+637,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+638,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+639,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+640,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+641,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+642,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+643,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+644,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+645,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+646,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+647,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+648,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+649,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+650,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+651,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+652,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+653,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+654,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+655,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])));
            tracep->chgCData(oldp+656,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])),2);
            tracep->chgBit(oldp+657,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))))));
            tracep->chgBit(oldp+658,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 1U))));
            tracep->chgCData(oldp+659,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+660,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+661,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 2U))));
            tracep->chgCData(oldp+662,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+663,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+664,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 3U))));
            tracep->chgCData(oldp+665,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 3U))),2);
            tracep->chgBit(oldp+666,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 4U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 3U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 4U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 3U))))))));
            tracep->chgBit(oldp+667,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 4U))));
            tracep->chgCData(oldp+668,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 4U))),2);
            tracep->chgBit(oldp+669,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 5U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 4U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 5U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 4U))))))));
            tracep->chgBit(oldp+670,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 5U))));
            tracep->chgCData(oldp+671,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 5U))),2);
            tracep->chgBit(oldp+672,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 6U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 5U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 6U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 5U))))))));
            tracep->chgBit(oldp+673,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 6U))));
            tracep->chgCData(oldp+674,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 6U))),2);
            tracep->chgBit(oldp+675,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 7U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 6U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 7U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 6U))))))));
            tracep->chgBit(oldp+676,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 7U))));
            tracep->chgCData(oldp+677,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 7U))),2);
            tracep->chgBit(oldp+678,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 8U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 7U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 8U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 7U))))))));
            tracep->chgBit(oldp+679,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 8U))));
            tracep->chgCData(oldp+680,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 8U))),2);
            tracep->chgBit(oldp+681,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 9U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 8U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 9U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 8U))))))));
            tracep->chgBit(oldp+682,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 9U))));
            tracep->chgCData(oldp+683,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 9U))),2);
            tracep->chgBit(oldp+684,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xaU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 9U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xaU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 9U))))))));
            tracep->chgBit(oldp+685,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+686,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xaU))),2);
            tracep->chgBit(oldp+687,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xbU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xaU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xbU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xaU))))))));
            tracep->chgBit(oldp+688,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xbU))));
            tracep->chgCData(oldp+689,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xbU))),2);
            tracep->chgBit(oldp+690,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xcU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xbU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xcU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xbU))))))));
            tracep->chgBit(oldp+691,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xcU))));
            tracep->chgCData(oldp+692,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xcU))),2);
            tracep->chgBit(oldp+693,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xdU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xcU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xdU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xcU))))))));
            tracep->chgBit(oldp+694,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xdU))));
            tracep->chgCData(oldp+695,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xdU))),2);
            tracep->chgBit(oldp+696,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xeU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xdU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xeU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xdU))))))));
            tracep->chgBit(oldp+697,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xeU))));
            tracep->chgCData(oldp+698,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xeU))),2);
            tracep->chgBit(oldp+699,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xfU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xeU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0xfU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xeU))))))));
            tracep->chgBit(oldp+700,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0xfU))));
            tracep->chgCData(oldp+701,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0xfU))),2);
            tracep->chgBit(oldp+702,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x10U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0xfU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x10U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xfU))))))));
            tracep->chgBit(oldp+703,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+704,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x10U))),2);
            tracep->chgBit(oldp+705,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x11U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x10U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x11U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x10U))))))));
            tracep->chgBit(oldp+706,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+707,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x11U))),2);
            tracep->chgBit(oldp+708,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x12U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x11U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x12U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x11U))))))));
            tracep->chgBit(oldp+709,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+710,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x12U))),2);
            tracep->chgBit(oldp+711,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x13U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x12U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x13U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x12U))))))));
            tracep->chgBit(oldp+712,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+713,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x13U))),2);
            tracep->chgBit(oldp+714,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x14U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x13U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x14U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x13U))))))));
            tracep->chgBit(oldp+715,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x14U))));
            tracep->chgCData(oldp+716,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x14U))),2);
            tracep->chgBit(oldp+717,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x15U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x14U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x15U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x14U))))))));
            tracep->chgBit(oldp+718,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x15U))));
            tracep->chgCData(oldp+719,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x15U))),2);
            tracep->chgBit(oldp+720,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x16U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x15U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x16U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x15U))))))));
            tracep->chgBit(oldp+721,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+722,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x16U))),2);
            tracep->chgBit(oldp+723,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x17U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x16U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x17U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x16U))))))));
            tracep->chgBit(oldp+724,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x17U))));
            tracep->chgCData(oldp+725,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x17U))),2);
            tracep->chgBit(oldp+726,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x18U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x17U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x18U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x17U))))))));
            tracep->chgBit(oldp+727,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x18U))));
            tracep->chgCData(oldp+728,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x18U))),2);
            tracep->chgBit(oldp+729,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x19U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x18U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x19U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x18U))))))));
            tracep->chgBit(oldp+730,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x19U))));
            tracep->chgCData(oldp+731,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x19U))),2);
            tracep->chgBit(oldp+732,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x19U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1aU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x19U))))))));
            tracep->chgBit(oldp+733,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1aU))));
            tracep->chgCData(oldp+734,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1aU))),2);
            tracep->chgBit(oldp+735,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1aU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1bU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1aU))))))));
            tracep->chgBit(oldp+736,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1bU))));
            tracep->chgCData(oldp+737,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1bU))),2);
            tracep->chgBit(oldp+738,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1bU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1cU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1bU))))))));
            tracep->chgBit(oldp+739,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+740,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1cU))),2);
            tracep->chgBit(oldp+741,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1cU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1dU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1cU))))))));
            tracep->chgBit(oldp+742,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1dU))));
            tracep->chgCData(oldp+743,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1dU))),2);
            tracep->chgBit(oldp+744,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1dU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1eU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1dU))))))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            >> 0x1eU))));
            tracep->chgCData(oldp+746,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                        >> 0x1eU)),2);
            tracep->chgBit(oldp+747,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1eU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                       >> 0x1fU)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1eU))))))));
            tracep->chgBit(oldp+748,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+749,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                               << 1U) 
                                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                 >> 0x1fU)))),2);
            tracep->chgBit(oldp+750,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                         >> 0x1fU))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1fU))))))));
            tracep->chgBit(oldp+751,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])));
            tracep->chgCData(oldp+752,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])),2);
            tracep->chgBit(oldp+753,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 1U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 1U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))))));
            tracep->chgBit(oldp+754,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 1U))));
            tracep->chgCData(oldp+755,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 1U))),2);
            tracep->chgBit(oldp+756,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 2U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                         >> 1U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                                                    >> 2U))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 1U))))))));
            tracep->chgBit(oldp+757,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 2U))));
            tracep->chgCData(oldp+758,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                              >> 2U))),2);
            tracep->chgBit(oldp+759,((1U & (~ ((((~ 
                                                  (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 3U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 3U)))) 
                                                 & (~ 
                                                    (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                         >> 2U))))) 
                                                & (~ 
                                                   (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                     >> 2U) 
                                                    & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                       >> 3U)))) 
                                               & (~ 
                                                  ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 2U))))))));
            tracep->chgBit(oldp+760,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            >> 3U))));
            tracep->chgBit(oldp+761,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r));
            tracep->chgCData(oldp+762,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt),7);
            tracep->chgWData(oldp+763,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r),128);
            tracep->chgQData(oldp+767,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r),64);
            tracep->chgQData(oldp+769,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r),64);
            tracep->chgQData(oldp+771,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r),64);
            tracep->chgBit(oldp+773,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s));
            tracep->chgBit(oldp+774,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s));
            tracep->chgQData(oldp+775,((1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend))),64);
            tracep->chgQData(oldp+777,((1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor))),64);
            tracep->chgQData(oldp+779,((1ULL + ((((QData)((IData)(
                                                                  vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                                     << 1U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                                       >> 0x1fU))) 
                                                + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)))),64);
            tracep->chgBit(oldp+781,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s));
            tracep->chgBit(oldp+782,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__div_fire));
            tracep->chgBit(oldp+783,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done));
            __Vtemp291[0U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                               << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                         >> 0x1fU));
            __Vtemp291[1U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                               << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                         >> 0x1fU));
            __Vtemp291[2U] = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                              >> 0x1fU);
            tracep->chgWData(oldp+784,(__Vtemp291),65);
            __Vtemp292[0U] = (IData)((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
            __Vtemp292[1U] = (IData)(((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                                      >> 0x20U));
            __Vtemp292[2U] = 1U;
            tracep->chgWData(oldp+787,(__Vtemp292),65);
            tracep->chgQData(oldp+790,(((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                         ? ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 0ULL
                                                 : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                                                 : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                                         : ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout
                                                 : 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                         >> 0xfU))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                                             : ((1U 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                                                 : 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))),64);
            tracep->chgQData(oldp+792,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout),64);
            tracep->chgCData(oldp+794,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask),8);
            tracep->chgCData(oldp+795,((7U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))),3);
            tracep->chgIData(oldp+796,((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)),32);
            tracep->chgSData(oldp+797,((0xffffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r))),16);
            tracep->chgCData(oldp+798,((0xffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r))),8);
            tracep->chgQData(oldp+799,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain),64);
            tracep->chgBit(oldp+801,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))));
            tracep->chgBit(oldp+802,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready));
            tracep->chgQData(oldp+803,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read),64);
            tracep->chgBit(oldp+805,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing));
            tracep->chgBit(oldp+806,((2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 0x18U))))));
            tracep->chgQData(oldp+807,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp),64);
            tracep->chgIData(oldp+809,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw),32);
            tracep->chgSData(oldp+810,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah),16);
            tracep->chgCData(oldp+811,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab),8);
            tracep->chgQData(oldp+812,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime),64);
            tracep->chgCData(oldp+814,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt),4);
            tracep->chgCData(oldp+815,((0xffU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+816,((0xfU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))),4);
            tracep->chgQData(oldp+817,((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                        >> 0xcU)),52);
            tracep->chgBit(oldp+819,((((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__V
                                       [(0xffU & (IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                          >> 4U)))]) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__tag
                                         [(0xffU & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                            >> 4U)))] 
                                         == (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xcU)))));
            tracep->chgCData(oldp+820,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt),8);
            tracep->chgCData(oldp+821,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status),4);
            tracep->chgWData(oldp+822,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen),128);
            tracep->chgWData(oldp+826,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0]),128);
            tracep->chgWData(oldp+830,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1]),128);
            tracep->chgWData(oldp+834,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2]),128);
            tracep->chgWData(oldp+838,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3]),128);
            tracep->chgBit(oldp+842,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0]));
            tracep->chgBit(oldp+843,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1]));
            tracep->chgBit(oldp+844,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2]));
            tracep->chgBit(oldp+845,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3]));
            tracep->chgIData(oldp+846,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i),32);
            __Vtemp298[0U] = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][0U] 
                                 & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
            __Vtemp298[1U] = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][1U] 
                                 & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
            __Vtemp298[2U] = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][2U] 
                                 & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
            __Vtemp298[3U] = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                                        >> 0x20U)) 
                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
                              | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                                 [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                 >> 0xaU)))][3U] 
                                 & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
            tracep->chgWData(oldp+847,(__Vtemp298),128);
            tracep->chgQData(oldp+851,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0]),64);
            tracep->chgQData(oldp+853,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[1]),64);
            tracep->chgQData(oldp+855,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[2]),64);
            tracep->chgQData(oldp+857,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[3]),64);
            tracep->chgQData(oldp+859,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[4]),64);
            tracep->chgQData(oldp+861,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[5]),64);
            tracep->chgQData(oldp+863,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[6]),64);
            tracep->chgQData(oldp+865,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[7]),64);
            tracep->chgQData(oldp+867,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[8]),64);
            tracep->chgQData(oldp+869,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[9]),64);
            tracep->chgQData(oldp+871,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[10]),64);
            tracep->chgQData(oldp+873,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[11]),64);
            tracep->chgQData(oldp+875,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[12]),64);
            tracep->chgQData(oldp+877,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[13]),64);
            tracep->chgQData(oldp+879,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[14]),64);
            tracep->chgQData(oldp+881,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[15]),64);
            tracep->chgQData(oldp+883,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[16]),64);
            tracep->chgQData(oldp+885,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[17]),64);
            tracep->chgQData(oldp+887,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[18]),64);
            tracep->chgQData(oldp+889,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[19]),64);
            tracep->chgQData(oldp+891,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[20]),64);
            tracep->chgQData(oldp+893,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[21]),64);
            tracep->chgQData(oldp+895,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[22]),64);
            tracep->chgQData(oldp+897,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[23]),64);
            tracep->chgQData(oldp+899,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[24]),64);
            tracep->chgQData(oldp+901,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[25]),64);
            tracep->chgQData(oldp+903,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[26]),64);
            tracep->chgQData(oldp+905,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[27]),64);
            tracep->chgQData(oldp+907,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[28]),64);
            tracep->chgQData(oldp+909,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[29]),64);
            tracep->chgQData(oldp+911,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[30]),64);
            tracep->chgQData(oldp+913,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[31]),64);
            tracep->chgIData(oldp+915,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__i),32);
            tracep->chgBit(oldp+916,(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall));
            tracep->chgBit(oldp+917,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r))));
            tracep->chgBit(oldp+918,(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt));
            tracep->chgQData(oldp+919,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause),64);
            tracep->chgQData(oldp+921,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus),64);
            tracep->chgQData(oldp+923,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch),64);
            tracep->chgQData(oldp+925,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie),64);
            tracep->chgQData(oldp+927,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip),64);
            tracep->chgCData(oldp+929,(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status),2);
            tracep->chgCData(oldp+930,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status),3);
            tracep->chgCData(oldp+931,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status),3);
            tracep->chgBit(oldp+932,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))));
            tracep->chgBit(oldp+933,((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))));
            tracep->chgBit(oldp+934,((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))));
            tracep->chgBit(oldp+935,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status))));
            tracep->chgBit(oldp+936,((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status))));
            tracep->chgBit(oldp+937,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r));
            tracep->chgBit(oldp+938,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r));
            tracep->chgCData(oldp+939,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt),8);
            tracep->chgCData(oldp+940,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt),8);
            tracep->chgCData(oldp+941,(((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o))
                                         ? 0U : ((2U 
                                                  == (IData)(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o))
                                                  ? 1U
                                                  : 2U))),3);
            tracep->chgBit(oldp+942,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                            [0U]))));
            tracep->chgBit(oldp+943,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                            [1U]))));
            tracep->chgBit(oldp+944,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                            [2U]))));
            tracep->chgBit(oldp+945,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                            [3U]))));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+946,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                      & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))));
            tracep->chgQData(oldp+947,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)) 
                                            == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                                         ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                                             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                                             : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res)
                                         : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                                             & ((0x1fU 
                                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                    >> 0xfU)) 
                                                == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))
                                             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o
                                             : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                                                 & ((0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0xfU)) 
                                                    == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                                                 ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r
                                                 : 0ULL)))),64);
            tracep->chgQData(oldp+949,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                         & ((0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)) 
                                            == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r)))
                                         ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r)
                                             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r
                                             : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res)
                                         : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                                             & ((0x1fU 
                                                 & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))
                                             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o
                                             : (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                                                 & ((0x1fU 
                                                     & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r)))
                                                 ? vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r
                                                 : 0ULL)))),64);
            tracep->chgBit(oldp+951,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                       & (0xaU == (0xfU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                              >> 0x1cU))))) 
                                      & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men)))));
            tracep->chgBit(oldp+952,(((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                                      & (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                          & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))) 
                                         | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r) 
                                            & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))))));
            tracep->chgBit(oldp+953,((((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
                                       & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__V
                                       [(0xffU & (IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                          >> 4U)))]) 
                                      & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__tag
                                         [(0xffU & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                            >> 4U)))] 
                                         == (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                             >> 0xcU)))));
            tracep->chgQData(oldp+954,(((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
                                         ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o
                                         : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
                                             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o
                                             : 4ULL))),64);
            VL_EXTEND_WQ(65,64, __Vtemp300, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp301, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
            VL_ADD_W(3, __Vtemp302, __Vtemp300, __Vtemp301);
            VL_EXTEND_WI(65,1, __Vtemp303, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp304, __Vtemp302, __Vtemp303);
            tracep->chgQData(oldp+956,(((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                         ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                             : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                         : (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                                ? 
                                                               (((((~ (IData)(
                                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                               >> 0x3fU))) 
                                                                   & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                             >> 0x3fU))) 
                                                                 | (((IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                              >> 0x3fU)) 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                    & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                ^ (IData)(
                                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                           >> 0x3fU)))
                                                                : 
                                                               ((1U 
                                                                 & __Vtemp304[2U]) 
                                                                ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))),64);
            tracep->chgQData(oldp+958,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                         : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)),64);
            VL_EXTEND_WQ(65,64, __Vtemp307, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp308, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
            VL_ADD_W(3, __Vtemp309, __Vtemp307, __Vtemp308);
            VL_EXTEND_WI(65,1, __Vtemp310, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp311, __Vtemp309, __Vtemp310);
            tracep->chgQData(oldp+960,((QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                            ? 
                                                           (((((~ (IData)(
                                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                           >> 0x3fU))) 
                                                               & (~ (IData)(
                                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                             >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                         >> 0x3fU))) 
                                                             | (((IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                          >> 0x3fU)) 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                            >> 0x3fU))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                              >> 0x3fU))))) 
                                                            ^ (IData)(
                                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                       >> 0x3fU)))
                                                            : 
                                                           ((1U 
                                                             & __Vtemp311[2U]) 
                                                            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr))))))),64);
            VL_EXTEND_WQ(65,64, __Vtemp314, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp315, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
            VL_ADD_W(3, __Vtemp316, __Vtemp314, __Vtemp315);
            VL_EXTEND_WI(65,1, __Vtemp317, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp318, __Vtemp316, __Vtemp317);
            tracep->chgBit(oldp+962,((1U & __Vtemp318[2U])));
            VL_EXTEND_WQ(65,64, __Vtemp321, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp322, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
            VL_ADD_W(3, __Vtemp323, __Vtemp321, __Vtemp322);
            VL_EXTEND_WI(65,1, __Vtemp324, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp325, __Vtemp323, __Vtemp324);
            tracep->chgBit(oldp+963,((1U & ((1U & __Vtemp325[2U]) 
                                            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))));
            VL_EXTEND_WQ(65,64, __Vtemp328, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
            VL_EXTEND_WQ(65,64, __Vtemp329, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
            VL_ADD_W(3, __Vtemp330, __Vtemp328, __Vtemp329);
            VL_EXTEND_WI(65,1, __Vtemp331, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
            VL_ADD_W(3, __Vtemp332, __Vtemp330, __Vtemp331);
            tracep->chgBit(oldp+964,((1U & (IData)(
                                                   ((0U 
                                                     == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr))
                                                     ? 
                                                    ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                                      : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                                     : (QData)((IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr)
                                                                            ? 
                                                                           (((((~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU))) 
                                                                               & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU)))) 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))) 
                                                                             | (((IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                                                >> 0x3fU)) 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                                                >> 0x3fU))) 
                                                                                & (~ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU))))) 
                                                                            ^ (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x3fU)))
                                                                            : 
                                                                           ((1U 
                                                                             & __Vtemp332[2U]) 
                                                                            ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))))));
            tracep->chgQData(oldp+965,(((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r))
                                         ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)))
                                             : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo)
                                         : (((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
                                             ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                             : (((QData)((IData)(
                                                                 vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U])))))),64);
            tracep->chgQData(oldp+967,((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                         & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                         ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                         : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient)),64);
            tracep->chgQData(oldp+969,((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                         & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                         ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                         : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder)),64);
            tracep->chgQData(oldp+971,((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                         & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
                                         ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                         : (((QData)((IData)(
                                                             vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U]))))),64);
            tracep->chgQData(oldp+973,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)
                                         ? ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                             ? ((2U 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 0ULL
                                                  : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                  ? (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                                                  : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                  ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout
                                                  : 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                          >> 0xfU))))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                          >> 7U))))) 
                                                   << 8U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                                                  : 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                         : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r)),64);
            tracep->chgBit(oldp+975,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men) 
                                      & (2U == (0xffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                           >> 0x18U)))))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgCData(oldp+976,((0x3fU & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                         >> 4U)))),6);
            tracep->chgBit(oldp+977,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [0U]));
            tracep->chgBit(oldp+978,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [1U]));
            tracep->chgBit(oldp+979,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [2U]));
            tracep->chgBit(oldp+980,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                     [3U]));
            tracep->chgBit(oldp+981,(vlSelf->top__DOT__mycpu__DOT__rw_dev_o));
            tracep->chgIData(oldp+982,(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o),32);
            tracep->chgBit(oldp+983,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en));
            tracep->chgBit(oldp+984,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en));
            tracep->chgBit(oldp+985,((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))));
            tracep->chgBit(oldp+986,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush));
            tracep->chgBit(oldp+987,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy));
            tracep->chgQData(oldp+988,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o),64);
            tracep->chgQData(oldp+990,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o),64);
            tracep->chgQData(oldp+992,((0xfffffffffffffffeULL 
                                        & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res)),64);
            tracep->chgQData(oldp+994,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res),64);
            tracep->chgQData(oldp+996,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o),64);
            tracep->chgBit(oldp+998,(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt));
            tracep->chgBit(oldp+999,((3U == (0xfU & (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                             >> 0x1cU))))));
            tracep->chgBit(oldp+1000,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen));
            tracep->chgBit(oldp+1001,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg));
            tracep->chgBit(oldp+1002,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men));
            tracep->chgQData(oldp+1003,(vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain),64);
            tracep->chgQData(oldp+1005,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc),64);
            tracep->chgBit(oldp+1007,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush));
            tracep->chgCData(oldp+1008,((0xffU & (IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                          >> 4U)))),8);
            tracep->chgCData(oldp+1009,((0xfU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc))),4);
            tracep->chgQData(oldp+1010,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                         >> 0xcU)),52);
            tracep->chgCData(oldp+1012,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status),3);
            tracep->chgBit(oldp+1013,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
            tracep->chgBit(oldp+1014,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
            tracep->chgBit(oldp+1015,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
            tracep->chgBit(oldp+1016,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
            tracep->chgQData(oldp+1017,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res),64);
            tracep->chgQData(oldp+1019,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA),64);
            tracep->chgBit(oldp+1021,(((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                        ? 1U : 0U)));
            tracep->chgQData(oldp+1022,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres),64);
            tracep->chgQData(oldp+1024,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb),64);
            tracep->chgBit(oldp+1026,((1U & (IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1027,((1U & ((((~ (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                         >> 0x3fU))) 
                                             | (((IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                              >> 0x3fU))))))));
            tracep->chgBit(oldp+1028,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA));
            tracep->chgBit(oldp+1029,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB));
            tracep->chgQData(oldp+1030,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA),64);
            tracep->chgQData(oldp+1032,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB),64);
            tracep->chgQData(oldp+1034,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc),64);
            VL_EXTEND_WQ(65,64, __Vtemp335, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA);
            VL_EXTEND_WQ(65,64, __Vtemp336, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB);
            VL_ADD_W(3, __Vtemp337, __Vtemp335, __Vtemp336);
            tracep->chgBit(oldp+1036,((1U & __Vtemp337[2U])));
            tracep->chgBit(oldp+1037,((1U & ((((~ (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                           >> 0x3fU))) 
                                               & (~ (IData)(
                                                            (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                             >> 0x3fU)))) 
                                              & (IData)(
                                                        (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                         >> 0x3fU))) 
                                             | (((IData)(
                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA 
                                                          >> 0x3fU)) 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB 
                                                            >> 0x3fU))) 
                                                & (~ (IData)(
                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                              >> 0x3fU))))))));
            tracep->chgBit(oldp+1038,((1U & (IData)(
                                                    (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                     >> 0x3fU)))));
            tracep->chgBit(oldp+1039,(((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc)
                                        ? 1U : 0U)));
            tracep->chgQData(oldp+1040,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo),64);
            tracep->chgBit(oldp+1042,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem));
            tracep->chgBit(oldp+1043,((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)))));
            tracep->chgBit(oldp+1044,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid));
            tracep->chgCData(oldp+1045,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status),4);
            tracep->chgQData(oldp+1046,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin),64);
            tracep->chgCData(oldp+1048,(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__next_status),2);
            tracep->chgBit(oldp+1049,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire));
            tracep->chgBit(oldp+1050,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire));
            tracep->chgBit(oldp+1051,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_last));
            tracep->chgBit(oldp+1052,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire));
            tracep->chgBit(oldp+1053,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last));
            tracep->chgCData(oldp+1054,(((IData)(vlSelf->top__DOT__mycpu__DOT__rw_dev_o)
                                          ? 0U : 1U)),8);
            tracep->chgCData(oldp+1055,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__axi_size),3);
            tracep->chgBit(oldp+1056,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                             [0U]))));
            tracep->chgBit(oldp+1057,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                             [1U]))));
            tracep->chgBit(oldp+1058,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                             [2U]))));
            tracep->chgBit(oldp+1059,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                             [3U]))));
        }
        tracep->chgBit(oldp+1060,(vlSelf->clk));
        tracep->chgBit(oldp+1061,(vlSelf->rst));
        tracep->chgIData(oldp+1062,(vlSelf->instr),32);
        tracep->chgQData(oldp+1063,(vlSelf->pc),64);
        tracep->chgBit(oldp+1065,(vlSelf->wb_commit));
        tracep->chgQData(oldp+1066,(vlSelf->wb_pc),64);
        tracep->chgIData(oldp+1068,(vlSelf->wb_instr),32);
        tracep->chgQData(oldp+1069,(vlSelf->next_pc),64);
        tracep->chgBit(oldp+1071,(vlSelf->wb_dev_o));
        tracep->chgBit(oldp+1072,(vlSelf->axi_aw_ready_i));
        tracep->chgBit(oldp+1073,(vlSelf->axi_aw_valid_o));
        tracep->chgIData(oldp+1074,(vlSelf->axi_aw_addr_o),32);
        tracep->chgCData(oldp+1075,(vlSelf->axi_aw_prot_o),3);
        tracep->chgCData(oldp+1076,(vlSelf->axi_aw_id_o),4);
        tracep->chgBit(oldp+1077,(vlSelf->axi_aw_user_o));
        tracep->chgCData(oldp+1078,(vlSelf->axi_aw_len_o),8);
        tracep->chgCData(oldp+1079,(vlSelf->axi_aw_size_o),3);
        tracep->chgCData(oldp+1080,(vlSelf->axi_aw_burst_o),2);
        tracep->chgBit(oldp+1081,(vlSelf->axi_aw_lock_o));
        tracep->chgCData(oldp+1082,(vlSelf->axi_aw_cache_o),4);
        tracep->chgCData(oldp+1083,(vlSelf->axi_aw_qos_o),4);
        tracep->chgCData(oldp+1084,(vlSelf->axi_aw_region_o),4);
        tracep->chgBit(oldp+1085,(vlSelf->axi_w_ready_i));
        tracep->chgBit(oldp+1086,(vlSelf->axi_w_valid_o));
        tracep->chgQData(oldp+1087,(vlSelf->axi_w_data_o),64);
        tracep->chgCData(oldp+1089,(vlSelf->axi_w_strb_o),8);
        tracep->chgBit(oldp+1090,(vlSelf->axi_w_last_o));
        tracep->chgBit(oldp+1091,(vlSelf->axi_w_user_o));
        tracep->chgBit(oldp+1092,(vlSelf->axi_b_ready_o));
        tracep->chgBit(oldp+1093,(vlSelf->axi_b_valid_i));
        tracep->chgCData(oldp+1094,(vlSelf->axi_b_resp_i),2);
        tracep->chgCData(oldp+1095,(vlSelf->axi_b_id_i),4);
        tracep->chgBit(oldp+1096,(vlSelf->axi_b_user_i));
        tracep->chgBit(oldp+1097,(vlSelf->axi_ar_ready_i));
        tracep->chgBit(oldp+1098,(vlSelf->axi_ar_valid_o));
        tracep->chgIData(oldp+1099,(vlSelf->axi_ar_addr_o),32);
        tracep->chgCData(oldp+1100,(vlSelf->axi_ar_prot_o),3);
        tracep->chgCData(oldp+1101,(vlSelf->axi_ar_id_o),4);
        tracep->chgBit(oldp+1102,(vlSelf->axi_ar_user_o));
        tracep->chgCData(oldp+1103,(vlSelf->axi_ar_len_o),8);
        tracep->chgCData(oldp+1104,(vlSelf->axi_ar_size_o),3);
        tracep->chgCData(oldp+1105,(vlSelf->axi_ar_burst_o),2);
        tracep->chgBit(oldp+1106,(vlSelf->axi_ar_lock_o));
        tracep->chgCData(oldp+1107,(vlSelf->axi_ar_cache_o),4);
        tracep->chgCData(oldp+1108,(vlSelf->axi_ar_qos_o),4);
        tracep->chgCData(oldp+1109,(vlSelf->axi_ar_region_o),4);
        tracep->chgBit(oldp+1110,(vlSelf->axi_r_ready_o));
        tracep->chgBit(oldp+1111,(vlSelf->axi_r_valid_i));
        tracep->chgCData(oldp+1112,(vlSelf->axi_r_resp_i),2);
        tracep->chgQData(oldp+1113,(vlSelf->axi_r_data_i),64);
        tracep->chgBit(oldp+1115,(vlSelf->axi_r_last_i));
        tracep->chgCData(oldp+1116,(vlSelf->axi_r_id_i),4);
        tracep->chgBit(oldp+1117,(vlSelf->axi_r_user_i));
        tracep->chgBit(oldp+1118,((1U & (~ ((((IData)(vlSelf->rst) 
                                              | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                                 | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))) 
                                             | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                                            | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))))));
        tracep->chgBit(oldp+1119,((((~ (IData)(vlSelf->rst)) 
                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r)) 
                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))));
        tracep->chgBit(oldp+1120,(((IData)(vlSelf->axi_aw_ready_i) 
                                   & (IData)(vlSelf->axi_aw_valid_o))));
        tracep->chgBit(oldp+1121,(((IData)(vlSelf->axi_ar_ready_i) 
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
