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
        tracep->declBit(c+1061,"clk", false,-1);
        tracep->declBit(c+1062,"rst", false,-1);
        tracep->declBus(c+1063,"instr", false,-1, 31,0);
        tracep->declQuad(c+1064,"pc", false,-1, 63,0);
        tracep->declBit(c+1066,"wb_commit", false,-1);
        tracep->declQuad(c+1067,"wb_pc", false,-1, 63,0);
        tracep->declBus(c+1069,"wb_instr", false,-1, 31,0);
        tracep->declQuad(c+1070,"next_pc", false,-1, 63,0);
        tracep->declBit(c+1072,"wb_dev_o", false,-1);
        tracep->declBit(c+1073,"axi_aw_ready_i", false,-1);
        tracep->declBit(c+1074,"axi_aw_valid_o", false,-1);
        tracep->declBus(c+1075,"axi_aw_addr_o", false,-1, 31,0);
        tracep->declBus(c+1076,"axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1077,"axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1078,"axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1079,"axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1080,"axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1081,"axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1082,"axi_aw_lock_o", false,-1);
        tracep->declBus(c+1083,"axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1084,"axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1085,"axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1086,"axi_w_ready_i", false,-1);
        tracep->declBit(c+1087,"axi_w_valid_o", false,-1);
        tracep->declQuad(c+1088,"axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1090,"axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1091,"axi_w_last_o", false,-1);
        tracep->declBus(c+1092,"axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1093,"axi_b_ready_o", false,-1);
        tracep->declBit(c+1094,"axi_b_valid_i", false,-1);
        tracep->declBus(c+1095,"axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1096,"axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1097,"axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1098,"axi_ar_ready_i", false,-1);
        tracep->declBit(c+1099,"axi_ar_valid_o", false,-1);
        tracep->declBus(c+1100,"axi_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+1101,"axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1102,"axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1103,"axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1104,"axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1105,"axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1106,"axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1107,"axi_ar_lock_o", false,-1);
        tracep->declBus(c+1108,"axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1109,"axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1110,"axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1111,"axi_r_ready_o", false,-1);
        tracep->declBit(c+1112,"axi_r_valid_i", false,-1);
        tracep->declBus(c+1113,"axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1114,"axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1116,"axi_r_last_i", false,-1);
        tracep->declBus(c+1117,"axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1118,"axi_r_user_i", false,-1, 0,0);
        tracep->declBit(c+1061,"top clk", false,-1);
        tracep->declBit(c+1062,"top rst", false,-1);
        tracep->declBus(c+1063,"top instr", false,-1, 31,0);
        tracep->declQuad(c+1064,"top pc", false,-1, 63,0);
        tracep->declBit(c+1066,"top wb_commit", false,-1);
        tracep->declQuad(c+1067,"top wb_pc", false,-1, 63,0);
        tracep->declBus(c+1069,"top wb_instr", false,-1, 31,0);
        tracep->declQuad(c+1070,"top next_pc", false,-1, 63,0);
        tracep->declBit(c+1072,"top wb_dev_o", false,-1);
        tracep->declBit(c+1073,"top axi_aw_ready_i", false,-1);
        tracep->declBit(c+1074,"top axi_aw_valid_o", false,-1);
        tracep->declBus(c+1075,"top axi_aw_addr_o", false,-1, 31,0);
        tracep->declBus(c+1076,"top axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1077,"top axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1078,"top axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1079,"top axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1080,"top axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1081,"top axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1082,"top axi_aw_lock_o", false,-1);
        tracep->declBus(c+1083,"top axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1084,"top axi_aw_qos_o", false,-1, 3,0);
        tracep->declBus(c+1085,"top axi_aw_region_o", false,-1, 3,0);
        tracep->declBit(c+1086,"top axi_w_ready_i", false,-1);
        tracep->declBit(c+1087,"top axi_w_valid_o", false,-1);
        tracep->declQuad(c+1088,"top axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1090,"top axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1091,"top axi_w_last_o", false,-1);
        tracep->declBus(c+1092,"top axi_w_user_o", false,-1, 0,0);
        tracep->declBit(c+1093,"top axi_b_ready_o", false,-1);
        tracep->declBit(c+1094,"top axi_b_valid_i", false,-1);
        tracep->declBus(c+1095,"top axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1096,"top axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+1097,"top axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+1098,"top axi_ar_ready_i", false,-1);
        tracep->declBit(c+1099,"top axi_ar_valid_o", false,-1);
        tracep->declBus(c+1100,"top axi_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+1101,"top axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1102,"top axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1103,"top axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1104,"top axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1105,"top axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1106,"top axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1107,"top axi_ar_lock_o", false,-1);
        tracep->declBus(c+1108,"top axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1109,"top axi_ar_qos_o", false,-1, 3,0);
        tracep->declBus(c+1110,"top axi_ar_region_o", false,-1, 3,0);
        tracep->declBit(c+1111,"top axi_r_ready_o", false,-1);
        tracep->declBit(c+1112,"top axi_r_valid_i", false,-1);
        tracep->declBus(c+1113,"top axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1114,"top axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1116,"top axi_r_last_i", false,-1);
        tracep->declBus(c+1117,"top axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1118,"top axi_r_user_i", false,-1, 0,0);
        tracep->declQuad(c+1123,"top rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+1125,"top rw_req_o", false,-1);
        tracep->declBit(c+1126,"top rw_valid_o", false,-1);
        tracep->declArray(c+1127,"top rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1131,"top data_read_i", false,-1, 127,0);
        tracep->declBit(c+1135,"top rw_ready_i", false,-1);
        tracep->declBus(c+1136,"top rw_size_o", false,-1, 7,0);
        tracep->declBit(c+1137,"top rw_dev_o", false,-1);
        tracep->declBus(c+977,"top io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram0_cen", false,-1);
        tracep->declBit(c+978,"top io_sram0_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+5,"top io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram1_cen", false,-1);
        tracep->declBit(c+979,"top io_sram1_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+9,"top io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram2_cen", false,-1);
        tracep->declBit(c+980,"top io_sram2_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+13,"top io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram3_cen", false,-1);
        tracep->declBit(c+981,"top io_sram3_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+17,"top io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram4_cen", false,-1);
        tracep->declBit(c+22,"top io_sram4_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"top io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram5_cen", false,-1);
        tracep->declBit(c+31,"top io_sram5_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+32,"top io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram6_cen", false,-1);
        tracep->declBit(c+36,"top io_sram6_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"top io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top io_sram7_cen", false,-1);
        tracep->declBit(c+41,"top io_sram7_wen", false,-1);
        tracep->declArray(c+1139,"top io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"top io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+1061,"top mycpu clock", false,-1);
        tracep->declBit(c+1062,"top mycpu reset", false,-1);
        tracep->declBit(c+1138,"top mycpu io_interrupt", false,-1);
        tracep->declBit(c+1073,"top mycpu io_master_awready", false,-1);
        tracep->declBit(c+1074,"top mycpu io_master_awvalid", false,-1);
        tracep->declBus(c+1075,"top mycpu io_master_awaddr", false,-1, 31,0);
        tracep->declBus(c+1077,"top mycpu io_master_awid", false,-1, 3,0);
        tracep->declBus(c+1079,"top mycpu io_master_awlen", false,-1, 7,0);
        tracep->declBus(c+1080,"top mycpu io_master_awsize", false,-1, 2,0);
        tracep->declBus(c+1081,"top mycpu io_master_awburst", false,-1, 1,0);
        tracep->declBit(c+1086,"top mycpu io_master_wready", false,-1);
        tracep->declBit(c+1087,"top mycpu io_master_wvalid", false,-1);
        tracep->declQuad(c+1088,"top mycpu io_master_wdata", false,-1, 63,0);
        tracep->declBus(c+1090,"top mycpu io_master_wstrb", false,-1, 7,0);
        tracep->declBit(c+1091,"top mycpu io_master_wlast", false,-1);
        tracep->declBit(c+1093,"top mycpu io_master_bready", false,-1);
        tracep->declBit(c+1094,"top mycpu io_master_bvalid", false,-1);
        tracep->declBus(c+1095,"top mycpu io_master_bresp", false,-1, 1,0);
        tracep->declBus(c+1096,"top mycpu io_master_bid", false,-1, 3,0);
        tracep->declBit(c+1098,"top mycpu io_master_arready", false,-1);
        tracep->declBit(c+1099,"top mycpu io_master_arvalid", false,-1);
        tracep->declBus(c+1100,"top mycpu io_master_araddr", false,-1, 31,0);
        tracep->declBus(c+1102,"top mycpu io_master_arid", false,-1, 3,0);
        tracep->declBus(c+1104,"top mycpu io_master_arlen", false,-1, 7,0);
        tracep->declBus(c+1105,"top mycpu io_master_arsize", false,-1, 2,0);
        tracep->declBus(c+1106,"top mycpu io_master_arburst", false,-1, 1,0);
        tracep->declBit(c+1111,"top mycpu io_master_rready", false,-1);
        tracep->declBit(c+1112,"top mycpu io_master_rvalid", false,-1);
        tracep->declBus(c+1113,"top mycpu io_master_rresp", false,-1, 1,0);
        tracep->declQuad(c+1114,"top mycpu io_master_rdata", false,-1, 63,0);
        tracep->declBit(c+1116,"top mycpu io_master_rlast", false,-1);
        tracep->declBus(c+1117,"top mycpu io_master_rid", false,-1, 3,0);
        tracep->declBit(c+1138,"top mycpu io_slave_awready", false,-1);
        tracep->declBit(c+1143,"top mycpu io_slave_awvalid", false,-1);
        tracep->declBus(c+1144,"top mycpu io_slave_awaddr", false,-1, 31,0);
        tracep->declBus(c+1145,"top mycpu io_slave_awid", false,-1, 3,0);
        tracep->declBus(c+1146,"top mycpu io_slave_awlen", false,-1, 7,0);
        tracep->declBus(c+1147,"top mycpu io_slave_awsize", false,-1, 2,0);
        tracep->declBus(c+1148,"top mycpu io_slave_awburst", false,-1, 1,0);
        tracep->declBit(c+1138,"top mycpu io_slave_wready", false,-1);
        tracep->declBit(c+1149,"top mycpu io_slave_wvalid", false,-1);
        tracep->declQuad(c+1150,"top mycpu io_slave_wdata", false,-1, 63,0);
        tracep->declBus(c+1152,"top mycpu io_slave_wstrb", false,-1, 7,0);
        tracep->declBit(c+1153,"top mycpu io_slave_wlast", false,-1);
        tracep->declBit(c+1154,"top mycpu io_slave_bready", false,-1);
        tracep->declBit(c+1138,"top mycpu io_slave_bvalid", false,-1);
        tracep->declBus(c+1155,"top mycpu io_slave_bresp", false,-1, 1,0);
        tracep->declBus(c+1156,"top mycpu io_slave_bid", false,-1, 3,0);
        tracep->declBit(c+1138,"top mycpu io_slave_arready", false,-1);
        tracep->declBit(c+1157,"top mycpu io_slave_arvalid", false,-1);
        tracep->declBus(c+1158,"top mycpu io_slave_araddr", false,-1, 31,0);
        tracep->declBus(c+1159,"top mycpu io_slave_arid", false,-1, 3,0);
        tracep->declBus(c+1160,"top mycpu io_slave_arlen", false,-1, 7,0);
        tracep->declBus(c+1161,"top mycpu io_slave_arsize", false,-1, 2,0);
        tracep->declBus(c+1162,"top mycpu io_slave_arburst", false,-1, 1,0);
        tracep->declBit(c+1163,"top mycpu io_slave_rready", false,-1);
        tracep->declBit(c+1138,"top mycpu io_slave_rvalid", false,-1);
        tracep->declBus(c+1155,"top mycpu io_slave_rresp", false,-1, 1,0);
        tracep->declQuad(c+1164,"top mycpu io_slave_rdata", false,-1, 63,0);
        tracep->declBit(c+1138,"top mycpu io_slave_rlast", false,-1);
        tracep->declBus(c+1156,"top mycpu io_slave_rid", false,-1, 3,0);
        tracep->declBus(c+977,"top mycpu io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram0_cen", false,-1);
        tracep->declBit(c+978,"top mycpu io_sram0_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram0_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+5,"top mycpu io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram1_cen", false,-1);
        tracep->declBit(c+979,"top mycpu io_sram1_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram1_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+9,"top mycpu io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram2_cen", false,-1);
        tracep->declBit(c+980,"top mycpu io_sram2_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram2_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+13,"top mycpu io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram3_cen", false,-1);
        tracep->declBit(c+981,"top mycpu io_sram3_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram3_wmask", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+17,"top mycpu io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram4_cen", false,-1);
        tracep->declBit(c+22,"top mycpu io_sram4_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram4_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top mycpu io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"top mycpu io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram5_cen", false,-1);
        tracep->declBit(c+31,"top mycpu io_sram5_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram5_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top mycpu io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+32,"top mycpu io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram6_cen", false,-1);
        tracep->declBit(c+36,"top mycpu io_sram6_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram6_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top mycpu io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"top mycpu io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu io_sram7_cen", false,-1);
        tracep->declBit(c+41,"top mycpu io_sram7_wen", false,-1);
        tracep->declArray(c+1139,"top mycpu io_sram7_wmask", false,-1, 127,0);
        tracep->declArray(c+23,"top mycpu io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"top mycpu io_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+1063,"top mycpu instr", false,-1, 31,0);
        tracep->declQuad(c+1064,"top mycpu pc", false,-1, 63,0);
        tracep->declBit(c+1066,"top mycpu wb_commit", false,-1);
        tracep->declQuad(c+1067,"top mycpu wb_pc", false,-1, 63,0);
        tracep->declBus(c+1069,"top mycpu wb_instr", false,-1, 31,0);
        tracep->declQuad(c+1070,"top mycpu next_pc", false,-1, 63,0);
        tracep->declBit(c+1072,"top mycpu wb_dev_o", false,-1);
        tracep->declQuad(c+46,"top mycpu rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+48,"top mycpu rw_req_o", false,-1);
        tracep->declBit(c+49,"top mycpu rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu data_read_i", false,-1, 127,0);
        tracep->declBit(c+54,"top mycpu rw_ready_i", false,-1);
        tracep->declBus(c+55,"top mycpu rw_size_o", false,-1, 7,0);
        tracep->declBit(c+982,"top mycpu rw_dev_o", false,-1);
        tracep->declBus(c+56,"top mycpu rw_bytes_o", false,-1, 3,0);
        tracep->declBit(c+1061,"top mycpu core clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core rst", false,-1);
        tracep->declBus(c+1063,"top mycpu core instr", false,-1, 31,0);
        tracep->declQuad(c+1064,"top mycpu core pc", false,-1, 63,0);
        tracep->declBit(c+1066,"top mycpu core wb_commit", false,-1);
        tracep->declQuad(c+1067,"top mycpu core wb_pc", false,-1, 63,0);
        tracep->declBus(c+1069,"top mycpu core wb_instr", false,-1, 31,0);
        tracep->declQuad(c+1070,"top mycpu core next_pc", false,-1, 63,0);
        tracep->declQuad(c+46,"top mycpu core rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+48,"top mycpu core rw_req_o", false,-1);
        tracep->declBit(c+49,"top mycpu core rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu core rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu core data_read_i", false,-1, 127,0);
        tracep->declBit(c+54,"top mycpu core rw_ready_i", false,-1);
        tracep->declBus(c+55,"top mycpu core rw_size_o", false,-1, 7,0);
        tracep->declBit(c+982,"top mycpu core rw_dev_o", false,-1);
        tracep->declBit(c+1072,"top mycpu core wb_dev_o", false,-1);
        tracep->declBus(c+56,"top mycpu core rw_bytes_o", false,-1, 3,0);
        tracep->declBus(c+977,"top mycpu core io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram0_cen", false,-1);
        tracep->declBit(c+978,"top mycpu core io_sram0_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+5,"top mycpu core io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram1_cen", false,-1);
        tracep->declBit(c+979,"top mycpu core io_sram1_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+9,"top mycpu core io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram2_cen", false,-1);
        tracep->declBit(c+980,"top mycpu core io_sram2_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+13,"top mycpu core io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram3_cen", false,-1);
        tracep->declBit(c+981,"top mycpu core io_sram3_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+17,"top mycpu core io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram4_cen", false,-1);
        tracep->declBit(c+22,"top mycpu core io_sram4_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"top mycpu core io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram5_cen", false,-1);
        tracep->declBit(c+31,"top mycpu core io_sram5_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+32,"top mycpu core io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram6_cen", false,-1);
        tracep->declBit(c+36,"top mycpu core io_sram6_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"top mycpu core io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core io_sram7_cen", false,-1);
        tracep->declBit(c+41,"top mycpu core io_sram7_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"top mycpu core io_sram7_rdata", false,-1, 127,0);
        tracep->declQuad(c+57,"top mycpu core i_rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+59,"top mycpu core i_rw_req_o", false,-1);
        tracep->declBit(c+60,"top mycpu core i_rw_valid_o", false,-1);
        tracep->declArray(c+1,"top mycpu core i_data_read_i", false,-1, 127,0);
        tracep->declBit(c+61,"top mycpu core i_rw_ready_i", false,-1);
        tracep->declQuad(c+62,"top mycpu core d_rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+64,"top mycpu core d_rw_req_o", false,-1);
        tracep->declBit(c+65,"top mycpu core d_rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu core d_rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu core d_data_read_i", false,-1, 127,0);
        tracep->declBit(c+66,"top mycpu core d_rw_ready_i", false,-1);
        tracep->declBit(c+67,"top mycpu core mstatus_MIE", false,-1);
        tracep->declBit(c+68,"top mycpu core mie_MITE", false,-1);
        tracep->declBit(c+69,"top mycpu core Time_interrupt", false,-1);
        tracep->declBus(c+983,"top mycpu core if_instr_o", false,-1, 31,0);
        tracep->declBus(c+70,"top mycpu core id_instr_o", false,-1, 31,0);
        tracep->declBus(c+71,"top mycpu core ex_instr_o", false,-1, 31,0);
        tracep->declBus(c+72,"top mycpu core m_instr_o", false,-1, 31,0);
        tracep->declBus(c+73,"top mycpu core wb_instr_o", false,-1, 31,0);
        tracep->declQuad(c+74,"top mycpu core if_pc_o", false,-1, 63,0);
        tracep->declQuad(c+76,"top mycpu core id_pc_o", false,-1, 63,0);
        tracep->declQuad(c+78,"top mycpu core ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+80,"top mycpu core m_pc_o", false,-1, 63,0);
        tracep->declQuad(c+82,"top mycpu core wb_pc_o", false,-1, 63,0);
        tracep->declBit(c+1119,"top mycpu core id_valid_i", false,-1);
        tracep->declBit(c+84,"top mycpu core ex_valid_i", false,-1);
        tracep->declBit(c+85,"top mycpu core m_valid_i", false,-1);
        tracep->declBit(c+947,"top mycpu core wb_valid_i", false,-1);
        tracep->declBit(c+984,"top mycpu core id_en", false,-1);
        tracep->declBit(c+985,"top mycpu core ex_en", false,-1);
        tracep->declBit(c+986,"top mycpu core m_en", false,-1);
        tracep->declBit(c+1166,"top mycpu core wb_en", false,-1);
        tracep->declBit(c+1062,"top mycpu core id_flush", false,-1);
        tracep->declBit(c+987,"top mycpu core ex_flush", false,-1);
        tracep->declBit(c+987,"top mycpu core m_flush", false,-1);
        tracep->declBit(c+1062,"top mycpu core wb_flush", false,-1);
        tracep->declBit(c+86,"top mycpu core id_valid_o", false,-1);
        tracep->declBit(c+87,"top mycpu core ex_valid_o", false,-1);
        tracep->declBit(c+88,"top mycpu core m_valid_o", false,-1);
        tracep->declBit(c+89,"top mycpu core wb_valid_o", false,-1);
        tracep->declBit(c+90,"top mycpu core if_block", false,-1);
        tracep->declBit(c+91,"top mycpu core id_block", false,-1);
        tracep->declBit(c+92,"top mycpu core ex_block", false,-1);
        tracep->declBit(c+988,"top mycpu core m_block", false,-1);
        tracep->declBit(c+1138,"top mycpu core wb_block", false,-1);
        tracep->declQuad(c+93,"top mycpu core id_csrres_o", false,-1, 63,0);
        tracep->declBus(c+95,"top mycpu core id_rd_o", false,-1, 4,0);
        tracep->declBus(c+96,"top mycpu core id_rs1", false,-1, 4,0);
        tracep->declBus(c+97,"top mycpu core id_rs2", false,-1, 4,0);
        tracep->declQuad(c+989,"top mycpu core id_busa_o", false,-1, 63,0);
        tracep->declQuad(c+991,"top mycpu core id_busb_o", false,-1, 63,0);
        tracep->declQuad(c+98,"top mycpu core id_imm_o", false,-1, 63,0);
        tracep->declBit(c+100,"top mycpu core id_ALUSrcA_o", false,-1);
        tracep->declBit(c+101,"top mycpu core id_MemToReg_o", false,-1);
        tracep->declBit(c+102,"top mycpu core id_MemWen_o", false,-1);
        tracep->declBit(c+103,"top mycpu core id_wen_o", false,-1);
        tracep->declBit(c+104,"top mycpu core id_CsrToReg_o", false,-1);
        tracep->declBit(c+105,"top mycpu core id_Ebreak_o", false,-1);
        tracep->declBit(c+106,"top mycpu core id_Fence_i_o", false,-1);
        tracep->declBit(c+107,"top mycpu core id_Csri_o", false,-1);
        tracep->declBus(c+108,"top mycpu core id_ALUSrcB_o", false,-1, 1,0);
        tracep->declBus(c+109,"top mycpu core id_MemOp_o", false,-1, 2,0);
        tracep->declBus(c+110,"top mycpu core id_ALUOp_o", false,-1, 4,0);
        tracep->declBus(c+111,"top mycpu core id_MulOp_o", false,-1, 1,0);
        tracep->declBus(c+112,"top mycpu core id_CsrOp", false,-1, 2,0);
        tracep->declBit(c+113,"top mycpu core id_Ecall", false,-1);
        tracep->declBit(c+114,"top mycpu core id_Mret", false,-1);
        tracep->declBit(c+104,"top mycpu core id_Csrwen", false,-1);
        tracep->declQuad(c+993,"top mycpu core id_dnpc", false,-1, 63,0);
        tracep->declQuad(c+115,"top mycpu core id_busa", false,-1, 63,0);
        tracep->declQuad(c+117,"top mycpu core id_busb", false,-1, 63,0);
        tracep->declQuad(c+119,"top mycpu core id_mtvec", false,-1, 63,0);
        tracep->declQuad(c+121,"top mycpu core id_mepc", false,-1, 63,0);
        tracep->declBus(c+123,"top mycpu core id_CsrId", false,-1, 11,0);
        tracep->declBus(c+124,"top mycpu core ex_rd_i", false,-1, 4,0);
        tracep->declQuad(c+125,"top mycpu core ex_busa_i", false,-1, 63,0);
        tracep->declQuad(c+127,"top mycpu core ex_busb_i", false,-1, 63,0);
        tracep->declQuad(c+129,"top mycpu core ex_imm_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top mycpu core ex_csrres_i", false,-1, 63,0);
        tracep->declBit(c+133,"top mycpu core ex_ALUSrcA_i", false,-1);
        tracep->declBit(c+134,"top mycpu core ex_MemToReg_i", false,-1);
        tracep->declBit(c+135,"top mycpu core ex_MemWen_i", false,-1);
        tracep->declBit(c+136,"top mycpu core ex_wen_i", false,-1);
        tracep->declBit(c+137,"top mycpu core ex_CsrToReg_i", false,-1);
        tracep->declBit(c+138,"top mycpu core ex_Ebreak_i", false,-1);
        tracep->declBit(c+139,"top mycpu core ex_Fence_i_i", false,-1);
        tracep->declBus(c+140,"top mycpu core ex_ALUSrcB_i", false,-1, 1,0);
        tracep->declBus(c+141,"top mycpu core ex_MemOp_i", false,-1, 2,0);
        tracep->declBus(c+142,"top mycpu core ex_ALUOp_i", false,-1, 4,0);
        tracep->declBus(c+143,"top mycpu core ex_MulOp_i", false,-1, 1,0);
        tracep->declQuad(c+995,"top mycpu core ex_ALURes_o", false,-1, 63,0);
        tracep->declBus(c+144,"top mycpu core m_MemOp_i", false,-1, 2,0);
        tracep->declQuad(c+145,"top mycpu core m_raddr_i", false,-1, 63,0);
        tracep->declBit(c+147,"top mycpu core m_MemWen_i", false,-1);
        tracep->declQuad(c+148,"top mycpu core m_wdata_i", false,-1, 63,0);
        tracep->declQuad(c+150,"top mycpu core m_Csrres_i", false,-1, 63,0);
        tracep->declBus(c+152,"top mycpu core m_rd_i", false,-1, 4,0);
        tracep->declBit(c+153,"top mycpu core m_wen_i", false,-1);
        tracep->declBit(c+154,"top mycpu core m_MemToReg_i", false,-1);
        tracep->declBit(c+155,"top mycpu core m_CsrToReg_i", false,-1);
        tracep->declBit(c+156,"top mycpu core m_Ebreak_i", false,-1);
        tracep->declBit(c+157,"top mycpu core m_Fence_i_i", false,-1);
        tracep->declQuad(c+997,"top mycpu core m_rfdata_o", false,-1, 63,0);
        tracep->declBit(c+158,"top mycpu core is_cmp", false,-1);
        tracep->declBit(c+159,"top mycpu core wb_wen_i", false,-1);
        tracep->declQuad(c+160,"top mycpu core wb_wdata_i", false,-1, 63,0);
        tracep->declBus(c+162,"top mycpu core wb_waddr_i", false,-1, 4,0);
        tracep->declBit(c+163,"top mycpu core wb_Ebreak_i", false,-1);
        tracep->declBit(c+164,"top mycpu core wb_Fence_i_i", false,-1);
        tracep->declBit(c+163,"top mycpu core ebreak_commit", false,-1);
        tracep->declBit(c+165,"top mycpu core id_use_rd", false,-1);
        tracep->declBit(c+166,"top mycpu core ex_has_rd", false,-1);
        tracep->declBit(c+167,"top mycpu core m_has_rd", false,-1);
        tracep->declBit(c+168,"top mycpu core wb_has_rd", false,-1);
        tracep->declBit(c+169,"top mycpu core rs1_need", false,-1);
        tracep->declBit(c+170,"top mycpu core rs2_need", false,-1);
        tracep->declBus(c+171,"top mycpu core id_op", false,-1, 6,0);
        tracep->declBus(c+172,"top mycpu core ex_op", false,-1, 6,0);
        tracep->declBit(c+173,"top mycpu core id_ex_hazard", false,-1);
        tracep->declBit(c+174,"top mycpu core id_m_hazard", false,-1);
        tracep->declBit(c+175,"top mycpu core id_wb_hazard", false,-1);
        tracep->declBit(c+176,"top mycpu core load_use", false,-1);
        tracep->declQuad(c+948,"top mycpu core forward_data1", false,-1, 63,0);
        tracep->declQuad(c+950,"top mycpu core forward_data2", false,-1, 63,0);
        tracep->declBit(c+177,"top mycpu core fence_i_commit", false,-1);
        tracep->declBit(c+178,"top mycpu core has_fence_i", false,-1);
        tracep->declBit(c+179,"top mycpu core if_busy", false,-1);
        tracep->declBit(c+999,"top mycpu core cpu_halt", false,-1);
        tracep->declBit(c+180,"top mycpu core dnpc_valid", false,-1);
        tracep->declBit(c+1000,"top mycpu core i_rw_dev_o", false,-1);
        tracep->declBus(c+181,"top mycpu core i_rw_size_o", false,-1, 7,0);
        tracep->declBus(c+1167,"top mycpu core i_rw_bytes_o", false,-1, 3,0);
        tracep->declQuad(c+182,"top mycpu core ex_dnpc", false,-1, 63,0);
        tracep->declQuad(c+184,"top mycpu core m_dnpc", false,-1, 63,0);
        tracep->declQuad(c+186,"top mycpu core wb_dnpc", false,-1, 63,0);
        tracep->declBit(c+1001,"top mycpu core is_Csrwen", false,-1);
        tracep->declBit(c+92,"top mycpu core alu_busy", false,-1);
        tracep->declBit(c+988,"top mycpu core m_busy", false,-1);
        tracep->declBus(c+188,"top mycpu core d_rw_size_o", false,-1, 7,0);
        tracep->declBit(c+189,"top mycpu core d_rw_dev_o", false,-1);
        tracep->declBus(c+190,"top mycpu core d_rw_bytes_o", false,-1, 3,0);
        tracep->declBit(c+191,"top mycpu core is_Fence_i", false,-1);
        tracep->declBit(c+1002,"top mycpu core is_MemToReg", false,-1);
        tracep->declBit(c+1003,"top mycpu core is_men", false,-1);
        tracep->declBit(c+952,"top mycpu core dev_i", false,-1);
        tracep->declBit(c+192,"top mycpu core dev_o", false,-1);
        tracep->declBit(c+1120,"top mycpu core is_wen", false,-1);
        tracep->declBit(c+193,"top mycpu core wb_commit_r", false,-1);
        tracep->declQuad(c+194,"top mycpu core wb_pc_r", false,-1, 63,0);
        tracep->declBus(c+196,"top mycpu core wb_instr_r", false,-1, 31,0);
        tracep->declQuad(c+197,"top mycpu core next_pc_r", false,-1, 63,0);
        tracep->declQuad(c+1004,"top mycpu core Csr_datain", false,-1, 63,0);
        tracep->declBit(c+1061,"top mycpu core my_ifu clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_ifu rst", false,-1);
        tracep->declBit(c+178,"top mycpu core my_ifu Fence_i", false,-1);
        tracep->declBit(c+180,"top mycpu core my_ifu dnpc_valid", false,-1);
        tracep->declBit(c+999,"top mycpu core my_ifu block", false,-1);
        tracep->declQuad(c+993,"top mycpu core my_ifu dnpc", false,-1, 63,0);
        tracep->declQuad(c+74,"top mycpu core my_ifu pc", false,-1, 63,0);
        tracep->declBus(c+983,"top mycpu core my_ifu instr_o", false,-1, 31,0);
        tracep->declBit(c+179,"top mycpu core my_ifu if_busy", false,-1);
        tracep->declQuad(c+57,"top mycpu core my_ifu i_rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+59,"top mycpu core my_ifu i_rw_req_o", false,-1);
        tracep->declBit(c+60,"top mycpu core my_ifu i_rw_valid_o", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu i_data_read_i", false,-1, 127,0);
        tracep->declBit(c+61,"top mycpu core my_ifu i_rw_ready_i", false,-1);
        tracep->declBit(c+984,"top mycpu core my_ifu id_en_i", false,-1);
        tracep->declBit(c+1000,"top mycpu core my_ifu i_rw_dev_o", false,-1);
        tracep->declBus(c+181,"top mycpu core my_ifu i_rw_size_o", false,-1, 7,0);
        tracep->declBus(c+1167,"top mycpu core my_ifu i_rw_bytes_o", false,-1, 3,0);
        tracep->declBus(c+977,"top mycpu core my_ifu io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu io_sram0_cen", false,-1);
        tracep->declBit(c+978,"top mycpu core my_ifu io_sram0_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+5,"top mycpu core my_ifu io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core my_ifu io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu io_sram1_cen", false,-1);
        tracep->declBit(c+979,"top mycpu core my_ifu io_sram1_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+9,"top mycpu core my_ifu io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core my_ifu io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu io_sram2_cen", false,-1);
        tracep->declBit(c+980,"top mycpu core my_ifu io_sram2_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+13,"top mycpu core my_ifu io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core my_ifu io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu io_sram3_cen", false,-1);
        tracep->declBit(c+981,"top mycpu core my_ifu io_sram3_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+17,"top mycpu core my_ifu io_sram3_rdata", false,-1, 127,0);
        tracep->declBit(c+199,"top mycpu core my_ifu cache_idle", false,-1);
        tracep->declBit(c+200,"top mycpu core my_ifu old_instr", false,-1);
        tracep->declBit(c+201,"top mycpu core my_ifu cache_doing", false,-1);
        tracep->declBus(c+202,"top mycpu core my_ifu instr_read_r", false,-1, 31,0);
        tracep->declQuad(c+203,"top mycpu core my_ifu cpu_data_read", false,-1, 63,0);
        tracep->declBit(c+953,"top mycpu core my_ifu pcen", false,-1);
        tracep->declBit(c+205,"top mycpu core my_ifu i_cpu_ready", false,-1);
        tracep->declBit(c+206,"top mycpu core my_ifu cpu_req_valid", false,-1);
        tracep->declBit(c+207,"top mycpu core my_ifu start", false,-1);
        tracep->declQuad(c+1006,"top mycpu core my_ifu cache_pc", false,-1, 63,0);
        tracep->declBit(c+1000,"top mycpu core my_ifu cpu_dev", false,-1);
        tracep->declBit(c+1008,"top mycpu core my_ifu flush", false,-1);
        tracep->declBit(c+1061,"top mycpu core my_ifu icache clk", false,-1);
        tracep->declBit(c+1008,"top mycpu core my_ifu icache rst", false,-1);
        tracep->declQuad(c+1006,"top mycpu core my_ifu icache cpu_req_addr", false,-1, 63,0);
        tracep->declBit(c+206,"top mycpu core my_ifu icache cpu_req_valid", false,-1);
        tracep->declQuad(c+203,"top mycpu core my_ifu icache cpu_data_read", false,-1, 63,0);
        tracep->declBit(c+205,"top mycpu core my_ifu icache cpu_ready", false,-1);
        tracep->declBit(c+199,"top mycpu core my_ifu icache cache_idle", false,-1);
        tracep->declQuad(c+57,"top mycpu core my_ifu icache rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+59,"top mycpu core my_ifu icache rw_req_o", false,-1);
        tracep->declBit(c+60,"top mycpu core my_ifu icache rw_valid_o", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu icache data_read_i", false,-1, 127,0);
        tracep->declBit(c+61,"top mycpu core my_ifu icache rw_ready_i", false,-1);
        tracep->declBit(c+1000,"top mycpu core my_ifu icache cpu_dev", false,-1);
        tracep->declBus(c+977,"top mycpu core my_ifu icache io_sram0_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu icache io_sram0_cen", false,-1);
        tracep->declBit(c+978,"top mycpu core my_ifu icache io_sram0_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu icache io_sram0_wdata", false,-1, 127,0);
        tracep->declArray(c+5,"top mycpu core my_ifu icache io_sram0_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core my_ifu icache io_sram1_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu icache io_sram1_cen", false,-1);
        tracep->declBit(c+979,"top mycpu core my_ifu icache io_sram1_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu icache io_sram1_wdata", false,-1, 127,0);
        tracep->declArray(c+9,"top mycpu core my_ifu icache io_sram1_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core my_ifu icache io_sram2_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu icache io_sram2_cen", false,-1);
        tracep->declBit(c+980,"top mycpu core my_ifu icache io_sram2_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu icache io_sram2_wdata", false,-1, 127,0);
        tracep->declArray(c+13,"top mycpu core my_ifu icache io_sram2_rdata", false,-1, 127,0);
        tracep->declBus(c+977,"top mycpu core my_ifu icache io_sram3_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_ifu icache io_sram3_cen", false,-1);
        tracep->declBit(c+981,"top mycpu core my_ifu icache io_sram3_wen", false,-1);
        tracep->declArray(c+1,"top mycpu core my_ifu icache io_sram3_wdata", false,-1, 127,0);
        tracep->declArray(c+17,"top mycpu core my_ifu icache io_sram3_rdata", false,-1, 127,0);
        tracep->declBus(c+1168,"top mycpu core my_ifu icache nline", false,-1, 31,0);
        tracep->declBus(c+1009,"top mycpu core my_ifu icache cpu_index", false,-1, 7,0);
        tracep->declBus(c+1010,"top mycpu core my_ifu icache cpu_offset", false,-1, 3,0);
        tracep->declQuad(c+1011,"top mycpu core my_ifu icache cpu_tag", false,-1, 51,0);
        tracep->declBit(c+954,"top mycpu core my_ifu icache hit", false,-1);
        tracep->declBus(c+1169,"top mycpu core my_ifu icache IDLE", false,-1, 2,0);
        tracep->declBus(c+1170,"top mycpu core my_ifu icache CompareTag", false,-1, 2,0);
        tracep->declBus(c+1171,"top mycpu core my_ifu icache Allocate", false,-1, 2,0);
        tracep->declBus(c+1172,"top mycpu core my_ifu icache Readin", false,-1, 2,0);
        tracep->declBus(c+1173,"top mycpu core my_ifu icache DEV", false,-1, 2,0);
        tracep->declBus(c+208,"top mycpu core my_ifu icache cur_status", false,-1, 2,0);
        tracep->declBus(c+1013,"top mycpu core my_ifu icache next_status", false,-1, 2,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+209+i*4,"top mycpu core my_ifu icache line_o", true,(i+0), 127,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+1014+i*1,"top mycpu core my_ifu icache line_wen", true,(i+0));}}
        tracep->declBus(c+225,"top mycpu core my_ifu icache i", false,-1, 31,0);
        tracep->declBit(c+1061,"top mycpu core ID_Reg clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core ID_Reg flush", false,-1);
        tracep->declBit(c+1119,"top mycpu core ID_Reg valid_i", false,-1);
        tracep->declBit(c+984,"top mycpu core ID_Reg enable", false,-1);
        tracep->declBit(c+86,"top mycpu core ID_Reg valid_o", false,-1);
        tracep->declQuad(c+74,"top mycpu core ID_Reg pc_i", false,-1, 63,0);
        tracep->declBus(c+983,"top mycpu core ID_Reg instr_i", false,-1, 31,0);
        tracep->declQuad(c+76,"top mycpu core ID_Reg pc_o", false,-1, 63,0);
        tracep->declBus(c+70,"top mycpu core ID_Reg instr_o", false,-1, 31,0);
        tracep->declBit(c+86,"top mycpu core ID_Reg valid_r", false,-1);
        tracep->declBus(c+70,"top mycpu core ID_Reg instr_r", false,-1, 31,0);
        tracep->declQuad(c+76,"top mycpu core ID_Reg pc_r", false,-1, 63,0);
        tracep->declBus(c+70,"top mycpu core my_idu instr_i", false,-1, 31,0);
        tracep->declQuad(c+76,"top mycpu core my_idu pc", false,-1, 63,0);
        tracep->declQuad(c+989,"top mycpu core my_idu busa", false,-1, 63,0);
        tracep->declQuad(c+991,"top mycpu core my_idu busb", false,-1, 63,0);
        tracep->declQuad(c+119,"top mycpu core my_idu mtvec", false,-1, 63,0);
        tracep->declQuad(c+121,"top mycpu core my_idu mepc", false,-1, 63,0);
        tracep->declQuad(c+993,"top mycpu core my_idu dnpc", false,-1, 63,0);
        tracep->declBus(c+95,"top mycpu core my_idu rd", false,-1, 4,0);
        tracep->declBus(c+96,"top mycpu core my_idu rs1", false,-1, 4,0);
        tracep->declBus(c+97,"top mycpu core my_idu rs2", false,-1, 4,0);
        tracep->declQuad(c+98,"top mycpu core my_idu imm", false,-1, 63,0);
        tracep->declBit(c+100,"top mycpu core my_idu ALUSrcA", false,-1);
        tracep->declBit(c+101,"top mycpu core my_idu MemToReg", false,-1);
        tracep->declBit(c+102,"top mycpu core my_idu MemWen", false,-1);
        tracep->declBus(c+108,"top mycpu core my_idu ALUSrcB", false,-1, 1,0);
        tracep->declBus(c+109,"top mycpu core my_idu MemOp", false,-1, 2,0);
        tracep->declBus(c+110,"top mycpu core my_idu ALUOp", false,-1, 4,0);
        tracep->declBus(c+111,"top mycpu core my_idu MulOp", false,-1, 1,0);
        tracep->declBit(c+103,"top mycpu core my_idu wen", false,-1);
        tracep->declBit(c+113,"top mycpu core my_idu Ecall", false,-1);
        tracep->declBit(c+114,"top mycpu core my_idu Mret", false,-1);
        tracep->declBit(c+104,"top mycpu core my_idu Csrwen", false,-1);
        tracep->declBit(c+104,"top mycpu core my_idu CsrToReg", false,-1);
        tracep->declBus(c+112,"top mycpu core my_idu CsrOp", false,-1, 2,0);
        tracep->declBus(c+123,"top mycpu core my_idu CsrId", false,-1, 11,0);
        tracep->declBit(c+105,"top mycpu core my_idu Ebreak", false,-1);
        tracep->declBit(c+106,"top mycpu core my_idu Fence_i", false,-1);
        tracep->declBit(c+107,"top mycpu core my_idu Csri", false,-1);
        tracep->declBit(c+69,"top mycpu core my_idu Time_interrupt", false,-1);
        tracep->declBus(c+171,"top mycpu core my_idu op", false,-1, 6,0);
        tracep->declBus(c+226,"top mycpu core my_idu func3", false,-1, 2,0);
        tracep->declBus(c+227,"top mycpu core my_idu func7", false,-1, 6,0);
        tracep->declBus(c+228,"top mycpu core my_idu ExtOp", false,-1, 2,0);
        tracep->declBus(c+229,"top mycpu core my_idu Branch", false,-1, 2,0);
        tracep->declBit(c+113,"top mycpu core my_idu ecall", false,-1);
        tracep->declQuad(c+1018,"top mycpu core my_idu addr_res", false,-1, 63,0);
        tracep->declQuad(c+1020,"top mycpu core my_idu alu_inA", false,-1, 63,0);
        tracep->declQuad(c+955,"top mycpu core my_idu alu_inB", false,-1, 63,0);
        tracep->declQuad(c+957,"top mycpu core my_idu res", false,-1, 63,0);
        tracep->declBit(c+1022,"top mycpu core my_idu zero", false,-1);
        tracep->declBit(c+230,"top mycpu core my_idu Trap", false,-1);
        tracep->declBus(c+70,"top mycpu core my_idu insttoimm instr", false,-1, 31,0);
        tracep->declBus(c+228,"top mycpu core my_idu insttoimm ExtOp", false,-1, 2,0);
        tracep->declQuad(c+98,"top mycpu core my_idu insttoimm imm", false,-1, 63,0);
        tracep->declBus(c+70,"top mycpu core my_idu control instr_i", false,-1, 31,0);
        tracep->declBus(c+171,"top mycpu core my_idu control op", false,-1, 6,0);
        tracep->declBus(c+226,"top mycpu core my_idu control func3", false,-1, 2,0);
        tracep->declBus(c+227,"top mycpu core my_idu control func7", false,-1, 6,0);
        tracep->declBit(c+100,"top mycpu core my_idu control ALUSrcA", false,-1);
        tracep->declBus(c+108,"top mycpu core my_idu control ALUSrcB", false,-1, 1,0);
        tracep->declBus(c+228,"top mycpu core my_idu control ExtOp", false,-1, 2,0);
        tracep->declBus(c+110,"top mycpu core my_idu control ALUOp", false,-1, 4,0);
        tracep->declBus(c+229,"top mycpu core my_idu control Branch", false,-1, 2,0);
        tracep->declBus(c+109,"top mycpu core my_idu control MemOp", false,-1, 2,0);
        tracep->declBus(c+111,"top mycpu core my_idu control MulOp", false,-1, 1,0);
        tracep->declBit(c+101,"top mycpu core my_idu control MemToReg", false,-1);
        tracep->declBit(c+103,"top mycpu core my_idu control wen", false,-1);
        tracep->declBit(c+102,"top mycpu core my_idu control MemWen", false,-1);
        tracep->declBit(c+113,"top mycpu core my_idu control Ecall", false,-1);
        tracep->declBit(c+114,"top mycpu core my_idu control Mret", false,-1);
        tracep->declBit(c+104,"top mycpu core my_idu control Csrwen", false,-1);
        tracep->declBit(c+104,"top mycpu core my_idu control CsrToReg", false,-1);
        tracep->declBus(c+112,"top mycpu core my_idu control CsrOp", false,-1, 2,0);
        tracep->declBit(c+105,"top mycpu core my_idu control Ebreak", false,-1);
        tracep->declBit(c+106,"top mycpu core my_idu control Fence_i", false,-1);
        tracep->declBit(c+107,"top mycpu core my_idu control Csri", false,-1);
        tracep->declBus(c+1174,"top mycpu core my_idu control ysyx_040053_I", false,-1, 31,0);
        tracep->declBus(c+1175,"top mycpu core my_idu control ysyx_040053_U", false,-1, 31,0);
        tracep->declBus(c+1176,"top mycpu core my_idu control ysyx_040053_S", false,-1, 31,0);
        tracep->declBus(c+1177,"top mycpu core my_idu control ysyx_040053_B", false,-1, 31,0);
        tracep->declBus(c+1178,"top mycpu core my_idu control ysyx_040053_J", false,-1, 31,0);
        tracep->declBus(c+1179,"top mycpu core my_idu control ysyx_040053_R", false,-1, 31,0);
        tracep->declQuad(c+1020,"top mycpu core my_idu na_alu inputa", false,-1, 63,0);
        tracep->declQuad(c+955,"top mycpu core my_idu na_alu inputb", false,-1, 63,0);
        tracep->declBus(c+110,"top mycpu core my_idu na_alu ALUOp", false,-1, 4,0);
        tracep->declBit(c+1022,"top mycpu core my_idu na_alu zero", false,-1);
        tracep->declQuad(c+957,"top mycpu core my_idu na_alu result", false,-1, 63,0);
        tracep->declBit(c+231,"top mycpu core my_idu na_alu SUBctr", false,-1);
        tracep->declBit(c+232,"top mycpu core my_idu na_alu SIGctr", false,-1);
        tracep->declBit(c+233,"top mycpu core my_idu na_alu ALctr", false,-1);
        tracep->declBit(c+234,"top mycpu core my_idu na_alu SFTctr", false,-1);
        tracep->declBit(c+235,"top mycpu core my_idu na_alu Wctr", false,-1);
        tracep->declBus(c+236,"top mycpu core my_idu na_alu OPctr", false,-1, 3,0);
        tracep->declQuad(c+1023,"top mycpu core my_idu na_alu adderres", false,-1, 63,0);
        tracep->declQuad(c+959,"top mycpu core my_idu na_alu res0", false,-1, 63,0);
        tracep->declQuad(c+961,"top mycpu core my_idu na_alu res6", false,-1, 63,0);
        tracep->declBit(c+963,"top mycpu core my_idu na_alu cout_miss", false,-1);
        tracep->declQuad(c+1025,"top mycpu core my_idu na_alu adderb", false,-1, 63,0);
        tracep->declBit(c+964,"top mycpu core my_idu na_alu CF", false,-1);
        tracep->declBit(c+1027,"top mycpu core my_idu na_alu SF", false,-1);
        tracep->declBit(c+1028,"top mycpu core my_idu na_alu OF", false,-1);
        tracep->declBit(c+1022,"top mycpu core my_idu na_alu ZF", false,-1);
        tracep->declBus(c+110,"top mycpu core my_idu na_alu alusig ALUOp", false,-1, 4,0);
        tracep->declBit(c+231,"top mycpu core my_idu na_alu alusig SUBctr", false,-1);
        tracep->declBit(c+232,"top mycpu core my_idu na_alu alusig SIGctr", false,-1);
        tracep->declBit(c+233,"top mycpu core my_idu na_alu alusig ALctr", false,-1);
        tracep->declBit(c+234,"top mycpu core my_idu na_alu alusig SFTctr", false,-1);
        tracep->declBit(c+235,"top mycpu core my_idu na_alu alusig Wctr", false,-1);
        tracep->declBus(c+236,"top mycpu core my_idu na_alu alusig OPctr", false,-1, 3,0);
        tracep->declQuad(c+1023,"top mycpu core my_idu na_alu adder result", false,-1, 63,0);
        tracep->declBit(c+963,"top mycpu core my_idu na_alu adder cout", false,-1);
        tracep->declBit(c+1028,"top mycpu core my_idu na_alu adder OF", false,-1);
        tracep->declBit(c+1027,"top mycpu core my_idu na_alu adder SF", false,-1);
        tracep->declBit(c+1022,"top mycpu core my_idu na_alu adder ZF", false,-1);
        tracep->declBit(c+964,"top mycpu core my_idu na_alu adder CF", false,-1);
        tracep->declQuad(c+1020,"top mycpu core my_idu na_alu adder x", false,-1, 63,0);
        tracep->declQuad(c+1025,"top mycpu core my_idu na_alu adder y", false,-1, 63,0);
        tracep->declBit(c+231,"top mycpu core my_idu na_alu adder sub", false,-1);
        tracep->declBit(c+1022,"top mycpu core my_idu nextaddr Zero", false,-1);
        tracep->declBit(c+965,"top mycpu core my_idu nextaddr res0", false,-1);
        tracep->declBus(c+229,"top mycpu core my_idu nextaddr Branch", false,-1, 2,0);
        tracep->declQuad(c+76,"top mycpu core my_idu nextaddr pc", false,-1, 63,0);
        tracep->declQuad(c+98,"top mycpu core my_idu nextaddr imm", false,-1, 63,0);
        tracep->declQuad(c+989,"top mycpu core my_idu nextaddr busa", false,-1, 63,0);
        tracep->declQuad(c+121,"top mycpu core my_idu nextaddr mepc", false,-1, 63,0);
        tracep->declQuad(c+119,"top mycpu core my_idu nextaddr mtvec", false,-1, 63,0);
        tracep->declBit(c+114,"top mycpu core my_idu nextaddr Mret", false,-1);
        tracep->declBit(c+230,"top mycpu core my_idu nextaddr Trap", false,-1);
        tracep->declQuad(c+1018,"top mycpu core my_idu nextaddr dnpc", false,-1, 63,0);
        tracep->declBit(c+1029,"top mycpu core my_idu nextaddr NexA", false,-1);
        tracep->declBit(c+1030,"top mycpu core my_idu nextaddr NexB", false,-1);
        tracep->declQuad(c+1031,"top mycpu core my_idu nextaddr SrcA", false,-1, 63,0);
        tracep->declQuad(c+1033,"top mycpu core my_idu nextaddr SrcB", false,-1, 63,0);
        tracep->declQuad(c+1035,"top mycpu core my_idu nextaddr respc", false,-1, 63,0);
        tracep->declBit(c+1037,"top mycpu core my_idu nextaddr pc_cout", false,-1);
        tracep->declBit(c+1038,"top mycpu core my_idu nextaddr of_miss", false,-1);
        tracep->declBit(c+1039,"top mycpu core my_idu nextaddr sf_miss", false,-1);
        tracep->declBit(c+1037,"top mycpu core my_idu nextaddr cf_miss", false,-1);
        tracep->declBit(c+1040,"top mycpu core my_idu nextaddr zf_miss", false,-1);
        tracep->declQuad(c+1035,"top mycpu core my_idu nextaddr pcadder result", false,-1, 63,0);
        tracep->declBit(c+1037,"top mycpu core my_idu nextaddr pcadder cout", false,-1);
        tracep->declBit(c+1038,"top mycpu core my_idu nextaddr pcadder OF", false,-1);
        tracep->declBit(c+1039,"top mycpu core my_idu nextaddr pcadder SF", false,-1);
        tracep->declBit(c+1040,"top mycpu core my_idu nextaddr pcadder ZF", false,-1);
        tracep->declBit(c+1037,"top mycpu core my_idu nextaddr pcadder CF", false,-1);
        tracep->declQuad(c+1031,"top mycpu core my_idu nextaddr pcadder x", false,-1, 63,0);
        tracep->declQuad(c+1033,"top mycpu core my_idu nextaddr pcadder y", false,-1, 63,0);
        tracep->declBit(c+1138,"top mycpu core my_idu nextaddr pcadder sub", false,-1);
        tracep->declBit(c+1061,"top mycpu core EX_Reg clk", false,-1);
        tracep->declBit(c+987,"top mycpu core EX_Reg flush", false,-1);
        tracep->declBit(c+84,"top mycpu core EX_Reg valid_i", false,-1);
        tracep->declBit(c+985,"top mycpu core EX_Reg enable", false,-1);
        tracep->declBit(c+87,"top mycpu core EX_Reg valid_o", false,-1);
        tracep->declQuad(c+76,"top mycpu core EX_Reg pc_i", false,-1, 63,0);
        tracep->declBus(c+70,"top mycpu core EX_Reg instr_i", false,-1, 31,0);
        tracep->declQuad(c+78,"top mycpu core EX_Reg pc_o", false,-1, 63,0);
        tracep->declBus(c+71,"top mycpu core EX_Reg instr_o", false,-1, 31,0);
        tracep->declBus(c+95,"top mycpu core EX_Reg rd_i", false,-1, 4,0);
        tracep->declQuad(c+989,"top mycpu core EX_Reg busa_i", false,-1, 63,0);
        tracep->declQuad(c+991,"top mycpu core EX_Reg busb_i", false,-1, 63,0);
        tracep->declQuad(c+98,"top mycpu core EX_Reg imm_i", false,-1, 63,0);
        tracep->declBit(c+100,"top mycpu core EX_Reg ALUSrcA_i", false,-1);
        tracep->declBit(c+101,"top mycpu core EX_Reg MemToReg_i", false,-1);
        tracep->declBit(c+102,"top mycpu core EX_Reg MemWen_i", false,-1);
        tracep->declBus(c+108,"top mycpu core EX_Reg ALUSrcB_i", false,-1, 1,0);
        tracep->declBus(c+109,"top mycpu core EX_Reg MemOp_i", false,-1, 2,0);
        tracep->declBus(c+110,"top mycpu core EX_Reg ALUOp_i", false,-1, 4,0);
        tracep->declBus(c+111,"top mycpu core EX_Reg MulOp_i", false,-1, 1,0);
        tracep->declBit(c+103,"top mycpu core EX_Reg wen_i", false,-1);
        tracep->declBit(c+104,"top mycpu core EX_Reg CsrToReg_i", false,-1);
        tracep->declQuad(c+93,"top mycpu core EX_Reg Csrres_i", false,-1, 63,0);
        tracep->declBit(c+105,"top mycpu core EX_Reg Ebreak_i", false,-1);
        tracep->declBit(c+106,"top mycpu core EX_Reg Fence_i_i", false,-1);
        tracep->declBit(c+139,"top mycpu core EX_Reg Fence_i_o", false,-1);
        tracep->declBit(c+138,"top mycpu core EX_Reg Ebreak_o", false,-1);
        tracep->declQuad(c+131,"top mycpu core EX_Reg Csrres_o", false,-1, 63,0);
        tracep->declBus(c+124,"top mycpu core EX_Reg rd_o", false,-1, 4,0);
        tracep->declQuad(c+125,"top mycpu core EX_Reg busa_o", false,-1, 63,0);
        tracep->declQuad(c+127,"top mycpu core EX_Reg busb_o", false,-1, 63,0);
        tracep->declBit(c+136,"top mycpu core EX_Reg wen_o", false,-1);
        tracep->declBit(c+133,"top mycpu core EX_Reg ALUSrcA_o", false,-1);
        tracep->declBit(c+134,"top mycpu core EX_Reg MemToReg_o", false,-1);
        tracep->declBit(c+135,"top mycpu core EX_Reg MemWen_o", false,-1);
        tracep->declBit(c+137,"top mycpu core EX_Reg CsrToReg_o", false,-1);
        tracep->declBus(c+140,"top mycpu core EX_Reg ALUSrcB_o", false,-1, 1,0);
        tracep->declBus(c+142,"top mycpu core EX_Reg ALUOp_o", false,-1, 4,0);
        tracep->declBus(c+141,"top mycpu core EX_Reg MemOp_o", false,-1, 2,0);
        tracep->declBus(c+143,"top mycpu core EX_Reg MulOp_o", false,-1, 1,0);
        tracep->declQuad(c+129,"top mycpu core EX_Reg imm_o", false,-1, 63,0);
        tracep->declQuad(c+993,"top mycpu core EX_Reg dnpc_i", false,-1, 63,0);
        tracep->declQuad(c+182,"top mycpu core EX_Reg dnpc_o", false,-1, 63,0);
        tracep->declBit(c+87,"top mycpu core EX_Reg valid_r", false,-1);
        tracep->declBus(c+71,"top mycpu core EX_Reg instr_r", false,-1, 31,0);
        tracep->declQuad(c+78,"top mycpu core EX_Reg pc_r", false,-1, 63,0);
        tracep->declBus(c+124,"top mycpu core EX_Reg rd_r", false,-1, 4,0);
        tracep->declQuad(c+125,"top mycpu core EX_Reg busa_r", false,-1, 63,0);
        tracep->declQuad(c+127,"top mycpu core EX_Reg busb_r", false,-1, 63,0);
        tracep->declQuad(c+129,"top mycpu core EX_Reg imm_r", false,-1, 63,0);
        tracep->declBit(c+133,"top mycpu core EX_Reg ALUSrcA_r", false,-1);
        tracep->declBit(c+134,"top mycpu core EX_Reg MemToReg_r", false,-1);
        tracep->declBit(c+135,"top mycpu core EX_Reg MemWen_r", false,-1);
        tracep->declBit(c+136,"top mycpu core EX_Reg wen_r", false,-1);
        tracep->declBit(c+137,"top mycpu core EX_Reg CsrToReg_r", false,-1);
        tracep->declBus(c+140,"top mycpu core EX_Reg ALUSrcB_r", false,-1, 1,0);
        tracep->declBus(c+141,"top mycpu core EX_Reg MemOp_r", false,-1, 2,0);
        tracep->declBus(c+142,"top mycpu core EX_Reg ALUOp_r", false,-1, 4,0);
        tracep->declBus(c+143,"top mycpu core EX_Reg MulOp_r", false,-1, 1,0);
        tracep->declQuad(c+131,"top mycpu core EX_Reg Csrres_r", false,-1, 63,0);
        tracep->declBit(c+138,"top mycpu core EX_Reg Ebreak_r", false,-1);
        tracep->declBit(c+139,"top mycpu core EX_Reg Fence_i_r", false,-1);
        tracep->declBit(c+1061,"top mycpu core my_exu clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_exu rst", false,-1);
        tracep->declQuad(c+125,"top mycpu core my_exu busa", false,-1, 63,0);
        tracep->declQuad(c+127,"top mycpu core my_exu busb", false,-1, 63,0);
        tracep->declBit(c+133,"top mycpu core my_exu ALUSrcA", false,-1);
        tracep->declBus(c+140,"top mycpu core my_exu ALUSrcB", false,-1, 1,0);
        tracep->declBus(c+142,"top mycpu core my_exu ALUOp", false,-1, 4,0);
        tracep->declBus(c+143,"top mycpu core my_exu MulOp", false,-1, 1,0);
        tracep->declQuad(c+78,"top mycpu core my_exu pc", false,-1, 63,0);
        tracep->declQuad(c+129,"top mycpu core my_exu imm", false,-1, 63,0);
        tracep->declBit(c+988,"top mycpu core my_exu mwb_block", false,-1);
        tracep->declBit(c+87,"top mycpu core my_exu src_valid", false,-1);
        tracep->declQuad(c+995,"top mycpu core my_exu ALURes", false,-1, 63,0);
        tracep->declBit(c+92,"top mycpu core my_exu alu_busy", false,-1);
        tracep->declBit(c+237,"top mycpu core my_exu zero", false,-1);
        tracep->declQuad(c+995,"top mycpu core my_exu res", false,-1, 63,0);
        tracep->declQuad(c+238,"top mycpu core my_exu alu_inA", false,-1, 63,0);
        tracep->declQuad(c+240,"top mycpu core my_exu alu_inB", false,-1, 63,0);
        tracep->declBit(c+1061,"top mycpu core my_exu alu64 clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_exu alu64 rst", false,-1);
        tracep->declBit(c+87,"top mycpu core my_exu alu64 src_valid", false,-1);
        tracep->declBit(c+988,"top mycpu core my_exu alu64 mwb_block", false,-1);
        tracep->declBit(c+92,"top mycpu core my_exu alu64 alu_busy", false,-1);
        tracep->declQuad(c+238,"top mycpu core my_exu alu64 inputa", false,-1, 63,0);
        tracep->declQuad(c+240,"top mycpu core my_exu alu64 inputb", false,-1, 63,0);
        tracep->declBus(c+142,"top mycpu core my_exu alu64 ALUOp", false,-1, 4,0);
        tracep->declBus(c+143,"top mycpu core my_exu alu64 MulOp", false,-1, 1,0);
        tracep->declBit(c+237,"top mycpu core my_exu alu64 zero", false,-1);
        tracep->declQuad(c+995,"top mycpu core my_exu alu64 result", false,-1, 63,0);
        tracep->declBit(c+242,"top mycpu core my_exu alu64 SUBctr", false,-1);
        tracep->declBit(c+243,"top mycpu core my_exu alu64 SIGctr", false,-1);
        tracep->declBit(c+244,"top mycpu core my_exu alu64 ALctr", false,-1);
        tracep->declBit(c+245,"top mycpu core my_exu alu64 SFTctr", false,-1);
        tracep->declBit(c+246,"top mycpu core my_exu alu64 Wctr", false,-1);
        tracep->declBus(c+247,"top mycpu core my_exu alu64 OPctr", false,-1, 3,0);
        tracep->declQuad(c+248,"top mycpu core my_exu alu64 adderres", false,-1, 63,0);
        tracep->declQuad(c+250,"top mycpu core my_exu alu64 res0", false,-1, 63,0);
        tracep->declQuad(c+252,"top mycpu core my_exu alu64 res1", false,-1, 63,0);
        tracep->declQuad(c+254,"top mycpu core my_exu alu64 res2", false,-1, 63,0);
        tracep->declQuad(c+256,"top mycpu core my_exu alu64 res3", false,-1, 63,0);
        tracep->declQuad(c+258,"top mycpu core my_exu alu64 res4", false,-1, 63,0);
        tracep->declQuad(c+240,"top mycpu core my_exu alu64 res5", false,-1, 63,0);
        tracep->declQuad(c+260,"top mycpu core my_exu alu64 res6", false,-1, 63,0);
        tracep->declQuad(c+966,"top mycpu core my_exu alu64 res7", false,-1, 63,0);
        tracep->declQuad(c+968,"top mycpu core my_exu alu64 res8", false,-1, 63,0);
        tracep->declQuad(c+970,"top mycpu core my_exu alu64 res9", false,-1, 63,0);
        tracep->declQuad(c+262,"top mycpu core my_exu alu64 adderb", false,-1, 63,0);
        tracep->declBit(c+264,"top mycpu core my_exu alu64 CF", false,-1);
        tracep->declBit(c+265,"top mycpu core my_exu alu64 SF", false,-1);
        tracep->declBit(c+266,"top mycpu core my_exu alu64 OF", false,-1);
        tracep->declBit(c+237,"top mycpu core my_exu alu64 ZF", false,-1);
        tracep->declBit(c+267,"top mycpu core my_exu alu64 cout_miss", false,-1);
        tracep->declBus(c+268,"top mycpu core my_exu alu64 sllWres", false,-1, 31,0);
        tracep->declBus(c+269,"top mycpu core my_exu alu64 srWres", false,-1, 31,0);
        tracep->declBus(c+270,"top mycpu core my_exu alu64 lower32", false,-1, 31,0);
        tracep->declBus(c+271,"top mycpu core my_exu alu64 shamt", false,-1, 5,0);
        tracep->declBus(c+272,"top mycpu core my_exu alu64 shamtW", false,-1, 4,0);
        tracep->declQuad(c+273,"top mycpu core my_exu alu64 srres", false,-1, 63,0);
        tracep->declQuad(c+275,"top mycpu core my_exu alu64 shiftL", false,-1, 63,0);
        tracep->declQuad(c+277,"top mycpu core my_exu alu64 shiftR", false,-1, 63,0);
        tracep->declBit(c+279,"top mycpu core my_exu alu64 op_mul", false,-1);
        tracep->declArray(c+280,"top mycpu core my_exu alu64 multiplicand", false,-1, 64,0);
        tracep->declArray(c+283,"top mycpu core my_exu alu64 multiplier", false,-1, 64,0);
        tracep->declQuad(c+286,"top mycpu core my_exu alu64 result_hi", false,-1, 63,0);
        tracep->declQuad(c+288,"top mycpu core my_exu alu64 result_lo", false,-1, 63,0);
        tracep->declQuad(c+290,"top mycpu core my_exu alu64 result_hi_r", false,-1, 63,0);
        tracep->declQuad(c+292,"top mycpu core my_exu alu64 result_lo_r", false,-1, 63,0);
        tracep->declBit(c+294,"top mycpu core my_exu alu64 mul_doing", false,-1);
        tracep->declBit(c+295,"top mycpu core my_exu alu64 mul_ready", false,-1);
        tracep->declBit(c+296,"top mycpu core my_exu alu64 mul_out_valid", false,-1);
        tracep->declBit(c+297,"top mycpu core my_exu alu64 mul_valid", false,-1);
        tracep->declBit(c+298,"top mycpu core my_exu alu64 old_mul", false,-1);
        tracep->declQuad(c+972,"top mycpu core my_exu alu64 rhi", false,-1, 63,0);
        tracep->declQuad(c+1041,"top mycpu core my_exu alu64 rlo", false,-1, 63,0);
        tracep->declBit(c+299,"top mycpu core my_exu alu64 op_div", false,-1);
        tracep->declQuad(c+300,"top mycpu core my_exu alu64 dividend", false,-1, 63,0);
        tracep->declQuad(c+302,"top mycpu core my_exu alu64 divisor", false,-1, 63,0);
        tracep->declQuad(c+304,"top mycpu core my_exu alu64 quotient", false,-1, 63,0);
        tracep->declQuad(c+306,"top mycpu core my_exu alu64 remainder", false,-1, 63,0);
        tracep->declQuad(c+308,"top mycpu core my_exu alu64 quotient_r", false,-1, 63,0);
        tracep->declQuad(c+310,"top mycpu core my_exu alu64 remainder_r", false,-1, 63,0);
        tracep->declBit(c+312,"top mycpu core my_exu alu64 div_doing", false,-1);
        tracep->declBit(c+313,"top mycpu core my_exu alu64 div_ready", false,-1);
        tracep->declBit(c+314,"top mycpu core my_exu alu64 out_valid", false,-1);
        tracep->declBit(c+315,"top mycpu core my_exu alu64 div_valid", false,-1);
        tracep->declBit(c+316,"top mycpu core my_exu alu64 old_div", false,-1);
        tracep->declBus(c+142,"top mycpu core my_exu alu64 alusig ALUOp", false,-1, 4,0);
        tracep->declBit(c+242,"top mycpu core my_exu alu64 alusig SUBctr", false,-1);
        tracep->declBit(c+243,"top mycpu core my_exu alu64 alusig SIGctr", false,-1);
        tracep->declBit(c+244,"top mycpu core my_exu alu64 alusig ALctr", false,-1);
        tracep->declBit(c+245,"top mycpu core my_exu alu64 alusig SFTctr", false,-1);
        tracep->declBit(c+246,"top mycpu core my_exu alu64 alusig Wctr", false,-1);
        tracep->declBus(c+247,"top mycpu core my_exu alu64 alusig OPctr", false,-1, 3,0);
        tracep->declQuad(c+248,"top mycpu core my_exu alu64 adder result", false,-1, 63,0);
        tracep->declBit(c+267,"top mycpu core my_exu alu64 adder cout", false,-1);
        tracep->declBit(c+266,"top mycpu core my_exu alu64 adder OF", false,-1);
        tracep->declBit(c+265,"top mycpu core my_exu alu64 adder SF", false,-1);
        tracep->declBit(c+237,"top mycpu core my_exu alu64 adder ZF", false,-1);
        tracep->declBit(c+264,"top mycpu core my_exu alu64 adder CF", false,-1);
        tracep->declQuad(c+238,"top mycpu core my_exu alu64 adder x", false,-1, 63,0);
        tracep->declQuad(c+262,"top mycpu core my_exu alu64 adder y", false,-1, 63,0);
        tracep->declBit(c+242,"top mycpu core my_exu alu64 adder sub", false,-1);
        tracep->declBit(c+1061,"top mycpu core my_exu alu64 mulu clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_exu alu64 mulu rst", false,-1);
        tracep->declArray(c+280,"top mycpu core my_exu alu64 mulu multiplicand", false,-1, 64,0);
        tracep->declArray(c+283,"top mycpu core my_exu alu64 mulu multiplier", false,-1, 64,0);
        tracep->declBit(c+297,"top mycpu core my_exu alu64 mulu mul_valid", false,-1);
        tracep->declBit(c+295,"top mycpu core my_exu alu64 mulu mul_ready", false,-1);
        tracep->declBit(c+296,"top mycpu core my_exu alu64 mulu out_valid", false,-1);
        tracep->declArray(c+317,"top mycpu core my_exu alu64 mulu result", false,-1, 127,0);
        tracep->declArray(c+321,"top mycpu core my_exu alu64 mulu tmp_result", false,-1, 131,0);
        tracep->declArray(c+326,"top mycpu core my_exu alu64 mulu multiplicand_r", false,-1, 131,0);
        tracep->declArray(c+331,"top mycpu core my_exu alu64 mulu multiplier_r", false,-1, 66,0);
        tracep->declBit(c+334,"top mycpu core my_exu alu64 mulu running_r", false,-1);
        tracep->declBit(c+335,"top mycpu core my_exu alu64 mulu mul_fire", false,-1);
        tracep->declBit(c+336,"top mycpu core my_exu alu64 mulu done", false,-1);
        tracep->declArray(c+337,"top mycpu core my_exu alu64 mulu p_result", false,-1, 131,0);
        tracep->declBus(c+342,"top mycpu core my_exu alu64 mulu cnt", false,-1, 6,0);
        tracep->declBit(c+343,"top mycpu core my_exu alu64 mulu partial_cout", false,-1);
        tracep->declArray(c+344,"top mycpu core my_exu alu64 mulu adder_result", false,-1, 131,0);
        tracep->declBit(c+349,"top mycpu core my_exu alu64 mulu adder_cout", false,-1);
        tracep->declArray(c+326,"top mycpu core my_exu alu64 mulu partial x_src", false,-1, 131,0);
        tracep->declBus(c+350,"top mycpu core my_exu alu64 mulu partial y_src", false,-1, 2,0);
        tracep->declArray(c+337,"top mycpu core my_exu alu64 mulu partial p_result", false,-1, 131,0);
        tracep->declBit(c+343,"top mycpu core my_exu alu64 mulu partial cout", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial sel", false,-1, 3,0);
        tracep->declBit(c+352,"top mycpu core my_exu alu64 mulu partial sel_negative", false,-1);
        tracep->declBit(c+353,"top mycpu core my_exu alu64 mulu partial sel_double_negative", false,-1);
        tracep->declBus(c+350,"top mycpu core my_exu alu64 mulu partial sel_gen src", false,-1, 2,0);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial sel_gen sel", false,-1, 3,0);
        tracep->declBit(c+354,"top mycpu core my_exu alu64 mulu partial sel_gen y_add", false,-1);
        tracep->declBit(c+355,"top mycpu core my_exu alu64 mulu partial sel_gen y", false,-1);
        tracep->declBit(c+356,"top mycpu core my_exu alu64 mulu partial sel_gen y_sub", false,-1);
        tracep->declBit(c+357,"top mycpu core my_exu alu64 mulu partial sel_gen sel_negative", false,-1);
        tracep->declBit(c+358,"top mycpu core my_exu alu64 mulu partial sel_gen sel_double_negative", false,-1);
        tracep->declBit(c+359,"top mycpu core my_exu alu64 mulu partial sel_gen sel_positive", false,-1);
        tracep->declBit(c+360,"top mycpu core my_exu alu64 mulu partial sel_gen sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial p_res0 sel", false,-1, 3,0);
        tracep->declBus(c+361,"top mycpu core my_exu alu64 mulu partial p_res0 src", false,-1, 1,0);
        tracep->declBit(c+362,"top mycpu core my_exu alu64 mulu partial p_res0 p", false,-1);
        tracep->declBit(c+363,"top mycpu core my_exu alu64 mulu partial p_res0 x", false,-1);
        tracep->declBit(c+1138,"top mycpu core my_exu alu64 mulu partial p_res0 x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial p_res0 sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial p_res0 sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial p_res0 sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial p_res0 sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res sel", false,-1, 3,0);
        tracep->declBus(c+368,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res src", false,-1, 1,0);
        tracep->declBit(c+369,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res p", false,-1);
        tracep->declBit(c+370,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res x", false,-1);
        tracep->declBit(c+371,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[1] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res sel", false,-1, 3,0);
        tracep->declBus(c+372,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res src", false,-1, 1,0);
        tracep->declBit(c+373,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res p", false,-1);
        tracep->declBit(c+374,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res x", false,-1);
        tracep->declBit(c+370,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[2] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res sel", false,-1, 3,0);
        tracep->declBus(c+375,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res src", false,-1, 1,0);
        tracep->declBit(c+376,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res p", false,-1);
        tracep->declBit(c+377,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res x", false,-1);
        tracep->declBit(c+374,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[3] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res sel", false,-1, 3,0);
        tracep->declBus(c+378,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res src", false,-1, 1,0);
        tracep->declBit(c+379,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res p", false,-1);
        tracep->declBit(c+380,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res x", false,-1);
        tracep->declBit(c+377,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[4] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res sel", false,-1, 3,0);
        tracep->declBus(c+381,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res src", false,-1, 1,0);
        tracep->declBit(c+382,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res p", false,-1);
        tracep->declBit(c+383,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res x", false,-1);
        tracep->declBit(c+380,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[5] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res sel", false,-1, 3,0);
        tracep->declBus(c+384,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res src", false,-1, 1,0);
        tracep->declBit(c+385,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res p", false,-1);
        tracep->declBit(c+386,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res x", false,-1);
        tracep->declBit(c+383,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[6] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res sel", false,-1, 3,0);
        tracep->declBus(c+387,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res src", false,-1, 1,0);
        tracep->declBit(c+388,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res p", false,-1);
        tracep->declBit(c+389,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res x", false,-1);
        tracep->declBit(c+386,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[7] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res sel", false,-1, 3,0);
        tracep->declBus(c+390,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res src", false,-1, 1,0);
        tracep->declBit(c+391,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res p", false,-1);
        tracep->declBit(c+392,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res x", false,-1);
        tracep->declBit(c+389,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[8] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res sel", false,-1, 3,0);
        tracep->declBus(c+393,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res src", false,-1, 1,0);
        tracep->declBit(c+394,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res p", false,-1);
        tracep->declBit(c+395,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res x", false,-1);
        tracep->declBit(c+392,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[9] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res sel", false,-1, 3,0);
        tracep->declBus(c+396,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res src", false,-1, 1,0);
        tracep->declBit(c+397,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res p", false,-1);
        tracep->declBit(c+398,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res x", false,-1);
        tracep->declBit(c+395,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[10] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res sel", false,-1, 3,0);
        tracep->declBus(c+399,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res src", false,-1, 1,0);
        tracep->declBit(c+400,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res p", false,-1);
        tracep->declBit(c+401,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res x", false,-1);
        tracep->declBit(c+398,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[11] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res sel", false,-1, 3,0);
        tracep->declBus(c+402,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res src", false,-1, 1,0);
        tracep->declBit(c+403,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res p", false,-1);
        tracep->declBit(c+404,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res x", false,-1);
        tracep->declBit(c+401,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[12] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res sel", false,-1, 3,0);
        tracep->declBus(c+405,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res src", false,-1, 1,0);
        tracep->declBit(c+406,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res p", false,-1);
        tracep->declBit(c+407,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res x", false,-1);
        tracep->declBit(c+404,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[13] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res sel", false,-1, 3,0);
        tracep->declBus(c+408,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res src", false,-1, 1,0);
        tracep->declBit(c+409,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res p", false,-1);
        tracep->declBit(c+410,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res x", false,-1);
        tracep->declBit(c+407,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[14] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res sel", false,-1, 3,0);
        tracep->declBus(c+411,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res src", false,-1, 1,0);
        tracep->declBit(c+412,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res p", false,-1);
        tracep->declBit(c+413,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res x", false,-1);
        tracep->declBit(c+410,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[15] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res sel", false,-1, 3,0);
        tracep->declBus(c+414,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res src", false,-1, 1,0);
        tracep->declBit(c+415,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res p", false,-1);
        tracep->declBit(c+416,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res x", false,-1);
        tracep->declBit(c+413,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[16] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res sel", false,-1, 3,0);
        tracep->declBus(c+417,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res src", false,-1, 1,0);
        tracep->declBit(c+418,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res p", false,-1);
        tracep->declBit(c+419,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res x", false,-1);
        tracep->declBit(c+416,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[17] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res sel", false,-1, 3,0);
        tracep->declBus(c+420,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res src", false,-1, 1,0);
        tracep->declBit(c+421,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res p", false,-1);
        tracep->declBit(c+422,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res x", false,-1);
        tracep->declBit(c+419,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[18] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res sel", false,-1, 3,0);
        tracep->declBus(c+423,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res src", false,-1, 1,0);
        tracep->declBit(c+424,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res p", false,-1);
        tracep->declBit(c+425,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res x", false,-1);
        tracep->declBit(c+422,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[19] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res sel", false,-1, 3,0);
        tracep->declBus(c+426,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res src", false,-1, 1,0);
        tracep->declBit(c+427,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res p", false,-1);
        tracep->declBit(c+428,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res x", false,-1);
        tracep->declBit(c+425,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[20] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res sel", false,-1, 3,0);
        tracep->declBus(c+429,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res src", false,-1, 1,0);
        tracep->declBit(c+430,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res p", false,-1);
        tracep->declBit(c+431,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res x", false,-1);
        tracep->declBit(c+428,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[21] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res sel", false,-1, 3,0);
        tracep->declBus(c+432,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res src", false,-1, 1,0);
        tracep->declBit(c+433,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res p", false,-1);
        tracep->declBit(c+434,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res x", false,-1);
        tracep->declBit(c+431,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[22] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res sel", false,-1, 3,0);
        tracep->declBus(c+435,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res src", false,-1, 1,0);
        tracep->declBit(c+436,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res p", false,-1);
        tracep->declBit(c+437,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res x", false,-1);
        tracep->declBit(c+434,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[23] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res sel", false,-1, 3,0);
        tracep->declBus(c+438,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res src", false,-1, 1,0);
        tracep->declBit(c+439,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res p", false,-1);
        tracep->declBit(c+440,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res x", false,-1);
        tracep->declBit(c+437,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[24] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res sel", false,-1, 3,0);
        tracep->declBus(c+441,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res src", false,-1, 1,0);
        tracep->declBit(c+442,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res p", false,-1);
        tracep->declBit(c+443,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res x", false,-1);
        tracep->declBit(c+440,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[25] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res sel", false,-1, 3,0);
        tracep->declBus(c+444,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res src", false,-1, 1,0);
        tracep->declBit(c+445,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res p", false,-1);
        tracep->declBit(c+446,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res x", false,-1);
        tracep->declBit(c+443,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[26] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res sel", false,-1, 3,0);
        tracep->declBus(c+447,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res src", false,-1, 1,0);
        tracep->declBit(c+448,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res p", false,-1);
        tracep->declBit(c+449,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res x", false,-1);
        tracep->declBit(c+446,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[27] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res sel", false,-1, 3,0);
        tracep->declBus(c+450,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res src", false,-1, 1,0);
        tracep->declBit(c+451,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res p", false,-1);
        tracep->declBit(c+452,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res x", false,-1);
        tracep->declBit(c+449,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[28] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res sel", false,-1, 3,0);
        tracep->declBus(c+453,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res src", false,-1, 1,0);
        tracep->declBit(c+454,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res p", false,-1);
        tracep->declBit(c+455,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res x", false,-1);
        tracep->declBit(c+452,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[29] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res sel", false,-1, 3,0);
        tracep->declBus(c+456,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res src", false,-1, 1,0);
        tracep->declBit(c+457,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res p", false,-1);
        tracep->declBit(c+458,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res x", false,-1);
        tracep->declBit(c+455,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[30] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res sel", false,-1, 3,0);
        tracep->declBus(c+459,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res src", false,-1, 1,0);
        tracep->declBit(c+460,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res p", false,-1);
        tracep->declBit(c+461,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res x", false,-1);
        tracep->declBit(c+458,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[31] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res sel", false,-1, 3,0);
        tracep->declBus(c+462,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res src", false,-1, 1,0);
        tracep->declBit(c+463,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res p", false,-1);
        tracep->declBit(c+464,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res x", false,-1);
        tracep->declBit(c+461,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[32] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res sel", false,-1, 3,0);
        tracep->declBus(c+465,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res src", false,-1, 1,0);
        tracep->declBit(c+466,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res p", false,-1);
        tracep->declBit(c+467,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res x", false,-1);
        tracep->declBit(c+464,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[33] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res sel", false,-1, 3,0);
        tracep->declBus(c+468,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res src", false,-1, 1,0);
        tracep->declBit(c+469,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res p", false,-1);
        tracep->declBit(c+470,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res x", false,-1);
        tracep->declBit(c+467,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[34] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res sel", false,-1, 3,0);
        tracep->declBus(c+471,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res src", false,-1, 1,0);
        tracep->declBit(c+472,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res p", false,-1);
        tracep->declBit(c+473,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res x", false,-1);
        tracep->declBit(c+470,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[35] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res sel", false,-1, 3,0);
        tracep->declBus(c+474,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res src", false,-1, 1,0);
        tracep->declBit(c+475,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res p", false,-1);
        tracep->declBit(c+476,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res x", false,-1);
        tracep->declBit(c+473,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[36] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res sel", false,-1, 3,0);
        tracep->declBus(c+477,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res src", false,-1, 1,0);
        tracep->declBit(c+478,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res p", false,-1);
        tracep->declBit(c+479,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res x", false,-1);
        tracep->declBit(c+476,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[37] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res sel", false,-1, 3,0);
        tracep->declBus(c+480,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res src", false,-1, 1,0);
        tracep->declBit(c+481,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res p", false,-1);
        tracep->declBit(c+482,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res x", false,-1);
        tracep->declBit(c+479,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[38] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res sel", false,-1, 3,0);
        tracep->declBus(c+483,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res src", false,-1, 1,0);
        tracep->declBit(c+484,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res p", false,-1);
        tracep->declBit(c+485,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res x", false,-1);
        tracep->declBit(c+482,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[39] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res sel", false,-1, 3,0);
        tracep->declBus(c+486,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res src", false,-1, 1,0);
        tracep->declBit(c+487,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res p", false,-1);
        tracep->declBit(c+488,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res x", false,-1);
        tracep->declBit(c+485,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[40] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res sel", false,-1, 3,0);
        tracep->declBus(c+489,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res src", false,-1, 1,0);
        tracep->declBit(c+490,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res p", false,-1);
        tracep->declBit(c+491,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res x", false,-1);
        tracep->declBit(c+488,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[41] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res sel", false,-1, 3,0);
        tracep->declBus(c+492,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res src", false,-1, 1,0);
        tracep->declBit(c+493,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res p", false,-1);
        tracep->declBit(c+494,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res x", false,-1);
        tracep->declBit(c+491,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[42] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res sel", false,-1, 3,0);
        tracep->declBus(c+495,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res src", false,-1, 1,0);
        tracep->declBit(c+496,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res p", false,-1);
        tracep->declBit(c+497,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res x", false,-1);
        tracep->declBit(c+494,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[43] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res sel", false,-1, 3,0);
        tracep->declBus(c+498,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res src", false,-1, 1,0);
        tracep->declBit(c+499,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res p", false,-1);
        tracep->declBit(c+500,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res x", false,-1);
        tracep->declBit(c+497,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[44] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res sel", false,-1, 3,0);
        tracep->declBus(c+501,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res src", false,-1, 1,0);
        tracep->declBit(c+502,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res p", false,-1);
        tracep->declBit(c+503,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res x", false,-1);
        tracep->declBit(c+500,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[45] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res sel", false,-1, 3,0);
        tracep->declBus(c+504,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res src", false,-1, 1,0);
        tracep->declBit(c+505,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res p", false,-1);
        tracep->declBit(c+506,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res x", false,-1);
        tracep->declBit(c+503,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[46] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res sel", false,-1, 3,0);
        tracep->declBus(c+507,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res src", false,-1, 1,0);
        tracep->declBit(c+508,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res p", false,-1);
        tracep->declBit(c+509,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res x", false,-1);
        tracep->declBit(c+506,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[47] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res sel", false,-1, 3,0);
        tracep->declBus(c+510,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res src", false,-1, 1,0);
        tracep->declBit(c+511,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res p", false,-1);
        tracep->declBit(c+512,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res x", false,-1);
        tracep->declBit(c+509,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[48] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res sel", false,-1, 3,0);
        tracep->declBus(c+513,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res src", false,-1, 1,0);
        tracep->declBit(c+514,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res p", false,-1);
        tracep->declBit(c+515,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res x", false,-1);
        tracep->declBit(c+512,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[49] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res sel", false,-1, 3,0);
        tracep->declBus(c+516,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res src", false,-1, 1,0);
        tracep->declBit(c+517,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res p", false,-1);
        tracep->declBit(c+518,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res x", false,-1);
        tracep->declBit(c+515,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[50] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res sel", false,-1, 3,0);
        tracep->declBus(c+519,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res src", false,-1, 1,0);
        tracep->declBit(c+520,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res p", false,-1);
        tracep->declBit(c+521,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res x", false,-1);
        tracep->declBit(c+518,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[51] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res sel", false,-1, 3,0);
        tracep->declBus(c+522,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res src", false,-1, 1,0);
        tracep->declBit(c+523,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res p", false,-1);
        tracep->declBit(c+524,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res x", false,-1);
        tracep->declBit(c+521,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[52] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res sel", false,-1, 3,0);
        tracep->declBus(c+525,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res src", false,-1, 1,0);
        tracep->declBit(c+526,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res p", false,-1);
        tracep->declBit(c+527,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res x", false,-1);
        tracep->declBit(c+524,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[53] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res sel", false,-1, 3,0);
        tracep->declBus(c+528,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res src", false,-1, 1,0);
        tracep->declBit(c+529,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res p", false,-1);
        tracep->declBit(c+530,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res x", false,-1);
        tracep->declBit(c+527,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[54] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res sel", false,-1, 3,0);
        tracep->declBus(c+531,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res src", false,-1, 1,0);
        tracep->declBit(c+532,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res p", false,-1);
        tracep->declBit(c+533,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res x", false,-1);
        tracep->declBit(c+530,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[55] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res sel", false,-1, 3,0);
        tracep->declBus(c+534,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res src", false,-1, 1,0);
        tracep->declBit(c+535,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res p", false,-1);
        tracep->declBit(c+536,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res x", false,-1);
        tracep->declBit(c+533,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[56] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res sel", false,-1, 3,0);
        tracep->declBus(c+537,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res src", false,-1, 1,0);
        tracep->declBit(c+538,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res p", false,-1);
        tracep->declBit(c+539,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res x", false,-1);
        tracep->declBit(c+536,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[57] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res sel", false,-1, 3,0);
        tracep->declBus(c+540,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res src", false,-1, 1,0);
        tracep->declBit(c+541,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res p", false,-1);
        tracep->declBit(c+542,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res x", false,-1);
        tracep->declBit(c+539,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[58] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res sel", false,-1, 3,0);
        tracep->declBus(c+543,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res src", false,-1, 1,0);
        tracep->declBit(c+544,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res p", false,-1);
        tracep->declBit(c+545,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res x", false,-1);
        tracep->declBit(c+542,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[59] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res sel", false,-1, 3,0);
        tracep->declBus(c+546,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res src", false,-1, 1,0);
        tracep->declBit(c+547,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res p", false,-1);
        tracep->declBit(c+548,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res x", false,-1);
        tracep->declBit(c+545,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[60] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res sel", false,-1, 3,0);
        tracep->declBus(c+549,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res src", false,-1, 1,0);
        tracep->declBit(c+550,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res p", false,-1);
        tracep->declBit(c+551,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res x", false,-1);
        tracep->declBit(c+548,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[61] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res sel", false,-1, 3,0);
        tracep->declBus(c+552,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res src", false,-1, 1,0);
        tracep->declBit(c+553,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res p", false,-1);
        tracep->declBit(c+554,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res x", false,-1);
        tracep->declBit(c+551,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[62] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res sel", false,-1, 3,0);
        tracep->declBus(c+555,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res src", false,-1, 1,0);
        tracep->declBit(c+556,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res p", false,-1);
        tracep->declBit(c+557,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res x", false,-1);
        tracep->declBit(c+554,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[63] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res sel", false,-1, 3,0);
        tracep->declBus(c+558,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res src", false,-1, 1,0);
        tracep->declBit(c+559,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res p", false,-1);
        tracep->declBit(c+560,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res x", false,-1);
        tracep->declBit(c+557,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[64] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res sel", false,-1, 3,0);
        tracep->declBus(c+561,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res src", false,-1, 1,0);
        tracep->declBit(c+562,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res p", false,-1);
        tracep->declBit(c+563,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res x", false,-1);
        tracep->declBit(c+560,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[65] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res sel", false,-1, 3,0);
        tracep->declBus(c+564,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res src", false,-1, 1,0);
        tracep->declBit(c+565,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res p", false,-1);
        tracep->declBit(c+566,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res x", false,-1);
        tracep->declBit(c+563,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[66] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res sel", false,-1, 3,0);
        tracep->declBus(c+567,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res src", false,-1, 1,0);
        tracep->declBit(c+568,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res p", false,-1);
        tracep->declBit(c+569,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res x", false,-1);
        tracep->declBit(c+566,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[67] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res sel", false,-1, 3,0);
        tracep->declBus(c+570,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res src", false,-1, 1,0);
        tracep->declBit(c+571,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res p", false,-1);
        tracep->declBit(c+572,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res x", false,-1);
        tracep->declBit(c+569,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[68] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res sel", false,-1, 3,0);
        tracep->declBus(c+573,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res src", false,-1, 1,0);
        tracep->declBit(c+574,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res p", false,-1);
        tracep->declBit(c+575,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res x", false,-1);
        tracep->declBit(c+572,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[69] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res sel", false,-1, 3,0);
        tracep->declBus(c+576,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res src", false,-1, 1,0);
        tracep->declBit(c+577,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res p", false,-1);
        tracep->declBit(c+578,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res x", false,-1);
        tracep->declBit(c+575,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[70] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res sel", false,-1, 3,0);
        tracep->declBus(c+579,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res src", false,-1, 1,0);
        tracep->declBit(c+580,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res p", false,-1);
        tracep->declBit(c+581,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res x", false,-1);
        tracep->declBit(c+578,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[71] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res sel", false,-1, 3,0);
        tracep->declBus(c+582,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res src", false,-1, 1,0);
        tracep->declBit(c+583,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res p", false,-1);
        tracep->declBit(c+584,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res x", false,-1);
        tracep->declBit(c+581,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[72] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res sel", false,-1, 3,0);
        tracep->declBus(c+585,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res src", false,-1, 1,0);
        tracep->declBit(c+586,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res p", false,-1);
        tracep->declBit(c+587,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res x", false,-1);
        tracep->declBit(c+584,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[73] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res sel", false,-1, 3,0);
        tracep->declBus(c+588,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res src", false,-1, 1,0);
        tracep->declBit(c+589,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res p", false,-1);
        tracep->declBit(c+590,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res x", false,-1);
        tracep->declBit(c+587,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[74] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res sel", false,-1, 3,0);
        tracep->declBus(c+591,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res src", false,-1, 1,0);
        tracep->declBit(c+592,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res p", false,-1);
        tracep->declBit(c+593,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res x", false,-1);
        tracep->declBit(c+590,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[75] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res sel", false,-1, 3,0);
        tracep->declBus(c+594,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res src", false,-1, 1,0);
        tracep->declBit(c+595,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res p", false,-1);
        tracep->declBit(c+596,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res x", false,-1);
        tracep->declBit(c+593,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[76] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res sel", false,-1, 3,0);
        tracep->declBus(c+597,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res src", false,-1, 1,0);
        tracep->declBit(c+598,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res p", false,-1);
        tracep->declBit(c+599,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res x", false,-1);
        tracep->declBit(c+596,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[77] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res sel", false,-1, 3,0);
        tracep->declBus(c+600,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res src", false,-1, 1,0);
        tracep->declBit(c+601,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res p", false,-1);
        tracep->declBit(c+602,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res x", false,-1);
        tracep->declBit(c+599,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[78] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res sel", false,-1, 3,0);
        tracep->declBus(c+603,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res src", false,-1, 1,0);
        tracep->declBit(c+604,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res p", false,-1);
        tracep->declBit(c+605,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res x", false,-1);
        tracep->declBit(c+602,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[79] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res sel", false,-1, 3,0);
        tracep->declBus(c+606,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res src", false,-1, 1,0);
        tracep->declBit(c+607,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res p", false,-1);
        tracep->declBit(c+608,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res x", false,-1);
        tracep->declBit(c+605,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[80] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res sel", false,-1, 3,0);
        tracep->declBus(c+609,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res src", false,-1, 1,0);
        tracep->declBit(c+610,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res p", false,-1);
        tracep->declBit(c+611,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res x", false,-1);
        tracep->declBit(c+608,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[81] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res sel", false,-1, 3,0);
        tracep->declBus(c+612,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res src", false,-1, 1,0);
        tracep->declBit(c+613,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res p", false,-1);
        tracep->declBit(c+614,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res x", false,-1);
        tracep->declBit(c+611,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[82] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res sel", false,-1, 3,0);
        tracep->declBus(c+615,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res src", false,-1, 1,0);
        tracep->declBit(c+616,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res p", false,-1);
        tracep->declBit(c+617,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res x", false,-1);
        tracep->declBit(c+614,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[83] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res sel", false,-1, 3,0);
        tracep->declBus(c+618,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res src", false,-1, 1,0);
        tracep->declBit(c+619,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res p", false,-1);
        tracep->declBit(c+620,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res x", false,-1);
        tracep->declBit(c+617,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[84] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res sel", false,-1, 3,0);
        tracep->declBus(c+621,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res src", false,-1, 1,0);
        tracep->declBit(c+622,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res p", false,-1);
        tracep->declBit(c+623,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res x", false,-1);
        tracep->declBit(c+620,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[85] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res sel", false,-1, 3,0);
        tracep->declBus(c+624,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res src", false,-1, 1,0);
        tracep->declBit(c+625,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res p", false,-1);
        tracep->declBit(c+626,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res x", false,-1);
        tracep->declBit(c+623,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[86] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res sel", false,-1, 3,0);
        tracep->declBus(c+627,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res src", false,-1, 1,0);
        tracep->declBit(c+628,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res p", false,-1);
        tracep->declBit(c+629,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res x", false,-1);
        tracep->declBit(c+626,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[87] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res sel", false,-1, 3,0);
        tracep->declBus(c+630,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res src", false,-1, 1,0);
        tracep->declBit(c+631,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res p", false,-1);
        tracep->declBit(c+632,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res x", false,-1);
        tracep->declBit(c+629,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[88] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res sel", false,-1, 3,0);
        tracep->declBus(c+633,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res src", false,-1, 1,0);
        tracep->declBit(c+634,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res p", false,-1);
        tracep->declBit(c+635,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res x", false,-1);
        tracep->declBit(c+632,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[89] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res sel", false,-1, 3,0);
        tracep->declBus(c+636,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res src", false,-1, 1,0);
        tracep->declBit(c+637,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res p", false,-1);
        tracep->declBit(c+638,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res x", false,-1);
        tracep->declBit(c+635,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[90] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res sel", false,-1, 3,0);
        tracep->declBus(c+639,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res src", false,-1, 1,0);
        tracep->declBit(c+640,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res p", false,-1);
        tracep->declBit(c+641,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res x", false,-1);
        tracep->declBit(c+638,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[91] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res sel", false,-1, 3,0);
        tracep->declBus(c+642,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res src", false,-1, 1,0);
        tracep->declBit(c+643,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res p", false,-1);
        tracep->declBit(c+644,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res x", false,-1);
        tracep->declBit(c+641,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[92] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res sel", false,-1, 3,0);
        tracep->declBus(c+645,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res src", false,-1, 1,0);
        tracep->declBit(c+646,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res p", false,-1);
        tracep->declBit(c+647,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res x", false,-1);
        tracep->declBit(c+644,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[93] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res sel", false,-1, 3,0);
        tracep->declBus(c+648,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res src", false,-1, 1,0);
        tracep->declBit(c+649,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res p", false,-1);
        tracep->declBit(c+650,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res x", false,-1);
        tracep->declBit(c+647,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[94] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res sel", false,-1, 3,0);
        tracep->declBus(c+651,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res src", false,-1, 1,0);
        tracep->declBit(c+652,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res p", false,-1);
        tracep->declBit(c+653,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res x", false,-1);
        tracep->declBit(c+650,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[95] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res sel", false,-1, 3,0);
        tracep->declBus(c+654,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res src", false,-1, 1,0);
        tracep->declBit(c+655,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res p", false,-1);
        tracep->declBit(c+656,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res x", false,-1);
        tracep->declBit(c+653,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[96] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res sel", false,-1, 3,0);
        tracep->declBus(c+657,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res src", false,-1, 1,0);
        tracep->declBit(c+658,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res p", false,-1);
        tracep->declBit(c+659,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res x", false,-1);
        tracep->declBit(c+656,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[97] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res sel", false,-1, 3,0);
        tracep->declBus(c+660,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res src", false,-1, 1,0);
        tracep->declBit(c+661,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res p", false,-1);
        tracep->declBit(c+662,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res x", false,-1);
        tracep->declBit(c+659,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[98] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res sel", false,-1, 3,0);
        tracep->declBus(c+663,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res src", false,-1, 1,0);
        tracep->declBit(c+664,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res p", false,-1);
        tracep->declBit(c+665,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res x", false,-1);
        tracep->declBit(c+662,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[99] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res sel", false,-1, 3,0);
        tracep->declBus(c+666,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res src", false,-1, 1,0);
        tracep->declBit(c+667,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res p", false,-1);
        tracep->declBit(c+668,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res x", false,-1);
        tracep->declBit(c+665,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[100] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res sel", false,-1, 3,0);
        tracep->declBus(c+669,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res src", false,-1, 1,0);
        tracep->declBit(c+670,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res p", false,-1);
        tracep->declBit(c+671,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res x", false,-1);
        tracep->declBit(c+668,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[101] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res sel", false,-1, 3,0);
        tracep->declBus(c+672,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res src", false,-1, 1,0);
        tracep->declBit(c+673,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res p", false,-1);
        tracep->declBit(c+674,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res x", false,-1);
        tracep->declBit(c+671,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[102] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res sel", false,-1, 3,0);
        tracep->declBus(c+675,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res src", false,-1, 1,0);
        tracep->declBit(c+676,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res p", false,-1);
        tracep->declBit(c+677,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res x", false,-1);
        tracep->declBit(c+674,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[103] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res sel", false,-1, 3,0);
        tracep->declBus(c+678,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res src", false,-1, 1,0);
        tracep->declBit(c+679,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res p", false,-1);
        tracep->declBit(c+680,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res x", false,-1);
        tracep->declBit(c+677,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[104] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res sel", false,-1, 3,0);
        tracep->declBus(c+681,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res src", false,-1, 1,0);
        tracep->declBit(c+682,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res p", false,-1);
        tracep->declBit(c+683,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res x", false,-1);
        tracep->declBit(c+680,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[105] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res sel", false,-1, 3,0);
        tracep->declBus(c+684,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res src", false,-1, 1,0);
        tracep->declBit(c+685,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res p", false,-1);
        tracep->declBit(c+686,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res x", false,-1);
        tracep->declBit(c+683,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[106] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res sel", false,-1, 3,0);
        tracep->declBus(c+687,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res src", false,-1, 1,0);
        tracep->declBit(c+688,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res p", false,-1);
        tracep->declBit(c+689,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res x", false,-1);
        tracep->declBit(c+686,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[107] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res sel", false,-1, 3,0);
        tracep->declBus(c+690,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res src", false,-1, 1,0);
        tracep->declBit(c+691,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res p", false,-1);
        tracep->declBit(c+692,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res x", false,-1);
        tracep->declBit(c+689,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[108] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res sel", false,-1, 3,0);
        tracep->declBus(c+693,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res src", false,-1, 1,0);
        tracep->declBit(c+694,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res p", false,-1);
        tracep->declBit(c+695,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res x", false,-1);
        tracep->declBit(c+692,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[109] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res sel", false,-1, 3,0);
        tracep->declBus(c+696,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res src", false,-1, 1,0);
        tracep->declBit(c+697,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res p", false,-1);
        tracep->declBit(c+698,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res x", false,-1);
        tracep->declBit(c+695,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[110] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res sel", false,-1, 3,0);
        tracep->declBus(c+699,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res src", false,-1, 1,0);
        tracep->declBit(c+700,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res p", false,-1);
        tracep->declBit(c+701,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res x", false,-1);
        tracep->declBit(c+698,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[111] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res sel", false,-1, 3,0);
        tracep->declBus(c+702,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res src", false,-1, 1,0);
        tracep->declBit(c+703,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res p", false,-1);
        tracep->declBit(c+704,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res x", false,-1);
        tracep->declBit(c+701,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[112] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res sel", false,-1, 3,0);
        tracep->declBus(c+705,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res src", false,-1, 1,0);
        tracep->declBit(c+706,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res p", false,-1);
        tracep->declBit(c+707,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res x", false,-1);
        tracep->declBit(c+704,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[113] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res sel", false,-1, 3,0);
        tracep->declBus(c+708,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res src", false,-1, 1,0);
        tracep->declBit(c+709,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res p", false,-1);
        tracep->declBit(c+710,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res x", false,-1);
        tracep->declBit(c+707,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[114] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res sel", false,-1, 3,0);
        tracep->declBus(c+711,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res src", false,-1, 1,0);
        tracep->declBit(c+712,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res p", false,-1);
        tracep->declBit(c+713,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res x", false,-1);
        tracep->declBit(c+710,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[115] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res sel", false,-1, 3,0);
        tracep->declBus(c+714,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res src", false,-1, 1,0);
        tracep->declBit(c+715,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res p", false,-1);
        tracep->declBit(c+716,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res x", false,-1);
        tracep->declBit(c+713,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[116] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res sel", false,-1, 3,0);
        tracep->declBus(c+717,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res src", false,-1, 1,0);
        tracep->declBit(c+718,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res p", false,-1);
        tracep->declBit(c+719,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res x", false,-1);
        tracep->declBit(c+716,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[117] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res sel", false,-1, 3,0);
        tracep->declBus(c+720,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res src", false,-1, 1,0);
        tracep->declBit(c+721,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res p", false,-1);
        tracep->declBit(c+722,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res x", false,-1);
        tracep->declBit(c+719,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[118] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res sel", false,-1, 3,0);
        tracep->declBus(c+723,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res src", false,-1, 1,0);
        tracep->declBit(c+724,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res p", false,-1);
        tracep->declBit(c+725,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res x", false,-1);
        tracep->declBit(c+722,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[119] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res sel", false,-1, 3,0);
        tracep->declBus(c+726,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res src", false,-1, 1,0);
        tracep->declBit(c+727,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res p", false,-1);
        tracep->declBit(c+728,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res x", false,-1);
        tracep->declBit(c+725,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[120] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res sel", false,-1, 3,0);
        tracep->declBus(c+729,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res src", false,-1, 1,0);
        tracep->declBit(c+730,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res p", false,-1);
        tracep->declBit(c+731,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res x", false,-1);
        tracep->declBit(c+728,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[121] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res sel", false,-1, 3,0);
        tracep->declBus(c+732,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res src", false,-1, 1,0);
        tracep->declBit(c+733,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res p", false,-1);
        tracep->declBit(c+734,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res x", false,-1);
        tracep->declBit(c+731,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[122] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res sel", false,-1, 3,0);
        tracep->declBus(c+735,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res src", false,-1, 1,0);
        tracep->declBit(c+736,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res p", false,-1);
        tracep->declBit(c+737,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res x", false,-1);
        tracep->declBit(c+734,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[123] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res sel", false,-1, 3,0);
        tracep->declBus(c+738,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res src", false,-1, 1,0);
        tracep->declBit(c+739,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res p", false,-1);
        tracep->declBit(c+740,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res x", false,-1);
        tracep->declBit(c+737,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[124] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res sel", false,-1, 3,0);
        tracep->declBus(c+741,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res src", false,-1, 1,0);
        tracep->declBit(c+742,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res p", false,-1);
        tracep->declBit(c+743,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res x", false,-1);
        tracep->declBit(c+740,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[125] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res sel", false,-1, 3,0);
        tracep->declBus(c+744,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res src", false,-1, 1,0);
        tracep->declBit(c+745,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res p", false,-1);
        tracep->declBit(c+746,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res x", false,-1);
        tracep->declBit(c+743,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[126] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res sel", false,-1, 3,0);
        tracep->declBus(c+747,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res src", false,-1, 1,0);
        tracep->declBit(c+748,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res p", false,-1);
        tracep->declBit(c+749,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res x", false,-1);
        tracep->declBit(c+746,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[127] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res sel", false,-1, 3,0);
        tracep->declBus(c+750,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res src", false,-1, 1,0);
        tracep->declBit(c+751,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res p", false,-1);
        tracep->declBit(c+752,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res x", false,-1);
        tracep->declBit(c+749,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[128] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res sel", false,-1, 3,0);
        tracep->declBus(c+753,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res src", false,-1, 1,0);
        tracep->declBit(c+754,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res p", false,-1);
        tracep->declBit(c+755,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res x", false,-1);
        tracep->declBit(c+752,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[129] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res sel", false,-1, 3,0);
        tracep->declBus(c+756,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res src", false,-1, 1,0);
        tracep->declBit(c+757,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res p", false,-1);
        tracep->declBit(c+758,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res x", false,-1);
        tracep->declBit(c+755,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[130] p_res sel_double_positive", false,-1);
        tracep->declBus(c+351,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res sel", false,-1, 3,0);
        tracep->declBus(c+759,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res src", false,-1, 1,0);
        tracep->declBit(c+760,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res p", false,-1);
        tracep->declBit(c+761,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res x", false,-1);
        tracep->declBit(c+758,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res x_sub", false,-1);
        tracep->declBit(c+364,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res sel_negative", false,-1);
        tracep->declBit(c+365,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res sel_double_negative", false,-1);
        tracep->declBit(c+366,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res sel_positive", false,-1);
        tracep->declBit(c+367,"top mycpu core my_exu alu64 mulu partial genblk1[131] p_res sel_double_positive", false,-1);
        tracep->declBit(c+1061,"top mycpu core my_exu alu64 divu clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_exu alu64 divu rst", false,-1);
        tracep->declQuad(c+300,"top mycpu core my_exu alu64 divu dividend", false,-1, 63,0);
        tracep->declQuad(c+302,"top mycpu core my_exu alu64 divu divisor", false,-1, 63,0);
        tracep->declBit(c+315,"top mycpu core my_exu alu64 divu div_valid", false,-1);
        tracep->declBit(c+243,"top mycpu core my_exu alu64 divu div_signed", false,-1);
        tracep->declBit(c+1138,"top mycpu core my_exu alu64 divu flush", false,-1);
        tracep->declBit(c+313,"top mycpu core my_exu alu64 divu div_ready", false,-1);
        tracep->declBit(c+314,"top mycpu core my_exu alu64 divu out_valid", false,-1);
        tracep->declQuad(c+304,"top mycpu core my_exu alu64 divu quotient", false,-1, 63,0);
        tracep->declQuad(c+306,"top mycpu core my_exu alu64 divu remainder", false,-1, 63,0);
        tracep->declBit(c+762,"top mycpu core my_exu alu64 divu running_r", false,-1);
        tracep->declBit(c+313,"top mycpu core my_exu alu64 divu ready_r", false,-1);
        tracep->declBit(c+314,"top mycpu core my_exu alu64 divu valid_r", false,-1);
        tracep->declBus(c+763,"top mycpu core my_exu alu64 divu cnt", false,-1, 6,0);
        tracep->declArray(c+764,"top mycpu core my_exu alu64 divu udividend_r", false,-1, 127,0);
        tracep->declQuad(c+768,"top mycpu core my_exu alu64 divu udivisor_r", false,-1, 63,0);
        tracep->declQuad(c+770,"top mycpu core my_exu alu64 divu quotient_r", false,-1, 63,0);
        tracep->declQuad(c+772,"top mycpu core my_exu alu64 divu remainder_r", false,-1, 63,0);
        tracep->declBit(c+774,"top mycpu core my_exu alu64 divu dividend_s", false,-1);
        tracep->declBit(c+775,"top mycpu core my_exu alu64 divu divisor_s", false,-1);
        tracep->declQuad(c+776,"top mycpu core my_exu alu64 divu dividend_abs", false,-1, 63,0);
        tracep->declQuad(c+778,"top mycpu core my_exu alu64 divu divisor_abs", false,-1, 63,0);
        tracep->declQuad(c+780,"top mycpu core my_exu alu64 divu sub", false,-1, 63,0);
        tracep->declBit(c+782,"top mycpu core my_exu alu64 divu sub_s", false,-1);
        tracep->declBit(c+783,"top mycpu core my_exu alu64 divu div_fire", false,-1);
        tracep->declBit(c+784,"top mycpu core my_exu alu64 divu done", false,-1);
        tracep->declArray(c+785,"top mycpu core my_exu alu64 divu suber src1", false,-1, 64,0);
        tracep->declArray(c+788,"top mycpu core my_exu alu64 divu suber src2", false,-1, 64,0);
        tracep->declBit(c+1166,"top mycpu core my_exu alu64 divu suber cin", false,-1);
        tracep->declBit(c+782,"top mycpu core my_exu alu64 divu suber cout", false,-1);
        tracep->declQuad(c+780,"top mycpu core my_exu alu64 divu suber result", false,-1, 63,0);
        tracep->declBit(c+1061,"top mycpu core M_Reg clk", false,-1);
        tracep->declBit(c+987,"top mycpu core M_Reg flush", false,-1);
        tracep->declBit(c+85,"top mycpu core M_Reg valid_i", false,-1);
        tracep->declBit(c+986,"top mycpu core M_Reg enable", false,-1);
        tracep->declBit(c+88,"top mycpu core M_Reg valid_o", false,-1);
        tracep->declQuad(c+78,"top mycpu core M_Reg pc_i", false,-1, 63,0);
        tracep->declBus(c+71,"top mycpu core M_Reg instr_i", false,-1, 31,0);
        tracep->declQuad(c+80,"top mycpu core M_Reg pc_o", false,-1, 63,0);
        tracep->declBus(c+72,"top mycpu core M_Reg instr_o", false,-1, 31,0);
        tracep->declBus(c+141,"top mycpu core M_Reg MemOp_i", false,-1, 2,0);
        tracep->declQuad(c+995,"top mycpu core M_Reg raddr_i", false,-1, 63,0);
        tracep->declBit(c+135,"top mycpu core M_Reg MemWen_i", false,-1);
        tracep->declQuad(c+127,"top mycpu core M_Reg wdata_i", false,-1, 63,0);
        tracep->declQuad(c+131,"top mycpu core M_Reg Csrres_i", false,-1, 63,0);
        tracep->declBus(c+124,"top mycpu core M_Reg rd_i", false,-1, 4,0);
        tracep->declBit(c+136,"top mycpu core M_Reg wen_i", false,-1);
        tracep->declBit(c+134,"top mycpu core M_Reg MemToReg_i", false,-1);
        tracep->declBit(c+137,"top mycpu core M_Reg CsrToReg_i", false,-1);
        tracep->declBit(c+138,"top mycpu core M_Reg Ebreak_i", false,-1);
        tracep->declBit(c+139,"top mycpu core M_Reg Fence_i_i", false,-1);
        tracep->declBit(c+157,"top mycpu core M_Reg Fence_i_o", false,-1);
        tracep->declBit(c+156,"top mycpu core M_Reg Ebreak_o", false,-1);
        tracep->declBus(c+152,"top mycpu core M_Reg rd_o", false,-1, 4,0);
        tracep->declBit(c+153,"top mycpu core M_Reg wen_o", false,-1);
        tracep->declBit(c+154,"top mycpu core M_Reg MemToReg_o", false,-1);
        tracep->declBit(c+155,"top mycpu core M_Reg CsrToReg_o", false,-1);
        tracep->declBus(c+144,"top mycpu core M_Reg MemOp_o", false,-1, 2,0);
        tracep->declQuad(c+145,"top mycpu core M_Reg raddr_o", false,-1, 63,0);
        tracep->declBit(c+147,"top mycpu core M_Reg MemWen_o", false,-1);
        tracep->declQuad(c+148,"top mycpu core M_Reg wdata_o", false,-1, 63,0);
        tracep->declQuad(c+150,"top mycpu core M_Reg Csrres_o", false,-1, 63,0);
        tracep->declQuad(c+182,"top mycpu core M_Reg dnpc_i", false,-1, 63,0);
        tracep->declQuad(c+184,"top mycpu core M_Reg dnpc_o", false,-1, 63,0);
        tracep->declBit(c+88,"top mycpu core M_Reg valid_r", false,-1);
        tracep->declBus(c+72,"top mycpu core M_Reg instr_r", false,-1, 31,0);
        tracep->declQuad(c+80,"top mycpu core M_Reg pc_r", false,-1, 63,0);
        tracep->declBus(c+144,"top mycpu core M_Reg MemOp_r", false,-1, 2,0);
        tracep->declQuad(c+145,"top mycpu core M_Reg raddr_r", false,-1, 63,0);
        tracep->declBit(c+147,"top mycpu core M_Reg MemWen_r", false,-1);
        tracep->declQuad(c+148,"top mycpu core M_Reg wdata_r", false,-1, 63,0);
        tracep->declQuad(c+150,"top mycpu core M_Reg Csrres_r", false,-1, 63,0);
        tracep->declBus(c+152,"top mycpu core M_Reg rd_r", false,-1, 4,0);
        tracep->declBit(c+153,"top mycpu core M_Reg wen_r", false,-1);
        tracep->declBit(c+154,"top mycpu core M_Reg MemToReg_r", false,-1);
        tracep->declBit(c+155,"top mycpu core M_Reg CsrToReg_r", false,-1);
        tracep->declBit(c+156,"top mycpu core M_Reg Ebreak_r", false,-1);
        tracep->declBit(c+157,"top mycpu core M_Reg Fence_i_r", false,-1);
        tracep->declBit(c+1061,"top mycpu core my_mu clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_mu rst", false,-1);
        tracep->declBus(c+144,"top mycpu core my_mu MemOp", false,-1, 2,0);
        tracep->declBit(c+1002,"top mycpu core my_mu MemToReg", false,-1);
        tracep->declBit(c+1003,"top mycpu core my_mu MemWen", false,-1);
        tracep->declBit(c+155,"top mycpu core my_mu CsrToReg", false,-1);
        tracep->declQuad(c+145,"top mycpu core my_mu raddr", false,-1, 63,0);
        tracep->declQuad(c+148,"top mycpu core my_mu wdata", false,-1, 63,0);
        tracep->declQuad(c+150,"top mycpu core my_mu csrres", false,-1, 63,0);
        tracep->declQuad(c+997,"top mycpu core my_mu rfdata", false,-1, 63,0);
        tracep->declBit(c+988,"top mycpu core my_mu m_busy", false,-1);
        tracep->declQuad(c+62,"top mycpu core my_mu d_rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+64,"top mycpu core my_mu d_rw_req_o", false,-1);
        tracep->declBit(c+65,"top mycpu core my_mu d_rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu core my_mu d_rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu core my_mu d_data_read_i", false,-1, 127,0);
        tracep->declBit(c+66,"top mycpu core my_mu d_rw_ready_i", false,-1);
        tracep->declBus(c+188,"top mycpu core my_mu d_rw_size_o", false,-1, 7,0);
        tracep->declBit(c+189,"top mycpu core my_mu d_rw_dev_o", false,-1);
        tracep->declBus(c+190,"top mycpu core my_mu d_rw_bytes_o", false,-1, 3,0);
        tracep->declBit(c+191,"top mycpu core my_mu Fence_i", false,-1);
        tracep->declBit(c+158,"top mycpu core my_mu is_cmp", false,-1);
        tracep->declBus(c+21,"top mycpu core my_mu io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu io_sram4_cen", false,-1);
        tracep->declBit(c+22,"top mycpu core my_mu io_sram4_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"top mycpu core my_mu io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu io_sram5_cen", false,-1);
        tracep->declBit(c+31,"top mycpu core my_mu io_sram5_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+32,"top mycpu core my_mu io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu io_sram6_cen", false,-1);
        tracep->declBit(c+36,"top mycpu core my_mu io_sram6_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"top mycpu core my_mu io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu io_sram7_cen", false,-1);
        tracep->declBit(c+41,"top mycpu core my_mu io_sram7_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"top mycpu core my_mu io_sram7_rdata", false,-1, 127,0);
        tracep->declBit(c+1043,"top mycpu core my_mu vis_mem", false,-1);
        tracep->declBit(c+1044,"top mycpu core my_mu req_rw", false,-1);
        tracep->declQuad(c+791,"top mycpu core my_mu mdata", false,-1, 63,0);
        tracep->declQuad(c+974,"top mycpu core my_mu regsin", false,-1, 63,0);
        tracep->declBit(c+1061,"top mycpu core my_mu mem clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_mu mem rst", false,-1);
        tracep->declBus(c+144,"top mycpu core my_mu mem MemOp", false,-1, 2,0);
        tracep->declQuad(c+145,"top mycpu core my_mu mem raddr", false,-1, 63,0);
        tracep->declQuad(c+148,"top mycpu core my_mu mem wdata", false,-1, 63,0);
        tracep->declBit(c+1003,"top mycpu core my_mu mem MemWen", false,-1);
        tracep->declBit(c+1043,"top mycpu core my_mu mem vis_mem", false,-1);
        tracep->declBit(c+1044,"top mycpu core my_mu mem req_rw", false,-1);
        tracep->declQuad(c+791,"top mycpu core my_mu mem rdata", false,-1, 63,0);
        tracep->declBit(c+988,"top mycpu core my_mu mem m_busy", false,-1);
        tracep->declQuad(c+62,"top mycpu core my_mu mem d_rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+64,"top mycpu core my_mu mem d_rw_req_o", false,-1);
        tracep->declBit(c+65,"top mycpu core my_mu mem d_rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu core my_mu mem d_rw_w_data_o", false,-1, 127,0);
        tracep->declBus(c+188,"top mycpu core my_mu mem d_rw_size_o", false,-1, 7,0);
        tracep->declBit(c+189,"top mycpu core my_mu mem d_rw_dev_o", false,-1);
        tracep->declArray(c+1,"top mycpu core my_mu mem d_data_read_i", false,-1, 127,0);
        tracep->declBit(c+66,"top mycpu core my_mu mem d_rw_ready_i", false,-1);
        tracep->declBus(c+190,"top mycpu core my_mu mem d_rw_bytes_o", false,-1, 3,0);
        tracep->declBit(c+191,"top mycpu core my_mu mem Fence_i", false,-1);
        tracep->declBit(c+158,"top mycpu core my_mu mem is_cmp", false,-1);
        tracep->declBus(c+21,"top mycpu core my_mu mem io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem io_sram4_cen", false,-1);
        tracep->declBit(c+22,"top mycpu core my_mu mem io_sram4_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"top mycpu core my_mu mem io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu mem io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem io_sram5_cen", false,-1);
        tracep->declBit(c+31,"top mycpu core my_mu mem io_sram5_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+32,"top mycpu core my_mu mem io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu mem io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem io_sram6_cen", false,-1);
        tracep->declBit(c+36,"top mycpu core my_mu mem io_sram6_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"top mycpu core my_mu mem io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu mem io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem io_sram7_cen", false,-1);
        tracep->declBit(c+41,"top mycpu core my_mu mem io_sram7_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"top mycpu core my_mu mem io_sram7_rdata", false,-1, 127,0);
        tracep->declQuad(c+793,"top mycpu core my_mu mem dataout", false,-1, 63,0);
        tracep->declBus(c+795,"top mycpu core my_mu mem wmask", false,-1, 7,0);
        tracep->declBus(c+796,"top mycpu core my_mu mem offs", false,-1, 2,0);
        tracep->declQuad(c+148,"top mycpu core my_mu mem wdatad", false,-1, 63,0);
        tracep->declBus(c+797,"top mycpu core my_mu mem wdataw", false,-1, 31,0);
        tracep->declBus(c+798,"top mycpu core my_mu mem wdatah", false,-1, 15,0);
        tracep->declBus(c+799,"top mycpu core my_mu mem wdatab", false,-1, 7,0);
        tracep->declQuad(c+800,"top mycpu core my_mu mem datain", false,-1, 63,0);
        tracep->declQuad(c+145,"top mycpu core my_mu mem cpu_req_addr", false,-1, 63,0);
        tracep->declBit(c+1044,"top mycpu core my_mu mem cpu_req_rw", false,-1);
        tracep->declBit(c+1045,"top mycpu core my_mu mem cpu_req_valid", false,-1);
        tracep->declQuad(c+800,"top mycpu core my_mu mem cpu_data_write", false,-1, 63,0);
        tracep->declBus(c+795,"top mycpu core my_mu mem cpu_wmask", false,-1, 7,0);
        tracep->declBit(c+802,"top mycpu core my_mu mem cache_idle", false,-1);
        tracep->declBit(c+803,"top mycpu core my_mu mem d_cpu_ready", false,-1);
        tracep->declQuad(c+804,"top mycpu core my_mu mem cpu_data_read", false,-1, 63,0);
        tracep->declBit(c+806,"top mycpu core my_mu mem cache_doing", false,-1);
        tracep->declBit(c+807,"top mycpu core my_mu mem vis_dev", false,-1);
        tracep->declBit(c+807,"top mycpu core my_mu mem vis_clint", false,-1);
        tracep->declBit(c+976,"top mycpu core my_mu mem clint_wen", false,-1);
        tracep->declQuad(c+808,"top mycpu core my_mu mem clint_rdata", false,-1, 63,0);
        tracep->declBit(c+189,"top mycpu core my_mu mem cpu_dev", false,-1);
        tracep->declQuad(c+793,"top mycpu core my_mu mem datad", false,-1, 63,0);
        tracep->declBus(c+810,"top mycpu core my_mu mem dataw", false,-1, 31,0);
        tracep->declBus(c+811,"top mycpu core my_mu mem datah", false,-1, 15,0);
        tracep->declBus(c+812,"top mycpu core my_mu mem datab", false,-1, 7,0);
        tracep->declBit(c+1061,"top mycpu core my_mu mem clint clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_mu mem clint rst", false,-1);
        tracep->declBit(c+976,"top mycpu core my_mu mem clint clint_wen", false,-1);
        tracep->declQuad(c+148,"top mycpu core my_mu mem clint wdata", false,-1, 63,0);
        tracep->declQuad(c+808,"top mycpu core my_mu mem clint rdata", false,-1, 63,0);
        tracep->declBit(c+158,"top mycpu core my_mu mem clint is_cmp", false,-1);
        tracep->declQuad(c+813,"top mycpu core my_mu mem clint mtime", false,-1, 63,0);
        tracep->declQuad(c+808,"top mycpu core my_mu mem clint mtimecmp", false,-1, 63,0);
        tracep->declBus(c+815,"top mycpu core my_mu mem clint cnt", false,-1, 3,0);
        tracep->declBit(c+1061,"top mycpu core my_mu mem dcache clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core my_mu mem dcache rst", false,-1);
        tracep->declQuad(c+145,"top mycpu core my_mu mem dcache cpu_req_addr", false,-1, 63,0);
        tracep->declBit(c+1044,"top mycpu core my_mu mem dcache cpu_req_rw", false,-1);
        tracep->declBit(c+1045,"top mycpu core my_mu mem dcache cpu_req_valid", false,-1);
        tracep->declQuad(c+800,"top mycpu core my_mu mem dcache cpu_data_write", false,-1, 63,0);
        tracep->declBus(c+795,"top mycpu core my_mu mem dcache cpu_wmask", false,-1, 7,0);
        tracep->declQuad(c+804,"top mycpu core my_mu mem dcache cpu_data_read", false,-1, 63,0);
        tracep->declBit(c+803,"top mycpu core my_mu mem dcache cpu_ready", false,-1);
        tracep->declBit(c+802,"top mycpu core my_mu mem dcache cache_idle", false,-1);
        tracep->declQuad(c+62,"top mycpu core my_mu mem dcache rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+64,"top mycpu core my_mu mem dcache rw_req_o", false,-1);
        tracep->declBit(c+65,"top mycpu core my_mu mem dcache rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu core my_mu mem dcache rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu core my_mu mem dcache data_read_i", false,-1, 127,0);
        tracep->declBit(c+66,"top mycpu core my_mu mem dcache rw_ready_i", false,-1);
        tracep->declBit(c+191,"top mycpu core my_mu mem dcache Fence_i", false,-1);
        tracep->declBus(c+188,"top mycpu core my_mu mem dcache rw_size_o", false,-1, 7,0);
        tracep->declBit(c+189,"top mycpu core my_mu mem dcache cpu_dev", false,-1);
        tracep->declBus(c+21,"top mycpu core my_mu mem dcache io_sram4_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem dcache io_sram4_cen", false,-1);
        tracep->declBit(c+22,"top mycpu core my_mu mem dcache io_sram4_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem dcache io_sram4_wdata", false,-1, 127,0);
        tracep->declArray(c+27,"top mycpu core my_mu mem dcache io_sram4_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu mem dcache io_sram5_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem dcache io_sram5_cen", false,-1);
        tracep->declBit(c+31,"top mycpu core my_mu mem dcache io_sram5_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem dcache io_sram5_wdata", false,-1, 127,0);
        tracep->declArray(c+32,"top mycpu core my_mu mem dcache io_sram5_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu mem dcache io_sram6_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem dcache io_sram6_cen", false,-1);
        tracep->declBit(c+36,"top mycpu core my_mu mem dcache io_sram6_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem dcache io_sram6_wdata", false,-1, 127,0);
        tracep->declArray(c+37,"top mycpu core my_mu mem dcache io_sram6_rdata", false,-1, 127,0);
        tracep->declBus(c+21,"top mycpu core my_mu mem dcache io_sram7_addr", false,-1, 5,0);
        tracep->declBit(c+1138,"top mycpu core my_mu mem dcache io_sram7_cen", false,-1);
        tracep->declBit(c+41,"top mycpu core my_mu mem dcache io_sram7_wen", false,-1);
        tracep->declArray(c+23,"top mycpu core my_mu mem dcache io_sram7_wdata", false,-1, 127,0);
        tracep->declArray(c+42,"top mycpu core my_mu mem dcache io_sram7_rdata", false,-1, 127,0);
        tracep->declBus(c+1168,"top mycpu core my_mu mem dcache nline", false,-1, 31,0);
        tracep->declBus(c+816,"top mycpu core my_mu mem dcache cpu_index", false,-1, 7,0);
        tracep->declBus(c+817,"top mycpu core my_mu mem dcache cpu_offset", false,-1, 3,0);
        tracep->declQuad(c+818,"top mycpu core my_mu mem dcache cpu_tag", false,-1, 51,0);
        tracep->declBit(c+820,"top mycpu core my_mu mem dcache hit", false,-1);
        tracep->declBus(c+821,"top mycpu core my_mu mem dcache idx_cnt", false,-1, 7,0);
        tracep->declBus(c+1156,"top mycpu core my_mu mem dcache IDLE", false,-1, 3,0);
        tracep->declBus(c+1180,"top mycpu core my_mu mem dcache CompareTag", false,-1, 3,0);
        tracep->declBus(c+1181,"top mycpu core my_mu mem dcache Allocate", false,-1, 3,0);
        tracep->declBus(c+1182,"top mycpu core my_mu mem dcache Readin", false,-1, 3,0);
        tracep->declBus(c+1167,"top mycpu core my_mu mem dcache WriteBack", false,-1, 3,0);
        tracep->declBus(c+1183,"top mycpu core my_mu mem dcache Readout", false,-1, 3,0);
        tracep->declBus(c+1184,"top mycpu core my_mu mem dcache Writein", false,-1, 3,0);
        tracep->declBus(c+1185,"top mycpu core my_mu mem dcache FENCE_I", false,-1, 3,0);
        tracep->declBus(c+1186,"top mycpu core my_mu mem dcache DEV", false,-1, 3,0);
        tracep->declBus(c+822,"top mycpu core my_mu mem dcache cur_status", false,-1, 3,0);
        tracep->declBus(c+1046,"top mycpu core my_mu mem dcache next_status", false,-1, 3,0);
        tracep->declArray(c+23,"top mycpu core my_mu mem dcache data_in_ram", false,-1, 127,0);
        tracep->declArray(c+823,"top mycpu core my_mu mem dcache bwen", false,-1, 127,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declArray(c+827+i*4,"top mycpu core my_mu mem dcache line_o", true,(i+0), 127,0);}}
        {int i; for (i=0; i<4; i++) {
                tracep->declBit(c+843+i*1,"top mycpu core my_mu mem dcache line_wen", true,(i+0));}}
        tracep->declBus(c+21,"top mycpu core my_mu mem dcache ram_addr", false,-1, 5,0);
        tracep->declBus(c+847,"top mycpu core my_mu mem dcache i", false,-1, 31,0);
        tracep->declArray(c+848,"top mycpu core my_mu mem dcache dinram", false,-1, 127,0);
        tracep->declBit(c+1061,"top mycpu core WB_Reg clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core WB_Reg flush", false,-1);
        tracep->declBit(c+947,"top mycpu core WB_Reg valid_i", false,-1);
        tracep->declBit(c+1166,"top mycpu core WB_Reg enable", false,-1);
        tracep->declBit(c+89,"top mycpu core WB_Reg valid_o", false,-1);
        tracep->declQuad(c+80,"top mycpu core WB_Reg pc_i", false,-1, 63,0);
        tracep->declBus(c+72,"top mycpu core WB_Reg instr_i", false,-1, 31,0);
        tracep->declQuad(c+82,"top mycpu core WB_Reg pc_o", false,-1, 63,0);
        tracep->declBus(c+73,"top mycpu core WB_Reg instr_o", false,-1, 31,0);
        tracep->declBit(c+153,"top mycpu core WB_Reg wen_i", false,-1);
        tracep->declQuad(c+997,"top mycpu core WB_Reg wdata_i", false,-1, 63,0);
        tracep->declBus(c+152,"top mycpu core WB_Reg waddr_i", false,-1, 4,0);
        tracep->declBit(c+156,"top mycpu core WB_Reg Ebreak_i", false,-1);
        tracep->declBit(c+157,"top mycpu core WB_Reg Fence_i_i", false,-1);
        tracep->declBit(c+164,"top mycpu core WB_Reg Fence_i_o", false,-1);
        tracep->declBit(c+163,"top mycpu core WB_Reg Ebreak_o", false,-1);
        tracep->declBit(c+159,"top mycpu core WB_Reg wen_o", false,-1);
        tracep->declQuad(c+160,"top mycpu core WB_Reg wdata_o", false,-1, 63,0);
        tracep->declBus(c+162,"top mycpu core WB_Reg waddr_o", false,-1, 4,0);
        tracep->declQuad(c+184,"top mycpu core WB_Reg dnpc_i", false,-1, 63,0);
        tracep->declQuad(c+186,"top mycpu core WB_Reg dnpc_o", false,-1, 63,0);
        tracep->declBit(c+952,"top mycpu core WB_Reg dev_i", false,-1);
        tracep->declBit(c+192,"top mycpu core WB_Reg dev_o", false,-1);
        tracep->declBit(c+89,"top mycpu core WB_Reg valid_r", false,-1);
        tracep->declBus(c+73,"top mycpu core WB_Reg instr_r", false,-1, 31,0);
        tracep->declQuad(c+82,"top mycpu core WB_Reg pc_r", false,-1, 63,0);
        tracep->declBit(c+159,"top mycpu core WB_Reg wen_r", false,-1);
        tracep->declQuad(c+160,"top mycpu core WB_Reg wdata_r", false,-1, 63,0);
        tracep->declBus(c+162,"top mycpu core WB_Reg waddr_r", false,-1, 4,0);
        tracep->declBit(c+163,"top mycpu core WB_Reg Ebreak_r", false,-1);
        tracep->declBit(c+164,"top mycpu core WB_Reg Fence_i_r", false,-1);
        tracep->declBit(c+1061,"top mycpu core regfile clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core regfile rst", false,-1);
        tracep->declBus(c+96,"top mycpu core regfile raaddr", false,-1, 4,0);
        tracep->declBus(c+97,"top mycpu core regfile rbaddr", false,-1, 4,0);
        tracep->declQuad(c+115,"top mycpu core regfile radata", false,-1, 63,0);
        tracep->declQuad(c+117,"top mycpu core regfile rbdata", false,-1, 63,0);
        tracep->declQuad(c+160,"top mycpu core regfile wdata", false,-1, 63,0);
        tracep->declBus(c+162,"top mycpu core regfile waddr", false,-1, 4,0);
        tracep->declBit(c+1120,"top mycpu core regfile wen", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+852+i*2,"top mycpu core regfile rf", true,(i+0), 63,0);}}
        tracep->declBus(c+916,"top mycpu core regfile i", false,-1, 31,0);
        tracep->declBit(c+1061,"top mycpu core csrfile clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core csrfile rst", false,-1);
        tracep->declBit(c+1001,"top mycpu core csrfile Csrwen", false,-1);
        tracep->declBit(c+917,"top mycpu core csrfile Ecall", false,-1);
        tracep->declBit(c+918,"top mycpu core csrfile Mret", false,-1);
        tracep->declBus(c+112,"top mycpu core csrfile CsrOp", false,-1, 2,0);
        tracep->declBus(c+123,"top mycpu core csrfile CsrId", false,-1, 11,0);
        tracep->declQuad(c+1004,"top mycpu core csrfile datain", false,-1, 63,0);
        tracep->declQuad(c+76,"top mycpu core csrfile epc_in", false,-1, 63,0);
        tracep->declQuad(c+121,"top mycpu core csrfile mepc_o", false,-1, 63,0);
        tracep->declQuad(c+119,"top mycpu core csrfile mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+93,"top mycpu core csrfile csrres", false,-1, 63,0);
        tracep->declBit(c+67,"top mycpu core csrfile mstatus_MIE", false,-1);
        tracep->declBit(c+68,"top mycpu core csrfile mie_MITE", false,-1);
        tracep->declBit(c+919,"top mycpu core csrfile Time_interrupt", false,-1);
        tracep->declQuad(c+1047,"top mycpu core csrfile csrin", false,-1, 63,0);
        tracep->declQuad(c+119,"top mycpu core csrfile mtvec", false,-1, 63,0);
        tracep->declQuad(c+121,"top mycpu core csrfile mepc", false,-1, 63,0);
        tracep->declQuad(c+920,"top mycpu core csrfile mcause", false,-1, 63,0);
        tracep->declQuad(c+922,"top mycpu core csrfile mstatus", false,-1, 63,0);
        tracep->declQuad(c+924,"top mycpu core csrfile mscratch", false,-1, 63,0);
        tracep->declQuad(c+926,"top mycpu core csrfile mie", false,-1, 63,0);
        tracep->declQuad(c+928,"top mycpu core csrfile mip", false,-1, 63,0);
        tracep->declBit(c+1061,"top mycpu core arbiter clk", false,-1);
        tracep->declBit(c+1062,"top mycpu core arbiter rst", false,-1);
        tracep->declBit(c+179,"top mycpu core arbiter i_acq", false,-1);
        tracep->declQuad(c+57,"top mycpu core arbiter i_rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+59,"top mycpu core arbiter i_rw_req_i", false,-1);
        tracep->declBit(c+60,"top mycpu core arbiter i_rw_valid_i", false,-1);
        tracep->declArray(c+1,"top mycpu core arbiter i_data_read_o", false,-1, 127,0);
        tracep->declBit(c+61,"top mycpu core arbiter i_rw_ready_o", false,-1);
        tracep->declBus(c+181,"top mycpu core arbiter i_rw_size_o", false,-1, 7,0);
        tracep->declBit(c+1000,"top mycpu core arbiter i_rw_dev_o", false,-1);
        tracep->declBus(c+1167,"top mycpu core arbiter i_rw_bytes_o", false,-1, 3,0);
        tracep->declBit(c+988,"top mycpu core arbiter d_acq", false,-1);
        tracep->declQuad(c+62,"top mycpu core arbiter d_rw_addr_i", false,-1, 63,0);
        tracep->declBit(c+64,"top mycpu core arbiter d_rw_req_i", false,-1);
        tracep->declBit(c+65,"top mycpu core arbiter d_rw_valid_i", false,-1);
        tracep->declArray(c+50,"top mycpu core arbiter d_rw_w_data_i", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu core arbiter d_data_read_o", false,-1, 127,0);
        tracep->declBit(c+66,"top mycpu core arbiter d_rw_ready_o", false,-1);
        tracep->declBus(c+188,"top mycpu core arbiter d_rw_size_o", false,-1, 7,0);
        tracep->declBit(c+189,"top mycpu core arbiter d_rw_dev_o", false,-1);
        tracep->declBus(c+190,"top mycpu core arbiter d_rw_bytes_o", false,-1, 3,0);
        tracep->declQuad(c+46,"top mycpu core arbiter rw_addr_o", false,-1, 63,0);
        tracep->declBit(c+48,"top mycpu core arbiter rw_req_o", false,-1);
        tracep->declBit(c+49,"top mycpu core arbiter rw_valid_o", false,-1);
        tracep->declArray(c+50,"top mycpu core arbiter rw_w_data_o", false,-1, 127,0);
        tracep->declArray(c+1,"top mycpu core arbiter data_read_i", false,-1, 127,0);
        tracep->declBit(c+54,"top mycpu core arbiter rw_ready_i", false,-1);
        tracep->declBus(c+55,"top mycpu core arbiter rw_size_o", false,-1, 7,0);
        tracep->declBit(c+982,"top mycpu core arbiter rw_dev_o", false,-1);
        tracep->declBus(c+56,"top mycpu core arbiter rw_bytes_o", false,-1, 3,0);
        tracep->declBus(c+1155,"top mycpu core arbiter IDLE", false,-1, 1,0);
        tracep->declBus(c+1187,"top mycpu core arbiter ICACHE", false,-1, 1,0);
        tracep->declBus(c+1188,"top mycpu core arbiter DCACHE", false,-1, 1,0);
        tracep->declBus(c+930,"top mycpu core arbiter cur_status", false,-1, 1,0);
        tracep->declBus(c+1049,"top mycpu core arbiter next_status", false,-1, 1,0);
        tracep->declBus(c+1189,"top mycpu axi RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1190,"top mycpu axi RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1190,"top mycpu axi AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1191,"top mycpu axi AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1178,"top mycpu axi AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1192,"top mycpu axi AXI_STRB_WIDTH", false,-1, 31,0);
        tracep->declBit(c+1061,"top mycpu axi clock", false,-1);
        tracep->declBit(c+1062,"top mycpu axi reset", false,-1);
        tracep->declBit(c+48,"top mycpu axi rw_req_i", false,-1);
        tracep->declBit(c+49,"top mycpu axi rw_valid_i", false,-1);
        tracep->declBit(c+54,"top mycpu axi rw_ready_o", false,-1);
        tracep->declArray(c+1,"top mycpu axi data_read_o", false,-1, 127,0);
        tracep->declArray(c+50,"top mycpu axi rw_w_data_i", false,-1, 127,0);
        tracep->declQuad(c+46,"top mycpu axi rw_addr_i", false,-1, 63,0);
        tracep->declBus(c+55,"top mycpu axi rw_size_i", false,-1, 7,0);
        tracep->declBit(c+982,"top mycpu axi rw_dev_i", false,-1);
        tracep->declBus(c+56,"top mycpu axi rw_bytes_i", false,-1, 3,0);
        tracep->declBit(c+1073,"top mycpu axi axi_aw_ready_i", false,-1);
        tracep->declBit(c+1074,"top mycpu axi axi_aw_valid_o", false,-1);
        tracep->declBus(c+1075,"top mycpu axi axi_aw_addr_o", false,-1, 31,0);
        tracep->declBus(c+1077,"top mycpu axi axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1079,"top mycpu axi axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1080,"top mycpu axi axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1081,"top mycpu axi axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1086,"top mycpu axi axi_w_ready_i", false,-1);
        tracep->declBit(c+1087,"top mycpu axi axi_w_valid_o", false,-1);
        tracep->declQuad(c+1088,"top mycpu axi axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+1090,"top mycpu axi axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1091,"top mycpu axi axi_w_last_o", false,-1);
        tracep->declBit(c+1093,"top mycpu axi axi_b_ready_o", false,-1);
        tracep->declBit(c+1094,"top mycpu axi axi_b_valid_i", false,-1);
        tracep->declBus(c+1095,"top mycpu axi axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+1096,"top mycpu axi axi_b_id_i", false,-1, 3,0);
        tracep->declBit(c+1098,"top mycpu axi axi_ar_ready_i", false,-1);
        tracep->declBit(c+1099,"top mycpu axi axi_ar_valid_o", false,-1);
        tracep->declBus(c+1100,"top mycpu axi axi_ar_addr_o", false,-1, 31,0);
        tracep->declBus(c+1102,"top mycpu axi axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1104,"top mycpu axi axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1105,"top mycpu axi axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1106,"top mycpu axi axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1111,"top mycpu axi axi_r_ready_o", false,-1);
        tracep->declBit(c+1112,"top mycpu axi axi_r_valid_i", false,-1);
        tracep->declBus(c+1113,"top mycpu axi axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+1114,"top mycpu axi axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+1116,"top mycpu axi axi_r_last_i", false,-1);
        tracep->declBus(c+1117,"top mycpu axi axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+1169,"top mycpu axi W_IDLE", false,-1, 2,0);
        tracep->declBus(c+1171,"top mycpu axi W_WRITE", false,-1, 2,0);
        tracep->declBus(c+1172,"top mycpu axi W_RESP", false,-1, 2,0);
        tracep->declBus(c+1173,"top mycpu axi W_DONE", false,-1, 2,0);
        tracep->declBus(c+1169,"top mycpu axi R_IDLE", false,-1, 2,0);
        tracep->declBus(c+1170,"top mycpu axi R_ADDR", false,-1, 2,0);
        tracep->declBus(c+1171,"top mycpu axi R_READ", false,-1, 2,0);
        tracep->declBus(c+1173,"top mycpu axi R_DONE", false,-1, 2,0);
        tracep->declBus(c+931,"top mycpu axi w_status", false,-1, 2,0);
        tracep->declBus(c+932,"top mycpu axi r_status", false,-1, 2,0);
        tracep->declBit(c+933,"top mycpu axi r_state_idle", false,-1);
        tracep->declBit(c+934,"top mycpu axi r_state_addr", false,-1);
        tracep->declBit(c+935,"top mycpu axi r_state_read", false,-1);
        tracep->declBit(c+936,"top mycpu axi w_state_idle", false,-1);
        tracep->declBit(c+937,"top mycpu axi w_state_resp", false,-1);
        tracep->declBit(c+1121,"top mycpu axi aw_fire", false,-1);
        tracep->declBit(c+1050,"top mycpu axi w_fire", false,-1);
        tracep->declBit(c+1051,"top mycpu axi b_fire", false,-1);
        tracep->declBit(c+1052,"top mycpu axi w_last", false,-1);
        tracep->declBit(c+938,"top mycpu axi aw_valid_r", false,-1);
        tracep->declBit(c+939,"top mycpu axi w_valid_r", false,-1);
        tracep->declBit(c+1122,"top mycpu axi ar_fire", false,-1);
        tracep->declBit(c+1053,"top mycpu axi r_fire", false,-1);
        tracep->declBit(c+1054,"top mycpu axi r_last", false,-1);
        tracep->declBit(c+54,"top mycpu axi rw_ready_r", false,-1);
        tracep->declBus(c+1055,"top mycpu axi axi_len", false,-1, 7,0);
        tracep->declBus(c+940,"top mycpu axi rcnt", false,-1, 7,0);
        tracep->declBus(c+941,"top mycpu axi wcnt", false,-1, 7,0);
        tracep->declBus(c+1177,"top mycpu axi AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+942,"top mycpu axi dev_size", false,-1, 2,0);
        tracep->declBus(c+1156,"top mycpu axi axi_id", false,-1, 3,0);
        tracep->declBus(c+1056,"top mycpu axi axi_size", false,-1, 2,0);
        tracep->declBus(c+1189,"top sram0 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram0 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram0 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram0 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+5,"top sram0 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram0 CLK", false,-1);
        tracep->declBit(c+1138,"top sram0 CEN", false,-1);
        tracep->declBit(c+978,"top sram0 WEN", false,-1);
        tracep->declArray(c+1139,"top sram0 BWEN", false,-1, 127,0);
        tracep->declBus(c+977,"top sram0 A", false,-1, 5,0);
        tracep->declArray(c+1,"top sram0 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram0 cen", false,-1);
        tracep->declBit(c+1057,"top sram0 wen", false,-1);
        tracep->declArray(c+1194,"top sram0 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram1 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram1 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram1 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram1 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+9,"top sram1 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram1 CLK", false,-1);
        tracep->declBit(c+1138,"top sram1 CEN", false,-1);
        tracep->declBit(c+979,"top sram1 WEN", false,-1);
        tracep->declArray(c+1139,"top sram1 BWEN", false,-1, 127,0);
        tracep->declBus(c+977,"top sram1 A", false,-1, 5,0);
        tracep->declArray(c+1,"top sram1 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram1 cen", false,-1);
        tracep->declBit(c+1058,"top sram1 wen", false,-1);
        tracep->declArray(c+1194,"top sram1 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram2 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram2 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram2 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram2 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+13,"top sram2 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram2 CLK", false,-1);
        tracep->declBit(c+1138,"top sram2 CEN", false,-1);
        tracep->declBit(c+980,"top sram2 WEN", false,-1);
        tracep->declArray(c+1139,"top sram2 BWEN", false,-1, 127,0);
        tracep->declBus(c+977,"top sram2 A", false,-1, 5,0);
        tracep->declArray(c+1,"top sram2 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram2 cen", false,-1);
        tracep->declBit(c+1059,"top sram2 wen", false,-1);
        tracep->declArray(c+1194,"top sram2 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram3 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram3 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram3 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram3 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+17,"top sram3 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram3 CLK", false,-1);
        tracep->declBit(c+1138,"top sram3 CEN", false,-1);
        tracep->declBit(c+981,"top sram3 WEN", false,-1);
        tracep->declArray(c+1139,"top sram3 BWEN", false,-1, 127,0);
        tracep->declBus(c+977,"top sram3 A", false,-1, 5,0);
        tracep->declArray(c+1,"top sram3 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram3 cen", false,-1);
        tracep->declBit(c+1060,"top sram3 wen", false,-1);
        tracep->declArray(c+1194,"top sram3 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram4 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram4 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram4 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram4 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+27,"top sram4 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram4 CLK", false,-1);
        tracep->declBit(c+1138,"top sram4 CEN", false,-1);
        tracep->declBit(c+22,"top sram4 WEN", false,-1);
        tracep->declArray(c+1139,"top sram4 BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"top sram4 A", false,-1, 5,0);
        tracep->declArray(c+23,"top sram4 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram4 cen", false,-1);
        tracep->declBit(c+943,"top sram4 wen", false,-1);
        tracep->declArray(c+1194,"top sram4 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram5 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram5 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram5 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram5 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+32,"top sram5 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram5 CLK", false,-1);
        tracep->declBit(c+1138,"top sram5 CEN", false,-1);
        tracep->declBit(c+31,"top sram5 WEN", false,-1);
        tracep->declArray(c+1139,"top sram5 BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"top sram5 A", false,-1, 5,0);
        tracep->declArray(c+23,"top sram5 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram5 cen", false,-1);
        tracep->declBit(c+944,"top sram5 wen", false,-1);
        tracep->declArray(c+1194,"top sram5 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram6 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram6 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram6 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram6 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+37,"top sram6 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram6 CLK", false,-1);
        tracep->declBit(c+1138,"top sram6 CEN", false,-1);
        tracep->declBit(c+36,"top sram6 WEN", false,-1);
        tracep->declArray(c+1139,"top sram6 BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"top sram6 A", false,-1, 5,0);
        tracep->declArray(c+23,"top sram6 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram6 cen", false,-1);
        tracep->declBit(c+945,"top sram6 wen", false,-1);
        tracep->declArray(c+1194,"top sram6 bwen", false,-1, 127,0);
        tracep->declBus(c+1189,"top sram7 Bits", false,-1, 31,0);
        tracep->declBus(c+1190,"top sram7 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1193,"top sram7 Add_Width", false,-1, 31,0);
        tracep->declBus(c+1189,"top sram7 Wen_Width", false,-1, 31,0);
        tracep->declArray(c+42,"top sram7 Q", false,-1, 127,0);
        tracep->declBit(c+1061,"top sram7 CLK", false,-1);
        tracep->declBit(c+1138,"top sram7 CEN", false,-1);
        tracep->declBit(c+41,"top sram7 WEN", false,-1);
        tracep->declArray(c+1139,"top sram7 BWEN", false,-1, 127,0);
        tracep->declBus(c+21,"top sram7 A", false,-1, 5,0);
        tracep->declArray(c+23,"top sram7 D", false,-1, 127,0);
        tracep->declBit(c+1166,"top sram7 cen", false,-1);
        tracep->declBit(c+946,"top sram7 wen", false,-1);
        tracep->declArray(c+1194,"top sram7 bwen", false,-1, 127,0);
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
    VlWide<3>/*95:0*/ __Vtemp168;
    VlWide<3>/*95:0*/ __Vtemp169;
    VlWide<3>/*95:0*/ __Vtemp170;
    VlWide<3>/*95:0*/ __Vtemp171;
    VlWide<3>/*95:0*/ __Vtemp172;
    VlWide<3>/*95:0*/ __Vtemp175;
    VlWide<3>/*95:0*/ __Vtemp176;
    VlWide<3>/*95:0*/ __Vtemp177;
    VlWide<3>/*95:0*/ __Vtemp178;
    VlWide<3>/*95:0*/ __Vtemp179;
    VlWide<3>/*95:0*/ __Vtemp182;
    VlWide<3>/*95:0*/ __Vtemp183;
    VlWide<3>/*95:0*/ __Vtemp184;
    VlWide<3>/*95:0*/ __Vtemp185;
    VlWide<3>/*95:0*/ __Vtemp186;
    VlWide<4>/*127:0*/ __Vtemp188;
    VlWide<5>/*159:0*/ __Vtemp190;
    VlWide<5>/*159:0*/ __Vtemp191;
    VlWide<5>/*159:0*/ __Vtemp192;
    VlWide<5>/*159:0*/ __Vtemp193;
    VlWide<5>/*159:0*/ __Vtemp194;
    VlWide<5>/*159:0*/ __Vtemp196;
    VlWide<5>/*159:0*/ __Vtemp197;
    VlWide<5>/*159:0*/ __Vtemp198;
    VlWide<5>/*159:0*/ __Vtemp199;
    VlWide<5>/*159:0*/ __Vtemp200;
    VlWide<3>/*95:0*/ __Vtemp204;
    VlWide<3>/*95:0*/ __Vtemp205;
    VlWide<4>/*127:0*/ __Vtemp211;
    VlWide<3>/*95:0*/ __Vtemp213;
    VlWide<3>/*95:0*/ __Vtemp214;
    VlWide<3>/*95:0*/ __Vtemp215;
    VlWide<3>/*95:0*/ __Vtemp216;
    VlWide<3>/*95:0*/ __Vtemp217;
    VlWide<3>/*95:0*/ __Vtemp220;
    VlWide<3>/*95:0*/ __Vtemp221;
    VlWide<3>/*95:0*/ __Vtemp222;
    VlWide<3>/*95:0*/ __Vtemp223;
    VlWide<3>/*95:0*/ __Vtemp224;
    VlWide<3>/*95:0*/ __Vtemp227;
    VlWide<3>/*95:0*/ __Vtemp228;
    VlWide<3>/*95:0*/ __Vtemp229;
    VlWide<3>/*95:0*/ __Vtemp230;
    VlWide<3>/*95:0*/ __Vtemp231;
    VlWide<3>/*95:0*/ __Vtemp234;
    VlWide<3>/*95:0*/ __Vtemp235;
    VlWide<3>/*95:0*/ __Vtemp236;
    VlWide<3>/*95:0*/ __Vtemp237;
    VlWide<3>/*95:0*/ __Vtemp238;
    VlWide<3>/*95:0*/ __Vtemp241;
    VlWide<3>/*95:0*/ __Vtemp242;
    VlWide<3>/*95:0*/ __Vtemp243;
    VlWide<3>/*95:0*/ __Vtemp244;
    VlWide<3>/*95:0*/ __Vtemp245;
    VlWide<3>/*95:0*/ __Vtemp248;
    VlWide<3>/*95:0*/ __Vtemp249;
    VlWide<3>/*95:0*/ __Vtemp250;
    VlWide<4>/*127:0*/ __Vtemp252;
    VlWide<4>/*127:0*/ __Vtemp253;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+1,(vlSelf->top__DOT__mycpu__DOT__data_read_i),128);
        tracep->fullWData(oldp+5,(vlSelf->top__DOT__io_sram0_rdata),128);
        tracep->fullWData(oldp+9,(vlSelf->top__DOT__io_sram1_rdata),128);
        tracep->fullWData(oldp+13,(vlSelf->top__DOT__io_sram2_rdata),128);
        tracep->fullWData(oldp+17,(vlSelf->top__DOT__io_sram3_rdata),128);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__ram_addr),6);
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                 [0U]));
        tracep->fullWData(oldp+23,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__data_in_ram),128);
        tracep->fullWData(oldp+27,(vlSelf->top__DOT__io_sram4_rdata),128);
        tracep->fullBit(oldp+31,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                 [1U]));
        tracep->fullWData(oldp+32,(vlSelf->top__DOT__io_sram5_rdata),128);
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                 [2U]));
        tracep->fullWData(oldp+37,(vlSelf->top__DOT__io_sram6_rdata),128);
        tracep->fullBit(oldp+41,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                 [3U]));
        tracep->fullWData(oldp+42,(vlSelf->top__DOT__io_sram7_rdata),128);
        tracep->fullQData(oldp+46,(vlSelf->top__DOT__mycpu__DOT__rw_addr_o),64);
        tracep->fullBit(oldp+48,(vlSelf->top__DOT__mycpu__DOT__rw_req_o));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__mycpu__DOT__rw_valid_o));
        tracep->fullWData(oldp+50,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_w_data_o),128);
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rw_ready_r));
        tracep->fullCData(oldp+55,(((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                     ? (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o)
                                     : ((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status))
                                         ? ((1U & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                                                           >> 2U)))
                                             ? 0xf0U
                                             : 0xfU)
                                         : 0U))),8);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o),4);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_addr_o),64);
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_req_o));
        tracep->fullBit(oldp+60,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_valid_o));
        tracep->fullBit(oldp+61,(vlSelf->top__DOT__mycpu__DOT__core__DOT__i_rw_ready_i));
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_addr_o),64);
        tracep->fullBit(oldp+64,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_req_o));
        tracep->fullBit(oldp+65,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_valid_o));
        tracep->fullBit(oldp+66,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_ready_i));
        tracep->fullBit(oldp+67,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus 
                                                >> 3U)))));
        tracep->fullBit(oldp+68,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie 
                                                >> 7U)))));
        tracep->fullBit(oldp+69,(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt));
        tracep->fullIData(oldp+70,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r),32);
        tracep->fullIData(oldp+71,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r),32);
        tracep->fullIData(oldp+72,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__instr_r),32);
        tracep->fullIData(oldp+73,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__instr_r),32);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__pc_r),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__pc_r),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__pc_r),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__pc_r),64);
        tracep->fullBit(oldp+84,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                   & ((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block)) 
                                      | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o) 
                                         & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r))))) 
                                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt)))));
        tracep->fullBit(oldp+85,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
                                  & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy)))));
        tracep->fullBit(oldp+86,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r));
        tracep->fullBit(oldp+87,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r));
        tracep->fullBit(oldp+88,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r));
        tracep->fullBit(oldp+89,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r));
        tracep->fullBit(oldp+90,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                  | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))));
        tracep->fullBit(oldp+91,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_block));
        tracep->fullBit(oldp+92,(vlSelf->top__DOT__mycpu__DOT__core__DOT__alu_busy));
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_csrres_o),64);
        tracep->fullCData(oldp+95,((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 7U))),5);
        tracep->fullCData(oldp+96,((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+97,((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                             >> 0x14U))),5);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o),64);
        tracep->fullBit(oldp+100,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcA_o));
        tracep->fullBit(oldp+101,((IData)((3U == (0x7fU 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))));
        tracep->fullBit(oldp+102,((IData)((0x23U == 
                                           (0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)))));
        tracep->fullBit(oldp+103,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wen_o));
        tracep->fullBit(oldp+104,((1U & (IData)(((0x73U 
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
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o));
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Fence_i_o));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Csri_o));
        tracep->fullCData(oldp+108,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o),2);
        tracep->fullCData(oldp+109,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_MemOp_o),3);
        tracep->fullCData(oldp+110,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUOp_o),5);
        tracep->fullCData(oldp+111,(((0x40U & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                      ? 0U : ((0x20U 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)
                                               ? ((0x10U 
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
        tracep->fullCData(oldp+112,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrOp),3);
        tracep->fullBit(oldp+113,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall));
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret));
        tracep->fullQData(oldp+115,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU)))
                                      ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0xfU))])),64);
        tracep->fullQData(oldp+117,(((0U == (0x1fU 
                                             & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U)))
                                      ? 0ULL : vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf
                                     [(0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                >> 0x14U))])),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mtvec),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mepc),64);
        tracep->fullSData(oldp+123,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_CsrId),12);
        tracep->fullCData(oldp+124,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r),5);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busa_r),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__busb_r),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__imm_r),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Csrres_r),64);
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcA_r));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemToReg_r));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemWen_r));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__CsrToReg_r));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Ebreak_r));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__Fence_i_r));
        tracep->fullCData(oldp+140,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUSrcB_r),2);
        tracep->fullCData(oldp+141,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MemOp_r),3);
        tracep->fullCData(oldp+142,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__ALUOp_r),5);
        tracep->fullCData(oldp+143,(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r),2);
        tracep->fullCData(oldp+144,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r),3);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r),64);
        tracep->fullBit(oldp+147,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemWen_r));
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Csrres_r),64);
        tracep->fullCData(oldp+152,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r),5);
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r));
        tracep->fullBit(oldp+154,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemToReg_r));
        tracep->fullBit(oldp+155,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__CsrToReg_r));
        tracep->fullBit(oldp+156,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Ebreak_r));
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__Fence_i_r));
        tracep->fullBit(oldp+158,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime 
                                   >= vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp)));
        tracep->fullBit(oldp+159,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r));
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wdata_r),64);
        tracep->fullCData(oldp+162,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r),5);
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Ebreak_r));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r));
        tracep->fullBit(oldp+165,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_use_rd));
        tracep->fullBit(oldp+166,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__valid_r) 
                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__wen_r))));
        tracep->fullBit(oldp+167,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wen_r))));
        tracep->fullBit(oldp+168,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r) 
                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r))));
        tracep->fullBit(oldp+169,(((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                     & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0xfU)) 
                                        == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
                                    | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                            >> 0xfU)) 
                                          == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
                                   | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                                      & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0xfU)) 
                                         == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))));
        tracep->fullBit(oldp+170,(((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                     & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__rd_r))) 
                                    | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard) 
                                       & ((0x1fU & 
                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                            >> 0x14U)) 
                                          == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__rd_r)))) 
                                   | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard) 
                                      & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                                   >> 0x14U)) 
                                         == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__waddr_r))))));
        tracep->fullCData(oldp+171,((0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r)),7);
        tracep->fullCData(oldp+172,((0x7fU & vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r)),7);
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard));
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_m_hazard));
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_wb_hazard));
        tracep->fullBit(oldp+176,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                   & (3U == (0x7fU 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__instr_r)))));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__mycpu__DOT__core__DOT__fence_i_commit));
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy));
        tracep->fullBit(oldp+180,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                    & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))) 
                                   | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r)))));
        tracep->fullCData(oldp+181,(((1U & (IData)(
                                                   (vlSelf->top__DOT__mycpu__DOT__core__DOT__if_pc_o 
                                                    >> 2U)))
                                      ? 0xf0U : 0xfU)),8);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_dnpc),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_dnpc),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_dnpc),64);
        tracep->fullCData(oldp+188,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_size_o),8);
        tracep->fullBit(oldp+189,((0xaU == (0xfU & (IData)(
                                                           (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                            >> 0x1cU))))));
        tracep->fullCData(oldp+190,(vlSelf->top__DOT__mycpu__DOT__core__DOT__d_rw_bytes_o),4);
        tracep->fullBit(oldp+191,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Fence_i));
        tracep->fullBit(oldp+192,(vlSelf->top__DOT__mycpu__DOT__core__DOT__dev_o));
        tracep->fullBit(oldp+193,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_commit_r));
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_pc_r),64);
        tracep->fullIData(oldp+196,(vlSelf->top__DOT__mycpu__DOT__core__DOT__wb_instr_r),32);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__mycpu__DOT__core__DOT__next_pc_r),64);
        tracep->fullBit(oldp+199,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status))));
        tracep->fullBit(oldp+200,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__old_instr));
        tracep->fullBit(oldp+201,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_doing));
        tracep->fullIData(oldp+202,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__instr_read_r),32);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_data_read),64);
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__i_cpu_ready));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cpu_req_valid));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__start));
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status),3);
        tracep->fullWData(oldp+209,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[0]),128);
        tracep->fullWData(oldp+213,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[1]),128);
        tracep->fullWData(oldp+217,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[2]),128);
        tracep->fullWData(oldp+221,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_o[3]),128);
        tracep->fullIData(oldp+225,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__i),32);
        tracep->fullCData(oldp+226,((7U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+227,((vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+228,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__ExtOp),3);
        tracep->fullCData(oldp+229,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__Branch),3);
        tracep->fullBit(oldp+230,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__Time_interrupt) 
                                   | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ecall))));
        tracep->fullBit(oldp+231,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
        tracep->fullBit(oldp+232,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SIGctr));
        tracep->fullBit(oldp+233,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__ALctr));
        tracep->fullBit(oldp+234,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SFTctr));
        tracep->fullBit(oldp+235,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr));
        tracep->fullCData(oldp+236,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr),4);
        tracep->fullBit(oldp+237,(((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)
                                    ? 1U : 0U)));
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB),64);
        tracep->fullBit(oldp+242,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
        tracep->fullBit(oldp+243,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SIGctr));
        tracep->fullBit(oldp+244,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr));
        tracep->fullBit(oldp+245,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr));
        tracep->fullBit(oldp+246,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr));
        tracep->fullCData(oldp+247,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__OPctr),4);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres),64);
        tracep->fullQData(oldp+250,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)))
                                      : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres)),64);
        tracep->fullQData(oldp+252,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
        tracep->fullQData(oldp+254,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                     | vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
        tracep->fullQData(oldp+256,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                     ^ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)),64);
        tracep->fullQData(oldp+258,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SFTctr)
                                      ? ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
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
                                                  & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))
                                      : ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                          : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                             << (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))),64);
        VL_EXTEND_WQ(65,64, __Vtemp168, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp169, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb);
        VL_ADD_W(3, __Vtemp170, __Vtemp168, __Vtemp169);
        VL_EXTEND_WI(65,1, __Vtemp171, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp172, __Vtemp170, __Vtemp171);
        tracep->fullQData(oldp+260,((QData)((IData)(
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
                                                          & __Vtemp172[2U]) 
                                                         ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr))))))),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb),64);
        VL_EXTEND_WQ(65,64, __Vtemp175, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp176, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb);
        VL_ADD_W(3, __Vtemp177, __Vtemp175, __Vtemp176);
        VL_EXTEND_WI(65,1, __Vtemp178, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp179, __Vtemp177, __Vtemp178);
        tracep->fullBit(oldp+264,((1U & ((1U & __Vtemp179[2U]) 
                                         ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr)))));
        tracep->fullBit(oldp+265,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderres 
                                                 >> 0x3fU)))));
        tracep->fullBit(oldp+266,((1U & ((((~ (IData)(
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
        VL_EXTEND_WQ(65,64, __Vtemp182, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp183, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__adderb);
        VL_ADD_W(3, __Vtemp184, __Vtemp182, __Vtemp183);
        VL_EXTEND_WI(65,1, __Vtemp185, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp186, __Vtemp184, __Vtemp185);
        tracep->fullBit(oldp+267,((1U & __Vtemp186[2U])));
        tracep->fullIData(oldp+268,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres),32);
        tracep->fullIData(oldp+269,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__srWres),32);
        tracep->fullIData(oldp+270,((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA)),32);
        tracep->fullCData(oldp+271,((0x3fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))),6);
        tracep->fullCData(oldp+272,((0x1fU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))),5);
        tracep->fullQData(oldp+273,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__ALctr)
                                      ? VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA, 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))
                                      : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))))),64);
        tracep->fullQData(oldp+275,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__sllWres)))
                                      : (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inA 
                                         << (0x3fU 
                                             & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB))))),64);
        tracep->fullQData(oldp+277,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__Wctr)
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
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu_inB)))))),64);
        tracep->fullBit(oldp+279,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_mul));
        tracep->fullWData(oldp+280,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplicand),65);
        tracep->fullWData(oldp+283,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__multiplier),65);
        tracep->fullQData(oldp+286,((((QData)((IData)(
                                                      vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U])))),64);
        tracep->fullQData(oldp+288,((((QData)((IData)(
                                                      vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U])))),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_lo_r),64);
        tracep->fullBit(oldp+294,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_doing));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_ready));
        tracep->fullBit(oldp+296,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_out_valid));
        tracep->fullBit(oldp+297,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mul_valid));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul));
        tracep->fullBit(oldp+299,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__op_div));
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor),64);
        tracep->fullQData(oldp+304,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient),64);
        tracep->fullQData(oldp+306,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder),64);
        tracep->fullQData(oldp+308,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r),64);
        tracep->fullQData(oldp+310,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r),64);
        tracep->fullBit(oldp+312,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_doing));
        tracep->fullBit(oldp+313,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__ready_r));
        tracep->fullBit(oldp+314,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__valid_r));
        tracep->fullBit(oldp+315,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__div_valid));
        tracep->fullBit(oldp+316,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div));
        __Vtemp188[0U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[0U];
        __Vtemp188[1U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[1U];
        __Vtemp188[2U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U];
        __Vtemp188[3U] = vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U];
        tracep->fullWData(oldp+317,(__Vtemp188),128);
        tracep->fullWData(oldp+321,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result),132);
        tracep->fullWData(oldp+326,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r),132);
        tracep->fullWData(oldp+331,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r),67);
        tracep->fullBit(oldp+334,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__running_r));
        tracep->fullBit(oldp+335,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__mul_fire));
        tracep->fullBit(oldp+336,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__done));
        tracep->fullWData(oldp+337,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result),132);
        tracep->fullCData(oldp+342,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__cnt),7);
        tracep->fullBit(oldp+343,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
        VL_ADD_W(5, __Vtemp190, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
        VL_EXTEND_WI(133,1, __Vtemp191, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
        __Vtemp192[0U] = __Vtemp191[0U];
        __Vtemp192[1U] = __Vtemp191[1U];
        __Vtemp192[2U] = __Vtemp191[2U];
        __Vtemp192[3U] = __Vtemp191[3U];
        __Vtemp192[4U] = __Vtemp191[4U];
        VL_ADD_W(5, __Vtemp193, __Vtemp190, __Vtemp192);
        __Vtemp194[0U] = __Vtemp193[0U];
        __Vtemp194[1U] = __Vtemp193[1U];
        __Vtemp194[2U] = __Vtemp193[2U];
        __Vtemp194[3U] = __Vtemp193[3U];
        __Vtemp194[4U] = (0xfU & __Vtemp193[4U]);
        tracep->fullWData(oldp+344,(__Vtemp194),132);
        VL_EXTEND_WW(133,132, __Vtemp196, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__p_result);
        VL_EXTEND_WW(133,132, __Vtemp197, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result);
        VL_ADD_W(5, __Vtemp198, __Vtemp196, __Vtemp197);
        VL_EXTEND_WI(133,1, __Vtemp199, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial_cout));
        VL_ADD_W(5, __Vtemp200, __Vtemp198, __Vtemp199);
        tracep->fullBit(oldp+349,((1U & (__Vtemp200[4U] 
                                         >> 4U))));
        tracep->fullCData(oldp+350,((7U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])),3);
        tracep->fullCData(oldp+351,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel),4);
        tracep->fullBit(oldp+352,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+353,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+354,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                         >> 2U))));
        tracep->fullBit(oldp+355,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+356,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])));
        tracep->fullBit(oldp+357,((1U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                          >> 2U) & 
                                         (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                            >> 1U) 
                                           & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                          | ((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                 >> 1U)) 
                                             & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
        tracep->fullBit(oldp+358,((1U & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                           >> 2U) & 
                                          (~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 1U))) 
                                         & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])))));
        tracep->fullBit(oldp+359,((1U & ((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 2U)) 
                                         & (((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 1U) 
                                             & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U])) 
                                            | ((~ (
                                                   vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                                   >> 1U)) 
                                               & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))))));
        tracep->fullBit(oldp+360,((1U & (((~ (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                              >> 2U)) 
                                          & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U] 
                                             >> 1U)) 
                                         & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplier_r[0U]))));
        tracep->fullCData(oldp+361,((2U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           << 1U))),2);
        tracep->fullBit(oldp+362,((1U & (~ (((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  >> 3U) 
                                                 & (~ 
                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]))) 
                                             & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U))) 
                                            & (~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 2U) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
        tracep->fullBit(oldp+363,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
        tracep->fullBit(oldp+364,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 3U))));
        tracep->fullBit(oldp+365,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 1U))));
        tracep->fullBit(oldp+366,((1U & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                         >> 2U))));
        tracep->fullBit(oldp+367,((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel))));
        tracep->fullCData(oldp+368,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])),2);
        tracep->fullBit(oldp+369,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 1U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])))))));
        tracep->fullBit(oldp+370,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+371,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U])));
        tracep->fullCData(oldp+372,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 1U))),2);
        tracep->fullBit(oldp+373,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U]) 
                                                   >> 2U))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 1U))))))));
        tracep->fullBit(oldp+374,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 2U))));
        tracep->fullCData(oldp+375,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+376,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 3U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 2U))))))));
        tracep->fullBit(oldp+377,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 3U))));
        tracep->fullCData(oldp+378,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 3U))),2);
        tracep->fullBit(oldp+379,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 4U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 3U))))))));
        tracep->fullBit(oldp+380,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 4U))));
        tracep->fullCData(oldp+381,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 4U))),2);
        tracep->fullBit(oldp+382,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 5U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 4U))))))));
        tracep->fullBit(oldp+383,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+384,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 5U))),2);
        tracep->fullBit(oldp+385,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 6U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 5U))))))));
        tracep->fullBit(oldp+386,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 6U))));
        tracep->fullCData(oldp+387,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 6U))),2);
        tracep->fullBit(oldp+388,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 7U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 6U))))))));
        tracep->fullBit(oldp+389,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 7U))));
        tracep->fullCData(oldp+390,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 7U))),2);
        tracep->fullBit(oldp+391,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 8U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 7U))))))));
        tracep->fullBit(oldp+392,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 8U))));
        tracep->fullCData(oldp+393,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 8U))),2);
        tracep->fullBit(oldp+394,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 9U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 8U))))))));
        tracep->fullBit(oldp+395,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 9U))));
        tracep->fullCData(oldp+396,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 9U))),2);
        tracep->fullBit(oldp+397,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xaU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 9U))))))));
        tracep->fullBit(oldp+398,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+399,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0xaU))),2);
        tracep->fullBit(oldp+400,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xbU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0xaU))))))));
        tracep->fullBit(oldp+401,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0xbU))));
        tracep->fullCData(oldp+402,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+403,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xcU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0xbU))))))));
        tracep->fullBit(oldp+404,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+405,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+406,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xdU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0xcU))))))));
        tracep->fullBit(oldp+407,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0xdU))));
        tracep->fullCData(oldp+408,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0xdU))),2);
        tracep->fullBit(oldp+409,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xeU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0xdU))))))));
        tracep->fullBit(oldp+410,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+411,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0xeU))),2);
        tracep->fullBit(oldp+412,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0xfU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0xeU))))))));
        tracep->fullBit(oldp+413,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0xfU))));
        tracep->fullCData(oldp+414,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0xfU))),2);
        tracep->fullBit(oldp+415,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x10U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0xfU))))))));
        tracep->fullBit(oldp+416,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x10U))));
        tracep->fullCData(oldp+417,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x10U))),2);
        tracep->fullBit(oldp+418,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x11U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x10U))))))));
        tracep->fullBit(oldp+419,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+420,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x11U))),2);
        tracep->fullBit(oldp+421,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x12U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x11U))))))));
        tracep->fullBit(oldp+422,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+423,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x12U))),2);
        tracep->fullBit(oldp+424,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x13U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x12U))))))));
        tracep->fullBit(oldp+425,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+426,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x13U))),2);
        tracep->fullBit(oldp+427,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x14U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x13U))))))));
        tracep->fullBit(oldp+428,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x14U))));
        tracep->fullCData(oldp+429,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x14U))),2);
        tracep->fullBit(oldp+430,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x15U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x14U))))))));
        tracep->fullBit(oldp+431,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+432,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x15U))),2);
        tracep->fullBit(oldp+433,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x16U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x15U))))))));
        tracep->fullBit(oldp+434,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x16U))));
        tracep->fullCData(oldp+435,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x16U))),2);
        tracep->fullBit(oldp+436,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x17U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x16U))))))));
        tracep->fullBit(oldp+437,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x17U))));
        tracep->fullCData(oldp+438,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+439,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x18U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x17U))))))));
        tracep->fullBit(oldp+440,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+441,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x18U))),2);
        tracep->fullBit(oldp+442,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x19U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x18U))))))));
        tracep->fullBit(oldp+443,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+444,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x19U))),2);
        tracep->fullBit(oldp+445,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1aU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x19U))))))));
        tracep->fullBit(oldp+446,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+447,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x1aU))),2);
        tracep->fullBit(oldp+448,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1bU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x1aU))))))));
        tracep->fullBit(oldp+449,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+450,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x1bU))),2);
        tracep->fullBit(oldp+451,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1cU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x1bU))))))));
        tracep->fullBit(oldp+452,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1cU))));
        tracep->fullCData(oldp+453,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x1cU))),2);
        tracep->fullBit(oldp+454,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x1cU))))))));
        tracep->fullBit(oldp+455,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1dU))));
        tracep->fullCData(oldp+456,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                           >> 0x1dU))),2);
        tracep->fullBit(oldp+457,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x1dU))))))));
        tracep->fullBit(oldp+458,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                         >> 0x1eU))));
        tracep->fullCData(oldp+459,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                     >> 0x1eU)),2);
        tracep->fullBit(oldp+460,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x1eU))))))));
        tracep->fullBit(oldp+461,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                   >> 0x1fU)));
        tracep->fullCData(oldp+462,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                            << 1U) 
                                           | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                              >> 0x1fU)))),2);
        tracep->fullBit(oldp+463,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                      >> 0x1fU))))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[0U] 
                                                     >> 0x1fU))))))));
        tracep->fullBit(oldp+464,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])));
        tracep->fullCData(oldp+465,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])),2);
        tracep->fullBit(oldp+466,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 1U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U])))))));
        tracep->fullBit(oldp+467,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 1U))));
        tracep->fullCData(oldp+468,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 1U))),2);
        tracep->fullBit(oldp+469,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U]) 
                                                   >> 2U))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 1U))))))));
        tracep->fullBit(oldp+470,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 2U))));
        tracep->fullCData(oldp+471,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+472,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 3U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 2U))))))));
        tracep->fullBit(oldp+473,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 3U))));
        tracep->fullCData(oldp+474,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 3U))),2);
        tracep->fullBit(oldp+475,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 4U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 3U))))))));
        tracep->fullBit(oldp+476,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 4U))));
        tracep->fullCData(oldp+477,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 4U))),2);
        tracep->fullBit(oldp+478,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 5U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 4U))))))));
        tracep->fullBit(oldp+479,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 5U))));
        tracep->fullCData(oldp+480,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 5U))),2);
        tracep->fullBit(oldp+481,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 6U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 5U))))))));
        tracep->fullBit(oldp+482,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 6U))));
        tracep->fullCData(oldp+483,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 6U))),2);
        tracep->fullBit(oldp+484,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 7U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 6U))))))));
        tracep->fullBit(oldp+485,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 7U))));
        tracep->fullCData(oldp+486,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 7U))),2);
        tracep->fullBit(oldp+487,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 8U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 7U))))))));
        tracep->fullBit(oldp+488,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 8U))));
        tracep->fullCData(oldp+489,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 8U))),2);
        tracep->fullBit(oldp+490,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 9U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 8U))))))));
        tracep->fullBit(oldp+491,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 9U))));
        tracep->fullCData(oldp+492,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 9U))),2);
        tracep->fullBit(oldp+493,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xaU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 9U))))))));
        tracep->fullBit(oldp+494,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+495,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0xaU))),2);
        tracep->fullBit(oldp+496,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xbU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0xaU))))))));
        tracep->fullBit(oldp+497,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0xbU))));
        tracep->fullCData(oldp+498,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+499,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xcU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0xbU))))))));
        tracep->fullBit(oldp+500,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+501,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+502,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xdU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0xcU))))))));
        tracep->fullBit(oldp+503,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0xdU))));
        tracep->fullCData(oldp+504,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0xdU))),2);
        tracep->fullBit(oldp+505,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xeU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0xdU))))))));
        tracep->fullBit(oldp+506,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+507,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0xeU))),2);
        tracep->fullBit(oldp+508,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0xfU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0xeU))))))));
        tracep->fullBit(oldp+509,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0xfU))));
        tracep->fullCData(oldp+510,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0xfU))),2);
        tracep->fullBit(oldp+511,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x10U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0xfU))))))));
        tracep->fullBit(oldp+512,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x10U))));
        tracep->fullCData(oldp+513,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x10U))),2);
        tracep->fullBit(oldp+514,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x11U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x10U))))))));
        tracep->fullBit(oldp+515,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+516,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x11U))),2);
        tracep->fullBit(oldp+517,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x12U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x11U))))))));
        tracep->fullBit(oldp+518,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+519,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x12U))),2);
        tracep->fullBit(oldp+520,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x13U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x12U))))))));
        tracep->fullBit(oldp+521,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+522,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x13U))),2);
        tracep->fullBit(oldp+523,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x14U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x13U))))))));
        tracep->fullBit(oldp+524,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x14U))));
        tracep->fullCData(oldp+525,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x14U))),2);
        tracep->fullBit(oldp+526,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x15U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x14U))))))));
        tracep->fullBit(oldp+527,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+528,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x15U))),2);
        tracep->fullBit(oldp+529,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x16U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x15U))))))));
        tracep->fullBit(oldp+530,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x16U))));
        tracep->fullCData(oldp+531,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x16U))),2);
        tracep->fullBit(oldp+532,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x17U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x16U))))))));
        tracep->fullBit(oldp+533,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x17U))));
        tracep->fullCData(oldp+534,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+535,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x18U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x17U))))))));
        tracep->fullBit(oldp+536,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+537,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x18U))),2);
        tracep->fullBit(oldp+538,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x19U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x18U))))))));
        tracep->fullBit(oldp+539,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+540,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x19U))),2);
        tracep->fullBit(oldp+541,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1aU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x19U))))))));
        tracep->fullBit(oldp+542,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+543,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x1aU))),2);
        tracep->fullBit(oldp+544,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1bU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x1aU))))))));
        tracep->fullBit(oldp+545,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+546,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x1bU))),2);
        tracep->fullBit(oldp+547,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1cU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x1bU))))))));
        tracep->fullBit(oldp+548,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1cU))));
        tracep->fullCData(oldp+549,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x1cU))),2);
        tracep->fullBit(oldp+550,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x1cU))))))));
        tracep->fullBit(oldp+551,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1dU))));
        tracep->fullCData(oldp+552,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                           >> 0x1dU))),2);
        tracep->fullBit(oldp+553,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x1dU))))))));
        tracep->fullBit(oldp+554,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                         >> 0x1eU))));
        tracep->fullCData(oldp+555,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                     >> 0x1eU)),2);
        tracep->fullBit(oldp+556,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x1eU))))))));
        tracep->fullBit(oldp+557,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                   >> 0x1fU)));
        tracep->fullCData(oldp+558,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                            << 1U) 
                                           | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                              >> 0x1fU)))),2);
        tracep->fullBit(oldp+559,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                      >> 0x1fU))))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[1U] 
                                                     >> 0x1fU))))))));
        tracep->fullBit(oldp+560,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])));
        tracep->fullCData(oldp+561,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])),2);
        tracep->fullBit(oldp+562,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 1U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U])))))));
        tracep->fullBit(oldp+563,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 1U))));
        tracep->fullCData(oldp+564,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 1U))),2);
        tracep->fullBit(oldp+565,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U]) 
                                                   >> 2U))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 1U))))))));
        tracep->fullBit(oldp+566,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 2U))));
        tracep->fullCData(oldp+567,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+568,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 3U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 2U))))))));
        tracep->fullBit(oldp+569,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 3U))));
        tracep->fullCData(oldp+570,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 3U))),2);
        tracep->fullBit(oldp+571,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 4U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 3U))))))));
        tracep->fullBit(oldp+572,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+573,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 4U))),2);
        tracep->fullBit(oldp+574,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 5U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 4U))))))));
        tracep->fullBit(oldp+575,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+576,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 5U))),2);
        tracep->fullBit(oldp+577,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 6U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 5U))))))));
        tracep->fullBit(oldp+578,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 6U))));
        tracep->fullCData(oldp+579,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 6U))),2);
        tracep->fullBit(oldp+580,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 7U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 6U))))))));
        tracep->fullBit(oldp+581,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 7U))));
        tracep->fullCData(oldp+582,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 7U))),2);
        tracep->fullBit(oldp+583,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 8U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 7U))))))));
        tracep->fullBit(oldp+584,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 8U))));
        tracep->fullCData(oldp+585,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 8U))),2);
        tracep->fullBit(oldp+586,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 9U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 8U))))))));
        tracep->fullBit(oldp+587,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 9U))));
        tracep->fullCData(oldp+588,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 9U))),2);
        tracep->fullBit(oldp+589,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xaU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 9U))))))));
        tracep->fullBit(oldp+590,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+591,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0xaU))),2);
        tracep->fullBit(oldp+592,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xbU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0xaU))))))));
        tracep->fullBit(oldp+593,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0xbU))));
        tracep->fullCData(oldp+594,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+595,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xcU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0xbU))))))));
        tracep->fullBit(oldp+596,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+597,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+598,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xdU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0xcU))))))));
        tracep->fullBit(oldp+599,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0xdU))));
        tracep->fullCData(oldp+600,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0xdU))),2);
        tracep->fullBit(oldp+601,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xeU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0xdU))))))));
        tracep->fullBit(oldp+602,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+603,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0xeU))),2);
        tracep->fullBit(oldp+604,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0xfU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0xeU))))))));
        tracep->fullBit(oldp+605,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0xfU))));
        tracep->fullCData(oldp+606,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0xfU))),2);
        tracep->fullBit(oldp+607,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x10U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0xfU))))))));
        tracep->fullBit(oldp+608,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x10U))));
        tracep->fullCData(oldp+609,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x10U))),2);
        tracep->fullBit(oldp+610,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x11U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x10U))))))));
        tracep->fullBit(oldp+611,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+612,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x11U))),2);
        tracep->fullBit(oldp+613,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x12U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x11U))))))));
        tracep->fullBit(oldp+614,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+615,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x12U))),2);
        tracep->fullBit(oldp+616,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x13U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x12U))))))));
        tracep->fullBit(oldp+617,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+618,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x13U))),2);
        tracep->fullBit(oldp+619,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x14U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x13U))))))));
        tracep->fullBit(oldp+620,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x14U))));
        tracep->fullCData(oldp+621,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x14U))),2);
        tracep->fullBit(oldp+622,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x15U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x14U))))))));
        tracep->fullBit(oldp+623,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+624,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x15U))),2);
        tracep->fullBit(oldp+625,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x16U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x15U))))))));
        tracep->fullBit(oldp+626,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x16U))));
        tracep->fullCData(oldp+627,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x16U))),2);
        tracep->fullBit(oldp+628,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x17U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x16U))))))));
        tracep->fullBit(oldp+629,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x17U))));
        tracep->fullCData(oldp+630,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+631,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x18U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x17U))))))));
        tracep->fullBit(oldp+632,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+633,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x18U))),2);
        tracep->fullBit(oldp+634,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x19U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x18U))))))));
        tracep->fullBit(oldp+635,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+636,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x19U))),2);
        tracep->fullBit(oldp+637,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1aU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x19U))))))));
        tracep->fullBit(oldp+638,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+639,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x1aU))),2);
        tracep->fullBit(oldp+640,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1bU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x1aU))))))));
        tracep->fullBit(oldp+641,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+642,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x1bU))),2);
        tracep->fullBit(oldp+643,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1cU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x1bU))))))));
        tracep->fullBit(oldp+644,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1cU))));
        tracep->fullCData(oldp+645,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x1cU))),2);
        tracep->fullBit(oldp+646,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x1cU))))))));
        tracep->fullBit(oldp+647,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1dU))));
        tracep->fullCData(oldp+648,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                           >> 0x1dU))),2);
        tracep->fullBit(oldp+649,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x1dU))))))));
        tracep->fullBit(oldp+650,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                         >> 0x1eU))));
        tracep->fullCData(oldp+651,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                     >> 0x1eU)),2);
        tracep->fullBit(oldp+652,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x1eU))))))));
        tracep->fullBit(oldp+653,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                   >> 0x1fU)));
        tracep->fullCData(oldp+654,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                            << 1U) 
                                           | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                              >> 0x1fU)))),2);
        tracep->fullBit(oldp+655,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                      >> 0x1fU))))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[2U] 
                                                     >> 0x1fU))))))));
        tracep->fullBit(oldp+656,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])));
        tracep->fullCData(oldp+657,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])),2);
        tracep->fullBit(oldp+658,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 1U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U])))))));
        tracep->fullBit(oldp+659,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 1U))));
        tracep->fullCData(oldp+660,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 1U))),2);
        tracep->fullBit(oldp+661,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U]) 
                                                   >> 2U))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 1U))))))));
        tracep->fullBit(oldp+662,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 2U))));
        tracep->fullCData(oldp+663,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+664,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 3U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 2U))))))));
        tracep->fullBit(oldp+665,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 3U))));
        tracep->fullCData(oldp+666,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 3U))),2);
        tracep->fullBit(oldp+667,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 4U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 3U))))))));
        tracep->fullBit(oldp+668,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 4U))));
        tracep->fullCData(oldp+669,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 4U))),2);
        tracep->fullBit(oldp+670,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 5U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 4U))))))));
        tracep->fullBit(oldp+671,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 5U))));
        tracep->fullCData(oldp+672,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 5U))),2);
        tracep->fullBit(oldp+673,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 6U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 5U))))))));
        tracep->fullBit(oldp+674,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 6U))));
        tracep->fullCData(oldp+675,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 6U))),2);
        tracep->fullBit(oldp+676,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 7U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 6U))))))));
        tracep->fullBit(oldp+677,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 7U))));
        tracep->fullCData(oldp+678,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 7U))),2);
        tracep->fullBit(oldp+679,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 8U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 7U))))))));
        tracep->fullBit(oldp+680,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 8U))));
        tracep->fullCData(oldp+681,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 8U))),2);
        tracep->fullBit(oldp+682,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 9U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 8U))))))));
        tracep->fullBit(oldp+683,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 9U))));
        tracep->fullCData(oldp+684,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 9U))),2);
        tracep->fullBit(oldp+685,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xaU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 9U))))))));
        tracep->fullBit(oldp+686,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0xaU))));
        tracep->fullCData(oldp+687,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0xaU))),2);
        tracep->fullBit(oldp+688,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xbU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0xaU))))))));
        tracep->fullBit(oldp+689,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0xbU))));
        tracep->fullCData(oldp+690,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0xbU))),2);
        tracep->fullBit(oldp+691,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xcU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0xbU))))))));
        tracep->fullBit(oldp+692,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0xcU))));
        tracep->fullCData(oldp+693,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0xcU))),2);
        tracep->fullBit(oldp+694,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xdU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0xcU))))))));
        tracep->fullBit(oldp+695,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0xdU))));
        tracep->fullCData(oldp+696,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0xdU))),2);
        tracep->fullBit(oldp+697,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xeU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0xdU))))))));
        tracep->fullBit(oldp+698,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0xeU))));
        tracep->fullCData(oldp+699,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0xeU))),2);
        tracep->fullBit(oldp+700,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0xfU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0xeU))))))));
        tracep->fullBit(oldp+701,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0xfU))));
        tracep->fullCData(oldp+702,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0xfU))),2);
        tracep->fullBit(oldp+703,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x10U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0xfU))))))));
        tracep->fullBit(oldp+704,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x10U))));
        tracep->fullCData(oldp+705,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x10U))),2);
        tracep->fullBit(oldp+706,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x11U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x10U))))))));
        tracep->fullBit(oldp+707,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x11U))));
        tracep->fullCData(oldp+708,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x11U))),2);
        tracep->fullBit(oldp+709,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x12U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x11U))))))));
        tracep->fullBit(oldp+710,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x12U))));
        tracep->fullCData(oldp+711,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x12U))),2);
        tracep->fullBit(oldp+712,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x13U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x12U))))))));
        tracep->fullBit(oldp+713,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x13U))));
        tracep->fullCData(oldp+714,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x13U))),2);
        tracep->fullBit(oldp+715,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x14U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x13U))))))));
        tracep->fullBit(oldp+716,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x14U))));
        tracep->fullCData(oldp+717,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x14U))),2);
        tracep->fullBit(oldp+718,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x15U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x14U))))))));
        tracep->fullBit(oldp+719,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x15U))));
        tracep->fullCData(oldp+720,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x15U))),2);
        tracep->fullBit(oldp+721,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x16U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x15U))))))));
        tracep->fullBit(oldp+722,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x16U))));
        tracep->fullCData(oldp+723,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x16U))),2);
        tracep->fullBit(oldp+724,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x17U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x16U))))))));
        tracep->fullBit(oldp+725,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x17U))));
        tracep->fullCData(oldp+726,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x17U))),2);
        tracep->fullBit(oldp+727,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x18U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x17U))))))));
        tracep->fullBit(oldp+728,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x18U))));
        tracep->fullCData(oldp+729,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x18U))),2);
        tracep->fullBit(oldp+730,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x19U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x18U))))))));
        tracep->fullBit(oldp+731,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x19U))));
        tracep->fullCData(oldp+732,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x19U))),2);
        tracep->fullBit(oldp+733,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1aU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x19U))))))));
        tracep->fullBit(oldp+734,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1aU))));
        tracep->fullCData(oldp+735,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x1aU))),2);
        tracep->fullBit(oldp+736,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1bU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x1aU))))))));
        tracep->fullBit(oldp+737,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1bU))));
        tracep->fullCData(oldp+738,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x1bU))),2);
        tracep->fullBit(oldp+739,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1cU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x1bU))))))));
        tracep->fullBit(oldp+740,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1cU))));
        tracep->fullCData(oldp+741,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x1cU))),2);
        tracep->fullBit(oldp+742,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1dU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x1cU))))))));
        tracep->fullBit(oldp+743,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1dU))));
        tracep->fullCData(oldp+744,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                           >> 0x1dU))),2);
        tracep->fullBit(oldp+745,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1eU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x1dU))))))));
        tracep->fullBit(oldp+746,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                         >> 0x1eU))));
        tracep->fullCData(oldp+747,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                     >> 0x1eU)),2);
        tracep->fullBit(oldp+748,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1fU)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x1eU))))))));
        tracep->fullBit(oldp+749,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                   >> 0x1fU)));
        tracep->fullCData(oldp+750,((3U & ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                            << 1U) 
                                           | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                              >> 0x1fU)))),2);
        tracep->fullBit(oldp+751,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                      >> 0x1fU))))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[3U] 
                                                     >> 0x1fU))))))));
        tracep->fullBit(oldp+752,((1U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])));
        tracep->fullCData(oldp+753,((3U & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])),2);
        tracep->fullBit(oldp+754,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 3U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 1U)))) 
                                              & (~ 
                                                 (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                   >> 1U) 
                                                  & (~ 
                                                     vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))) 
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 1U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U])))))));
        tracep->fullBit(oldp+755,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                         >> 1U))));
        tracep->fullCData(oldp+756,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                           >> 1U))),2);
        tracep->fullBit(oldp+757,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U]) 
                                                   >> 2U))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                     >> 1U))))))));
        tracep->fullBit(oldp+758,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                         >> 2U))));
        tracep->fullCData(oldp+759,((3U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                           >> 2U))),2);
        tracep->fullBit(oldp+760,((1U & (~ ((((~ (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
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
                                             & (~ (
                                                   ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                    >> 2U) 
                                                   & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                      >> 3U)))) 
                                            & (~ ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__partial__DOT__sel) 
                                                  & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                                     >> 2U))))))));
        tracep->fullBit(oldp+761,((1U & (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__multiplicand_r[4U] 
                                         >> 3U))));
        tracep->fullBit(oldp+762,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__running_r));
        tracep->fullCData(oldp+763,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__cnt),7);
        tracep->fullWData(oldp+764,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r),128);
        tracep->fullQData(oldp+768,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r),64);
        tracep->fullQData(oldp+770,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__quotient_r),64);
        tracep->fullQData(oldp+772,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__remainder_r),64);
        tracep->fullBit(oldp+774,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__dividend_s));
        tracep->fullBit(oldp+775,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__divisor_s));
        tracep->fullQData(oldp+776,((1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__dividend))),64);
        tracep->fullQData(oldp+778,((1ULL + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divisor))),64);
        tracep->fullQData(oldp+780,((1ULL + ((((QData)((IData)(
                                                               vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U])) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U])) 
                                                  << 1U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U])) 
                                                    >> 0x1fU))) 
                                             + (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r)))),64);
        tracep->fullBit(oldp+782,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__sub_s));
        tracep->fullBit(oldp+783,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__div_fire));
        tracep->fullBit(oldp+784,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__done));
        __Vtemp204[0U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                           << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[1U] 
                                     >> 0x1fU));
        __Vtemp204[1U] = ((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                           << 1U) | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[2U] 
                                     >> 0x1fU));
        __Vtemp204[2U] = (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udividend_r[3U] 
                          >> 0x1fU);
        tracep->fullWData(oldp+785,(__Vtemp204),65);
        __Vtemp205[0U] = (IData)((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r));
        __Vtemp205[1U] = (IData)(((~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__divu__DOT__udivisor_r) 
                                  >> 0x20U));
        __Vtemp205[2U] = 1U;
        tracep->fullWData(oldp+788,(__Vtemp205),65);
        tracep->fullQData(oldp+791,(((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                      ? ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                          ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                              ? 0ULL
                                              : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah)))
                                          : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                              ? (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab))
                                              : (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))
                                      : ((2U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                          ? ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                              ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout
                                              : (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah) 
                                                                         >> 0xfU))))) 
                                                  << 0x10U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah))))
                                          : ((1U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
                                              ? (((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab) 
                                                                         >> 7U))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab)))
                                              : (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))),64);
        tracep->fullQData(oldp+793,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataout),64);
        tracep->fullCData(oldp+795,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__wmask),8);
        tracep->fullCData(oldp+796,((7U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))),3);
        tracep->fullIData(oldp+797,((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r)),32);
        tracep->fullSData(oldp+798,((0xffffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r))),16);
        tracep->fullCData(oldp+799,((0xffU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__wdata_r))),8);
        tracep->fullQData(oldp+800,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain),64);
        tracep->fullBit(oldp+802,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status))));
        tracep->fullBit(oldp+803,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__d_cpu_ready));
        tracep->fullQData(oldp+804,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_data_read),64);
        tracep->fullBit(oldp+806,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cache_doing));
        tracep->fullBit(oldp+807,((2U == (0xffU & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                           >> 0x18U))))));
        tracep->fullQData(oldp+808,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtimecmp),64);
        tracep->fullIData(oldp+810,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw),32);
        tracep->fullSData(oldp+811,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datah),16);
        tracep->fullCData(oldp+812,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datab),8);
        tracep->fullQData(oldp+813,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__mtime),64);
        tracep->fullCData(oldp+815,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__clint__DOT__cnt),4);
        tracep->fullCData(oldp+816,((0xffU & (IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                      >> 4U)))),8);
        tracep->fullCData(oldp+817,((0xfU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r))),4);
        tracep->fullQData(oldp+818,((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                     >> 0xcU)),52);
        tracep->fullBit(oldp+820,((((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status)) 
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
        tracep->fullCData(oldp+821,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__idx_cnt),8);
        tracep->fullCData(oldp+822,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__cur_status),4);
        tracep->fullWData(oldp+823,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen),128);
        tracep->fullWData(oldp+827,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[0]),128);
        tracep->fullWData(oldp+831,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[1]),128);
        tracep->fullWData(oldp+835,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[2]),128);
        tracep->fullWData(oldp+839,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o[3]),128);
        tracep->fullBit(oldp+843,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[0]));
        tracep->fullBit(oldp+844,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[1]));
        tracep->fullBit(oldp+845,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[2]));
        tracep->fullBit(oldp+846,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen[3]));
        tracep->fullIData(oldp+847,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__i),32);
        __Vtemp211[0U] = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                           & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U]) 
                          | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                             [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xaU)))][0U] 
                             & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[0U])));
        __Vtemp211[1U] = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                                    >> 0x20U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U]) 
                          | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                             [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xaU)))][1U] 
                             & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[1U])));
        __Vtemp211[2U] = (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain) 
                           & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U]) 
                          | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                             [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xaU)))][2U] 
                             & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[2U])));
        __Vtemp211[3U] = (((IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__datain 
                                    >> 0x20U)) & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U]) 
                          | (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_o
                             [(3U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                             >> 0xaU)))][3U] 
                             & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__bwen[3U])));
        tracep->fullWData(oldp+848,(__Vtemp211),128);
        tracep->fullQData(oldp+852,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[0]),64);
        tracep->fullQData(oldp+854,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[1]),64);
        tracep->fullQData(oldp+856,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[2]),64);
        tracep->fullQData(oldp+858,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[3]),64);
        tracep->fullQData(oldp+860,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[4]),64);
        tracep->fullQData(oldp+862,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[5]),64);
        tracep->fullQData(oldp+864,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[6]),64);
        tracep->fullQData(oldp+866,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[7]),64);
        tracep->fullQData(oldp+868,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[8]),64);
        tracep->fullQData(oldp+870,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[9]),64);
        tracep->fullQData(oldp+872,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[10]),64);
        tracep->fullQData(oldp+874,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[11]),64);
        tracep->fullQData(oldp+876,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[12]),64);
        tracep->fullQData(oldp+878,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[13]),64);
        tracep->fullQData(oldp+880,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[14]),64);
        tracep->fullQData(oldp+882,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[15]),64);
        tracep->fullQData(oldp+884,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[16]),64);
        tracep->fullQData(oldp+886,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[17]),64);
        tracep->fullQData(oldp+888,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[18]),64);
        tracep->fullQData(oldp+890,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[19]),64);
        tracep->fullQData(oldp+892,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[20]),64);
        tracep->fullQData(oldp+894,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[21]),64);
        tracep->fullQData(oldp+896,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[22]),64);
        tracep->fullQData(oldp+898,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[23]),64);
        tracep->fullQData(oldp+900,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[24]),64);
        tracep->fullQData(oldp+902,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[25]),64);
        tracep->fullQData(oldp+904,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[26]),64);
        tracep->fullQData(oldp+906,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[27]),64);
        tracep->fullQData(oldp+908,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[28]),64);
        tracep->fullQData(oldp+910,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[29]),64);
        tracep->fullQData(oldp+912,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[30]),64);
        tracep->fullQData(oldp+914,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__rf[31]),64);
        tracep->fullIData(oldp+916,(vlSelf->top__DOT__mycpu__DOT__core__DOT__regfile__DOT__i),32);
        tracep->fullBit(oldp+917,(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Ecall));
        tracep->fullBit(oldp+918,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Mret) 
                                   & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r))));
        tracep->fullBit(oldp+919,(vlSelf->top__DOT__mycpu__DOT__core__DOT____Vcellinp__csrfile__Time_interrupt));
        tracep->fullQData(oldp+920,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mcause),64);
        tracep->fullQData(oldp+922,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mstatus),64);
        tracep->fullQData(oldp+924,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mscratch),64);
        tracep->fullQData(oldp+926,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mie),64);
        tracep->fullQData(oldp+928,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__mip),64);
        tracep->fullCData(oldp+930,(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__cur_status),2);
        tracep->fullCData(oldp+931,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status),3);
        tracep->fullCData(oldp+932,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status),3);
        tracep->fullBit(oldp+933,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))));
        tracep->fullBit(oldp+934,((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))));
        tracep->fullBit(oldp+935,((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_status))));
        tracep->fullBit(oldp+936,((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status))));
        tracep->fullBit(oldp+937,((3U == (IData)(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_status))));
        tracep->fullBit(oldp+938,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__aw_valid_r));
        tracep->fullBit(oldp+939,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_valid_r));
        tracep->fullCData(oldp+940,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__rcnt),8);
        tracep->fullCData(oldp+941,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__wcnt),8);
        tracep->fullCData(oldp+942,(((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o))
                                      ? 0U : ((2U == (IData)(vlSelf->top__DOT__mycpu__DOT__rw_bytes_o))
                                               ? 1U
                                               : 2U))),3);
        tracep->fullBit(oldp+943,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                         [0U]))));
        tracep->fullBit(oldp+944,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                         [1U]))));
        tracep->fullBit(oldp+945,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                         [2U]))));
        tracep->fullBit(oldp+946,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__line_wen
                                         [3U]))));
        tracep->fullBit(oldp+947,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                   & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))));
        tracep->fullQData(oldp+948,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                      & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
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
        tracep->fullQData(oldp+950,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ex_hazard) 
                                      & ((0x1fU & (vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__instr_r 
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
        tracep->fullBit(oldp+952,((((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__valid_r) 
                                    & (0xaU == (0xfU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                           >> 0x1cU))))) 
                                   & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men)))));
        tracep->fullBit(oldp+953,(((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                                   & (((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__ID_Reg__DOT__valid_r) 
                                       & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))) 
                                      | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__Fence_i_r) 
                                         & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))))));
        tracep->fullBit(oldp+954,((((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__cur_status)) 
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
        tracep->fullQData(oldp+955,(((1U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
                                      ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_imm_o
                                      : ((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_ALUSrcB_o))
                                          ? vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o
                                          : 4ULL))),64);
        VL_EXTEND_WQ(65,64, __Vtemp213, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp214, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
        VL_ADD_W(3, __Vtemp215, __Vtemp213, __Vtemp214);
        VL_EXTEND_WI(65,1, __Vtemp216, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp217, __Vtemp215, __Vtemp216);
        tracep->fullQData(oldp+957,(((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__OPctr))
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
                                                              & __Vtemp217[2U]) 
                                                             ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))),64);
        tracep->fullQData(oldp+959,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__Wctr)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)))
                                      : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)),64);
        VL_EXTEND_WQ(65,64, __Vtemp220, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp221, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
        VL_ADD_W(3, __Vtemp222, __Vtemp220, __Vtemp221);
        VL_EXTEND_WI(65,1, __Vtemp223, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp224, __Vtemp222, __Vtemp223);
        tracep->fullQData(oldp+961,((QData)((IData)(
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
                                                          & __Vtemp224[2U]) 
                                                         ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr))))))),64);
        VL_EXTEND_WQ(65,64, __Vtemp227, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp228, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
        VL_ADD_W(3, __Vtemp229, __Vtemp227, __Vtemp228);
        VL_EXTEND_WI(65,1, __Vtemp230, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp231, __Vtemp229, __Vtemp230);
        tracep->fullBit(oldp+963,((1U & __Vtemp231[2U])));
        VL_EXTEND_WQ(65,64, __Vtemp234, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp235, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
        VL_ADD_W(3, __Vtemp236, __Vtemp234, __Vtemp235);
        VL_EXTEND_WI(65,1, __Vtemp237, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp238, __Vtemp236, __Vtemp237);
        tracep->fullBit(oldp+964,((1U & ((1U & __Vtemp238[2U]) 
                                         ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))));
        VL_EXTEND_WQ(65,64, __Vtemp241, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA);
        VL_EXTEND_WQ(65,64, __Vtemp242, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb);
        VL_ADD_W(3, __Vtemp243, __Vtemp241, __Vtemp242);
        VL_EXTEND_WI(65,1, __Vtemp244, (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr));
        VL_ADD_W(3, __Vtemp245, __Vtemp243, __Vtemp244);
        tracep->fullBit(oldp+965,((1U & (IData)(((0U 
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
                                                                          & __Vtemp245[2U]) 
                                                                         ^ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__SUBctr)))))))))));
        tracep->fullQData(oldp+966,(((0U == (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__EX_Reg__DOT__MulOp_r))
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
        tracep->fullQData(oldp+968,((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                      ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient_r
                                      : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__quotient)),64);
        tracep->fullQData(oldp+970,((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_div))
                                      ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder_r
                                      : vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__remainder)),64);
        tracep->fullQData(oldp+972,((((~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)) 
                                      & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__old_mul))
                                      ? vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__result_hi_r
                                      : (((QData)((IData)(
                                                          vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__mulu__DOT__tmp_result[2U]))))),64);
        tracep->fullQData(oldp+974,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)
                                      ? ((4U & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__MemOp_r))
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
                                                  | (QData)((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dataw))))))
                                      : vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r)),64);
        tracep->fullBit(oldp+976,(((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men) 
                                   & (2U == (0xffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__mycpu__DOT__core__DOT__M_Reg__DOT__raddr_r 
                                                        >> 0x18U)))))));
        tracep->fullCData(oldp+977,((0x3fU & (IData)(
                                                     (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                      >> 4U)))),6);
        tracep->fullBit(oldp+978,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                  [0U]));
        tracep->fullBit(oldp+979,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                  [1U]));
        tracep->fullBit(oldp+980,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                  [2U]));
        tracep->fullBit(oldp+981,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                  [3U]));
        tracep->fullBit(oldp+982,(vlSelf->top__DOT__mycpu__DOT__rw_dev_o));
        tracep->fullIData(oldp+983,(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_instr_o),32);
        tracep->fullBit(oldp+984,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_en));
        tracep->fullBit(oldp+985,(vlSelf->top__DOT__mycpu__DOT__core__DOT__ex_en));
        tracep->fullBit(oldp+986,((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy)))));
        tracep->fullBit(oldp+987,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_flush));
        tracep->fullBit(oldp+988,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_busy));
        tracep->fullQData(oldp+989,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busa_o),64);
        tracep->fullQData(oldp+991,(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_busb_o),64);
        tracep->fullQData(oldp+993,((0xfffffffffffffffeULL 
                                     & vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res)),64);
        tracep->fullQData(oldp+995,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__res),64);
        tracep->fullQData(oldp+997,(vlSelf->top__DOT__mycpu__DOT__core__DOT__m_rfdata_o),64);
        tracep->fullBit(oldp+999,(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt));
        tracep->fullBit(oldp+1000,((3U == (0xfU & (IData)(
                                                          (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                           >> 0x1cU))))));
        tracep->fullBit(oldp+1001,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_Csrwen));
        tracep->fullBit(oldp+1002,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg));
        tracep->fullBit(oldp+1003,(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_men));
        tracep->fullQData(oldp+1004,(vlSelf->top__DOT__mycpu__DOT__core__DOT__Csr_datain),64);
        tracep->fullQData(oldp+1006,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc),64);
        tracep->fullBit(oldp+1008,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__flush));
        tracep->fullCData(oldp+1009,((0xffU & (IData)(
                                                      (vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                                       >> 4U)))),8);
        tracep->fullCData(oldp+1010,((0xfU & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc))),4);
        tracep->fullQData(oldp+1011,((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__cache_pc 
                                      >> 0xcU)),52);
        tracep->fullCData(oldp+1013,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__next_status),3);
        tracep->fullBit(oldp+1014,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[0]));
        tracep->fullBit(oldp+1015,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[1]));
        tracep->fullBit(oldp+1016,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[2]));
        tracep->fullBit(oldp+1017,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen[3]));
        tracep->fullQData(oldp+1018,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__addr_res),64);
        tracep->fullQData(oldp+1020,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__alu_inA),64);
        tracep->fullBit(oldp+1022,(((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres)
                                     ? 1U : 0U)));
        tracep->fullQData(oldp+1023,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres),64);
        tracep->fullQData(oldp+1025,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderb),64);
        tracep->fullBit(oldp+1027,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__na_alu__DOT__adderres 
                                                  >> 0x3fU)))));
        tracep->fullBit(oldp+1028,((1U & ((((~ (IData)(
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
        tracep->fullBit(oldp+1029,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexA));
        tracep->fullBit(oldp+1030,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__NexB));
        tracep->fullQData(oldp+1031,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA),64);
        tracep->fullQData(oldp+1033,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB),64);
        tracep->fullQData(oldp+1035,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc),64);
        VL_EXTEND_WQ(65,64, __Vtemp248, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcA);
        VL_EXTEND_WQ(65,64, __Vtemp249, vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__SrcB);
        VL_ADD_W(3, __Vtemp250, __Vtemp248, __Vtemp249);
        tracep->fullBit(oldp+1037,((1U & __Vtemp250[2U])));
        tracep->fullBit(oldp+1038,((1U & ((((~ (IData)(
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
        tracep->fullBit(oldp+1039,((1U & (IData)((vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc 
                                                  >> 0x3fU)))));
        tracep->fullBit(oldp+1040,(((0ULL == vlSelf->top__DOT__mycpu__DOT__core__DOT__my_idu__DOT__nextaddr__DOT__respc)
                                     ? 1U : 0U)));
        tracep->fullQData(oldp+1041,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_exu__DOT__alu64__DOT__rlo),64);
        tracep->fullBit(oldp+1043,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__vis_mem));
        tracep->fullBit(oldp+1044,((1U & (~ (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__is_MemToReg)))));
        tracep->fullBit(oldp+1045,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__cpu_req_valid));
        tracep->fullCData(oldp+1046,(vlSelf->top__DOT__mycpu__DOT__core__DOT__my_mu__DOT__mem__DOT__dcache__DOT__next_status),4);
        tracep->fullQData(oldp+1047,(vlSelf->top__DOT__mycpu__DOT__core__DOT__csrfile__DOT__csrin),64);
        tracep->fullCData(oldp+1049,(vlSelf->top__DOT__mycpu__DOT__core__DOT__arbiter__DOT__next_status),2);
        tracep->fullBit(oldp+1050,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_fire));
        tracep->fullBit(oldp+1051,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__b_fire));
        tracep->fullBit(oldp+1052,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__w_last));
        tracep->fullBit(oldp+1053,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_fire));
        tracep->fullBit(oldp+1054,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__r_last));
        tracep->fullCData(oldp+1055,(((IData)(vlSelf->top__DOT__mycpu__DOT__rw_dev_o)
                                       ? 0U : 1U)),8);
        tracep->fullCData(oldp+1056,(vlSelf->top__DOT__mycpu__DOT__axi__DOT__axi_size),3);
        tracep->fullBit(oldp+1057,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                          [0U]))));
        tracep->fullBit(oldp+1058,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                          [1U]))));
        tracep->fullBit(oldp+1059,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                          [2U]))));
        tracep->fullBit(oldp+1060,((1U & (~ vlSelf->top__DOT__mycpu__DOT__core__DOT__my_ifu__DOT__icache__DOT__line_wen
                                          [3U]))));
        tracep->fullBit(oldp+1061,(vlSelf->clk));
        tracep->fullBit(oldp+1062,(vlSelf->rst));
        tracep->fullIData(oldp+1063,(vlSelf->instr),32);
        tracep->fullQData(oldp+1064,(vlSelf->pc),64);
        tracep->fullBit(oldp+1066,(vlSelf->wb_commit));
        tracep->fullQData(oldp+1067,(vlSelf->wb_pc),64);
        tracep->fullIData(oldp+1069,(vlSelf->wb_instr),32);
        tracep->fullQData(oldp+1070,(vlSelf->next_pc),64);
        tracep->fullBit(oldp+1072,(vlSelf->wb_dev_o));
        tracep->fullBit(oldp+1073,(vlSelf->axi_aw_ready_i));
        tracep->fullBit(oldp+1074,(vlSelf->axi_aw_valid_o));
        tracep->fullIData(oldp+1075,(vlSelf->axi_aw_addr_o),32);
        tracep->fullCData(oldp+1076,(vlSelf->axi_aw_prot_o),3);
        tracep->fullCData(oldp+1077,(vlSelf->axi_aw_id_o),4);
        tracep->fullBit(oldp+1078,(vlSelf->axi_aw_user_o));
        tracep->fullCData(oldp+1079,(vlSelf->axi_aw_len_o),8);
        tracep->fullCData(oldp+1080,(vlSelf->axi_aw_size_o),3);
        tracep->fullCData(oldp+1081,(vlSelf->axi_aw_burst_o),2);
        tracep->fullBit(oldp+1082,(vlSelf->axi_aw_lock_o));
        tracep->fullCData(oldp+1083,(vlSelf->axi_aw_cache_o),4);
        tracep->fullCData(oldp+1084,(vlSelf->axi_aw_qos_o),4);
        tracep->fullCData(oldp+1085,(vlSelf->axi_aw_region_o),4);
        tracep->fullBit(oldp+1086,(vlSelf->axi_w_ready_i));
        tracep->fullBit(oldp+1087,(vlSelf->axi_w_valid_o));
        tracep->fullQData(oldp+1088,(vlSelf->axi_w_data_o),64);
        tracep->fullCData(oldp+1090,(vlSelf->axi_w_strb_o),8);
        tracep->fullBit(oldp+1091,(vlSelf->axi_w_last_o));
        tracep->fullBit(oldp+1092,(vlSelf->axi_w_user_o));
        tracep->fullBit(oldp+1093,(vlSelf->axi_b_ready_o));
        tracep->fullBit(oldp+1094,(vlSelf->axi_b_valid_i));
        tracep->fullCData(oldp+1095,(vlSelf->axi_b_resp_i),2);
        tracep->fullCData(oldp+1096,(vlSelf->axi_b_id_i),4);
        tracep->fullBit(oldp+1097,(vlSelf->axi_b_user_i));
        tracep->fullBit(oldp+1098,(vlSelf->axi_ar_ready_i));
        tracep->fullBit(oldp+1099,(vlSelf->axi_ar_valid_o));
        tracep->fullIData(oldp+1100,(vlSelf->axi_ar_addr_o),32);
        tracep->fullCData(oldp+1101,(vlSelf->axi_ar_prot_o),3);
        tracep->fullCData(oldp+1102,(vlSelf->axi_ar_id_o),4);
        tracep->fullBit(oldp+1103,(vlSelf->axi_ar_user_o));
        tracep->fullCData(oldp+1104,(vlSelf->axi_ar_len_o),8);
        tracep->fullCData(oldp+1105,(vlSelf->axi_ar_size_o),3);
        tracep->fullCData(oldp+1106,(vlSelf->axi_ar_burst_o),2);
        tracep->fullBit(oldp+1107,(vlSelf->axi_ar_lock_o));
        tracep->fullCData(oldp+1108,(vlSelf->axi_ar_cache_o),4);
        tracep->fullCData(oldp+1109,(vlSelf->axi_ar_qos_o),4);
        tracep->fullCData(oldp+1110,(vlSelf->axi_ar_region_o),4);
        tracep->fullBit(oldp+1111,(vlSelf->axi_r_ready_o));
        tracep->fullBit(oldp+1112,(vlSelf->axi_r_valid_i));
        tracep->fullCData(oldp+1113,(vlSelf->axi_r_resp_i),2);
        tracep->fullQData(oldp+1114,(vlSelf->axi_r_data_i),64);
        tracep->fullBit(oldp+1116,(vlSelf->axi_r_last_i));
        tracep->fullCData(oldp+1117,(vlSelf->axi_r_id_i),4);
        tracep->fullBit(oldp+1118,(vlSelf->axi_r_user_i));
        tracep->fullBit(oldp+1119,((1U & (~ ((((IData)(vlSelf->rst) 
                                               | ((IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__id_Ebreak_o) 
                                                  | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__if_busy))) 
                                              | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__cpu_halt)) 
                                             | (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__has_fence_i))))));
        tracep->fullBit(oldp+1120,((((~ (IData)(vlSelf->rst)) 
                                     & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__wen_r)) 
                                    & (IData)(vlSelf->top__DOT__mycpu__DOT__core__DOT__WB_Reg__DOT__valid_r))));
        tracep->fullBit(oldp+1121,(((IData)(vlSelf->axi_aw_ready_i) 
                                    & (IData)(vlSelf->axi_aw_valid_o))));
        tracep->fullBit(oldp+1122,(((IData)(vlSelf->axi_ar_ready_i) 
                                    & (IData)(vlSelf->axi_ar_valid_o))));
        tracep->fullQData(oldp+1123,(vlSelf->top__DOT__rw_addr_o),64);
        tracep->fullBit(oldp+1125,(vlSelf->top__DOT__rw_req_o));
        tracep->fullBit(oldp+1126,(vlSelf->top__DOT__rw_valid_o));
        tracep->fullWData(oldp+1127,(vlSelf->top__DOT__rw_w_data_o),128);
        tracep->fullWData(oldp+1131,(vlSelf->top__DOT__data_read_i),128);
        tracep->fullBit(oldp+1135,(vlSelf->top__DOT__rw_ready_i));
        tracep->fullCData(oldp+1136,(vlSelf->top__DOT__rw_size_o),8);
        tracep->fullBit(oldp+1137,(vlSelf->top__DOT__rw_dev_o));
        tracep->fullBit(oldp+1138,(0U));
        __Vtemp252[0U] = 0U;
        __Vtemp252[1U] = 0U;
        __Vtemp252[2U] = 0U;
        __Vtemp252[3U] = 0U;
        tracep->fullWData(oldp+1139,(__Vtemp252),128);
        tracep->fullBit(oldp+1143,(vlSelf->top__DOT__mycpu__DOT__io_slave_awvalid));
        tracep->fullIData(oldp+1144,(vlSelf->top__DOT__mycpu__DOT__io_slave_awaddr),32);
        tracep->fullCData(oldp+1145,(vlSelf->top__DOT__mycpu__DOT__io_slave_awid),4);
        tracep->fullCData(oldp+1146,(vlSelf->top__DOT__mycpu__DOT__io_slave_awlen),8);
        tracep->fullCData(oldp+1147,(vlSelf->top__DOT__mycpu__DOT__io_slave_awsize),3);
        tracep->fullCData(oldp+1148,(vlSelf->top__DOT__mycpu__DOT__io_slave_awburst),2);
        tracep->fullBit(oldp+1149,(vlSelf->top__DOT__mycpu__DOT__io_slave_wvalid));
        tracep->fullQData(oldp+1150,(vlSelf->top__DOT__mycpu__DOT__io_slave_wdata),64);
        tracep->fullCData(oldp+1152,(vlSelf->top__DOT__mycpu__DOT__io_slave_wstrb),8);
        tracep->fullBit(oldp+1153,(vlSelf->top__DOT__mycpu__DOT__io_slave_wlast));
        tracep->fullBit(oldp+1154,(vlSelf->top__DOT__mycpu__DOT__io_slave_bready));
        tracep->fullCData(oldp+1155,(0U),2);
        tracep->fullCData(oldp+1156,(0U),4);
        tracep->fullBit(oldp+1157,(vlSelf->top__DOT__mycpu__DOT__io_slave_arvalid));
        tracep->fullIData(oldp+1158,(vlSelf->top__DOT__mycpu__DOT__io_slave_araddr),32);
        tracep->fullCData(oldp+1159,(vlSelf->top__DOT__mycpu__DOT__io_slave_arid),4);
        tracep->fullCData(oldp+1160,(vlSelf->top__DOT__mycpu__DOT__io_slave_arlen),8);
        tracep->fullCData(oldp+1161,(vlSelf->top__DOT__mycpu__DOT__io_slave_arsize),3);
        tracep->fullCData(oldp+1162,(vlSelf->top__DOT__mycpu__DOT__io_slave_arburst),2);
        tracep->fullBit(oldp+1163,(vlSelf->top__DOT__mycpu__DOT__io_slave_rready));
        tracep->fullQData(oldp+1164,(0ULL),64);
        tracep->fullBit(oldp+1166,(1U));
        tracep->fullCData(oldp+1167,(4U),4);
        tracep->fullIData(oldp+1168,(0x100U),32);
        tracep->fullCData(oldp+1169,(0U),3);
        tracep->fullCData(oldp+1170,(1U),3);
        tracep->fullCData(oldp+1171,(2U),3);
        tracep->fullCData(oldp+1172,(3U),3);
        tracep->fullCData(oldp+1173,(4U),3);
        tracep->fullIData(oldp+1174,(0U),32);
        tracep->fullIData(oldp+1175,(1U),32);
        tracep->fullIData(oldp+1176,(2U),32);
        tracep->fullIData(oldp+1177,(3U),32);
        tracep->fullIData(oldp+1178,(4U),32);
        tracep->fullIData(oldp+1179,(5U),32);
        tracep->fullCData(oldp+1180,(1U),4);
        tracep->fullCData(oldp+1181,(2U),4);
        tracep->fullCData(oldp+1182,(3U),4);
        tracep->fullCData(oldp+1183,(5U),4);
        tracep->fullCData(oldp+1184,(6U),4);
        tracep->fullCData(oldp+1185,(7U),4);
        tracep->fullCData(oldp+1186,(8U),4);
        tracep->fullCData(oldp+1187,(1U),2);
        tracep->fullCData(oldp+1188,(2U),2);
        tracep->fullIData(oldp+1189,(0x80U),32);
        tracep->fullIData(oldp+1190,(0x40U),32);
        tracep->fullIData(oldp+1191,(0x20U),32);
        tracep->fullIData(oldp+1192,(8U),32);
        tracep->fullIData(oldp+1193,(6U),32);
        __Vtemp253[0U] = 0xffffffffU;
        __Vtemp253[1U] = 0xffffffffU;
        __Vtemp253[2U] = 0xffffffffU;
        __Vtemp253[3U] = 0xffffffffU;
        tracep->fullWData(oldp+1194,(__Vtemp253),128);
    }
}
