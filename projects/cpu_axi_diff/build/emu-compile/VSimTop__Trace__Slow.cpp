// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


//======================

void VSimTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VSimTop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VSimTop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VSimTop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VSimTop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+920,"clock", false,-1);
        tracep->declBit(c+921,"reset", false,-1);
        tracep->declQuad(c+922,"io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+924,"io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+926,"io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+928,"io_perfInfo_clean", false,-1);
        tracep->declBit(c+929,"io_perfInfo_dump", false,-1);
        tracep->declBit(c+930,"io_uart_out_valid", false,-1);
        tracep->declBus(c+931,"io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+932,"io_uart_in_valid", false,-1);
        tracep->declBus(c+933,"io_uart_in_ch", false,-1, 7,0);
        tracep->declBit(c+934,"io_memAXI_0_aw_ready", false,-1);
        tracep->declBit(c+935,"io_memAXI_0_aw_valid", false,-1);
        tracep->declQuad(c+936,"io_memAXI_0_aw_bits_addr", false,-1, 63,0);
        tracep->declBus(c+938,"io_memAXI_0_aw_bits_prot", false,-1, 2,0);
        tracep->declBus(c+939,"io_memAXI_0_aw_bits_id", false,-1, 3,0);
        tracep->declBus(c+940,"io_memAXI_0_aw_bits_user", false,-1, 0,0);
        tracep->declBus(c+941,"io_memAXI_0_aw_bits_len", false,-1, 7,0);
        tracep->declBus(c+942,"io_memAXI_0_aw_bits_size", false,-1, 2,0);
        tracep->declBus(c+943,"io_memAXI_0_aw_bits_burst", false,-1, 1,0);
        tracep->declBit(c+944,"io_memAXI_0_aw_bits_lock", false,-1);
        tracep->declBus(c+945,"io_memAXI_0_aw_bits_cache", false,-1, 3,0);
        tracep->declBus(c+946,"io_memAXI_0_aw_bits_qos", false,-1, 3,0);
        tracep->declBit(c+947,"io_memAXI_0_w_ready", false,-1);
        tracep->declBit(c+948,"io_memAXI_0_w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+949+i*2,"io_memAXI_0_w_bits_data", true,(i+0), 63,0);}}
        tracep->declBus(c+957,"io_memAXI_0_w_bits_strb", false,-1, 7,0);
        tracep->declBit(c+958,"io_memAXI_0_w_bits_last", false,-1);
        tracep->declBit(c+959,"io_memAXI_0_b_ready", false,-1);
        tracep->declBit(c+960,"io_memAXI_0_b_valid", false,-1);
        tracep->declBus(c+961,"io_memAXI_0_b_bits_resp", false,-1, 1,0);
        tracep->declBus(c+962,"io_memAXI_0_b_bits_id", false,-1, 3,0);
        tracep->declBus(c+963,"io_memAXI_0_b_bits_user", false,-1, 0,0);
        tracep->declBit(c+964,"io_memAXI_0_ar_ready", false,-1);
        tracep->declBit(c+965,"io_memAXI_0_ar_valid", false,-1);
        tracep->declQuad(c+966,"io_memAXI_0_ar_bits_addr", false,-1, 63,0);
        tracep->declBus(c+968,"io_memAXI_0_ar_bits_prot", false,-1, 2,0);
        tracep->declBus(c+969,"io_memAXI_0_ar_bits_id", false,-1, 3,0);
        tracep->declBus(c+970,"io_memAXI_0_ar_bits_user", false,-1, 0,0);
        tracep->declBus(c+971,"io_memAXI_0_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+972,"io_memAXI_0_ar_bits_size", false,-1, 2,0);
        tracep->declBus(c+973,"io_memAXI_0_ar_bits_burst", false,-1, 1,0);
        tracep->declBit(c+974,"io_memAXI_0_ar_bits_lock", false,-1);
        tracep->declBus(c+975,"io_memAXI_0_ar_bits_cache", false,-1, 3,0);
        tracep->declBus(c+976,"io_memAXI_0_ar_bits_qos", false,-1, 3,0);
        tracep->declBit(c+977,"io_memAXI_0_r_ready", false,-1);
        tracep->declBit(c+978,"io_memAXI_0_r_valid", false,-1);
        tracep->declBus(c+979,"io_memAXI_0_r_bits_resp", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+980+i*2,"io_memAXI_0_r_bits_data", true,(i+0), 63,0);}}
        tracep->declBit(c+988,"io_memAXI_0_r_bits_last", false,-1);
        tracep->declBus(c+989,"io_memAXI_0_r_bits_id", false,-1, 3,0);
        tracep->declBus(c+990,"io_memAXI_0_r_bits_user", false,-1, 0,0);
        tracep->declBit(c+920,"SimTop clock", false,-1);
        tracep->declBit(c+921,"SimTop reset", false,-1);
        tracep->declQuad(c+922,"SimTop io_logCtrl_log_begin", false,-1, 63,0);
        tracep->declQuad(c+924,"SimTop io_logCtrl_log_end", false,-1, 63,0);
        tracep->declQuad(c+926,"SimTop io_logCtrl_log_level", false,-1, 63,0);
        tracep->declBit(c+928,"SimTop io_perfInfo_clean", false,-1);
        tracep->declBit(c+929,"SimTop io_perfInfo_dump", false,-1);
        tracep->declBit(c+930,"SimTop io_uart_out_valid", false,-1);
        tracep->declBus(c+931,"SimTop io_uart_out_ch", false,-1, 7,0);
        tracep->declBit(c+932,"SimTop io_uart_in_valid", false,-1);
        tracep->declBus(c+933,"SimTop io_uart_in_ch", false,-1, 7,0);
        tracep->declBit(c+934,"SimTop io_memAXI_0_aw_ready", false,-1);
        tracep->declBit(c+935,"SimTop io_memAXI_0_aw_valid", false,-1);
        tracep->declQuad(c+936,"SimTop io_memAXI_0_aw_bits_addr", false,-1, 63,0);
        tracep->declBus(c+938,"SimTop io_memAXI_0_aw_bits_prot", false,-1, 2,0);
        tracep->declBus(c+939,"SimTop io_memAXI_0_aw_bits_id", false,-1, 3,0);
        tracep->declBus(c+940,"SimTop io_memAXI_0_aw_bits_user", false,-1, 0,0);
        tracep->declBus(c+941,"SimTop io_memAXI_0_aw_bits_len", false,-1, 7,0);
        tracep->declBus(c+942,"SimTop io_memAXI_0_aw_bits_size", false,-1, 2,0);
        tracep->declBus(c+943,"SimTop io_memAXI_0_aw_bits_burst", false,-1, 1,0);
        tracep->declBit(c+944,"SimTop io_memAXI_0_aw_bits_lock", false,-1);
        tracep->declBus(c+945,"SimTop io_memAXI_0_aw_bits_cache", false,-1, 3,0);
        tracep->declBus(c+946,"SimTop io_memAXI_0_aw_bits_qos", false,-1, 3,0);
        tracep->declBit(c+947,"SimTop io_memAXI_0_w_ready", false,-1);
        tracep->declBit(c+948,"SimTop io_memAXI_0_w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+949+i*2,"SimTop io_memAXI_0_w_bits_data", true,(i+0), 63,0);}}
        tracep->declBus(c+957,"SimTop io_memAXI_0_w_bits_strb", false,-1, 7,0);
        tracep->declBit(c+958,"SimTop io_memAXI_0_w_bits_last", false,-1);
        tracep->declBit(c+959,"SimTop io_memAXI_0_b_ready", false,-1);
        tracep->declBit(c+960,"SimTop io_memAXI_0_b_valid", false,-1);
        tracep->declBus(c+961,"SimTop io_memAXI_0_b_bits_resp", false,-1, 1,0);
        tracep->declBus(c+962,"SimTop io_memAXI_0_b_bits_id", false,-1, 3,0);
        tracep->declBus(c+963,"SimTop io_memAXI_0_b_bits_user", false,-1, 0,0);
        tracep->declBit(c+964,"SimTop io_memAXI_0_ar_ready", false,-1);
        tracep->declBit(c+965,"SimTop io_memAXI_0_ar_valid", false,-1);
        tracep->declQuad(c+966,"SimTop io_memAXI_0_ar_bits_addr", false,-1, 63,0);
        tracep->declBus(c+968,"SimTop io_memAXI_0_ar_bits_prot", false,-1, 2,0);
        tracep->declBus(c+969,"SimTop io_memAXI_0_ar_bits_id", false,-1, 3,0);
        tracep->declBus(c+970,"SimTop io_memAXI_0_ar_bits_user", false,-1, 0,0);
        tracep->declBus(c+971,"SimTop io_memAXI_0_ar_bits_len", false,-1, 7,0);
        tracep->declBus(c+972,"SimTop io_memAXI_0_ar_bits_size", false,-1, 2,0);
        tracep->declBus(c+973,"SimTop io_memAXI_0_ar_bits_burst", false,-1, 1,0);
        tracep->declBit(c+974,"SimTop io_memAXI_0_ar_bits_lock", false,-1);
        tracep->declBus(c+975,"SimTop io_memAXI_0_ar_bits_cache", false,-1, 3,0);
        tracep->declBus(c+976,"SimTop io_memAXI_0_ar_bits_qos", false,-1, 3,0);
        tracep->declBit(c+977,"SimTop io_memAXI_0_r_ready", false,-1);
        tracep->declBit(c+978,"SimTop io_memAXI_0_r_valid", false,-1);
        tracep->declBus(c+979,"SimTop io_memAXI_0_r_bits_resp", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+980+i*2,"SimTop io_memAXI_0_r_bits_data", true,(i+0), 63,0);}}
        tracep->declBit(c+988,"SimTop io_memAXI_0_r_bits_last", false,-1);
        tracep->declBus(c+989,"SimTop io_memAXI_0_r_bits_id", false,-1, 3,0);
        tracep->declBus(c+990,"SimTop io_memAXI_0_r_bits_user", false,-1, 0,0);
        tracep->declBit(c+934,"SimTop aw_ready", false,-1);
        tracep->declBit(c+1,"SimTop aw_valid", false,-1);
        tracep->declQuad(c+536,"SimTop aw_addr", false,-1, 63,0);
        tracep->declBus(c+1043,"SimTop aw_prot", false,-1, 2,0);
        tracep->declBus(c+1044,"SimTop aw_id", false,-1, 3,0);
        tracep->declBus(c+1045,"SimTop aw_user", false,-1, 0,0);
        tracep->declBus(c+1046,"SimTop aw_len", false,-1, 7,0);
        tracep->declBus(c+1047,"SimTop aw_size", false,-1, 2,0);
        tracep->declBus(c+1048,"SimTop aw_burst", false,-1, 1,0);
        tracep->declBit(c+1049,"SimTop aw_lock", false,-1);
        tracep->declBus(c+1050,"SimTop aw_cache", false,-1, 3,0);
        tracep->declBus(c+1044,"SimTop aw_qos", false,-1, 3,0);
        tracep->declBit(c+947,"SimTop w_ready", false,-1);
        tracep->declBit(c+2,"SimTop w_valid", false,-1);
        {int i; for (i=0; i<4; i++) {
                tracep->declQuad(c+735+i*2,"SimTop w_data", true,(i+0), 63,0);}}
        tracep->declBus(c+743,"SimTop w_strb", false,-1, 7,0);
        tracep->declBit(c+1051,"SimTop w_last", false,-1);
        tracep->declBit(c+1051,"SimTop b_ready", false,-1);
        tracep->declBit(c+960,"SimTop b_valid", false,-1);
        tracep->declBus(c+961,"SimTop b_resp", false,-1, 1,0);
        tracep->declBus(c+962,"SimTop b_id", false,-1, 3,0);
        tracep->declBus(c+963,"SimTop b_user", false,-1, 0,0);
        tracep->declBit(c+964,"SimTop ar_ready", false,-1);
        tracep->declBit(c+3,"SimTop ar_valid", false,-1);
        tracep->declQuad(c+538,"SimTop ar_addr", false,-1, 63,0);
        tracep->declBus(c+1043,"SimTop ar_prot", false,-1, 2,0);
        tracep->declBus(c+1044,"SimTop ar_id", false,-1, 3,0);
        tracep->declBus(c+1045,"SimTop ar_user", false,-1, 0,0);
        tracep->declBus(c+1052,"SimTop ar_len", false,-1, 7,0);
        tracep->declBus(c+1047,"SimTop ar_size", false,-1, 2,0);
        tracep->declBus(c+1048,"SimTop ar_burst", false,-1, 1,0);
        tracep->declBit(c+1049,"SimTop ar_lock", false,-1);
        tracep->declBus(c+1050,"SimTop ar_cache", false,-1, 3,0);
        tracep->declBus(c+1044,"SimTop ar_qos", false,-1, 3,0);
        tracep->declBit(c+1051,"SimTop r_ready", false,-1);
        tracep->declBit(c+978,"SimTop r_valid", false,-1);
        tracep->declBus(c+979,"SimTop r_resp", false,-1, 1,0);
        tracep->declQuad(c+991,"SimTop r_data", false,-1, 63,0);
        tracep->declBit(c+988,"SimTop r_last", false,-1);
        tracep->declBus(c+989,"SimTop r_id", false,-1, 3,0);
        tracep->declBus(c+990,"SimTop r_user", false,-1, 0,0);
        tracep->declBit(c+1049,"SimTop inst_req", false,-1);
        tracep->declBit(c+802,"SimTop inst_valid", false,-1);
        tracep->declBit(c+744,"SimTop inst_ready", false,-1);
        tracep->declQuad(c+993,"SimTop inst_read", false,-1, 63,0);
        tracep->declQuad(c+803,"SimTop inst_addr", false,-1, 63,0);
        tracep->declBus(c+1053,"SimTop inst_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop inst_resp", false,-1, 1,0);
        tracep->declBit(c+859,"SimTop addr_valid", false,-1);
        tracep->declBit(c+805,"SimTop br_stall", false,-1);
        tracep->declBit(c+745,"SimTop data_req", false,-1);
        tracep->declBit(c+860,"SimTop data_valid", false,-1);
        tracep->declBit(c+746,"SimTop data_ready", false,-1);
        tracep->declQuad(c+861,"SimTop data_read", false,-1, 63,0);
        tracep->declQuad(c+863,"SimTop data_write", false,-1, 63,0);
        tracep->declQuad(c+865,"SimTop data_addr", false,-1, 63,0);
        tracep->declBus(c+867,"SimTop data_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop data_resp", false,-1, 1,0);
        tracep->declBit(c+868,"SimTop data_wen", false,-1);
        tracep->declBus(c+869,"SimTop data_strb", false,-1, 7,0);
        tracep->declQuad(c+747,"SimTop inst_req_addr", false,-1, 63,0);
        tracep->declQuad(c+749,"SimTop inst_req_data", false,-1, 63,0);
        tracep->declArray(c+870,"SimTop inst_resp_data", false,-1, 127,0);
        tracep->declBit(c+751,"SimTop inst_req_valid", false,-1);
        tracep->declBit(c+874,"SimTop inst_resp_valid", false,-1);
        tracep->declBit(c+752,"SimTop inst_req_wen", false,-1);
        tracep->declQuad(c+995,"SimTop mem_read_data", false,-1, 63,0);
        tracep->declQuad(c+753,"SimTop mem_req_addr", false,-1, 63,0);
        tracep->declArray(c+755,"SimTop mem_req_data", false,-1, 127,0);
        tracep->declArray(c+875,"SimTop mem_resp_data", false,-1, 127,0);
        tracep->declBus(c+759,"SimTop mem_req_size", false,-1, 1,0);
        tracep->declBus(c+743,"SimTop mem_req_strb", false,-1, 7,0);
        tracep->declBit(c+760,"SimTop mem_req_valid", false,-1);
        tracep->declBit(c+761,"SimTop mem_resp_valid", false,-1);
        tracep->declBit(c+762,"SimTop mem_req_wen", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_axi clock", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_axi reset", false,-1);
        tracep->declBit(c+751,"SimTop u_ysyx_210247_axi inst_valid", false,-1);
        tracep->declBit(c+874,"SimTop u_ysyx_210247_axi inst_ready", false,-1);
        tracep->declBit(c+1049,"SimTop u_ysyx_210247_axi inst_req", false,-1);
        tracep->declArray(c+870,"SimTop u_ysyx_210247_axi inst_read", false,-1, 127,0);
        tracep->declQuad(c+747,"SimTop u_ysyx_210247_axi inst_addr", false,-1, 63,0);
        tracep->declBus(c+1053,"SimTop u_ysyx_210247_axi inst_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_axi inst_resp", false,-1, 1,0);
        tracep->declBit(c+760,"SimTop u_ysyx_210247_axi data_valid", false,-1);
        tracep->declBit(c+761,"SimTop u_ysyx_210247_axi data_ready", false,-1);
        tracep->declBit(c+745,"SimTop u_ysyx_210247_axi data_req", false,-1);
        tracep->declArray(c+875,"SimTop u_ysyx_210247_axi data_read", false,-1, 127,0);
        tracep->declArray(c+755,"SimTop u_ysyx_210247_axi data_write", false,-1, 127,0);
        tracep->declQuad(c+753,"SimTop u_ysyx_210247_axi data_addr", false,-1, 63,0);
        tracep->declBus(c+759,"SimTop u_ysyx_210247_axi data_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_axi data_resp", false,-1, 1,0);
        tracep->declBus(c+743,"SimTop u_ysyx_210247_axi data_strb", false,-1, 7,0);
        tracep->declBit(c+934,"SimTop u_ysyx_210247_axi axi_aw_ready_i", false,-1);
        tracep->declBit(c+1,"SimTop u_ysyx_210247_axi axi_aw_valid_o", false,-1);
        tracep->declQuad(c+536,"SimTop u_ysyx_210247_axi axi_aw_addr_o", false,-1, 63,0);
        tracep->declBus(c+1043,"SimTop u_ysyx_210247_axi axi_aw_prot_o", false,-1, 2,0);
        tracep->declBus(c+1044,"SimTop u_ysyx_210247_axi axi_aw_id_o", false,-1, 3,0);
        tracep->declBus(c+1045,"SimTop u_ysyx_210247_axi axi_aw_user_o", false,-1, 0,0);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_axi axi_aw_len_o", false,-1, 7,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_axi axi_aw_size_o", false,-1, 2,0);
        tracep->declBus(c+1048,"SimTop u_ysyx_210247_axi axi_aw_burst_o", false,-1, 1,0);
        tracep->declBit(c+1049,"SimTop u_ysyx_210247_axi axi_aw_lock_o", false,-1);
        tracep->declBus(c+1050,"SimTop u_ysyx_210247_axi axi_aw_cache_o", false,-1, 3,0);
        tracep->declBus(c+1044,"SimTop u_ysyx_210247_axi axi_aw_qos_o", false,-1, 3,0);
        tracep->declBit(c+947,"SimTop u_ysyx_210247_axi axi_w_ready_i", false,-1);
        tracep->declBit(c+2,"SimTop u_ysyx_210247_axi axi_w_valid_o", false,-1);
        tracep->declQuad(c+540,"SimTop u_ysyx_210247_axi axi_w_data_o", false,-1, 63,0);
        tracep->declBus(c+743,"SimTop u_ysyx_210247_axi axi_w_strb_o", false,-1, 7,0);
        tracep->declBit(c+1051,"SimTop u_ysyx_210247_axi axi_w_last_o", false,-1);
        tracep->declBit(c+1051,"SimTop u_ysyx_210247_axi axi_b_ready_o", false,-1);
        tracep->declBit(c+960,"SimTop u_ysyx_210247_axi axi_b_valid_i", false,-1);
        tracep->declBus(c+961,"SimTop u_ysyx_210247_axi axi_b_resp_i", false,-1, 1,0);
        tracep->declBus(c+962,"SimTop u_ysyx_210247_axi axi_b_id_i", false,-1, 3,0);
        tracep->declBus(c+963,"SimTop u_ysyx_210247_axi axi_b_user_i", false,-1, 0,0);
        tracep->declBit(c+964,"SimTop u_ysyx_210247_axi axi_ar_ready_i", false,-1);
        tracep->declBit(c+3,"SimTop u_ysyx_210247_axi axi_ar_valid_o", false,-1);
        tracep->declQuad(c+538,"SimTop u_ysyx_210247_axi axi_ar_addr_o", false,-1, 63,0);
        tracep->declBus(c+1043,"SimTop u_ysyx_210247_axi axi_ar_prot_o", false,-1, 2,0);
        tracep->declBus(c+1044,"SimTop u_ysyx_210247_axi axi_ar_id_o", false,-1, 3,0);
        tracep->declBus(c+1045,"SimTop u_ysyx_210247_axi axi_ar_user_o", false,-1, 0,0);
        tracep->declBus(c+1052,"SimTop u_ysyx_210247_axi axi_ar_len_o", false,-1, 7,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_axi axi_ar_size_o", false,-1, 2,0);
        tracep->declBus(c+1048,"SimTop u_ysyx_210247_axi axi_ar_burst_o", false,-1, 1,0);
        tracep->declBit(c+1049,"SimTop u_ysyx_210247_axi axi_ar_lock_o", false,-1);
        tracep->declBus(c+1050,"SimTop u_ysyx_210247_axi axi_ar_cache_o", false,-1, 3,0);
        tracep->declBus(c+1044,"SimTop u_ysyx_210247_axi axi_ar_qos_o", false,-1, 3,0);
        tracep->declBit(c+1051,"SimTop u_ysyx_210247_axi axi_r_ready_o", false,-1);
        tracep->declBit(c+978,"SimTop u_ysyx_210247_axi axi_r_valid_i", false,-1);
        tracep->declBus(c+979,"SimTop u_ysyx_210247_axi axi_r_resp_i", false,-1, 1,0);
        tracep->declQuad(c+991,"SimTop u_ysyx_210247_axi axi_r_data_i", false,-1, 63,0);
        tracep->declBit(c+988,"SimTop u_ysyx_210247_axi axi_r_last_i", false,-1);
        tracep->declBus(c+989,"SimTop u_ysyx_210247_axi axi_r_id_i", false,-1, 3,0);
        tracep->declBus(c+990,"SimTop u_ysyx_210247_axi axi_r_user_i", false,-1, 0,0);
        tracep->declBus(c+1054,"SimTop u_ysyx_210247_axi RW_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1054,"SimTop u_ysyx_210247_axi RW_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1054,"SimTop u_ysyx_210247_axi AXI_DATA_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1054,"SimTop u_ysyx_210247_axi AXI_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1055,"SimTop u_ysyx_210247_axi AXI_ID_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1056,"SimTop u_ysyx_210247_axi AXI_USER_WIDTH", false,-1, 31,0);
        tracep->declBit(c+745,"SimTop u_ysyx_210247_axi w_trans", false,-1);
        tracep->declBit(c+1051,"SimTop u_ysyx_210247_axi r_trans", false,-1);
        tracep->declBit(c+763,"SimTop u_ysyx_210247_axi w_valid", false,-1);
        tracep->declBit(c+764,"SimTop u_ysyx_210247_axi r_valid", false,-1);
        tracep->declBit(c+997,"SimTop u_ysyx_210247_axi aw_hs", false,-1);
        tracep->declBit(c+806,"SimTop u_ysyx_210247_axi w_hs", false,-1);
        tracep->declBit(c+960,"SimTop u_ysyx_210247_axi b_hs", false,-1);
        tracep->declBit(c+998,"SimTop u_ysyx_210247_axi ar_hs", false,-1);
        tracep->declBit(c+978,"SimTop u_ysyx_210247_axi r_hs", false,-1);
        tracep->declBit(c+806,"SimTop u_ysyx_210247_axi w_done", false,-1);
        tracep->declBit(c+807,"SimTop u_ysyx_210247_axi r_done", false,-1);
        tracep->declBit(c+999,"SimTop u_ysyx_210247_axi trans_done", false,-1);
        tracep->declBus(c+1043,"SimTop u_ysyx_210247_axi W_STATE_IDLE", false,-1, 2,0);
        tracep->declBus(c+1057,"SimTop u_ysyx_210247_axi W_STATE_ADDR", false,-1, 2,0);
        tracep->declBus(c+1058,"SimTop u_ysyx_210247_axi W_STATE_WRITE", false,-1, 2,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_axi W_STATE_RESP", false,-1, 2,0);
        tracep->declBus(c+1059,"SimTop u_ysyx_210247_axi W_STATE_DONE", false,-1, 2,0);
        tracep->declBus(c+1043,"SimTop u_ysyx_210247_axi R_STATE_IDLE", false,-1, 2,0);
        tracep->declBus(c+1057,"SimTop u_ysyx_210247_axi R_STATE_INST_ADDR", false,-1, 2,0);
        tracep->declBus(c+1058,"SimTop u_ysyx_210247_axi R_STATE_INST_READ", false,-1, 2,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_axi R_STATE_DATA_ADDR", false,-1, 2,0);
        tracep->declBus(c+1059,"SimTop u_ysyx_210247_axi R_STATE_DATA_READ", false,-1, 2,0);
        tracep->declBus(c+1060,"SimTop u_ysyx_210247_axi R_STATE_INST_DONE", false,-1, 2,0);
        tracep->declBus(c+1061,"SimTop u_ysyx_210247_axi R_STATE_DATA_DONE", false,-1, 2,0);
        tracep->declBus(c+5,"SimTop u_ysyx_210247_axi w_state", false,-1, 2,0);
        tracep->declBus(c+6,"SimTop u_ysyx_210247_axi r_state", false,-1, 2,0);
        tracep->declBit(c+7,"SimTop u_ysyx_210247_axi w_state_idle", false,-1);
        tracep->declBit(c+1,"SimTop u_ysyx_210247_axi w_state_addr", false,-1);
        tracep->declBit(c+2,"SimTop u_ysyx_210247_axi w_state_write", false,-1);
        tracep->declBit(c+8,"SimTop u_ysyx_210247_axi w_state_resp", false,-1);
        tracep->declBit(c+9,"SimTop u_ysyx_210247_axi r_state_idle", false,-1);
        tracep->declBit(c+3,"SimTop u_ysyx_210247_axi r_state_addr", false,-1);
        tracep->declBit(c+10,"SimTop u_ysyx_210247_axi r_state_read", false,-1);
        tracep->declBit(c+751,"SimTop u_ysyx_210247_axi inst_ren", false,-1);
        tracep->declBit(c+765,"SimTop u_ysyx_210247_axi data_ren", false,-1);
        tracep->declBus(c+11,"SimTop u_ysyx_210247_axi len", false,-1, 7,0);
        tracep->declBit(c+1000,"SimTop u_ysyx_210247_axi len_reset", false,-1);
        tracep->declBit(c+1001,"SimTop u_ysyx_210247_axi len_incr_en", false,-1);
        tracep->declBus(c+1062,"SimTop u_ysyx_210247_axi ALIGNED_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1063,"SimTop u_ysyx_210247_axi OFFSET_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1062,"SimTop u_ysyx_210247_axi AXI_SIZE", false,-1, 31,0);
        tracep->declBus(c+1064,"SimTop u_ysyx_210247_axi MASK_WIDTH", false,-1, 31,0);
        tracep->declBus(c+1065,"SimTop u_ysyx_210247_axi TRANS_LEN", false,-1, 31,0);
        tracep->declBit(c+1051,"SimTop u_ysyx_210247_axi aligned", false,-1);
        tracep->declBit(c+766,"SimTop u_ysyx_210247_axi size_b", false,-1);
        tracep->declBit(c+767,"SimTop u_ysyx_210247_axi size_h", false,-1);
        tracep->declBit(c+1051,"SimTop u_ysyx_210247_axi size_w", false,-1);
        tracep->declBit(c+768,"SimTop u_ysyx_210247_axi size_d", false,-1);
        tracep->declBus(c+542,"SimTop u_ysyx_210247_axi addr_op1", false,-1, 3,0);
        tracep->declBus(c+769,"SimTop u_ysyx_210247_axi addr_op2", false,-1, 3,0);
        tracep->declBus(c+543,"SimTop u_ysyx_210247_axi addr_end", false,-1, 3,0);
        tracep->declBit(c+544,"SimTop u_ysyx_210247_axi overstep", false,-1);
        tracep->declBus(c+1052,"SimTop u_ysyx_210247_axi axi_len", false,-1, 7,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_axi axi_size", false,-1, 2,0);
        tracep->declQuad(c+545,"SimTop u_ysyx_210247_axi axi_addr", false,-1, 63,0);
        tracep->declQuad(c+770,"SimTop u_ysyx_210247_axi axi_waddr", false,-1, 63,0);
        tracep->declBus(c+547,"SimTop u_ysyx_210247_axi aligned_offset_l", false,-1, 5,0);
        tracep->declBus(c+1066,"SimTop u_ysyx_210247_axi aligned_offset_h", false,-1, 5,0);
        tracep->declArray(c+548,"SimTop u_ysyx_210247_axi mask", false,-1, 127,0);
        tracep->declQuad(c+552,"SimTop u_ysyx_210247_axi mask_l", false,-1, 63,0);
        tracep->declQuad(c+554,"SimTop u_ysyx_210247_axi mask_h", false,-1, 63,0);
        tracep->declBus(c+1044,"SimTop u_ysyx_210247_axi axi_id", false,-1, 3,0);
        tracep->declBus(c+1049,"SimTop u_ysyx_210247_axi axi_user", false,-1, 0,0);
        tracep->declBit(c+12,"SimTop u_ysyx_210247_axi r_ready", false,-1);
        tracep->declBit(c+807,"SimTop u_ysyx_210247_axi r_ready_nxt", false,-1);
        tracep->declBit(c+556,"SimTop u_ysyx_210247_axi r_ready_en", false,-1);
        tracep->declBit(c+13,"SimTop u_ysyx_210247_axi data_ok", false,-1);
        tracep->declBit(c+14,"SimTop u_ysyx_210247_axi w_ready", false,-1);
        tracep->declBit(c+960,"SimTop u_ysyx_210247_axi w_ready_nxt", false,-1);
        tracep->declBit(c+1002,"SimTop u_ysyx_210247_axi w_ready_en", false,-1);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_axi rw_resp", false,-1, 1,0);
        tracep->declBus(c+1003,"SimTop u_ysyx_210247_axi rw_resp_nxt", false,-1, 1,0);
        tracep->declBit(c+999,"SimTop u_ysyx_210247_axi resp_en", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu clock", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu reset", false,-1);
        tracep->declBit(c+802,"SimTop u_ysyx_210247_cpu inst_valid", false,-1);
        tracep->declBit(c+744,"SimTop u_ysyx_210247_cpu inst_ready", false,-1);
        tracep->declQuad(c+993,"SimTop u_ysyx_210247_cpu inst_read", false,-1, 63,0);
        tracep->declQuad(c+803,"SimTop u_ysyx_210247_cpu inst_addr", false,-1, 63,0);
        tracep->declBus(c+1053,"SimTop u_ysyx_210247_cpu inst_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_cpu inst_resp", false,-1, 1,0);
        tracep->declBit(c+859,"SimTop u_ysyx_210247_cpu addr_valid", false,-1);
        tracep->declBit(c+805,"SimTop u_ysyx_210247_cpu br_stall", false,-1);
        tracep->declBit(c+860,"SimTop u_ysyx_210247_cpu data_valid", false,-1);
        tracep->declBit(c+746,"SimTop u_ysyx_210247_cpu data_ready", false,-1);
        tracep->declQuad(c+861,"SimTop u_ysyx_210247_cpu data_read", false,-1, 63,0);
        tracep->declQuad(c+865,"SimTop u_ysyx_210247_cpu data_addr", false,-1, 63,0);
        tracep->declBus(c+867,"SimTop u_ysyx_210247_cpu data_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_cpu data_resp", false,-1, 1,0);
        tracep->declQuad(c+863,"SimTop u_ysyx_210247_cpu data_write", false,-1, 63,0);
        tracep->declBit(c+868,"SimTop u_ysyx_210247_cpu data_wen", false,-1);
        tracep->declBus(c+869,"SimTop u_ysyx_210247_cpu data_strb", false,-1, 7,0);
        tracep->declArray(c+808,"SimTop u_ysyx_210247_cpu br_bus", false,-1, 65,0);
        tracep->declArray(c+15,"SimTop u_ysyx_210247_cpu if_to_id_bus_i", false,-1, 95,0);
        tracep->declArray(c+18,"SimTop u_ysyx_210247_cpu if_to_id_bus_o", false,-1, 95,0);
        tracep->declArray(c+21,"SimTop u_ysyx_210247_cpu id_to_exe_bus_i", false,-1, 539,0);
        tracep->declArray(c+1004,"SimTop u_ysyx_210247_cpu id_to_exe_bus_o", false,-1, 539,0);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu exe_to_mem_bus_i", false,-1, 402,0);
        tracep->declArray(c+557,"SimTop u_ysyx_210247_cpu exe_to_mem_bus_o", false,-1, 402,0);
        tracep->declArray(c+51,"SimTop u_ysyx_210247_cpu mem_to_wb_bus_i", false,-1, 402,0);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu mem_to_wb_bus_o", false,-1, 402,0);
        tracep->declQuad(c+64,"SimTop u_ysyx_210247_cpu wb_pc", false,-1, 63,0);
        tracep->declBus(c+66,"SimTop u_ysyx_210247_cpu wb_inst", false,-1, 31,0);
        tracep->declBit(c+67,"SimTop u_ysyx_210247_cpu wb_wen", false,-1);
        tracep->declBus(c+68,"SimTop u_ysyx_210247_cpu wb_wdest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop u_ysyx_210247_cpu wb_wdata", false,-1, 63,0);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu writed", false,-1);
        tracep->declBit(c+811,"SimTop u_ysyx_210247_cpu rs1_r_ena", false,-1);
        tracep->declBus(c+1021,"SimTop u_ysyx_210247_cpu rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+812,"SimTop u_ysyx_210247_cpu rs2_r_ena", false,-1);
        tracep->declBus(c+1022,"SimTop u_ysyx_210247_cpu rs2_r_addr", false,-1, 4,0);
        tracep->declQuad(c+813,"SimTop u_ysyx_210247_cpu r_data1", false,-1, 63,0);
        tracep->declQuad(c+815,"SimTop u_ysyx_210247_cpu r_data2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+72+i*2,"SimTop u_ysyx_210247_cpu regs", true,(i+0), 63,0);}}
        tracep->declBit(c+136,"SimTop u_ysyx_210247_cpu csr_ren", false,-1);
        tracep->declBit(c+137,"SimTop u_ysyx_210247_cpu csr_wen", false,-1);
        tracep->declBus(c+138,"SimTop u_ysyx_210247_cpu csr_addr", false,-1, 11,0);
        tracep->declBus(c+139,"SimTop u_ysyx_210247_cpu csr_waddr", false,-1, 11,0);
        tracep->declQuad(c+140,"SimTop u_ysyx_210247_cpu csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu csr_rdata", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu flush", false,-1);
        tracep->declQuad(c+819,"SimTop u_ysyx_210247_cpu new_pc", false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop u_ysyx_210247_cpu exc_type", false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop u_ysyx_210247_cpu exc_addr", false,-1, 63,0);
        tracep->declBus(c+147,"SimTop u_ysyx_210247_cpu exc_op", false,-1, 31,0);
        tracep->declQuad(c+148,"SimTop u_ysyx_210247_cpu mstatus_o", false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop u_ysyx_210247_cpu mepc_o", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop u_ysyx_210247_cpu mcause_o", false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop u_ysyx_210247_cpu mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop u_ysyx_210247_cpu mie_o", false,-1, 63,0);
        tracep->declQuad(c+1067,"SimTop u_ysyx_210247_cpu mip_o", false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop u_ysyx_210247_cpu mscratch_o", false,-1, 63,0);
        tracep->declBit(c+1069,"SimTop u_ysyx_210247_cpu if_valid_in", false,-1);
        tracep->declBit(c+879,"SimTop u_ysyx_210247_cpu if_valid_out", false,-1);
        tracep->declBit(c+821,"SimTop u_ysyx_210247_cpu if_allow_out", false,-1);
        tracep->declBit(c+160,"SimTop u_ysyx_210247_cpu id_valid_in", false,-1);
        tracep->declBit(c+822,"SimTop u_ysyx_210247_cpu id_valid_out", false,-1);
        tracep->declBit(c+821,"SimTop u_ysyx_210247_cpu id_allow_in", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu id_allow_out", false,-1);
        tracep->declBit(c+161,"SimTop u_ysyx_210247_cpu exe_valid_in", false,-1);
        tracep->declBit(c+917,"SimTop u_ysyx_210247_cpu exe_valid_out", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu exe_allow_in", false,-1);
        tracep->declBit(c+162,"SimTop u_ysyx_210247_cpu exe_allow_out", false,-1);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu mem_valid_in", false,-1);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu mem_valid_out", false,-1);
        tracep->declBit(c+162,"SimTop u_ysyx_210247_cpu mem_allow_in", false,-1);
        tracep->declBit(c+164,"SimTop u_ysyx_210247_cpu mem_allow_out", false,-1);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu wb_valid_in", false,-1);
        tracep->declBit(c+164,"SimTop u_ysyx_210247_cpu wb_allow_in", false,-1);
        tracep->declBus(c+165,"SimTop u_ysyx_210247_cpu EXE_wdest", false,-1, 4,0);
        tracep->declQuad(c+823,"SimTop u_ysyx_210247_cpu EXE_result", false,-1, 63,0);
        tracep->declBus(c+166,"SimTop u_ysyx_210247_cpu MEM_wdest", false,-1, 4,0);
        tracep->declQuad(c+167,"SimTop u_ysyx_210247_cpu MEM_result", false,-1, 63,0);
        tracep->declBus(c+169,"SimTop u_ysyx_210247_cpu WB_wdest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop u_ysyx_210247_cpu WB_result", false,-1, 63,0);
        tracep->declBit(c+880,"SimTop u_ysyx_210247_cpu cmp_ren", false,-1);
        tracep->declBit(c+881,"SimTop u_ysyx_210247_cpu cmp_wen", false,-1);
        tracep->declQuad(c+865,"SimTop u_ysyx_210247_cpu cmp_addr", false,-1, 63,0);
        tracep->declQuad(c+1023,"SimTop u_ysyx_210247_cpu cmp_rdata", false,-1, 63,0);
        tracep->declQuad(c+863,"SimTop u_ysyx_210247_cpu cmp_wdata", false,-1, 63,0);
        tracep->declBit(c+170,"SimTop u_ysyx_210247_cpu time_int_valid", false,-1);
        tracep->declBit(c+171,"SimTop u_ysyx_210247_cpu time_int", false,-1);
        tracep->declBit(c+1025,"SimTop u_ysyx_210247_cpu mem_stall", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu target_valid", false,-1);
        tracep->declBit(c+172,"SimTop u_ysyx_210247_cpu inst_is_my", false,-1);
        tracep->declBit(c+1026,"SimTop u_ysyx_210247_cpu skip", false,-1);
        tracep->declQuad(c+173,"SimTop u_ysyx_210247_cpu print", false,-1, 63,0);
        tracep->declBit(c+575,"SimTop u_ysyx_210247_cpu cmt_wen", false,-1);
        tracep->declBus(c+576,"SimTop u_ysyx_210247_cpu cmt_wdest", false,-1, 7,0);
        tracep->declQuad(c+577,"SimTop u_ysyx_210247_cpu cmt_wdata", false,-1, 63,0);
        tracep->declQuad(c+579,"SimTop u_ysyx_210247_cpu cmt_pc", false,-1, 63,0);
        tracep->declBus(c+581,"SimTop u_ysyx_210247_cpu cmt_inst", false,-1, 31,0);
        tracep->declBit(c+582,"SimTop u_ysyx_210247_cpu cmt_valid", false,-1);
        tracep->declBit(c+583,"SimTop u_ysyx_210247_cpu trap", false,-1);
        tracep->declBus(c+584,"SimTop u_ysyx_210247_cpu trap_code", false,-1, 7,0);
        tracep->declQuad(c+585,"SimTop u_ysyx_210247_cpu cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop u_ysyx_210247_cpu instrCnt", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+589+i*2,"SimTop u_ysyx_210247_cpu regs_diff", true,(i+0), 63,0);}}
        tracep->declQuad(c+653,"SimTop u_ysyx_210247_cpu mstatus_diff", false,-1, 63,0);
        tracep->declQuad(c+655,"SimTop u_ysyx_210247_cpu mepc_diff", false,-1, 63,0);
        tracep->declQuad(c+657,"SimTop u_ysyx_210247_cpu mcause_diff", false,-1, 63,0);
        tracep->declQuad(c+659,"SimTop u_ysyx_210247_cpu mtvec_diff", false,-1, 63,0);
        tracep->declQuad(c+661,"SimTop u_ysyx_210247_cpu mie_diff", false,-1, 63,0);
        tracep->declQuad(c+663,"SimTop u_ysyx_210247_cpu mip_diff", false,-1, 63,0);
        tracep->declQuad(c+665,"SimTop u_ysyx_210247_cpu mscratch_diff", false,-1, 63,0);
        tracep->declQuad(c+667,"SimTop u_ysyx_210247_cpu sstatus_diff", false,-1, 63,0);
        tracep->declBus(c+669,"SimTop u_ysyx_210247_cpu intrNO_diff", false,-1, 31,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage rst", false,-1);
        tracep->declBit(c+821,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_allow_out", false,-1);
        tracep->declBit(c+879,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_valid_out", false,-1);
        tracep->declArray(c+808,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_bus", false,-1, 65,0);
        tracep->declArray(c+18,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_to_id_bus_o", false,-1, 95,0);
        tracep->declBit(c+802,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage inst_valid", false,-1);
        tracep->declBit(c+744,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage inst_ready", false,-1);
        tracep->declQuad(c+993,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage inst_read", false,-1, 63,0);
        tracep->declQuad(c+803,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage inst_addr", false,-1, 63,0);
        tracep->declBus(c+1053,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage inst_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage inst_resp", false,-1, 1,0);
        tracep->declBit(c+859,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage addr_valid", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage target_valid", false,-1);
        tracep->declBit(c+805,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_stall", false,-1);
        tracep->declQuad(c+819,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage new_pc", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage flush", false,-1);
        tracep->declBit(c+825,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage handshake_done", false,-1);
        tracep->declQuad(c+803,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage next_pc", false,-1, 63,0);
        tracep->declQuad(c+175,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_pc", false,-1, 63,0);
        tracep->declBus(c+177,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_inst", false,-1, 31,0);
        tracep->declQuad(c+178,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage waite_pc", false,-1, 63,0);
        tracep->declQuad(c+180,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage flush_pc", false,-1, 63,0);
        tracep->declBit(c+182,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage waite_valid", false,-1);
        tracep->declBit(c+183,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage flush_valid", false,-1);
        tracep->declBit(c+184,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage flush_wait", false,-1);
        tracep->declBit(c+826,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage branch_valid", false,-1);
        tracep->declBit(c+827,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_valid", false,-1);
        tracep->declBit(c+828,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_taken", false,-1);
        tracep->declQuad(c+829,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_target", false,-1, 63,0);
        tracep->declBit(c+1027,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage preif_valid", false,-1);
        tracep->declBit(c+831,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage preif_ready_go", false,-1);
        tracep->declBit(c+831,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage preif_valid_out", false,-1);
        tracep->declBit(c+832,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage preif_allow_out", false,-1);
        tracep->declBit(c+879,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_valid_in", false,-1);
        tracep->declBit(c+879,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_valid", false,-1);
        tracep->declBit(c+879,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_ready_go", false,-1);
        tracep->declBit(c+832,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage if_allow_in", false,-1);
        tracep->declBit(c+185,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_pc_valid", false,-1);
        tracep->declBit(c+186,"SimTop u_ysyx_210247_cpu u_ysyx_210247_if_stage br_pc_ready", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id rst", false,-1);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id flush", false,-1);
        tracep->declBit(c+879,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id if_valid_out", false,-1);
        tracep->declArray(c+18,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id if_to_id_bus_o", false,-1, 95,0);
        tracep->declBit(c+160,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id id_valid_in", false,-1);
        tracep->declArray(c+15,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id if_to_id_bus_i", false,-1, 95,0);
        tracep->declBit(c+821,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id if_allow_out", false,-1);
        tracep->declBit(c+821,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id id_allow_in", false,-1);
        tracep->declBit(c+160,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id if_to_id_valid", false,-1);
        tracep->declArray(c+15,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_if_id if_to_id_data", false,-1, 95,0);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rst", false,-1);
        tracep->declArray(c+808,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage br_bus", false,-1, 65,0);
        tracep->declBit(c+1069,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage if_valid_in", false,-1);
        tracep->declBit(c+160,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_valid_in", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_allow_out", false,-1);
        tracep->declBit(c+822,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_valid_out", false,-1);
        tracep->declBit(c+821,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_allow_in", false,-1);
        tracep->declBit(c+811,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs1_r_ena", false,-1);
        tracep->declBus(c+1021,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs1_r_addr", false,-1, 4,0);
        tracep->declBit(c+812,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs2_r_ena", false,-1);
        tracep->declBus(c+1022,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs2_r_addr", false,-1, 4,0);
        tracep->declQuad(c+813,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs1_data", false,-1, 63,0);
        tracep->declQuad(c+815,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs2_data", false,-1, 63,0);
        tracep->declBus(c+165,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage EXE_wdest", false,-1, 4,0);
        tracep->declQuad(c+823,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage EXE_result", false,-1, 63,0);
        tracep->declBus(c+166,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage MEM_wdest", false,-1, 4,0);
        tracep->declQuad(c+167,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage MEM_result", false,-1, 63,0);
        tracep->declBus(c+169,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage WB_wdest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage WB_result", false,-1, 63,0);
        tracep->declBit(c+171,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage time_int", false,-1);
        tracep->declBit(c+1025,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage mem_stall", false,-1);
        tracep->declBit(c+805,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage br_stall", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage target_valid", false,-1);
        tracep->declArray(c+15,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage if_to_id_bus_i", false,-1, 95,0);
        tracep->declArray(c+1004,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_to_exe_bus_o", false,-1, 539,0);
        tracep->declBus(c+187,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage opcode", false,-1, 6,0);
        tracep->declBus(c+188,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rd", false,-1, 4,0);
        tracep->declBus(c+189,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs1", false,-1, 4,0);
        tracep->declBus(c+190,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage imm", false,-1, 11,0);
        tracep->declBus(c+191,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage U_imm", false,-1, 19,0);
        tracep->declBus(c+192,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs2", false,-1, 4,0);
        tracep->declBus(c+193,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage J_imm", false,-1, 20,0);
        tracep->declBus(c+194,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage B_imm", false,-1, 12,0);
        tracep->declBus(c+195,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage S_imm", false,-1, 11,0);
        tracep->declQuad(c+196,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_pc", false,-1, 63,0);
        tracep->declBus(c+198,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_inst", false,-1, 31,0);
        tracep->declBit(c+1028,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_wen", false,-1);
        tracep->declBus(c+1029,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_wdest", false,-1, 4,0);
        tracep->declBus(c+199,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage func3", false,-1, 2,0);
        tracep->declBus(c+200,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage func7", false,-1, 6,0);
        tracep->declBus(c+1030,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+833,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1", false,-1, 63,0);
        tracep->declQuad(c+835,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op2", false,-1, 63,0);
        tracep->declBit(c+201,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage store_op", false,-1);
        tracep->declBit(c+202,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage load_op", false,-1);
        tracep->declBit(c+203,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rcsr_op", false,-1);
        tracep->declBit(c+203,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage wcsr_op", false,-1);
        tracep->declQuad(c+570,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage csr_op1", false,-1, 63,0);
        tracep->declQuad(c+1031,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage exc_type", false,-1, 63,0);
        tracep->declQuad(c+1033,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage exc_addr", false,-1, 63,0);
        tracep->declBus(c+1035,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage exc_op", false,-1, 31,0);
        tracep->declBit(c+837,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs1_forward", false,-1);
        tracep->declBit(c+838,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs2_forward", false,-1);
        tracep->declQuad(c+839,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs1_value", false,-1, 63,0);
        tracep->declQuad(c+841,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage rs2_value", false,-1, 63,0);
        tracep->declBit(c+843,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage br_taken", false,-1);
        tracep->declQuad(c+844,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage br_target", false,-1, 63,0);
        tracep->declBit(c+160,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_valid", false,-1);
        tracep->declBit(c+822,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage id_ready_go", false,-1);
        tracep->declBit(c+572,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op_stall", false,-1);
        tracep->declBus(c+846,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_type", false,-1, 5,0);
        tracep->declBit(c+204,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_addi", false,-1);
        tracep->declBit(c+205,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lh", false,-1);
        tracep->declBit(c+206,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lhu", false,-1);
        tracep->declBit(c+207,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lw", false,-1);
        tracep->declBit(c+208,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lwu", false,-1);
        tracep->declBit(c+209,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_ld", false,-1);
        tracep->declBit(c+210,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_slti", false,-1);
        tracep->declBit(c+211,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sltiu", false,-1);
        tracep->declBit(c+212,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_jalr", false,-1);
        tracep->declBit(c+213,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_addiw", false,-1);
        tracep->declBit(c+214,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_srliw", false,-1);
        tracep->declBit(c+215,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sraiw", false,-1);
        tracep->declBit(c+216,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_slliw", false,-1);
        tracep->declBit(c+217,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_srai", false,-1);
        tracep->declBit(c+218,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_slli", false,-1);
        tracep->declBit(c+219,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_srli", false,-1);
        tracep->declBit(c+220,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lb", false,-1);
        tracep->declBit(c+221,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lbu", false,-1);
        tracep->declBit(c+222,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_andi", false,-1);
        tracep->declBit(c+223,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_xori", false,-1);
        tracep->declBit(c+224,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_ori", false,-1);
        tracep->declBit(c+225,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_csrrs", false,-1);
        tracep->declBit(c+226,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_csrrw", false,-1);
        tracep->declBit(c+227,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_csrrc", false,-1);
        tracep->declBit(c+228,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_csrrci", false,-1);
        tracep->declBit(c+229,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_csrrsi", false,-1);
        tracep->declBit(c+230,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_ecall", false,-1);
        tracep->declBit(c+231,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_mret", false,-1);
        tracep->declBit(c+232,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_auipc", false,-1);
        tracep->declBit(c+233,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_lui", false,-1);
        tracep->declBit(c+234,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_addw", false,-1);
        tracep->declBit(c+235,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_subw", false,-1);
        tracep->declBit(c+236,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sllw", false,-1);
        tracep->declBit(c+237,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sraw", false,-1);
        tracep->declBit(c+238,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_srlw", false,-1);
        tracep->declBit(c+239,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sll", false,-1);
        tracep->declBit(c+240,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_srl", false,-1);
        tracep->declBit(c+241,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sra", false,-1);
        tracep->declBit(c+242,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sub", false,-1);
        tracep->declBit(c+243,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_add", false,-1);
        tracep->declBit(c+244,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_and", false,-1);
        tracep->declBit(c+245,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_or", false,-1);
        tracep->declBit(c+246,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_xor", false,-1);
        tracep->declBit(c+247,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_slt", false,-1);
        tracep->declBit(c+248,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sltu", false,-1);
        tracep->declBit(c+249,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_jal", false,-1);
        tracep->declBit(c+250,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_beq", false,-1);
        tracep->declBit(c+251,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_bne", false,-1);
        tracep->declBit(c+252,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_bge", false,-1);
        tracep->declBit(c+253,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_blt", false,-1);
        tracep->declBit(c+254,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_bltu", false,-1);
        tracep->declBit(c+255,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_bgeu", false,-1);
        tracep->declBit(c+256,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sd", false,-1);
        tracep->declBit(c+257,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sh", false,-1);
        tracep->declBit(c+258,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sb", false,-1);
        tracep->declBit(c+259,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_sw", false,-1);
        tracep->declBit(c+260,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage inst_my", false,-1);
        tracep->declBit(c+847,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1eqop2", false,-1);
        tracep->declBit(c+848,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1neop2", false,-1);
        tracep->declBit(c+849,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1geop2", false,-1);
        tracep->declBit(c+850,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1geuop2", false,-1);
        tracep->declBit(c+851,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1ltop2", false,-1);
        tracep->declBit(c+852,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1ltuop2", false,-1);
        tracep->declQuad(c+853,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage op1_sub_op2", false,-1, 63,0);
        tracep->declQuad(c+196,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage if_pc", false,-1, 63,0);
        tracep->declBus(c+198,"SimTop u_ysyx_210247_cpu u_ysyx_210247_id_stage if_inst", false,-1, 31,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe rst", false,-1);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe flush", false,-1);
        tracep->declBit(c+822,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe id_valid_out", false,-1);
        tracep->declArray(c+1004,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe id_to_exe_bus_o", false,-1, 539,0);
        tracep->declBit(c+161,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe exe_valid_in", false,-1);
        tracep->declArray(c+21,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe id_to_exe_bus_i", false,-1, 539,0);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe id_allow_out", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe exe_allow_in", false,-1);
        tracep->declBit(c+161,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe id_to_exe_valid", false,-1);
        tracep->declArray(c+21,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_id_exe id_to_exe_data", false,-1, 539,0);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage rst", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage clk", false,-1);
        tracep->declBit(c+161,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_valid_in", false,-1);
        tracep->declBit(c+162,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_allow_out", false,-1);
        tracep->declBit(c+917,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_valid_out", false,-1);
        tracep->declBit(c+916,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_allow_in", false,-1);
        tracep->declBit(c+860,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_valid", false,-1);
        tracep->declBit(c+746,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_ready", false,-1);
        tracep->declQuad(c+861,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_read", false,-1, 63,0);
        tracep->declQuad(c+865,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_addr", false,-1, 63,0);
        tracep->declBus(c+867,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_size", false,-1, 1,0);
        tracep->declBus(c+4,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_resp", false,-1, 1,0);
        tracep->declQuad(c+863,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_write", false,-1, 63,0);
        tracep->declBit(c+868,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_wen", false,-1);
        tracep->declBus(c+869,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_strb", false,-1, 7,0);
        tracep->declBit(c+880,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage cmp_ren", false,-1);
        tracep->declBit(c+881,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage cmp_wen", false,-1);
        tracep->declQuad(c+865,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage cmp_addr", false,-1, 63,0);
        tracep->declQuad(c+1023,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage cmp_rdata", false,-1, 63,0);
        tracep->declQuad(c+863,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage cmp_wdata", false,-1, 63,0);
        tracep->declBus(c+165,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage EXE_wdest", false,-1, 4,0);
        tracep->declQuad(c+823,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage EXE_result", false,-1, 63,0);
        tracep->declBit(c+136,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_ren", false,-1);
        tracep->declBus(c+138,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_addr", false,-1, 11,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_rdata", false,-1, 63,0);
        tracep->declBit(c+1025,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage mem_stall", false,-1);
        tracep->declBit(c+172,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_my", false,-1);
        tracep->declQuad(c+173,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage print", false,-1, 63,0);
        tracep->declBit(c+1026,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage skip", false,-1);
        tracep->declArray(c+21,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage id_to_exe_bus_i", false,-1, 539,0);
        tracep->declArray(c+557,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_to_mem_bus_o", false,-1, 402,0);
        tracep->declBit(c+918,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage hs_done", false,-1);
        tracep->declBit(c+161,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_valid", false,-1);
        tracep->declBit(c+917,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_ready_go", false,-1);
        tracep->declQuad(c+882,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage data_rdata", false,-1, 63,0);
        tracep->declBit(c+261,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_addi", false,-1);
        tracep->declBit(c+262,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_addiw", false,-1);
        tracep->declBit(c+263,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_srliw", false,-1);
        tracep->declBit(c+264,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sraiw", false,-1);
        tracep->declBit(c+265,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_slliw", false,-1);
        tracep->declBit(c+266,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_auipc", false,-1);
        tracep->declBit(c+267,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lui", false,-1);
        tracep->declBit(c+268,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_jal", false,-1);
        tracep->declBit(c+269,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_addw", false,-1);
        tracep->declBit(c+270,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_subw", false,-1);
        tracep->declBit(c+271,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sllw", false,-1);
        tracep->declBit(c+272,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sraw", false,-1);
        tracep->declBit(c+273,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_srlw", false,-1);
        tracep->declBit(c+274,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_slt", false,-1);
        tracep->declBit(c+275,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sltu", false,-1);
        tracep->declBit(c+276,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_slti", false,-1);
        tracep->declBit(c+277,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sltiu", false,-1);
        tracep->declBit(c+278,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lh", false,-1);
        tracep->declBit(c+279,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lhu", false,-1);
        tracep->declBit(c+280,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lw", false,-1);
        tracep->declBit(c+281,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lwu", false,-1);
        tracep->declBit(c+282,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_ld", false,-1);
        tracep->declBit(c+283,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_jalr", false,-1);
        tracep->declBit(c+284,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sub", false,-1);
        tracep->declBit(c+285,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_add", false,-1);
        tracep->declBit(c+286,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sw", false,-1);
        tracep->declBit(c+287,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sd", false,-1);
        tracep->declBit(c+288,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sh", false,-1);
        tracep->declBit(c+289,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sb", false,-1);
        tracep->declBit(c+290,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_srai", false,-1);
        tracep->declBit(c+291,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_slli", false,-1);
        tracep->declBit(c+292,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_srli", false,-1);
        tracep->declBit(c+293,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lb", false,-1);
        tracep->declBit(c+294,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_lbu", false,-1);
        tracep->declBit(c+295,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_and", false,-1);
        tracep->declBit(c+296,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_or", false,-1);
        tracep->declBit(c+297,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_srl", false,-1);
        tracep->declBit(c+298,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sll", false,-1);
        tracep->declBit(c+299,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_sra", false,-1);
        tracep->declBit(c+300,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_andi", false,-1);
        tracep->declBit(c+301,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_xori", false,-1);
        tracep->declBit(c+302,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_ori", false,-1);
        tracep->declBit(c+303,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_xor", false,-1);
        tracep->declBit(c+304,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_csrrs", false,-1);
        tracep->declBit(c+305,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_csrrw", false,-1);
        tracep->declBit(c+306,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_csrrc", false,-1);
        tracep->declBit(c+307,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_csrrsi", false,-1);
        tracep->declBit(c+308,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_is_csrrci", false,-1);
        tracep->declQuad(c+865,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op64", false,-1, 63,0);
        tracep->declQuad(c+884,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op32", false,-1, 63,0);
        tracep->declQuad(c+309,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage jalr_res", false,-1, 63,0);
        tracep->declQuad(c+1036,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage load_res", false,-1, 63,0);
        tracep->declQuad(c+311,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sub_res", false,-1, 63,0);
        tracep->declQuad(c+313,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage add_res", false,-1, 63,0);
        tracep->declQuad(c+315,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage and_res", false,-1, 63,0);
        tracep->declQuad(c+317,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage or_res", false,-1, 63,0);
        tracep->declQuad(c+319,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sll_res", false,-1, 63,0);
        tracep->declQuad(c+321,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage srl_res", false,-1, 63,0);
        tracep->declQuad(c+323,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sra_res", false,-1, 63,0);
        tracep->declQuad(c+325,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage xor_res", false,-1, 63,0);
        tracep->declQuad(c+315,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage andi_res", false,-1, 63,0);
        tracep->declQuad(c+325,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage xori_res", false,-1, 63,0);
        tracep->declQuad(c+317,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage ori_res", false,-1, 63,0);
        tracep->declArray(c+327,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sr128_res", false,-1, 127,0);
        tracep->declQuad(c+323,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sr_res", false,-1, 63,0);
        tracep->declQuad(c+319,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage slli_res", false,-1, 63,0);
        tracep->declQuad(c+321,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage srli_res", false,-1, 63,0);
        tracep->declQuad(c+331,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sraiw_res", false,-1, 63,0);
        tracep->declBus(c+333,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage srliw_res", false,-1, 31,0);
        tracep->declBus(c+334,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage slliw_res", false,-1, 31,0);
        tracep->declQuad(c+335,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage subw_res", false,-1, 63,0);
        tracep->declQuad(c+337,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sllw_res", false,-1, 63,0);
        tracep->declQuad(c+339,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sraw_res", false,-1, 63,0);
        tracep->declQuad(c+341,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage srlw_res", false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage slti_res", false,-1, 63,0);
        tracep->declQuad(c+345,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sltiu_res", false,-1, 63,0);
        tracep->declQuad(c+345,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage sltu_res", false,-1, 63,0);
        tracep->declQuad(c+343,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage slt_res", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csrrs_res", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csrrw_res", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csrrc_res", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csrrsi_res", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csrrci_res", false,-1, 63,0);
        tracep->declQuad(c+335,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op1_sub_op2", false,-1, 63,0);
        tracep->declBit(c+347,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op1ltop2", false,-1);
        tracep->declBit(c+348,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op1ltuop2", false,-1);
        tracep->declQuad(c+349,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage id_pc", false,-1, 63,0);
        tracep->declBus(c+351,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage id_inst", false,-1, 31,0);
        tracep->declBit(c+352,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage id_wen", false,-1);
        tracep->declBus(c+353,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage id_wdest", false,-1, 4,0);
        tracep->declBus(c+354,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage func3", false,-1, 2,0);
        tracep->declBus(c+355,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage func7", false,-1, 6,0);
        tracep->declBus(c+356,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage inst_opcode", false,-1, 7,0);
        tracep->declQuad(c+173,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op1", false,-1, 63,0);
        tracep->declQuad(c+357,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage op2", false,-1, 63,0);
        tracep->declQuad(c+359,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage rs2_data", false,-1, 63,0);
        tracep->declBit(c+361,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage store_op", false,-1);
        tracep->declBit(c+362,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage load_op", false,-1);
        tracep->declBit(c+136,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage rcsr_op", false,-1);
        tracep->declBit(c+363,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage wcsr_op", false,-1);
        tracep->declQuad(c+364,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_op1", false,-1, 63,0);
        tracep->declQuad(c+366,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exc_type", false,-1, 63,0);
        tracep->declQuad(c+368,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exc_addr", false,-1, 63,0);
        tracep->declBus(c+370,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exc_op", false,-1, 31,0);
        tracep->declQuad(c+349,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_pc", false,-1, 63,0);
        tracep->declBus(c+351,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_inst", false,-1, 31,0);
        tracep->declBit(c+352,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_wen", false,-1);
        tracep->declBus(c+353,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_wdest", false,-1, 4,0);
        tracep->declQuad(c+823,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage exe_wdata", false,-1, 63,0);
        tracep->declBit(c+363,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_wen", false,-1);
        tracep->declBus(c+138,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_waddr", false,-1, 11,0);
        tracep->declQuad(c+573,"SimTop u_ysyx_210247_cpu u_ysyx_210247_exe_stage csr_wdata", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem rst", false,-1);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem flush", false,-1);
        tracep->declBit(c+917,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem exe_valid_out", false,-1);
        tracep->declArray(c+557,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem exe_to_mem_bus_o", false,-1, 402,0);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem mem_valid_in", false,-1);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem exe_to_mem_bus_i", false,-1, 402,0);
        tracep->declBit(c+162,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem exe_allow_out", false,-1);
        tracep->declBit(c+162,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem mem_allow_in", false,-1);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem exe_to_mem_valid", false,-1);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_exe_mem exe_to_mem_data", false,-1, 402,0);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_valid_in", false,-1);
        tracep->declBit(c+164,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_allow_out", false,-1);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_valid_out", false,-1);
        tracep->declBit(c+162,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_allow_in", false,-1);
        tracep->declBus(c+166,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage MEM_wdest", false,-1, 4,0);
        tracep->declQuad(c+167,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage MEM_result", false,-1, 63,0);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exe_to_mem_bus_i", false,-1, 402,0);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_to_wb_bus_o", false,-1, 402,0);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_valid", false,-1);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_ready_go", false,-1);
        tracep->declQuad(c+371,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exe_pc", false,-1, 63,0);
        tracep->declBus(c+373,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exe_inst", false,-1, 31,0);
        tracep->declBit(c+374,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exe_wen", false,-1);
        tracep->declBus(c+375,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exe_wdest", false,-1, 4,0);
        tracep->declQuad(c+167,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exe_wdata", false,-1, 63,0);
        tracep->declQuad(c+371,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_pc", false,-1, 63,0);
        tracep->declBus(c+373,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_inst", false,-1, 31,0);
        tracep->declBit(c+374,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_wen", false,-1);
        tracep->declBus(c+375,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_wdest", false,-1, 4,0);
        tracep->declQuad(c+167,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage mem_wdata", false,-1, 63,0);
        tracep->declQuad(c+376,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exc_type", false,-1, 63,0);
        tracep->declQuad(c+378,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exc_addr", false,-1, 63,0);
        tracep->declBus(c+380,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage exc_op", false,-1, 31,0);
        tracep->declBit(c+381,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage csr_wen", false,-1);
        tracep->declBus(c+382,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage csr_waddr", false,-1, 11,0);
        tracep->declQuad(c+383,"SimTop u_ysyx_210247_cpu u_ysyx_210247_mem_stage csr_wdata", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb rst", false,-1);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb flush", false,-1);
        tracep->declBit(c+163,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb mem_valid_out", false,-1);
        tracep->declArray(c+38,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb mem_to_wb_bus_o", false,-1, 402,0);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb wb_valid_in", false,-1);
        tracep->declArray(c+51,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb mem_to_wb_bus_i", false,-1, 402,0);
        tracep->declBit(c+164,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb mem_allow_out", false,-1);
        tracep->declBit(c+164,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb wb_allow_in", false,-1);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb mem_to_wb_valid", false,-1);
        tracep->declArray(c+51,"SimTop u_ysyx_210247_cpu u_ysyx_210247_reg_mem_wb mem_to_wb_data", false,-1, 402,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage rst", false,-1);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_valid_in", false,-1);
        tracep->declBit(c+164,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_allow_in", false,-1);
        tracep->declArray(c+51,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage mem_to_wb_bus_i", false,-1, 402,0);
        tracep->declQuad(c+64,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_pc", false,-1, 63,0);
        tracep->declBus(c+66,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_inst", false,-1, 31,0);
        tracep->declBit(c+67,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_wen", false,-1);
        tracep->declBus(c+68,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_wdest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_wdata", false,-1, 63,0);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage writed", false,-1);
        tracep->declBit(c+170,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage time_int_valid", false,-1);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage flush", false,-1);
        tracep->declBus(c+169,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage WB_wdest", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage WB_result", false,-1, 63,0);
        tracep->declBit(c+137,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage csr_wen", false,-1);
        tracep->declBus(c+139,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage csr_waddr", false,-1, 11,0);
        tracep->declQuad(c+140,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage csr_wdata", false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage exc_type", false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage exc_addr", false,-1, 63,0);
        tracep->declBus(c+147,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage exc_op", false,-1, 31,0);
        tracep->declBit(c+385,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wen", false,-1);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_valid", false,-1);
        tracep->declBit(c+71,"SimTop u_ysyx_210247_cpu u_ysyx_210247_wb_stage wb_ready_go", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile rst", false,-1);
        tracep->declBus(c+68,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile w_addr", false,-1, 4,0);
        tracep->declQuad(c+69,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile w_data", false,-1, 63,0);
        tracep->declBit(c+67,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile w_ena", false,-1);
        tracep->declBus(c+1021,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile r_addr1", false,-1, 4,0);
        tracep->declQuad(c+813,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile r_data1", false,-1, 63,0);
        tracep->declBit(c+811,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile r_ena1", false,-1);
        tracep->declBus(c+1022,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile r_addr2", false,-1, 4,0);
        tracep->declQuad(c+815,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile r_data2", false,-1, 63,0);
        tracep->declBit(c+812,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile r_ena2", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+386+i*2,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile regs_o", true,(i+0), 63,0);}}
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+450+i*2,"SimTop u_ysyx_210247_cpu u_ysyx_210247_regfile regs", true,(i+0), 63,0);}}
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile rst", false,-1);
        tracep->declBit(c+136,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile ren", false,-1);
        tracep->declBit(c+137,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile wen", false,-1);
        tracep->declBus(c+138,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile addr", false,-1, 11,0);
        tracep->declBus(c+139,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile waddr", false,-1, 11,0);
        tracep->declQuad(c+140,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile wdata", false,-1, 63,0);
        tracep->declQuad(c+817,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile rdata", false,-1, 63,0);
        tracep->declQuad(c+148,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mstatus_o", false,-1, 63,0);
        tracep->declQuad(c+152,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mcause_o", false,-1, 63,0);
        tracep->declQuad(c+150,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mepc_o", false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mtvec_o", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mie_o", false,-1, 63,0);
        tracep->declQuad(c+1067,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mip_o", false,-1, 63,0);
        tracep->declQuad(c+158,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mscratch_o", false,-1, 63,0);
        tracep->declQuad(c+143,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile exc_type", false,-1, 63,0);
        tracep->declQuad(c+145,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile exc_addr", false,-1, 63,0);
        tracep->declBit(c+142,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile flush", false,-1);
        tracep->declQuad(c+514,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mstatus", false,-1, 63,0);
        tracep->declQuad(c+516,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mcause", false,-1, 63,0);
        tracep->declQuad(c+518,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mepc", false,-1, 63,0);
        tracep->declQuad(c+520,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mtvec", false,-1, 63,0);
        tracep->declQuad(c+522,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mcycle", false,-1, 63,0);
        tracep->declQuad(c+1070,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mtime", false,-1, 63,0);
        tracep->declQuad(c+524,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mie", false,-1, 63,0);
        tracep->declQuad(c+1072,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mip", false,-1, 63,0);
        tracep->declQuad(c+526,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mscratch", false,-1, 63,0);
        tracep->declBit(c+528,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile mret_flush", false,-1);
        tracep->declBit(c+529,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile wb_ex", false,-1);
        tracep->declBit(c+530,"SimTop u_ysyx_210247_cpu u_ysyx_210247_csr_regfile tick", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_ctrl rst", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_ctrl clk", false,-1);
        tracep->declBus(c+147,"SimTop u_ysyx_210247_cpu u_ysyx_210247_ctrl exc_op", false,-1, 31,0);
        tracep->declQuad(c+150,"SimTop u_ysyx_210247_cpu u_ysyx_210247_ctrl csr_mepc", false,-1, 63,0);
        tracep->declQuad(c+154,"SimTop u_ysyx_210247_cpu u_ysyx_210247_ctrl csr_mtvec", false,-1, 63,0);
        tracep->declQuad(c+819,"SimTop u_ysyx_210247_cpu u_ysyx_210247_ctrl new_pc", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint rst", false,-1);
        tracep->declQuad(c+148,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint mstatus_i", false,-1, 63,0);
        tracep->declQuad(c+156,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint mie_i", false,-1, 63,0);
        tracep->declBit(c+880,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint cmp_ren", false,-1);
        tracep->declQuad(c+865,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint cmp_addr", false,-1, 63,0);
        tracep->declBit(c+881,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint cmp_wen", false,-1);
        tracep->declQuad(c+1023,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint cmp_rdata", false,-1, 63,0);
        tracep->declQuad(c+863,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint cmp_wdata", false,-1, 63,0);
        tracep->declBit(c+171,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint time_int", false,-1);
        tracep->declQuad(c+531,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint mtime", false,-1, 63,0);
        tracep->declQuad(c+533,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint mtimecmp", false,-1, 63,0);
        tracep->declBit(c+535,"SimTop u_ysyx_210247_cpu u_ysyx_210247_clint tick", false,-1);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu DifftestInstrCommit clock", false,-1);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestInstrCommit coreid", false,-1, 7,0);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestInstrCommit index", false,-1, 7,0);
        tracep->declBit(c+582,"SimTop u_ysyx_210247_cpu DifftestInstrCommit valid", false,-1);
        tracep->declQuad(c+579,"SimTop u_ysyx_210247_cpu DifftestInstrCommit pc", false,-1, 63,0);
        tracep->declBus(c+581,"SimTop u_ysyx_210247_cpu DifftestInstrCommit instr", false,-1, 31,0);
        tracep->declBus(c+1074,"SimTop u_ysyx_210247_cpu DifftestInstrCommit special", false,-1, 7,0);
        tracep->declBit(c+1026,"SimTop u_ysyx_210247_cpu DifftestInstrCommit skip", false,-1);
        tracep->declBit(c+1049,"SimTop u_ysyx_210247_cpu DifftestInstrCommit isRVC", false,-1);
        tracep->declBit(c+1049,"SimTop u_ysyx_210247_cpu DifftestInstrCommit scFailed", false,-1);
        tracep->declBit(c+575,"SimTop u_ysyx_210247_cpu DifftestInstrCommit wen", false,-1);
        tracep->declBus(c+576,"SimTop u_ysyx_210247_cpu DifftestInstrCommit wdest", false,-1, 7,0);
        tracep->declQuad(c+577,"SimTop u_ysyx_210247_cpu DifftestInstrCommit wdata", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu DifftestArchEvent clock", false,-1);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestArchEvent coreid", false,-1, 7,0);
        tracep->declBus(c+669,"SimTop u_ysyx_210247_cpu DifftestArchEvent intrNO", false,-1, 31,0);
        tracep->declBus(c+1075,"SimTop u_ysyx_210247_cpu DifftestArchEvent cause", false,-1, 31,0);
        tracep->declQuad(c+579,"SimTop u_ysyx_210247_cpu DifftestArchEvent exceptionPC", false,-1, 63,0);
        tracep->declBus(c+581,"SimTop u_ysyx_210247_cpu DifftestArchEvent exceptionInst", false,-1, 31,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState clock", false,-1);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+670,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_0", false,-1, 63,0);
        tracep->declQuad(c+672,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_1", false,-1, 63,0);
        tracep->declQuad(c+674,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_2", false,-1, 63,0);
        tracep->declQuad(c+676,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_3", false,-1, 63,0);
        tracep->declQuad(c+678,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_4", false,-1, 63,0);
        tracep->declQuad(c+680,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_5", false,-1, 63,0);
        tracep->declQuad(c+682,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_6", false,-1, 63,0);
        tracep->declQuad(c+684,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_7", false,-1, 63,0);
        tracep->declQuad(c+686,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_8", false,-1, 63,0);
        tracep->declQuad(c+688,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_9", false,-1, 63,0);
        tracep->declQuad(c+690,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_10", false,-1, 63,0);
        tracep->declQuad(c+692,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_11", false,-1, 63,0);
        tracep->declQuad(c+694,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_12", false,-1, 63,0);
        tracep->declQuad(c+696,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_13", false,-1, 63,0);
        tracep->declQuad(c+698,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_14", false,-1, 63,0);
        tracep->declQuad(c+700,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_15", false,-1, 63,0);
        tracep->declQuad(c+702,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_16", false,-1, 63,0);
        tracep->declQuad(c+704,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_17", false,-1, 63,0);
        tracep->declQuad(c+706,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_18", false,-1, 63,0);
        tracep->declQuad(c+708,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_19", false,-1, 63,0);
        tracep->declQuad(c+710,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_20", false,-1, 63,0);
        tracep->declQuad(c+712,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_21", false,-1, 63,0);
        tracep->declQuad(c+714,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_22", false,-1, 63,0);
        tracep->declQuad(c+716,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_23", false,-1, 63,0);
        tracep->declQuad(c+718,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_24", false,-1, 63,0);
        tracep->declQuad(c+720,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_25", false,-1, 63,0);
        tracep->declQuad(c+722,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_26", false,-1, 63,0);
        tracep->declQuad(c+724,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_27", false,-1, 63,0);
        tracep->declQuad(c+726,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_28", false,-1, 63,0);
        tracep->declQuad(c+728,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_29", false,-1, 63,0);
        tracep->declQuad(c+730,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_30", false,-1, 63,0);
        tracep->declQuad(c+732,"SimTop u_ysyx_210247_cpu DifftestArchIntRegState gpr_31", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu DifftestTrapEvent clock", false,-1);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestTrapEvent coreid", false,-1, 7,0);
        tracep->declBit(c+583,"SimTop u_ysyx_210247_cpu DifftestTrapEvent valid", false,-1);
        tracep->declBus(c+734,"SimTop u_ysyx_210247_cpu DifftestTrapEvent code", false,-1, 2,0);
        tracep->declQuad(c+579,"SimTop u_ysyx_210247_cpu DifftestTrapEvent pc", false,-1, 63,0);
        tracep->declQuad(c+585,"SimTop u_ysyx_210247_cpu DifftestTrapEvent cycleCnt", false,-1, 63,0);
        tracep->declQuad(c+587,"SimTop u_ysyx_210247_cpu DifftestTrapEvent instrCnt", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu DifftestCSRState clock", false,-1);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestCSRState coreid", false,-1, 7,0);
        tracep->declBus(c+1076,"SimTop u_ysyx_210247_cpu DifftestCSRState priviledgeMode", false,-1, 1,0);
        tracep->declQuad(c+653,"SimTop u_ysyx_210247_cpu DifftestCSRState mstatus", false,-1, 63,0);
        tracep->declQuad(c+667,"SimTop u_ysyx_210247_cpu DifftestCSRState sstatus", false,-1, 63,0);
        tracep->declQuad(c+655,"SimTop u_ysyx_210247_cpu DifftestCSRState mepc", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState sepc", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState mtval", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState stval", false,-1, 63,0);
        tracep->declQuad(c+659,"SimTop u_ysyx_210247_cpu DifftestCSRState mtvec", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState stvec", false,-1, 63,0);
        tracep->declQuad(c+657,"SimTop u_ysyx_210247_cpu DifftestCSRState mcause", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState scause", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState satp", false,-1, 63,0);
        tracep->declQuad(c+663,"SimTop u_ysyx_210247_cpu DifftestCSRState mip", false,-1, 63,0);
        tracep->declQuad(c+661,"SimTop u_ysyx_210247_cpu DifftestCSRState mie", false,-1, 63,0);
        tracep->declQuad(c+665,"SimTop u_ysyx_210247_cpu DifftestCSRState mscratch", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState sscratch", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState mideleg", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestCSRState medeleg", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState clock", false,-1);
        tracep->declBus(c+1046,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState coreid", false,-1, 7,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_0", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_1", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_2", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_3", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_4", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_5", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_6", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_7", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_8", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_9", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_10", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_11", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_12", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_13", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_14", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_15", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_16", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_17", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_18", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_19", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_20", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_21", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_22", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_23", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_24", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_25", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_26", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_27", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_28", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_29", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_30", false,-1, 63,0);
        tracep->declQuad(c+1077,"SimTop u_ysyx_210247_cpu DifftestArchFpRegState fpr_31", false,-1, 63,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_icache clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_icache rst", false,-1);
        tracep->declBus(c+855,"SimTop u_ysyx_210247_icache cache_req_addr", false,-1, 31,0);
        tracep->declBus(c+1075,"SimTop u_ysyx_210247_icache cache_req_data", false,-1, 31,0);
        tracep->declBit(c+1049,"SimTop u_ysyx_210247_icache cache_req_wen", false,-1);
        tracep->declBit(c+802,"SimTop u_ysyx_210247_icache cache_req_valid", false,-1);
        tracep->declBus(c+1038,"SimTop u_ysyx_210247_icache cache_resp_data", false,-1, 31,0);
        tracep->declBit(c+744,"SimTop u_ysyx_210247_icache cache_resp_ready", false,-1);
        tracep->declBit(c+859,"SimTop u_ysyx_210247_icache addr_valid", false,-1);
        tracep->declBit(c+805,"SimTop u_ysyx_210247_icache br_stall", false,-1);
        tracep->declBus(c+772,"SimTop u_ysyx_210247_icache inst_req_addr", false,-1, 31,0);
        tracep->declBus(c+773,"SimTop u_ysyx_210247_icache inst_req_data", false,-1, 31,0);
        tracep->declBit(c+752,"SimTop u_ysyx_210247_icache inst_req_wen", false,-1);
        tracep->declBit(c+751,"SimTop u_ysyx_210247_icache inst_req_valid", false,-1);
        tracep->declBit(c+874,"SimTop u_ysyx_210247_icache inst_resp_valid", false,-1);
        tracep->declArray(c+886,"SimTop u_ysyx_210247_icache inst_resp_data", false,-1, 128,0);
        tracep->declBus(c+1079,"SimTop u_ysyx_210247_icache BLK_NUM", false,-1, 31,0);
        tracep->declBus(c+856,"SimTop u_ysyx_210247_icache req_tag", false,-1, 19,0);
        tracep->declBus(c+857,"SimTop u_ysyx_210247_icache req_index", false,-1, 7,0);
        tracep->declBus(c+858,"SimTop u_ysyx_210247_icache req_offset", false,-1, 3,0);
        tracep->declBus(c+1043,"SimTop u_ysyx_210247_icache S_IDLE", false,-1, 2,0);
        tracep->declBus(c+1057,"SimTop u_ysyx_210247_icache S_BACK", false,-1, 2,0);
        tracep->declBus(c+1058,"SimTop u_ysyx_210247_icache S_BACK_WAIT", false,-1, 2,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_icache S_FILL", false,-1, 2,0);
        tracep->declBus(c+1059,"SimTop u_ysyx_210247_icache S_FILL_WAIT", false,-1, 2,0);
        tracep->declBus(c+1061,"SimTop u_ysyx_210247_icache S_BEGIN", false,-1, 2,0);
        tracep->declBus(c+1080,"SimTop u_ysyx_210247_icache S_DUBUG", false,-1, 2,0);
        tracep->declBus(c+774,"SimTop u_ysyx_210247_icache state", false,-1, 2,0);
        tracep->declBit(c+1039,"SimTop u_ysyx_210247_icache cache_hit", false,-1);
        tracep->declBit(c+1040,"SimTop u_ysyx_210247_icache cache_dirty", false,-1);
        tracep->declArray(c+891,"SimTop u_ysyx_210247_icache cache_data_out", false,-1, 128,0);
        tracep->declBit(c+775,"SimTop u_ysyx_210247_icache cache_data_wen", false,-1);
        tracep->declArray(c+776,"SimTop u_ysyx_210247_icache cache_data_wdata", false,-1, 128,0);
        tracep->declBit(c+781,"SimTop u_ysyx_210247_icache mem_ready", false,-1);
        tracep->declBit(c+782,"SimTop u_ysyx_210247_icache cache_fill", false,-1);
        tracep->declBus(c+783,"SimTop u_ysyx_210247_icache i", false,-1, 31,0);
        tracep->declBus(c+1064,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 Bits", false,-1, 31,0);
        tracep->declBus(c+1079,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1081,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 Add_Width", false,-1, 31,0);
        tracep->declArray(c+896,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 Q", false,-1, 127,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 CLK", false,-1);
        tracep->declBit(c+802,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 CEN", false,-1);
        tracep->declBit(c+775,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 WEN", false,-1);
        tracep->declBus(c+857,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 A", false,-1, 7,0);
        tracep->declArray(c+784,"SimTop u_ysyx_210247_icache u_S011HD1P_X32Y2D128 D", false,-1, 127,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_dcache clk", false,-1);
        tracep->declBit(c+921,"SimTop u_ysyx_210247_dcache rst", false,-1);
        tracep->declBus(c+900,"SimTop u_ysyx_210247_dcache cache_req_addr", false,-1, 31,0);
        tracep->declQuad(c+863,"SimTop u_ysyx_210247_dcache cache_req_data", false,-1, 63,0);
        tracep->declBit(c+868,"SimTop u_ysyx_210247_dcache cache_req_wen", false,-1);
        tracep->declBus(c+867,"SimTop u_ysyx_210247_dcache cache_req_size", false,-1, 1,0);
        tracep->declBus(c+869,"SimTop u_ysyx_210247_dcache cache_req_strb", false,-1, 7,0);
        tracep->declBit(c+860,"SimTop u_ysyx_210247_dcache cache_req_valid", false,-1);
        tracep->declQuad(c+861,"SimTop u_ysyx_210247_dcache cache_resp_data", false,-1, 63,0);
        tracep->declBit(c+746,"SimTop u_ysyx_210247_dcache cache_resp_ready", false,-1);
        tracep->declBus(c+788,"SimTop u_ysyx_210247_dcache mem_req_addr", false,-1, 31,0);
        tracep->declArray(c+755,"SimTop u_ysyx_210247_dcache mem_req_data", false,-1, 127,0);
        tracep->declBit(c+762,"SimTop u_ysyx_210247_dcache mem_req_wen", false,-1);
        tracep->declBus(c+759,"SimTop u_ysyx_210247_dcache mem_req_size", false,-1, 1,0);
        tracep->declBus(c+743,"SimTop u_ysyx_210247_dcache mem_req_strb", false,-1, 7,0);
        tracep->declBit(c+760,"SimTop u_ysyx_210247_dcache mem_req_valid", false,-1);
        tracep->declBit(c+761,"SimTop u_ysyx_210247_dcache mem_resp_valid", false,-1);
        tracep->declArray(c+875,"SimTop u_ysyx_210247_dcache mem_resp_data", false,-1, 127,0);
        tracep->declBus(c+1079,"SimTop u_ysyx_210247_dcache BLK_NUM", false,-1, 31,0);
        tracep->declBus(c+901,"SimTop u_ysyx_210247_dcache req_tag", false,-1, 19,0);
        tracep->declBus(c+902,"SimTop u_ysyx_210247_dcache req_index", false,-1, 7,0);
        tracep->declBus(c+903,"SimTop u_ysyx_210247_dcache req_offset", false,-1, 3,0);
        tracep->declArray(c+789,"SimTop u_ysyx_210247_dcache cache_strb", false,-1, 127,0);
        tracep->declQuad(c+904,"SimTop u_ysyx_210247_dcache valid_strb", false,-1, 63,0);
        tracep->declQuad(c+906,"SimTop u_ysyx_210247_dcache cache_write_data", false,-1, 63,0);
        tracep->declBus(c+1043,"SimTop u_ysyx_210247_dcache S_IDLE", false,-1, 2,0);
        tracep->declBus(c+1057,"SimTop u_ysyx_210247_dcache S_BACK", false,-1, 2,0);
        tracep->declBus(c+1058,"SimTop u_ysyx_210247_dcache S_BACK_WAIT", false,-1, 2,0);
        tracep->declBus(c+1047,"SimTop u_ysyx_210247_dcache S_FILL", false,-1, 2,0);
        tracep->declBus(c+1059,"SimTop u_ysyx_210247_dcache S_FILL_WAIT", false,-1, 2,0);
        tracep->declBus(c+1061,"SimTop u_ysyx_210247_dcache S_BEGIN", false,-1, 2,0);
        tracep->declBus(c+1080,"SimTop u_ysyx_210247_dcache S_DUBUG", false,-1, 2,0);
        tracep->declBus(c+793,"SimTop u_ysyx_210247_dcache state", false,-1, 2,0);
        tracep->declBit(c+1041,"SimTop u_ysyx_210247_dcache cache_hit", false,-1);
        tracep->declBit(c+919,"SimTop u_ysyx_210247_dcache cache_dirty", false,-1);
        tracep->declArray(c+908,"SimTop u_ysyx_210247_dcache cache_data_out", false,-1, 127,0);
        tracep->declBit(c+794,"SimTop u_ysyx_210247_dcache cache_data_wen", false,-1);
        tracep->declArray(c+795,"SimTop u_ysyx_210247_dcache cache_data_wdata", false,-1, 127,0);
        tracep->declQuad(c+912,"SimTop u_ysyx_210247_dcache valid_resp_data", false,-1, 63,0);
        tracep->declBit(c+914,"SimTop u_ysyx_210247_dcache indexa7", false,-1);
        tracep->declBit(c+915,"SimTop u_ysyx_210247_dcache wen_indexa7", false,-1);
        tracep->declBit(c+1042,"SimTop u_ysyx_210247_dcache dirtya7", false,-1);
        tracep->declBit(c+799,"SimTop u_ysyx_210247_dcache mem_ready", false,-1);
        tracep->declBit(c+800,"SimTop u_ysyx_210247_dcache cache_fill", false,-1);
        tracep->declBus(c+801,"SimTop u_ysyx_210247_dcache i", false,-1, 31,0);
        tracep->declBus(c+1064,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW Bits", false,-1, 31,0);
        tracep->declBus(c+1079,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW Word_Depth", false,-1, 31,0);
        tracep->declBus(c+1081,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW Add_Width", false,-1, 31,0);
        tracep->declBus(c+1064,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW Wen_Width", false,-1, 31,0);
        tracep->declArray(c+908,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW Q", false,-1, 127,0);
        tracep->declBit(c+920,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW CLK", false,-1);
        tracep->declBit(c+860,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW CEN", false,-1);
        tracep->declBit(c+794,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW WEN", false,-1);
        tracep->declArray(c+789,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW BWEN", false,-1, 127,0);
        tracep->declBus(c+902,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW A", false,-1, 7,0);
        tracep->declArray(c+795,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW D", false,-1, 127,0);
        tracep->declBit(c+860,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW cen", false,-1);
        tracep->declBit(c+794,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW wen", false,-1);
        tracep->declArray(c+789,"SimTop u_ysyx_210247_dcache u_S011HD1P_X32Y2D128_BW bwen", false,-1, 127,0);
    }
}

void VSimTop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VSimTop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VSimTop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Variables
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp81;
    VlWide<4>/*127:0*/ __Vtemp82;
    VlWide<4>/*127:0*/ __Vtemp95;
    VlWide<4>/*127:0*/ __Vtemp96;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp112;
    VlWide<13>/*415:0*/ __Vtemp119;
    VlWide<4>/*127:0*/ __Vtemp120;
    VlWide<5>/*159:0*/ __Vtemp121;
    VlWide<5>/*159:0*/ __Vtemp122;
    VlWide<5>/*159:0*/ __Vtemp123;
    VlWide<5>/*159:0*/ __Vtemp124;
    VlWide<5>/*159:0*/ __Vtemp125;
    VlWide<5>/*159:0*/ __Vtemp126;
    VlWide<10>/*319:0*/ __Vtemp140;
    VlWide<17>/*543:0*/ __Vtemp141;
    VlWide<5>/*159:0*/ __Vtemp142;
    VlWide<5>/*159:0*/ __Vtemp143;
    VlWide<5>/*159:0*/ __Vtemp144;
    VlWide<5>/*159:0*/ __Vtemp145;
    // Body
    {
        tracep->fullBit(oldp+1,((1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->fullBit(oldp+2,((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->fullBit(oldp+3,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr));
        tracep->fullCData(oldp+4,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__rw_resp),2);
        tracep->fullCData(oldp+5,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state),3);
        tracep->fullCData(oldp+6,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state),3);
        tracep->fullBit(oldp+7,((0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->fullBit(oldp+8,((3U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->fullBit(oldp+9,((0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))));
        tracep->fullBit(oldp+10,(((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                  | (4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))));
        tracep->fullCData(oldp+11,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__len),8);
        tracep->fullBit(oldp+12,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
        tracep->fullBit(oldp+13,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok));
        tracep->fullBit(oldp+14,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
        tracep->fullWData(oldp+15,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data),96);
        __Vtemp68[0U] = vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst;
        __Vtemp68[1U] = (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc);
        __Vtemp68[2U] = (IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc 
                                 >> 0x20U));
        tracep->fullWData(oldp+18,(__Vtemp68),96);
        tracep->fullWData(oldp+21,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data),540);
        tracep->fullWData(oldp+38,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data),403);
        tracep->fullWData(oldp+51,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data),403);
        tracep->fullQData(oldp+64,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U])) 
                                                     >> 6U)))),64);
        tracep->fullIData(oldp+66,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
                                     << 0x1aU) | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                                  >> 6U))),32);
        tracep->fullBit(oldp+67,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen));
        tracep->fullCData(oldp+68,((0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])),5);
        tracep->fullQData(oldp+69,((((QData)((IData)(
                                                     vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))),64);
        tracep->fullBit(oldp+71,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid));
        tracep->fullQData(oldp+72,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0]),64);
        tracep->fullQData(oldp+74,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[1]),64);
        tracep->fullQData(oldp+76,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[2]),64);
        tracep->fullQData(oldp+78,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[3]),64);
        tracep->fullQData(oldp+80,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[4]),64);
        tracep->fullQData(oldp+82,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[5]),64);
        tracep->fullQData(oldp+84,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[6]),64);
        tracep->fullQData(oldp+86,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[7]),64);
        tracep->fullQData(oldp+88,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[8]),64);
        tracep->fullQData(oldp+90,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[9]),64);
        tracep->fullQData(oldp+92,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[10]),64);
        tracep->fullQData(oldp+94,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[11]),64);
        tracep->fullQData(oldp+96,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[12]),64);
        tracep->fullQData(oldp+98,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[13]),64);
        tracep->fullQData(oldp+100,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[14]),64);
        tracep->fullQData(oldp+102,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[15]),64);
        tracep->fullQData(oldp+104,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[16]),64);
        tracep->fullQData(oldp+106,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[17]),64);
        tracep->fullQData(oldp+108,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[18]),64);
        tracep->fullQData(oldp+110,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[19]),64);
        tracep->fullQData(oldp+112,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[20]),64);
        tracep->fullQData(oldp+114,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[21]),64);
        tracep->fullQData(oldp+116,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[22]),64);
        tracep->fullQData(oldp+118,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[23]),64);
        tracep->fullQData(oldp+120,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[24]),64);
        tracep->fullQData(oldp+122,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[25]),64);
        tracep->fullQData(oldp+124,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[26]),64);
        tracep->fullQData(oldp+126,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[27]),64);
        tracep->fullQData(oldp+128,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[28]),64);
        tracep->fullQData(oldp+130,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[29]),64);
        tracep->fullQData(oldp+132,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[30]),64);
        tracep->fullQData(oldp+134,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[31]),64);
        tracep->fullBit(oldp+136,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                         >> 0x19U))));
        tracep->fullBit(oldp+137,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                         >> 0x12U))));
        tracep->fullSData(oldp+138,((0xfffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 8U) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x18U)))),12);
        tracep->fullSData(oldp+139,((0xfffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                                << 0x1aU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                  >> 6U)))),12);
        tracep->fullQData(oldp+140,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+142,((0U != ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                           << 0xdU) 
                                          | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                             >> 0x13U)))));
        tracep->fullQData(oldp+143,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                      >> 0x13U)))),64);
        tracep->fullQData(oldp+145,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U])) 
                                                      >> 0x13U)))),64);
        tracep->fullIData(oldp+147,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                      << 0xdU) | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                  >> 0x13U))),32);
        tracep->fullQData(oldp+148,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o),64);
        tracep->fullQData(oldp+150,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o),64);
        tracep->fullQData(oldp+152,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex)
                                      ? (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                          << 0x2dU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                             << 0xdU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                               >> 0x13U)))
                                      : (((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                           >> 0x12U) 
                                          & (0x342U 
                                             == (0xfffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                       >> 6U)))))
                                          ? (((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                                   >> 6U)))
                                          : vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause))),64);
        tracep->fullQData(oldp+154,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o),64);
        tracep->fullQData(oldp+156,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o),64);
        tracep->fullQData(oldp+158,((((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                       >> 0x12U) & 
                                      (0x340U == (0xfffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                        >> 6U)))))
                                      ? (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                          << 0x3aU) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                             << 0x1aU) 
                                            | ((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                               >> 6U)))
                                      : vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch)),64);
        tracep->fullBit(oldp+160,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid));
        tracep->fullBit(oldp+161,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid));
        tracep->fullBit(oldp+162,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in));
        tracep->fullBit(oldp+163,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid));
        tracep->fullBit(oldp+164,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in));
        tracep->fullCData(oldp+165,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest),5);
        tracep->fullCData(oldp+166,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest),5);
        tracep->fullQData(oldp+167,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))),64);
        tracep->fullCData(oldp+169,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest),5);
        tracep->fullBit(oldp+170,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
                                         >> 0x12U))));
        tracep->fullBit(oldp+171,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int));
        tracep->fullBit(oldp+172,((0x7bU == (0xffU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 6U))))));
        tracep->fullQData(oldp+173,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U)))),64);
        tracep->fullQData(oldp+175,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc),64);
        tracep->fullIData(oldp+177,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst),32);
        tracep->fullQData(oldp+178,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc),64);
        tracep->fullQData(oldp+180,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc),64);
        tracep->fullBit(oldp+182,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid));
        tracep->fullBit(oldp+183,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid));
        tracep->fullBit(oldp+184,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait));
        tracep->fullBit(oldp+185,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid));
        tracep->fullBit(oldp+186,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready));
        tracep->fullCData(oldp+187,((0x7fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])),7);
        tracep->fullCData(oldp+188,((0x1fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                               << 0x19U) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 7U)))),5);
        tracep->fullCData(oldp+189,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1),5);
        tracep->fullSData(oldp+190,((0xfffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                << 0xcU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  >> 0x14U)))),12);
        tracep->fullIData(oldp+191,((0xfffffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0xcU)))),20);
        tracep->fullCData(oldp+192,((0x1fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                               << 0xcU) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 0x14U)))),5);
        tracep->fullIData(oldp+193,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm),21);
        tracep->fullSData(oldp+194,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm),13);
        tracep->fullSData(oldp+195,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm),12);
        tracep->fullQData(oldp+196,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))),64);
        tracep->fullIData(oldp+198,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]),32);
        tracep->fullCData(oldp+199,((7U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                            << 0x14U) 
                                           | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                              >> 0xcU)))),3);
        tracep->fullCData(oldp+200,((0x7fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                               << 7U) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 0x19U)))),7);
        tracep->fullBit(oldp+201,(((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                     | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw))));
        tracep->fullBit(oldp+202,((((((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                        | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                     | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu))));
        tracep->fullBit(oldp+203,((((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                     | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))));
        tracep->fullBit(oldp+204,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+205,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh));
        tracep->fullBit(oldp+206,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu));
        tracep->fullBit(oldp+207,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw));
        tracep->fullBit(oldp+208,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu));
        tracep->fullBit(oldp+209,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld));
        tracep->fullBit(oldp+210,((1U & (((IData)((0x13U 
                                                   == 
                                                   (0x107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU))))));
        tracep->fullBit(oldp+211,((1U & (((IData)((0x1013U 
                                                   == 
                                                   (0x107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 0xdU)) 
                                         & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU))))));
        tracep->fullBit(oldp+212,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr));
        tracep->fullBit(oldp+213,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+214,((1U & (((IData)((0x101bU 
                                                   == 
                                                   (0xfc00107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU))) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+215,((1U & (((IData)((0x4000101bU 
                                                   == 
                                                   (0xfc00107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU))) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+216,((IData)((0x101bU 
                                           == (0xfc00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+217,((1U & (((IData)((0x40001013U 
                                                   == 
                                                   (0xfc00107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU))) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+218,((IData)((0x1013U 
                                           == (0xfc00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+219,((1U & (((IData)((0x1013U 
                                                   == 
                                                   (0xfc00107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU))) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+220,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb));
        tracep->fullBit(oldp+221,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu));
        tracep->fullBit(oldp+222,((1U & (((IData)((0x1013U 
                                                   == 
                                                   (0x107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 0xdU)) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+223,((1U & (((IData)((0x13U 
                                                   == 
                                                   (0x107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU))) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+224,((1U & (((IData)((0x13U 
                                                   == 
                                                   (0x107fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 0xdU)) 
                                         & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xeU)))));
        tracep->fullBit(oldp+225,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs));
        tracep->fullBit(oldp+226,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw));
        tracep->fullBit(oldp+227,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc));
        tracep->fullBit(oldp+228,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci));
        tracep->fullBit(oldp+229,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi));
        tracep->fullBit(oldp+230,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall));
        tracep->fullBit(oldp+231,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret));
        tracep->fullBit(oldp+232,((IData)((0x17U == 
                                           (0x7fU & 
                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+233,((1U & (((IData)((0x17U 
                                                   == 
                                                   (0x1fU 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                          & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 5U)) 
                                         & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 6U))))));
        tracep->fullBit(oldp+234,((IData)((0x3bU == 
                                           (0xfe00707fU 
                                            & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+235,((IData)((0x4000003bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+236,((IData)((0x103bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+237,((IData)((0x4000503bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+238,((IData)((0x503bU 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+239,((IData)((0x1033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+240,((IData)((0x5033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+241,((IData)((0x40005033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+242,((IData)((0x40000033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+243,((IData)((0x33U == 
                                           (0xfe00707fU 
                                            & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+244,((IData)((0x7033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+245,((IData)((0x6033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+246,((IData)((0x4033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+247,((IData)((0x2033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+248,((IData)((0x3033U 
                                           == (0xfe00707fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->fullBit(oldp+249,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal));
        tracep->fullBit(oldp+250,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq));
        tracep->fullBit(oldp+251,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne));
        tracep->fullBit(oldp+252,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge));
        tracep->fullBit(oldp+253,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt));
        tracep->fullBit(oldp+254,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu));
        tracep->fullBit(oldp+255,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu));
        tracep->fullBit(oldp+256,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd));
        tracep->fullBit(oldp+257,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh));
        tracep->fullBit(oldp+258,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb));
        tracep->fullBit(oldp+259,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw));
        tracep->fullBit(oldp+260,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my));
        tracep->fullBit(oldp+261,(((0x13U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (0U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+262,(((0x1bU == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (0U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+263,((((0x1bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x3fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x11U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xfU)))))));
        tracep->fullBit(oldp+264,((((0x1bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0x10U == (0x3fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xfU)))))));
        tracep->fullBit(oldp+265,((((0x1bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (1U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x3fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x11U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xfU)))))));
        tracep->fullBit(oldp+266,((0x17U == (0xffU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 6U))))));
        tracep->fullBit(oldp+267,((0x37U == (0xffU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 6U))))));
        tracep->fullBit(oldp+268,((0x6fU == (0xffU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 6U))))));
        tracep->fullBit(oldp+269,((((0x3bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (0U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+270,((((0x3bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (0U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0x20U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
        tracep->fullBit(oldp+271,((((0x3bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (1U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+272,((((0x3bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0x20U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
        tracep->fullBit(oldp+273,((((0x3bU == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+274,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (2U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+275,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (3U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+276,(((0x13U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (2U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+277,(((0x13U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (3U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+278,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh));
        tracep->fullBit(oldp+279,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu));
        tracep->fullBit(oldp+280,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw));
        tracep->fullBit(oldp+281,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu));
        tracep->fullBit(oldp+282,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld));
        tracep->fullBit(oldp+283,(((0x67U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (0U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+284,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (0U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0x20U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
        tracep->fullBit(oldp+285,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (0U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+286,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw));
        tracep->fullBit(oldp+287,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd));
        tracep->fullBit(oldp+288,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh));
        tracep->fullBit(oldp+289,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb));
        tracep->fullBit(oldp+290,((((0x13U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0x10U == (0x3fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xfU)))))));
        tracep->fullBit(oldp+291,((((0x13U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (1U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x3fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x11U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xfU)))))));
        tracep->fullBit(oldp+292,((((0x13U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x3fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x11U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xfU)))))));
        tracep->fullBit(oldp+293,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb));
        tracep->fullBit(oldp+294,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu));
        tracep->fullBit(oldp+295,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (7U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+296,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (6U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+297,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+298,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (1U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+299,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (5U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0x20U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
        tracep->fullBit(oldp+300,(((0x13U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (7U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+301,(((0x13U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (4U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+302,(((0x13U == (0xffU 
                                              & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))) 
                                   & (6U == (7U & (
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
        tracep->fullBit(oldp+303,((((0x33U == (0xffU 
                                               & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))) 
                                    & (4U == (7U & 
                                              ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                << 0xbU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                  >> 0x15U))))) 
                                   & (0U == (0x7fU 
                                             & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                 << 0x12U) 
                                                | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                   >> 0xeU)))))));
        tracep->fullBit(oldp+304,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs));
        tracep->fullBit(oldp+305,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw));
        tracep->fullBit(oldp+306,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc));
        tracep->fullBit(oldp+307,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi));
        tracep->fullBit(oldp+308,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci));
        tracep->fullQData(oldp+309,((4ULL + (((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                   >> 6U))))),64);
        tracep->fullQData(oldp+311,((1ULL + ((((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                    >> 0x18U))) 
                                             + (~ (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                       << 8U) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                         >> 0x18U))))))),64);
        tracep->fullQData(oldp+313,(((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                  >> 0x18U))) 
                                     + (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              >> 0x18U))))),64);
        tracep->fullQData(oldp+315,(((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                  >> 0x18U))) 
                                     & (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              >> 0x18U))))),64);
        tracep->fullQData(oldp+317,(((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                  >> 0x18U))) 
                                     | (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              >> 0x18U))))),64);
        tracep->fullQData(oldp+319,(((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                  >> 0x18U))) 
                                     << (0x3fU & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U))))),64);
        tracep->fullQData(oldp+321,(((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                  >> 0x18U))) 
                                     >> (0x3fU & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U))))),64);
        tracep->fullQData(oldp+323,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))),64);
        tracep->fullQData(oldp+325,(((((QData)((IData)(
                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                       << 0x28U) | 
                                      (((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                  >> 0x18U))) 
                                     ^ (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              >> 0x18U))))),64);
        tracep->fullWData(oldp+327,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res),128);
        tracep->fullQData(oldp+331,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res),64);
        tracep->fullIData(oldp+333,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res),32);
        tracep->fullIData(oldp+334,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res),32);
        tracep->fullQData(oldp+335,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res),64);
        tracep->fullQData(oldp+337,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res),64);
        tracep->fullQData(oldp+339,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res),64);
        tracep->fullQData(oldp+341,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res),64);
        tracep->fullQData(oldp+343,((QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))),64);
        tracep->fullQData(oldp+345,((QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))),64);
        tracep->fullBit(oldp+347,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2));
        tracep->fullBit(oldp+348,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2));
        tracep->fullQData(oldp+349,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                      >> 6U)))),64);
        tracep->fullIData(oldp+351,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U] 
                                      << 0x1aU) | (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                                                   >> 6U))),32);
        tracep->fullBit(oldp+352,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                                         >> 5U))));
        tracep->fullCData(oldp+353,((0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])),5);
        tracep->fullCData(oldp+354,((7U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                            << 0xbU) 
                                           | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                              >> 0x15U)))),3);
        tracep->fullCData(oldp+355,((0x7fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                               << 0x12U) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 0xeU)))),7);
        tracep->fullCData(oldp+356,((0xffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                               << 0x1aU) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 6U)))),8);
        tracep->fullQData(oldp+357,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                      >> 0x18U)))),64);
        tracep->fullQData(oldp+359,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                      >> 0x18U)))),64);
        tracep->fullBit(oldp+361,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                         >> 0x1bU))));
        tracep->fullBit(oldp+362,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                         >> 0x1aU))));
        tracep->fullBit(oldp+363,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                         >> 0x18U))));
        tracep->fullQData(oldp+364,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+366,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU])) 
                                                      >> 0x1cU)))),64);
        tracep->fullQData(oldp+368,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU])) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU])) 
                                                    << 4U) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU])) 
                                                      >> 0x1cU)))),64);
        tracep->fullIData(oldp+370,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                      << 4U) | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                                >> 0x1cU))),32);
        tracep->fullQData(oldp+371,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[4U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U])) 
                                                      >> 6U)))),64);
        tracep->fullIData(oldp+373,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U] 
                                      << 0x1aU) | (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                                                   >> 6U))),32);
        tracep->fullBit(oldp+374,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                                         >> 5U))));
        tracep->fullCData(oldp+375,((0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U])),5);
        tracep->fullQData(oldp+376,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xcU])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xbU])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU])) 
                                                      >> 0x13U)))),64);
        tracep->fullQData(oldp+378,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[9U])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U])) 
                                                      >> 0x13U)))),64);
        tracep->fullIData(oldp+380,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] 
                                      << 0xdU) | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                                  >> 0x13U))),32);
        tracep->fullBit(oldp+381,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                         >> 0x12U))));
        tracep->fullSData(oldp+382,((0xfffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] 
                                                << 0x1aU) 
                                               | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                                  >> 6U)))),12);
        tracep->fullQData(oldp+383,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U])) 
                                      << 0x3aU) | (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[6U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U])) 
                                                      >> 6U)))),64);
        tracep->fullBit(oldp+385,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                         >> 5U))));
        tracep->fullQData(oldp+386,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0]),64);
        tracep->fullQData(oldp+388,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[1]),64);
        tracep->fullQData(oldp+390,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[2]),64);
        tracep->fullQData(oldp+392,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[3]),64);
        tracep->fullQData(oldp+394,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[4]),64);
        tracep->fullQData(oldp+396,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[5]),64);
        tracep->fullQData(oldp+398,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[6]),64);
        tracep->fullQData(oldp+400,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[7]),64);
        tracep->fullQData(oldp+402,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[8]),64);
        tracep->fullQData(oldp+404,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[9]),64);
        tracep->fullQData(oldp+406,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[10]),64);
        tracep->fullQData(oldp+408,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[11]),64);
        tracep->fullQData(oldp+410,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[12]),64);
        tracep->fullQData(oldp+412,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[13]),64);
        tracep->fullQData(oldp+414,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[14]),64);
        tracep->fullQData(oldp+416,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[15]),64);
        tracep->fullQData(oldp+418,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[16]),64);
        tracep->fullQData(oldp+420,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[17]),64);
        tracep->fullQData(oldp+422,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[18]),64);
        tracep->fullQData(oldp+424,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[19]),64);
        tracep->fullQData(oldp+426,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[20]),64);
        tracep->fullQData(oldp+428,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[21]),64);
        tracep->fullQData(oldp+430,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[22]),64);
        tracep->fullQData(oldp+432,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[23]),64);
        tracep->fullQData(oldp+434,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[24]),64);
        tracep->fullQData(oldp+436,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[25]),64);
        tracep->fullQData(oldp+438,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[26]),64);
        tracep->fullQData(oldp+440,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[27]),64);
        tracep->fullQData(oldp+442,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[28]),64);
        tracep->fullQData(oldp+444,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[29]),64);
        tracep->fullQData(oldp+446,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[30]),64);
        tracep->fullQData(oldp+448,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[31]),64);
        tracep->fullQData(oldp+450,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0]),64);
        tracep->fullQData(oldp+452,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[1]),64);
        tracep->fullQData(oldp+454,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[2]),64);
        tracep->fullQData(oldp+456,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[3]),64);
        tracep->fullQData(oldp+458,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[4]),64);
        tracep->fullQData(oldp+460,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[5]),64);
        tracep->fullQData(oldp+462,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[6]),64);
        tracep->fullQData(oldp+464,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[7]),64);
        tracep->fullQData(oldp+466,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[8]),64);
        tracep->fullQData(oldp+468,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[9]),64);
        tracep->fullQData(oldp+470,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[10]),64);
        tracep->fullQData(oldp+472,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[11]),64);
        tracep->fullQData(oldp+474,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[12]),64);
        tracep->fullQData(oldp+476,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[13]),64);
        tracep->fullQData(oldp+478,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[14]),64);
        tracep->fullQData(oldp+480,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[15]),64);
        tracep->fullQData(oldp+482,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[16]),64);
        tracep->fullQData(oldp+484,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[17]),64);
        tracep->fullQData(oldp+486,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[18]),64);
        tracep->fullQData(oldp+488,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[19]),64);
        tracep->fullQData(oldp+490,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[20]),64);
        tracep->fullQData(oldp+492,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[21]),64);
        tracep->fullQData(oldp+494,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[22]),64);
        tracep->fullQData(oldp+496,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[23]),64);
        tracep->fullQData(oldp+498,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[24]),64);
        tracep->fullQData(oldp+500,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[25]),64);
        tracep->fullQData(oldp+502,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[26]),64);
        tracep->fullQData(oldp+504,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[27]),64);
        tracep->fullQData(oldp+506,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[28]),64);
        tracep->fullQData(oldp+508,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[29]),64);
        tracep->fullQData(oldp+510,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[30]),64);
        tracep->fullQData(oldp+512,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[31]),64);
        tracep->fullQData(oldp+514,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus),64);
        tracep->fullQData(oldp+516,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause),64);
        tracep->fullQData(oldp+518,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc),64);
        tracep->fullQData(oldp+520,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec),64);
        tracep->fullQData(oldp+522,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle),64);
        tracep->fullQData(oldp+524,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie),64);
        tracep->fullQData(oldp+526,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch),64);
        tracep->fullBit(oldp+528,((0x29aULL == (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                                 << 0x2dU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                      >> 0x13U))))));
        tracep->fullBit(oldp+529,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex));
        tracep->fullBit(oldp+530,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick));
        tracep->fullQData(oldp+531,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime),64);
        tracep->fullQData(oldp+533,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp),64);
        tracep->fullBit(oldp+535,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick));
        tracep->fullQData(oldp+536,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                      ? (8ULL | (0xfffffffffffffff0ULL 
                                                 & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                      : (0xfffffffffffffff0ULL 
                                         & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))),64);
        tracep->fullQData(oldp+538,((0xfffffffffffffff0ULL 
                                     & ((1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                         ? (0xfffffffffffffff8ULL 
                                            & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                         : ((3U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                             ? (0xfffffffffffffff8ULL 
                                                & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                             : 0ULL)))),64);
        tracep->fullQData(oldp+540,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                      ? (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__mem_req_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->SimTop__DOT__mem_req_data[2U])))
                                      : (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__mem_req_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->SimTop__DOT__mem_req_data[0U]))))),64);
        tracep->fullCData(oldp+542,((0xfU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                              ? (7U 
                                                 & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                              : ((4U 
                                                  == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                  ? 
                                                 (7U 
                                                  & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                                  : 0U)))),4);
        tracep->fullCData(oldp+543,((0xfU & (((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                               ? (7U 
                                                  & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                               : ((4U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                   ? 
                                                  (7U 
                                                   & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                                   : 0U)) 
                                             + (3U 
                                                | ((1U 
                                                    & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                                   | (7U 
                                                      & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))))),4);
        tracep->fullBit(oldp+544,((1U & ((((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                            ? (7U & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                            : ((4U 
                                                == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                ? (7U 
                                                   & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                                : 0U)) 
                                          + (3U | (
                                                   (1U 
                                                    & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                                   | (7U 
                                                      & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))) 
                                         >> 3U))));
        tracep->fullQData(oldp+545,(((1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                      ? (0xfffffffffffffff8ULL 
                                         & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                      : ((3U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                          ? (0xfffffffffffffff8ULL 
                                             & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                          : 0ULL))),64);
        tracep->fullCData(oldp+547,((0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                               ? (0x38U 
                                                  & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                                     << 3U))
                                               : ((4U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                   ? 
                                                  (0x38U 
                                                   & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                      << 3U))
                                                   : 0U)))),6);
        __Vtemp81[0U] = 0xffffffffU;
        __Vtemp81[1U] = (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
        __Vtemp81[2U] = 0U;
        __Vtemp81[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp82, __Vtemp81, 
                      (0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                 ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                             << 3U))
                                 : ((4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                 << 3U))
                                     : 0U))));
        tracep->fullWData(oldp+548,(__Vtemp82),128);
        __Vtemp95[0U] = 0xffffffffU;
        __Vtemp95[1U] = (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
        __Vtemp95[2U] = 0U;
        __Vtemp95[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp96, __Vtemp95, 
                      (0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                 ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                             << 3U))
                                 : ((4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                 << 3U))
                                     : 0U))));
        tracep->fullQData(oldp+552,((((QData)((IData)(
                                                      __Vtemp96[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp96[0U])))),64);
        __Vtemp109[0U] = 0xffffffffU;
        __Vtemp109[1U] = (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
        __Vtemp109[2U] = 0U;
        __Vtemp109[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp110, __Vtemp109, 
                      (0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                 ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                             << 3U))
                                 : ((4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                 << 3U))
                                     : 0U))));
        tracep->fullQData(oldp+554,((((QData)((IData)(
                                                      __Vtemp110[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  __Vtemp110[2U])))),64);
        tracep->fullBit(oldp+556,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done) 
                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready))));
        __Vtemp112[2U] = (IData)(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                   ? ((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                        << 0x24U) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                         << 4U) | ((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                   >> 0x1cU))) 
                                      | vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                   : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                       ? (((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                >> 0x1cU)))
                                       : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                           ? ((0xffffffffffffffe0ULL 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                              | (QData)((IData)(
                                                                (0x1fU 
                                                                 & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                    | ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                        << 4U) 
                                                                       | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                          >> 0x1cU)))))))
                                           : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                               ? ((0xffffffffffffffe0ULL 
                                                   & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                        & (~ 
                                                                           ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                             << 4U) 
                                                                            | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                               >> 0x1cU))))))))
                                               : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                   ? 
                                                  (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                   & (~ 
                                                      (((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                        << 0x24U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                           << 4U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                             >> 0x1cU)))))
                                                   : 0ULL))))));
        __Vtemp112[3U] = (IData)((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                    ? ((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                              >> 0x1cU))) 
                                       | vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                    : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                        ? (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                            << 0x24U) 
                                           | (((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                               << 4U) 
                                              | ((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                 >> 0x1cU)))
                                        : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                            ? ((0xffffffffffffffe0ULL 
                                                & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                               | (QData)((IData)(
                                                                 (0x1fU 
                                                                  & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                     | ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                         << 4U) 
                                                                        | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                           >> 0x1cU)))))))
                                            : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                ? (
                                                   (0xffffffffffffffe0ULL 
                                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                         & (~ 
                                                                            ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                              << 4U) 
                                                                             | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                                >> 0x1cU))))))))
                                                : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                    ? 
                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(
                                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                            << 4U) 
                                                           | ((QData)((IData)(
                                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                              >> 0x1cU)))))
                                                    : 0ULL))))) 
                                  >> 0x20U));
        __Vtemp119[0U] = (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata);
        __Vtemp119[1U] = (IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata 
                                  >> 0x20U));
        __Vtemp119[2U] = ((0xffffffc0U & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                          | ((0x20U & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                             | (0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])));
        __Vtemp119[3U] = ((0x3fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U]) 
                          | (0xffffffc0U & ((IData)(
                                                    (((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                      << 0x3aU) 
                                                     | (((QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                         << 0x1aU) 
                                                        | ((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                           >> 6U)))) 
                                            << 6U)));
        __Vtemp119[4U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                   >> 6U)))) 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & ((IData)(
                                                             ((((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                << 0x3aU) 
                                                               | (((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                                   << 0x1aU) 
                                                                  | ((QData)((IData)(
                                                                                vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                                     >> 6U))) 
                                                              >> 0x20U)) 
                                                     << 6U)));
        __Vtemp119[5U] = ((0x3fU & ((IData)(((((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                    >> 6U))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & (__Vtemp112[2U] 
                                                     << 6U)));
        __Vtemp119[6U] = ((0x3fU & (__Vtemp112[2U] 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & (__Vtemp112[3U] 
                                                     << 6U)));
        __Vtemp119[7U] = ((0xfff80000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                           << 0x17U) 
                                          | (0x780000U 
                                             & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                                >> 9U)))) 
                          | ((0x40000U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                          >> 6U)) | 
                             ((0x3ffc0U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                            << 0xeU) 
                                           | (0x3fc0U 
                                              & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 0x12U)))) 
                              | (0x3fU & (__Vtemp112[3U] 
                                          >> 0x1aU)))));
        __Vtemp119[8U] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                       >> 9U)) | (0xfff80000U 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                                      << 0x17U) 
                                                     | (0x780000U 
                                                        & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                                           >> 9U)))));
        __Vtemp119[9U] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                       >> 9U)) | (0xfff80000U 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                                      << 0x17U) 
                                                     | (0x780000U 
                                                        & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                                           >> 9U)))));
        __Vtemp119[0xaU] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                         >> 9U)) | 
                            (0xfff80000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                             << 0x17U) 
                                            | (0x780000U 
                                               & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                                  >> 9U)))));
        __Vtemp119[0xbU] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                         >> 9U)) | 
                            (0xfff80000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                             << 0x17U) 
                                            | (0x780000U 
                                               & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                                  >> 9U)))));
        __Vtemp119[0xcU] = (0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                        >> 9U));
        tracep->fullWData(oldp+557,(__Vtemp119),403);
        tracep->fullQData(oldp+570,(((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                         | (- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                        & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                       | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                          & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                      | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                         & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                     | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                        & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))),64);
        tracep->fullBit(oldp+572,((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward) 
                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward)) 
                                   & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid))));
        tracep->fullQData(oldp+573,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                      ? ((((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                           << 0x24U) 
                                          | (((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                              << 4U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                >> 0x1cU))) 
                                         | vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                      : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                          ? (((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                   >> 0x1cU)))
                                          : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                              ? ((0xffffffffffffffe0ULL 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                       | ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                           << 4U) 
                                                                          | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                             >> 0x1cU)))))))
                                              : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                  ? 
                                                 ((0xffffffffffffffe0ULL 
                                                   & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                        & (~ 
                                                                           ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                             << 4U) 
                                                                            | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                               >> 0x1cU))))))))
                                                  : 
                                                 ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                   ? 
                                                  (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                   & (~ 
                                                      (((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                        << 0x24U) 
                                                       | (((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                           << 4U) 
                                                          | ((QData)((IData)(
                                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                             >> 0x1cU)))))
                                                   : 0ULL)))))),64);
        tracep->fullBit(oldp+575,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen));
        tracep->fullCData(oldp+576,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest),8);
        tracep->fullQData(oldp+577,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata),64);
        tracep->fullQData(oldp+579,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc),64);
        tracep->fullIData(oldp+581,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst),32);
        tracep->fullBit(oldp+582,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid));
        tracep->fullBit(oldp+583,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap));
        tracep->fullCData(oldp+584,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code),8);
        tracep->fullQData(oldp+585,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt),64);
        tracep->fullQData(oldp+587,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt),64);
        tracep->fullQData(oldp+589,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0]),64);
        tracep->fullQData(oldp+591,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[1]),64);
        tracep->fullQData(oldp+593,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[2]),64);
        tracep->fullQData(oldp+595,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[3]),64);
        tracep->fullQData(oldp+597,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[4]),64);
        tracep->fullQData(oldp+599,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[5]),64);
        tracep->fullQData(oldp+601,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[6]),64);
        tracep->fullQData(oldp+603,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[7]),64);
        tracep->fullQData(oldp+605,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[8]),64);
        tracep->fullQData(oldp+607,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[9]),64);
        tracep->fullQData(oldp+609,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[10]),64);
        tracep->fullQData(oldp+611,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[11]),64);
        tracep->fullQData(oldp+613,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[12]),64);
        tracep->fullQData(oldp+615,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[13]),64);
        tracep->fullQData(oldp+617,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[14]),64);
        tracep->fullQData(oldp+619,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[15]),64);
        tracep->fullQData(oldp+621,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[16]),64);
        tracep->fullQData(oldp+623,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[17]),64);
        tracep->fullQData(oldp+625,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[18]),64);
        tracep->fullQData(oldp+627,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[19]),64);
        tracep->fullQData(oldp+629,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[20]),64);
        tracep->fullQData(oldp+631,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[21]),64);
        tracep->fullQData(oldp+633,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[22]),64);
        tracep->fullQData(oldp+635,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[23]),64);
        tracep->fullQData(oldp+637,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[24]),64);
        tracep->fullQData(oldp+639,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[25]),64);
        tracep->fullQData(oldp+641,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[26]),64);
        tracep->fullQData(oldp+643,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[27]),64);
        tracep->fullQData(oldp+645,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[28]),64);
        tracep->fullQData(oldp+647,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[29]),64);
        tracep->fullQData(oldp+649,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[30]),64);
        tracep->fullQData(oldp+651,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[31]),64);
        tracep->fullQData(oldp+653,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_diff),64);
        tracep->fullQData(oldp+655,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_diff),64);
        tracep->fullQData(oldp+657,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mcause_diff),64);
        tracep->fullQData(oldp+659,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_diff),64);
        tracep->fullQData(oldp+661,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_diff),64);
        tracep->fullQData(oldp+663,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_diff),64);
        tracep->fullQData(oldp+665,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mscratch_diff),64);
        tracep->fullQData(oldp+667,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__sstatus_diff),64);
        tracep->fullIData(oldp+669,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__intrNO_diff),32);
        tracep->fullQData(oldp+670,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0U]),64);
        tracep->fullQData(oldp+672,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [1U]),64);
        tracep->fullQData(oldp+674,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [2U]),64);
        tracep->fullQData(oldp+676,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [3U]),64);
        tracep->fullQData(oldp+678,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [4U]),64);
        tracep->fullQData(oldp+680,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [5U]),64);
        tracep->fullQData(oldp+682,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [6U]),64);
        tracep->fullQData(oldp+684,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [7U]),64);
        tracep->fullQData(oldp+686,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [8U]),64);
        tracep->fullQData(oldp+688,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [9U]),64);
        tracep->fullQData(oldp+690,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0xaU]),64);
        tracep->fullQData(oldp+692,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0xbU]),64);
        tracep->fullQData(oldp+694,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0xcU]),64);
        tracep->fullQData(oldp+696,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0xdU]),64);
        tracep->fullQData(oldp+698,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0xeU]),64);
        tracep->fullQData(oldp+700,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0xfU]),64);
        tracep->fullQData(oldp+702,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x10U]),64);
        tracep->fullQData(oldp+704,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x11U]),64);
        tracep->fullQData(oldp+706,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x12U]),64);
        tracep->fullQData(oldp+708,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x13U]),64);
        tracep->fullQData(oldp+710,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x14U]),64);
        tracep->fullQData(oldp+712,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x15U]),64);
        tracep->fullQData(oldp+714,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x16U]),64);
        tracep->fullQData(oldp+716,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x17U]),64);
        tracep->fullQData(oldp+718,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x18U]),64);
        tracep->fullQData(oldp+720,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x19U]),64);
        tracep->fullQData(oldp+722,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x1aU]),64);
        tracep->fullQData(oldp+724,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x1bU]),64);
        tracep->fullQData(oldp+726,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x1cU]),64);
        tracep->fullQData(oldp+728,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x1dU]),64);
        tracep->fullQData(oldp+730,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x1eU]),64);
        tracep->fullQData(oldp+732,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                    [0x1fU]),64);
        tracep->fullCData(oldp+734,((7U & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code))),3);
        tracep->fullQData(oldp+735,(vlTOPp->SimTop__DOT__w_data[0]),64);
        tracep->fullQData(oldp+737,(vlTOPp->SimTop__DOT__w_data[1]),64);
        tracep->fullQData(oldp+739,(vlTOPp->SimTop__DOT__w_data[2]),64);
        tracep->fullQData(oldp+741,(vlTOPp->SimTop__DOT__w_data[3]),64);
        tracep->fullCData(oldp+743,(vlTOPp->SimTop__DOT__mem_req_strb),8);
        tracep->fullBit(oldp+744,(vlTOPp->SimTop__DOT__inst_ready));
        tracep->fullBit(oldp+745,(vlTOPp->SimTop__DOT__mem_req_wen));
        tracep->fullBit(oldp+746,(vlTOPp->SimTop__DOT__data_ready));
        tracep->fullQData(oldp+747,((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))),64);
        tracep->fullQData(oldp+749,((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data))),64);
        tracep->fullBit(oldp+751,(vlTOPp->SimTop__DOT__inst_req_valid));
        tracep->fullBit(oldp+752,(vlTOPp->SimTop__DOT__inst_req_wen));
        tracep->fullQData(oldp+753,((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))),64);
        tracep->fullWData(oldp+755,(vlTOPp->SimTop__DOT__mem_req_data),128);
        tracep->fullCData(oldp+759,(vlTOPp->SimTop__DOT__mem_req_size),2);
        tracep->fullBit(oldp+760,(vlTOPp->SimTop__DOT__mem_req_valid));
        tracep->fullBit(oldp+761,(vlTOPp->SimTop__DOT__mem_resp_valid));
        tracep->fullBit(oldp+762,(vlTOPp->SimTop__DOT__mem_req_wen));
        tracep->fullBit(oldp+763,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid));
        tracep->fullBit(oldp+764,(((IData)(vlTOPp->SimTop__DOT__inst_req_valid) 
                                   | (IData)(vlTOPp->SimTop__DOT__mem_req_valid))));
        tracep->fullBit(oldp+765,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren));
        tracep->fullBit(oldp+766,(((0U == (IData)(vlTOPp->SimTop__DOT__mem_req_size)) 
                                   & (~ (IData)(vlTOPp->SimTop__DOT__mem_req_wen)))));
        tracep->fullBit(oldp+767,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h));
        tracep->fullBit(oldp+768,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d));
        tracep->fullCData(oldp+769,((3U | ((1U & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                           | (7U & 
                                              (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))),4);
        tracep->fullQData(oldp+770,((0xfffffffffffffff8ULL 
                                     & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))),64);
        tracep->fullIData(oldp+772,(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr),32);
        tracep->fullIData(oldp+773,(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data),32);
        tracep->fullCData(oldp+774,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__state),3);
        tracep->fullBit(oldp+775,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen));
        tracep->fullWData(oldp+776,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata),129);
        tracep->fullBit(oldp+781,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready));
        tracep->fullBit(oldp+782,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill));
        tracep->fullIData(oldp+783,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__i),32);
        __Vtemp120[0U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U];
        __Vtemp120[1U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U];
        __Vtemp120[2U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U];
        __Vtemp120[3U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U];
        tracep->fullWData(oldp+784,(__Vtemp120),128);
        tracep->fullIData(oldp+788,(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr),32);
        tracep->fullWData(oldp+789,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb),128);
        tracep->fullCData(oldp+793,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__state),3);
        tracep->fullBit(oldp+794,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen));
        tracep->fullWData(oldp+795,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata),128);
        tracep->fullBit(oldp+799,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready));
        tracep->fullBit(oldp+800,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill));
        tracep->fullIData(oldp+801,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__i),32);
        tracep->fullBit(oldp+802,(vlTOPp->SimTop__DOT__inst_valid));
        tracep->fullQData(oldp+803,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc),64);
        tracep->fullBit(oldp+805,(vlTOPp->SimTop__DOT__br_stall));
        tracep->fullBit(oldp+806,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs));
        tracep->fullBit(oldp+807,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done));
        tracep->fullWData(oldp+808,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus),66);
        tracep->fullBit(oldp+811,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena));
        tracep->fullBit(oldp+812,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena));
        tracep->fullQData(oldp+813,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1),64);
        tracep->fullQData(oldp+815,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2),64);
        tracep->fullQData(oldp+817,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata),64);
        tracep->fullQData(oldp+819,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc),64);
        tracep->fullBit(oldp+821,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in));
        tracep->fullBit(oldp+822,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go));
        tracep->fullQData(oldp+823,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata),64);
        tracep->fullBit(oldp+825,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done));
        tracep->fullBit(oldp+826,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid));
        tracep->fullBit(oldp+827,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+828,((1U & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U])));
        tracep->fullQData(oldp+829,((((QData)((IData)(
                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U])))),64);
        tracep->fullBit(oldp+831,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go));
        tracep->fullBit(oldp+832,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in));
        tracep->fullQData(oldp+833,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1),64);
        tracep->fullQData(oldp+835,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2),64);
        tracep->fullBit(oldp+837,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward));
        tracep->fullBit(oldp+838,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward));
        tracep->fullQData(oldp+839,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value),64);
        tracep->fullQData(oldp+841,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value),64);
        tracep->fullBit(oldp+843,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken));
        tracep->fullQData(oldp+844,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target),64);
        tracep->fullCData(oldp+846,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type),6);
        tracep->fullBit(oldp+847,((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                   == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
        tracep->fullBit(oldp+848,((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                   != vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
        tracep->fullBit(oldp+849,((1U & (((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                           == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                          | ((~ (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                         >> 0x3fU))) 
                                             & (IData)(
                                                       (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                        >> 0x3fU)))) 
                                         | ((~ ((IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                         >> 0x3fU)) 
                                                ^ (IData)(
                                                          (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                           >> 0x3fU)))) 
                                            & (~ (IData)(
                                                         (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                          >> 0x3fU))))))));
        tracep->fullBit(oldp+850,((1U & (~ (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2)))));
        tracep->fullBit(oldp+851,((1U & (((IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                   >> 0x3fU)) 
                                          & (~ (IData)(
                                                       (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                        >> 0x3fU)))) 
                                         | ((~ ((IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                         >> 0x3fU)) 
                                                ^ (IData)(
                                                          (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                           >> 0x3fU)))) 
                                            & (IData)(
                                                      (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                       >> 0x3fU)))))));
        tracep->fullBit(oldp+852,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2));
        tracep->fullQData(oldp+853,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2),64);
        tracep->fullIData(oldp+855,((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc)),32);
        tracep->fullIData(oldp+856,((0xfffffU & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                         >> 0xcU)))),20);
        tracep->fullCData(oldp+857,((0xffU & (IData)(
                                                     (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                      >> 4U)))),8);
        tracep->fullCData(oldp+858,((0xfU & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc))),4);
        tracep->fullBit(oldp+859,(vlTOPp->SimTop__DOT__addr_valid));
        tracep->fullBit(oldp+860,(vlTOPp->SimTop__DOT__data_valid));
        tracep->fullQData(oldp+861,(vlTOPp->SimTop__DOT__data_read),64);
        tracep->fullQData(oldp+863,(vlTOPp->SimTop__DOT__data_write),64);
        tracep->fullQData(oldp+865,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64),64);
        tracep->fullCData(oldp+867,(vlTOPp->SimTop__DOT__data_size),2);
        tracep->fullBit(oldp+868,(vlTOPp->SimTop__DOT__data_wen));
        tracep->fullCData(oldp+869,(vlTOPp->SimTop__DOT__data_strb),8);
        tracep->fullWData(oldp+870,(vlTOPp->SimTop__DOT__inst_resp_data),128);
        tracep->fullBit(oldp+874,(vlTOPp->SimTop__DOT__inst_resp_valid));
        tracep->fullWData(oldp+875,(vlTOPp->SimTop__DOT__mem_resp_data),128);
        tracep->fullBit(oldp+879,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in));
        tracep->fullBit(oldp+880,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren));
        tracep->fullBit(oldp+881,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen));
        tracep->fullQData(oldp+882,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata),64);
        tracep->fullQData(oldp+884,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32),64);
        VL_EXTEND_WW(129,128, __Vtemp121, vlTOPp->SimTop__DOT__inst_resp_data);
        tracep->fullWData(oldp+886,(__Vtemp121),129);
        VL_EXTEND_WW(129,128, __Vtemp122, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        tracep->fullWData(oldp+891,(__Vtemp122),129);
        tracep->fullWData(oldp+896,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q),128);
        tracep->fullIData(oldp+900,((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)),32);
        tracep->fullIData(oldp+901,((0xfffffU & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 0xcU)))),20);
        tracep->fullCData(oldp+902,((0xffU & (IData)(
                                                     (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                      >> 4U)))),8);
        tracep->fullCData(oldp+903,((0xfU & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64))),4);
        tracep->fullQData(oldp+904,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb),64);
        tracep->fullQData(oldp+906,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data),64);
        tracep->fullWData(oldp+908,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out),128);
        tracep->fullQData(oldp+912,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data),64);
        tracep->fullBit(oldp+914,(((0xa7U == (0xffU 
                                              & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 4U)))) 
                                   & (IData)(vlTOPp->SimTop__DOT__data_valid))));
        tracep->fullBit(oldp+915,(((0xa7U == (0xffU 
                                              & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 4U)))) 
                                   & (IData)(vlTOPp->SimTop__DOT__data_wen))));
        tracep->fullBit(oldp+916,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in));
        tracep->fullBit(oldp+917,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go));
        tracep->fullBit(oldp+918,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done));
        tracep->fullBit(oldp+919,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty));
        tracep->fullBit(oldp+920,(vlTOPp->clock));
        tracep->fullBit(oldp+921,(vlTOPp->reset));
        tracep->fullQData(oldp+922,(vlTOPp->io_logCtrl_log_begin),64);
        tracep->fullQData(oldp+924,(vlTOPp->io_logCtrl_log_end),64);
        tracep->fullQData(oldp+926,(vlTOPp->io_logCtrl_log_level),64);
        tracep->fullBit(oldp+928,(vlTOPp->io_perfInfo_clean));
        tracep->fullBit(oldp+929,(vlTOPp->io_perfInfo_dump));
        tracep->fullBit(oldp+930,(vlTOPp->io_uart_out_valid));
        tracep->fullCData(oldp+931,(vlTOPp->io_uart_out_ch),8);
        tracep->fullBit(oldp+932,(vlTOPp->io_uart_in_valid));
        tracep->fullCData(oldp+933,(vlTOPp->io_uart_in_ch),8);
        tracep->fullBit(oldp+934,(vlTOPp->io_memAXI_0_aw_ready));
        tracep->fullBit(oldp+935,(vlTOPp->io_memAXI_0_aw_valid));
        tracep->fullQData(oldp+936,(vlTOPp->io_memAXI_0_aw_bits_addr),64);
        tracep->fullCData(oldp+938,(vlTOPp->io_memAXI_0_aw_bits_prot),3);
        tracep->fullCData(oldp+939,(vlTOPp->io_memAXI_0_aw_bits_id),4);
        tracep->fullBit(oldp+940,(vlTOPp->io_memAXI_0_aw_bits_user));
        tracep->fullCData(oldp+941,(vlTOPp->io_memAXI_0_aw_bits_len),8);
        tracep->fullCData(oldp+942,(vlTOPp->io_memAXI_0_aw_bits_size),3);
        tracep->fullCData(oldp+943,(vlTOPp->io_memAXI_0_aw_bits_burst),2);
        tracep->fullBit(oldp+944,(vlTOPp->io_memAXI_0_aw_bits_lock));
        tracep->fullCData(oldp+945,(vlTOPp->io_memAXI_0_aw_bits_cache),4);
        tracep->fullCData(oldp+946,(vlTOPp->io_memAXI_0_aw_bits_qos),4);
        tracep->fullBit(oldp+947,(vlTOPp->io_memAXI_0_w_ready));
        tracep->fullBit(oldp+948,(vlTOPp->io_memAXI_0_w_valid));
        tracep->fullQData(oldp+949,(vlTOPp->io_memAXI_0_w_bits_data[0]),64);
        tracep->fullQData(oldp+951,(vlTOPp->io_memAXI_0_w_bits_data[1]),64);
        tracep->fullQData(oldp+953,(vlTOPp->io_memAXI_0_w_bits_data[2]),64);
        tracep->fullQData(oldp+955,(vlTOPp->io_memAXI_0_w_bits_data[3]),64);
        tracep->fullCData(oldp+957,(vlTOPp->io_memAXI_0_w_bits_strb),8);
        tracep->fullBit(oldp+958,(vlTOPp->io_memAXI_0_w_bits_last));
        tracep->fullBit(oldp+959,(vlTOPp->io_memAXI_0_b_ready));
        tracep->fullBit(oldp+960,(vlTOPp->io_memAXI_0_b_valid));
        tracep->fullCData(oldp+961,(vlTOPp->io_memAXI_0_b_bits_resp),2);
        tracep->fullCData(oldp+962,(vlTOPp->io_memAXI_0_b_bits_id),4);
        tracep->fullBit(oldp+963,(vlTOPp->io_memAXI_0_b_bits_user));
        tracep->fullBit(oldp+964,(vlTOPp->io_memAXI_0_ar_ready));
        tracep->fullBit(oldp+965,(vlTOPp->io_memAXI_0_ar_valid));
        tracep->fullQData(oldp+966,(vlTOPp->io_memAXI_0_ar_bits_addr),64);
        tracep->fullCData(oldp+968,(vlTOPp->io_memAXI_0_ar_bits_prot),3);
        tracep->fullCData(oldp+969,(vlTOPp->io_memAXI_0_ar_bits_id),4);
        tracep->fullBit(oldp+970,(vlTOPp->io_memAXI_0_ar_bits_user));
        tracep->fullCData(oldp+971,(vlTOPp->io_memAXI_0_ar_bits_len),8);
        tracep->fullCData(oldp+972,(vlTOPp->io_memAXI_0_ar_bits_size),3);
        tracep->fullCData(oldp+973,(vlTOPp->io_memAXI_0_ar_bits_burst),2);
        tracep->fullBit(oldp+974,(vlTOPp->io_memAXI_0_ar_bits_lock));
        tracep->fullCData(oldp+975,(vlTOPp->io_memAXI_0_ar_bits_cache),4);
        tracep->fullCData(oldp+976,(vlTOPp->io_memAXI_0_ar_bits_qos),4);
        tracep->fullBit(oldp+977,(vlTOPp->io_memAXI_0_r_ready));
        tracep->fullBit(oldp+978,(vlTOPp->io_memAXI_0_r_valid));
        tracep->fullCData(oldp+979,(vlTOPp->io_memAXI_0_r_bits_resp),2);
        tracep->fullQData(oldp+980,(vlTOPp->io_memAXI_0_r_bits_data[0]),64);
        tracep->fullQData(oldp+982,(vlTOPp->io_memAXI_0_r_bits_data[1]),64);
        tracep->fullQData(oldp+984,(vlTOPp->io_memAXI_0_r_bits_data[2]),64);
        tracep->fullQData(oldp+986,(vlTOPp->io_memAXI_0_r_bits_data[3]),64);
        tracep->fullBit(oldp+988,(vlTOPp->io_memAXI_0_r_bits_last));
        tracep->fullCData(oldp+989,(vlTOPp->io_memAXI_0_r_bits_id),4);
        tracep->fullBit(oldp+990,(vlTOPp->io_memAXI_0_r_bits_user));
        tracep->fullQData(oldp+991,(vlTOPp->io_memAXI_0_r_bits_data
                                    [0U]),64);
        VL_EXTEND_WW(129,128, __Vtemp123, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp124, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp125, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp126, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        tracep->fullQData(oldp+993,((QData)((IData)(
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                                  >> 2U))))
                                                      ? 
                                                     __Vtemp123[0U]
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                                   >> 2U))))
                                                       ? 
                                                      __Vtemp124[1U]
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(
                                                                   (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                                    >> 2U))))
                                                        ? 
                                                       __Vtemp125[2U]
                                                        : 
                                                       __Vtemp126[3U])))))),64);
        tracep->fullQData(oldp+995,(((1U & (IData)(
                                                   ((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)) 
                                                    >> 3U)))
                                      ? (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__mem_resp_data[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->SimTop__DOT__mem_resp_data[2U])))
                                      : (((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__mem_resp_data[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->SimTop__DOT__mem_resp_data[0U]))))),64);
        tracep->fullBit(oldp+997,(((IData)(vlTOPp->io_memAXI_0_aw_ready) 
                                   & (1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))));
        tracep->fullBit(oldp+998,(((IData)(vlTOPp->io_memAXI_0_ar_ready) 
                                   & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr))));
        tracep->fullBit(oldp+999,(((IData)(vlTOPp->SimTop__DOT__mem_req_wen)
                                    ? (IData)(vlTOPp->io_memAXI_0_b_valid)
                                    : (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done))));
        tracep->fullBit(oldp+1000,((((IData)(vlTOPp->reset) 
                                     | ((IData)(vlTOPp->SimTop__DOT__mem_req_wen) 
                                        & (0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))) 
                                    | (0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))));
        tracep->fullBit(oldp+1001,(((1U != (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__len)) 
                                    & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs) 
                                       | (IData)(vlTOPp->io_memAXI_0_r_valid)))));
        tracep->fullBit(oldp+1002,(((IData)(vlTOPp->io_memAXI_0_b_valid) 
                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready))));
        tracep->fullCData(oldp+1003,(((IData)(vlTOPp->SimTop__DOT__mem_req_wen)
                                       ? (IData)(vlTOPp->io_memAXI_0_b_bits_resp)
                                       : (IData)(vlTOPp->io_memAXI_0_r_bits_resp))),2);
        __Vtemp140[9U] = ((0xf8000000U & (((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                             | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                            | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                           | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw)) 
                                          << 0x1bU)) 
                          | ((0xfc000000U & ((((((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                                  | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                                 | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                                | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                               | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                              | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu)) 
                                             << 0x1aU)) 
                             | ((0xfe000000U & ((((
                                                   ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                  | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                 | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                << 0x19U)) 
                                | ((0xff000000U & (
                                                   (((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                     | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                   << 0x18U)) 
                                   | (0xffffffU & ((IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                                            >> 0x20U)) 
                                                   >> 8U))))));
        __Vtemp141[0U] = ((0xffffffc0U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                          << 6U)) | 
                          ((((IData)(vlTOPp->reset)
                              ? 0U : (1U & ((((0x10U 
                                               == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                              | (0x20U 
                                                 == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                             | (8U 
                                                == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                            | (2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))))) 
                            << 5U) | ((IData)(vlTOPp->reset)
                                       ? 0U : (((((0x10U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                  | (0x20U 
                                                     == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                 | (8U 
                                                    == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                | (2U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                                ? (0x1fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                       << 0x19U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                         >> 7U)))
                                                : 0U))));
        __Vtemp141[1U] = ((0x3fU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                     << 6U)));
        __Vtemp141[2U] = ((0x3fU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                                                     << 6U)));
        __Vtemp141[3U] = ((0xff000000U & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                          << 0x18U)) 
                          | ((0xe00000U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                           << 9U)) 
                             | ((0x1fc000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                               << 0x15U) 
                                              | (0x1fc000U 
                                                 & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0xbU)))) 
                                | ((0xffffffc0U & (
                                                   ((IData)(vlTOPp->reset)
                                                     ? 0U
                                                     : 
                                                    (0x7fU 
                                                     & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])) 
                                                   << 6U)) 
                                   | (0x3fU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                                               >> 0x1aU))))));
        __Vtemp141[4U] = ((0xffffffU & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(
                                                              (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
        __Vtemp141[5U] = ((0xffffffU & ((IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                      << 0x18U)));
        __Vtemp141[6U] = ((0xffffffU & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(
                                                              (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
        __Vtemp141[7U] = ((0xffffffU & ((IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                                      << 0x18U)));
        __Vtemp141[8U] = ((0xffffffU & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(
                                                              (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
        __Vtemp141[9U] = ((0xf0000000U & (((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                             ? 1U : 
                                            ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                              ? 2U : 
                                             ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                               ? 3U
                                               : 0U)))) 
                                          << 0x1cU)) 
                          | __Vtemp140[9U]);
        __Vtemp141[0xaU] = ((0xfffffffU & (((IData)(vlTOPp->reset)
                                             ? 0U : 
                                            ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                              ? 1U : 
                                             ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                               ? 2U
                                               : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                   ? 3U
                                                   : 0U)))) 
                                           >> 4U)) 
                            | (0xf0000000U & ((IData)(
                                                      ((IData)(vlTOPp->reset)
                                                        ? 0ULL
                                                        : 
                                                       (((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                         | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                         : 0ULL))) 
                                              << 0x1cU)));
        __Vtemp141[0xbU] = ((0xfffffffU & ((IData)(
                                                   ((IData)(vlTOPp->reset)
                                                     ? 0ULL
                                                     : 
                                                    (((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                      : 0ULL))) 
                                           >> 4U)) 
                            | (0xf0000000U & ((IData)(
                                                      (((IData)(vlTOPp->reset)
                                                         ? 0ULL
                                                         : 
                                                        (((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                          | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                          ? 
                                                         (((QData)((IData)(
                                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                          : 0ULL)) 
                                                       >> 0x20U)) 
                                              << 0x1cU)));
        __Vtemp141[0xcU] = ((0xfffffffU & ((IData)(
                                                   (((IData)(vlTOPp->reset)
                                                      ? 0ULL
                                                      : 
                                                     (((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                       : 0ULL)) 
                                                    >> 0x20U)) 
                                           >> 4U)) 
                            | (0xf0000000U & ((IData)(
                                                      ((IData)(vlTOPp->reset)
                                                        ? 0ULL
                                                        : 
                                                       ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                         ? 0xbULL
                                                         : 
                                                        ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                          ? 0x29aULL
                                                          : 
                                                         ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                           ? 0x8000000000000007ULL
                                                           : 0ULL))))) 
                                              << 0x1cU)));
        __Vtemp141[0xdU] = ((0xfffffffU & ((IData)(
                                                   ((IData)(vlTOPp->reset)
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                      ? 0xbULL
                                                      : 
                                                     ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                       ? 0x29aULL
                                                       : 
                                                      ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                        ? 0x8000000000000007ULL
                                                        : 0ULL))))) 
                                           >> 4U)) 
                            | (0xf0000000U & ((IData)(
                                                      (((IData)(vlTOPp->reset)
                                                         ? 0ULL
                                                         : 
                                                        ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                          ? 0xbULL
                                                          : 
                                                         ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                           ? 0x29aULL
                                                           : 
                                                          ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                            ? 0x8000000000000007ULL
                                                            : 0ULL)))) 
                                                       >> 0x20U)) 
                                              << 0x1cU)));
        __Vtemp141[0xeU] = ((0xfffffffU & ((IData)(
                                                   (((IData)(vlTOPp->reset)
                                                      ? 0ULL
                                                      : 
                                                     ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                       ? 0xbULL
                                                       : 
                                                      ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                        ? 0x29aULL
                                                        : 
                                                       ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                         ? 0x8000000000000007ULL
                                                         : 0ULL)))) 
                                                    >> 0x20U)) 
                                           >> 4U)) 
                            | (0xf0000000U & ((IData)(
                                                      ((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                           | (- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                          & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                         | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                            & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                        | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                           & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                       | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                          & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))) 
                                              << 0x1cU)));
        __Vtemp141[0xfU] = ((0xfffffffU & ((IData)(
                                                   ((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                        | (- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                      | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                         & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                     | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                        & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                    | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))) 
                                           >> 4U)) 
                            | (0xf0000000U & ((IData)(
                                                      (((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                            | (- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                           & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                          | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                             & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                         | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                            & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                        | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                           & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1)) 
                                                       >> 0x20U)) 
                                              << 0x1cU)));
        __Vtemp141[0x10U] = (0xfffffffU & ((IData)(
                                                   (((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                         | (- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                        & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                       | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                          & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                      | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                         & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                     | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                        & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1)) 
                                                    >> 0x20U)) 
                                           >> 4U));
        tracep->fullWData(oldp+1004,(__Vtemp141),540);
        tracep->fullCData(oldp+1021,(((IData)(vlTOPp->reset)
                                       ? 0U : (((((
                                                   (0x10U 
                                                    == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                   | (1U 
                                                      == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                  | (8U 
                                                     == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                 | (4U 
                                                    == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my))
                                                ? (0x1fU 
                                                   & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1))
                                                : 0U))),5);
        tracep->fullCData(oldp+1022,(((IData)(vlTOPp->reset)
                                       ? 0U : ((((8U 
                                                  == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                 | (1U 
                                                    == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                | (4U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                                ? (0x1fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                         >> 0x14U)))
                                                : 0U))),5);
        tracep->fullQData(oldp+1023,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
                                       ? ((0x2004000ULL 
                                           == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                                           ? vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp
                                           : ((0x200bff8ULL 
                                               == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                                               ? vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime
                                               : 0ULL))
                                       : 0ULL)),64);
        tracep->fullBit(oldp+1025,((1U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                           >> 0x1aU) 
                                          & (~ (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done))))));
        tracep->fullBit(oldp+1026,(((((0x7bU == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
                                     | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen)) 
                                    | (((0xb00U == 
                                         (0xfffU & 
                                          ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                            << 8U) 
                                           | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                              >> 0x18U)))) 
                                        & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                           >> 0x18U)) 
                                       & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                          >> 0x19U)))));
        tracep->fullBit(oldp+1027,((1U & (~ (IData)(vlTOPp->reset)))));
        tracep->fullBit(oldp+1028,(((IData)(vlTOPp->reset)
                                     ? 0U : (1U & (
                                                   (((0x10U 
                                                      == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                     | (0x20U 
                                                        == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                    | (8U 
                                                       == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (2U 
                                                      == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))))));
        tracep->fullCData(oldp+1029,(((IData)(vlTOPp->reset)
                                       ? 0U : (((((0x10U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                  | (0x20U 
                                                     == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                 | (8U 
                                                    == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                | (2U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                                ? (0x1fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                       << 0x19U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                         >> 7U)))
                                                : 0U))),5);
        tracep->fullCData(oldp+1030,(((IData)(vlTOPp->reset)
                                       ? 0U : (0x7fU 
                                               & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))),8);
        tracep->fullQData(oldp+1031,(((IData)(vlTOPp->reset)
                                       ? 0ULL : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                  ? 0xbULL
                                                  : 
                                                 ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                   ? 0x29aULL
                                                   : 
                                                  ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                    ? 0x8000000000000007ULL
                                                    : 0ULL))))),64);
        tracep->fullQData(oldp+1033,(((IData)(vlTOPp->reset)
                                       ? 0ULL : (((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                  | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                  : 0ULL))),64);
        tracep->fullIData(oldp+1035,(((IData)(vlTOPp->reset)
                                       ? 0U : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                ? 1U
                                                : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                     ? 3U
                                                     : 0U))))),32);
        tracep->fullQData(oldp+1036,(((((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb))) 
                                            & ((0xffffffffffffff00ULL 
                                                & ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 7U)))))) 
                                                   << 8U)) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                           | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu))) 
                                              & (QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                          | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh))) 
                                             & ((0xffffffffffff0000ULL 
                                                 & ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U)) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))))))) 
                                         | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu))) 
                                            & (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                        | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw))) 
                                           & (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 0x1fU))))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))))) 
                                       | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu))) 
                                          & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))) 
                                      | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld))) 
                                         & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))),64);
        VL_EXTEND_WW(129,128, __Vtemp142, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp143, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp144, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp145, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        tracep->fullIData(oldp+1038,(((0U == (3U & (IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                            >> 2U))))
                                       ? __Vtemp142[0U]
                                       : ((1U == (3U 
                                                  & (IData)(
                                                            (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                             >> 2U))))
                                           ? __Vtemp143[1U]
                                           : ((2U == 
                                               (3U 
                                                & (IData)(
                                                          (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                           >> 2U))))
                                               ? __Vtemp144[2U]
                                               : __Vtemp145[3U])))),32);
        tracep->fullBit(oldp+1039,((((vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__tag
                                      [(0xffU & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                         >> 4U)))] 
                                      == (0xfffffU 
                                          & (IData)(
                                                    (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                     >> 0xcU)))) 
                                     & vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__valid
                                     [(0xffU & (IData)(
                                                       (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                        >> 4U)))]) 
                                    & (IData)(vlTOPp->SimTop__DOT__inst_valid))));
        tracep->fullBit(oldp+1040,((vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty
                                    [(0xffU & (IData)(
                                                      (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                       >> 4U)))] 
                                    & (IData)(vlTOPp->SimTop__DOT__inst_valid))));
        tracep->fullBit(oldp+1041,(((((vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag
                                       [(0xffU & (IData)(
                                                         (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 4U)))] 
                                       == (0xfffffU 
                                           & (IData)(
                                                     (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                      >> 0xcU)))) 
                                      & vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid
                                      [(0xffU & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 4U)))]) 
                                     & (IData)(vlTOPp->SimTop__DOT__data_valid)) 
                                    & (0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)))));
        tracep->fullBit(oldp+1042,(((0xa7U == (0xffU 
                                               & (IData)(
                                                         (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 4U)))) 
                                    & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty))));
        tracep->fullCData(oldp+1043,(0U),3);
        tracep->fullCData(oldp+1044,(0U),4);
        tracep->fullBit(oldp+1045,(0U));
        tracep->fullCData(oldp+1046,(0U),8);
        tracep->fullCData(oldp+1047,(3U),3);
        tracep->fullCData(oldp+1048,(1U),2);
        tracep->fullBit(oldp+1049,(0U));
        tracep->fullCData(oldp+1050,(2U),4);
        tracep->fullBit(oldp+1051,(1U));
        tracep->fullCData(oldp+1052,(1U),8);
        tracep->fullCData(oldp+1053,(2U),2);
        tracep->fullIData(oldp+1054,(0x40U),32);
        tracep->fullIData(oldp+1055,(4U),32);
        tracep->fullIData(oldp+1056,(1U),32);
        tracep->fullCData(oldp+1057,(1U),3);
        tracep->fullCData(oldp+1058,(2U),3);
        tracep->fullCData(oldp+1059,(4U),3);
        tracep->fullCData(oldp+1060,(5U),3);
        tracep->fullCData(oldp+1061,(6U),3);
        tracep->fullIData(oldp+1062,(3U),32);
        tracep->fullIData(oldp+1063,(6U),32);
        tracep->fullIData(oldp+1064,(0x80U),32);
        tracep->fullIData(oldp+1065,(2U),32);
        tracep->fullCData(oldp+1066,(0x3fU),6);
        tracep->fullQData(oldp+1067,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_o),64);
        tracep->fullBit(oldp+1069,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__if_valid_in));
        tracep->fullQData(oldp+1070,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtime),64);
        tracep->fullQData(oldp+1072,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mip),64);
        tracep->fullCData(oldp+1074,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__DifftestInstrCommit__DOT__special),8);
        tracep->fullIData(oldp+1075,(0U),32);
        tracep->fullCData(oldp+1076,(3U),2);
        tracep->fullQData(oldp+1077,(0ULL),64);
        tracep->fullIData(oldp+1079,(0x100U),32);
        tracep->fullCData(oldp+1080,(7U),3);
        tracep->fullIData(oldp+1081,(8U),32);
    }
}
