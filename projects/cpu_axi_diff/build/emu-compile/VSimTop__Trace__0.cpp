// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep);

void VSimTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_top_0\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSimTop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VSimTop___024root__trace_chg_sub_0(VSimTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_haaa0b37e__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a2ca9a8__0;
    VlWide<4>/*127:0*/ __Vtemp_h84c25bb5__0;
    VlWide<4>/*127:0*/ __Vtemp_hcfd8a178__0;
    VlWide<4>/*127:0*/ __Vtemp_habc81ae8__0;
    VlWide<4>/*127:0*/ __Vtemp_he9a74f82__0;
    VlWide<4>/*127:0*/ __Vtemp_he6ef4e2b__0;
    VlWide<4>/*127:0*/ __Vtemp_h16448bb4__0;
    VlWide<13>/*415:0*/ __Vtemp_hbb7b0089__0;
    VlWide<4>/*127:0*/ __Vtemp_hea88ef7a__0;
    VlWide<5>/*159:0*/ __Vtemp_h012cf8eb__0;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__0;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__1;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__2;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__3;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__4;
    VlWide<17>/*543:0*/ __Vtemp_h4ce52b73__0;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__5;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__6;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__7;
    VlWide<5>/*159:0*/ __Vtemp_hd5096001__8;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->chgBit(oldp+1,((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->chgBit(oldp+2,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr));
        tracep->chgCData(oldp+3,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__rw_resp),2);
        tracep->chgCData(oldp+4,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state),3);
        tracep->chgCData(oldp+5,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state),3);
        tracep->chgBit(oldp+6,((0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->chgBit(oldp+7,((3U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
        tracep->chgBit(oldp+8,((0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))));
        tracep->chgBit(oldp+9,(((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))));
        tracep->chgCData(oldp+10,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len),8);
        tracep->chgBit(oldp+11,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
        tracep->chgBit(oldp+12,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok));
        tracep->chgBit(oldp+13,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
        tracep->chgWData(oldp+14,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data),96);
        __Vtemp_haaa0b37e__0[0U] = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst;
        __Vtemp_haaa0b37e__0[1U] = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc);
        __Vtemp_haaa0b37e__0[2U] = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc 
                                            >> 0x20U));
        tracep->chgWData(oldp+17,(__Vtemp_haaa0b37e__0),96);
        tracep->chgWData(oldp+20,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data),540);
        tracep->chgWData(oldp+37,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data),403);
        tracep->chgWData(oldp+50,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data),403);
        tracep->chgQData(oldp+63,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                    << 0x3aU) | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U])) 
                                                    >> 6U)))),64);
        tracep->chgIData(oldp+65,(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
                                    << 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                                 >> 6U))),32);
        tracep->chgBit(oldp+66,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen));
        tracep->chgCData(oldp+67,((0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])),5);
        tracep->chgQData(oldp+68,((((QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))),64);
        tracep->chgBit(oldp+70,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid));
        tracep->chgQData(oldp+71,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0]),64);
        tracep->chgQData(oldp+73,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[1]),64);
        tracep->chgQData(oldp+75,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[2]),64);
        tracep->chgQData(oldp+77,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[3]),64);
        tracep->chgQData(oldp+79,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[4]),64);
        tracep->chgQData(oldp+81,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[5]),64);
        tracep->chgQData(oldp+83,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[6]),64);
        tracep->chgQData(oldp+85,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[7]),64);
        tracep->chgQData(oldp+87,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[8]),64);
        tracep->chgQData(oldp+89,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[9]),64);
        tracep->chgQData(oldp+91,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[10]),64);
        tracep->chgQData(oldp+93,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[11]),64);
        tracep->chgQData(oldp+95,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[12]),64);
        tracep->chgQData(oldp+97,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[13]),64);
        tracep->chgQData(oldp+99,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[14]),64);
        tracep->chgQData(oldp+101,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[15]),64);
        tracep->chgQData(oldp+103,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[16]),64);
        tracep->chgQData(oldp+105,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[17]),64);
        tracep->chgQData(oldp+107,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[18]),64);
        tracep->chgQData(oldp+109,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[19]),64);
        tracep->chgQData(oldp+111,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[20]),64);
        tracep->chgQData(oldp+113,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[21]),64);
        tracep->chgQData(oldp+115,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[22]),64);
        tracep->chgQData(oldp+117,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[23]),64);
        tracep->chgQData(oldp+119,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[24]),64);
        tracep->chgQData(oldp+121,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[25]),64);
        tracep->chgQData(oldp+123,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[26]),64);
        tracep->chgQData(oldp+125,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[27]),64);
        tracep->chgQData(oldp+127,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[28]),64);
        tracep->chgQData(oldp+129,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[29]),64);
        tracep->chgQData(oldp+131,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[30]),64);
        tracep->chgQData(oldp+133,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[31]),64);
        tracep->chgBit(oldp+135,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                        >> 0x19U))));
        tracep->chgBit(oldp+136,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                        >> 0x12U))));
        tracep->chgSData(oldp+137,((0xfffU & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                               << 8U) 
                                              | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 0x18U)))),12);
        tracep->chgSData(oldp+138,((0xfffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                              >> 6U))),12);
        tracep->chgQData(oldp+139,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                                     >> 6U)))),64);
        tracep->chgBit(oldp+141,((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                          << 0xdU) 
                                         | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                            >> 0x13U)))));
        tracep->chgQData(oldp+142,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                     >> 0x13U)))),64);
        tracep->chgQData(oldp+144,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U])) 
                                                     >> 0x13U)))),64);
        tracep->chgIData(oldp+146,(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                     << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                 >> 0x13U))),32);
        tracep->chgQData(oldp+147,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o),64);
        tracep->chgQData(oldp+149,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o),64);
        tracep->chgQData(oldp+151,(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex)
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                              >> 0x13U)))
                                     : ((IData)((0x4d080U 
                                                 == 
                                                 (0x7ffc0U 
                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                                  >> 6U)))
                                         : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause))),64);
        tracep->chgQData(oldp+153,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o),64);
        tracep->chgQData(oldp+155,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o),64);
        tracep->chgQData(oldp+157,(((IData)((0x4d000U 
                                             == (0x7ffc0U 
                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                              >> 6U)))
                                     : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch)),64);
        tracep->chgBit(oldp+159,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid));
        tracep->chgBit(oldp+160,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid));
        tracep->chgBit(oldp+161,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in));
        tracep->chgBit(oldp+162,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid));
        tracep->chgBit(oldp+163,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in));
        tracep->chgCData(oldp+164,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest),5);
        tracep->chgCData(oldp+165,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest),5);
        tracep->chgQData(oldp+166,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))),64);
        tracep->chgCData(oldp+168,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest),5);
        tracep->chgBit(oldp+169,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
                                        >> 0x12U))));
        tracep->chgBit(oldp+170,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int));
        tracep->chgBit(oldp+171,((0x7bU == (0xffU & 
                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 6U)))));
        tracep->chgQData(oldp+172,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                     << 0x28U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                     >> 0x18U)))),64);
        tracep->chgQData(oldp+174,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc),64);
        tracep->chgIData(oldp+176,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst),32);
        tracep->chgQData(oldp+177,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc),64);
        tracep->chgQData(oldp+179,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc),64);
        tracep->chgBit(oldp+181,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid));
        tracep->chgBit(oldp+182,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid));
        tracep->chgBit(oldp+183,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait));
        tracep->chgBit(oldp+184,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid));
        tracep->chgBit(oldp+185,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready));
        tracep->chgCData(oldp+186,((0x7fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])),7);
        tracep->chgCData(oldp+187,((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 7U))),5);
        tracep->chgCData(oldp+188,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1),5);
        tracep->chgSData(oldp+189,((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0x14U)),12);
        tracep->chgIData(oldp+190,((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0xcU)),20);
        tracep->chgCData(oldp+191,((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 0x14U))),5);
        tracep->chgIData(oldp+192,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm),21);
        tracep->chgSData(oldp+193,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm),13);
        tracep->chgSData(oldp+194,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm),12);
        tracep->chgQData(oldp+195,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))),64);
        tracep->chgIData(oldp+197,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]),32);
        tracep->chgCData(oldp+198,((7U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+199,((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0x19U)),7);
        tracep->chgBit(oldp+200,(((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw))));
        tracep->chgBit(oldp+201,((((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                     | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu))));
        tracep->chgBit(oldp+202,((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                     | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))));
        tracep->chgBit(oldp+203,((IData)((0x13U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+204,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh));
        tracep->chgBit(oldp+205,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu));
        tracep->chgBit(oldp+206,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw));
        tracep->chgBit(oldp+207,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu));
        tracep->chgBit(oldp+208,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld));
        tracep->chgBit(oldp+209,((IData)((0x2013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+210,((IData)((0x3013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+211,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr));
        tracep->chgBit(oldp+212,((IData)((0x1bU == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+213,((IData)((0x501bU == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+214,((IData)((0x4000501bU 
                                          == (0xfc00707fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+215,((IData)((0x101bU == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+216,((IData)((0x40005013U 
                                          == (0xfc00707fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+217,((IData)((0x1013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+218,((IData)((0x5013U == 
                                          (0xfc00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+219,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb));
        tracep->chgBit(oldp+220,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu));
        tracep->chgBit(oldp+221,((IData)((0x7013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+222,((IData)((0x4013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+223,((IData)((0x6013U == 
                                          (0x707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+224,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs));
        tracep->chgBit(oldp+225,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw));
        tracep->chgBit(oldp+226,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc));
        tracep->chgBit(oldp+227,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci));
        tracep->chgBit(oldp+228,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi));
        tracep->chgBit(oldp+229,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall));
        tracep->chgBit(oldp+230,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret));
        tracep->chgBit(oldp+231,((IData)((0x17U == 
                                          (0x7fU & 
                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+232,((IData)((0x37U == 
                                          (0x7fU & 
                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+233,((IData)((0x3bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+234,((IData)((0x4000003bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+235,((IData)((0x103bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+236,((IData)((0x4000503bU 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+237,((IData)((0x503bU == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+238,((IData)((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+239,((IData)((0x5033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+240,((IData)((0x40005033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+241,((IData)((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+242,((IData)((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+243,((IData)((0x7033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+244,((IData)((0x6033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+245,((IData)((0x4033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+246,((IData)((0x2033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+247,((IData)((0x3033U == 
                                          (0xfe00707fU 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
        tracep->chgBit(oldp+248,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal));
        tracep->chgBit(oldp+249,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq));
        tracep->chgBit(oldp+250,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne));
        tracep->chgBit(oldp+251,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge));
        tracep->chgBit(oldp+252,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt));
        tracep->chgBit(oldp+253,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu));
        tracep->chgBit(oldp+254,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu));
        tracep->chgBit(oldp+255,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd));
        tracep->chgBit(oldp+256,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh));
        tracep->chgBit(oldp+257,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb));
        tracep->chgBit(oldp+258,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw));
        tracep->chgBit(oldp+259,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my));
        tracep->chgBit(oldp+260,((IData)((0x4c0U == 
                                          (0xe03fc0U 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+261,((IData)((0x6c0U == 
                                          (0xe03fc0U 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+262,((IData)((0xa006c0U 
                                          == (0xffbfc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+263,((IData)((0xa806c0U 
                                          == (0xffbfc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+264,((IData)((0x2006c0U 
                                          == (0xffbfc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+265,((0x17U == (0xffU & 
                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 6U)))));
        tracep->chgBit(oldp+266,((0x37U == (0xffU & 
                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 6U)))));
        tracep->chgBit(oldp+267,((0x6fU == (0xffU & 
                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 6U)))));
        tracep->chgBit(oldp+268,((IData)((0xec0U == 
                                          (0xffffc0U 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+269,((IData)((0x80ec0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+270,((IData)((0x200ec0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+271,((IData)((0xa80ec0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+272,((IData)((0xa00ec0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+273,((IData)((0x400cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+274,((IData)((0x600cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+275,((IData)((0x4004c0U 
                                          == (0xe03fc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+276,((IData)((0x6004c0U 
                                          == (0xe03fc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+277,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh));
        tracep->chgBit(oldp+278,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu));
        tracep->chgBit(oldp+279,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw));
        tracep->chgBit(oldp+280,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu));
        tracep->chgBit(oldp+281,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld));
        tracep->chgBit(oldp+282,((IData)((0x19c0U == 
                                          (0xe03fc0U 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+283,((IData)((0x80cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+284,((IData)((0xcc0U == 
                                          (0xffffc0U 
                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+285,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw));
        tracep->chgBit(oldp+286,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd));
        tracep->chgBit(oldp+287,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh));
        tracep->chgBit(oldp+288,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb));
        tracep->chgBit(oldp+289,((IData)((0xa804c0U 
                                          == (0xffbfc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+290,((IData)((0x2004c0U 
                                          == (0xffbfc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+291,((IData)((0xa004c0U 
                                          == (0xffbfc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+292,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb));
        tracep->chgBit(oldp+293,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu));
        tracep->chgBit(oldp+294,((IData)((0xe00cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+295,((IData)((0xc00cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+296,((IData)((0xa00cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+297,((IData)((0x200cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+298,((IData)((0xa80cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+299,((IData)((0xe004c0U 
                                          == (0xe03fc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+300,((IData)((0x8004c0U 
                                          == (0xe03fc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+301,((IData)((0xc004c0U 
                                          == (0xe03fc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+302,((IData)((0x800cc0U 
                                          == (0xffffc0U 
                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))));
        tracep->chgBit(oldp+303,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs));
        tracep->chgBit(oldp+304,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw));
        tracep->chgBit(oldp+305,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc));
        tracep->chgBit(oldp+306,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi));
        tracep->chgBit(oldp+307,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci));
        tracep->chgQData(oldp+308,((4ULL + (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                  >> 6U))))),64);
        tracep->chgQData(oldp+310,((1ULL + ((((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                   >> 0x18U))) 
                                            + (~ (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                        >> 0x18U))))))),64);
        tracep->chgQData(oldp+312,(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U))) 
                                    + (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                   >> 0x18U))))),64);
        tracep->chgQData(oldp+314,(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U))) 
                                    & (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                   >> 0x18U))))),64);
        tracep->chgQData(oldp+316,(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U))) 
                                    | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                   >> 0x18U))))),64);
        tracep->chgQData(oldp+318,(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U))) 
                                    << (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 0x18U)))),64);
        tracep->chgQData(oldp+320,(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U))) 
                                    >> (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 0x18U)))),64);
        tracep->chgQData(oldp+322,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))),64);
        tracep->chgQData(oldp+324,(((((QData)((IData)(
                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                      << 0x28U) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                      >> 0x18U))) 
                                    ^ (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                         << 8U) | ((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                   >> 0x18U))))),64);
        tracep->chgWData(oldp+326,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res),128);
        tracep->chgQData(oldp+330,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res),64);
        tracep->chgIData(oldp+332,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res),32);
        tracep->chgIData(oldp+333,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res),32);
        tracep->chgQData(oldp+334,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res),64);
        tracep->chgQData(oldp+336,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res),64);
        tracep->chgQData(oldp+338,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res),64);
        tracep->chgQData(oldp+340,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res),64);
        tracep->chgQData(oldp+342,((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))),64);
        tracep->chgQData(oldp+344,((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))),64);
        tracep->chgBit(oldp+346,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2));
        tracep->chgBit(oldp+347,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2));
        tracep->chgQData(oldp+348,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                     >> 6U)))),64);
        tracep->chgIData(oldp+350,(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U] 
                                     << 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                                                  >> 6U))),32);
        tracep->chgBit(oldp+351,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                                        >> 5U))));
        tracep->chgCData(oldp+352,((0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])),5);
        tracep->chgCData(oldp+353,((7U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                          >> 0x15U))),3);
        tracep->chgCData(oldp+354,((0x7fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 0xeU))),7);
        tracep->chgCData(oldp+355,((0xffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 6U))),8);
        tracep->chgQData(oldp+356,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                     << 0x28U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                     >> 0x18U)))),64);
        tracep->chgQData(oldp+358,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                     << 0x28U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U])) 
                                                   << 8U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                     >> 0x18U)))),64);
        tracep->chgBit(oldp+360,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                        >> 0x1bU))));
        tracep->chgBit(oldp+361,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                        >> 0x1aU))));
        tracep->chgBit(oldp+362,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                        >> 0x18U))));
        tracep->chgQData(oldp+363,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                     >> 0x1cU)))),64);
        tracep->chgQData(oldp+365,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU])) 
                                                     >> 0x1cU)))),64);
        tracep->chgQData(oldp+367,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU])) 
                                     << 0x24U) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU])) 
                                                   << 4U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU])) 
                                                     >> 0x1cU)))),64);
        tracep->chgIData(oldp+369,(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                     << 4U) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                               >> 0x1cU))),32);
        tracep->chgQData(oldp+370,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[4U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U])) 
                                                     >> 6U)))),64);
        tracep->chgIData(oldp+372,(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U] 
                                     << 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                                                  >> 6U))),32);
        tracep->chgBit(oldp+373,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                                        >> 5U))));
        tracep->chgCData(oldp+374,((0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U])),5);
        tracep->chgQData(oldp+375,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xcU])) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xbU])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU])) 
                                                     >> 0x13U)))),64);
        tracep->chgQData(oldp+377,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU])) 
                                     << 0x2dU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[9U])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U])) 
                                                     >> 0x13U)))),64);
        tracep->chgIData(oldp+379,(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] 
                                     << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                                 >> 0x13U))),32);
        tracep->chgBit(oldp+380,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                        >> 0x12U))));
        tracep->chgSData(oldp+381,((0xfffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                              >> 6U))),12);
        tracep->chgQData(oldp+382,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U])) 
                                     << 0x3aU) | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[6U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U])) 
                                                     >> 6U)))),64);
        tracep->chgBit(oldp+384,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                        >> 5U))));
        tracep->chgQData(oldp+385,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0]),64);
        tracep->chgQData(oldp+387,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[1]),64);
        tracep->chgQData(oldp+389,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[2]),64);
        tracep->chgQData(oldp+391,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[3]),64);
        tracep->chgQData(oldp+393,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[4]),64);
        tracep->chgQData(oldp+395,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[5]),64);
        tracep->chgQData(oldp+397,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[6]),64);
        tracep->chgQData(oldp+399,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[7]),64);
        tracep->chgQData(oldp+401,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[8]),64);
        tracep->chgQData(oldp+403,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[9]),64);
        tracep->chgQData(oldp+405,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[10]),64);
        tracep->chgQData(oldp+407,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[11]),64);
        tracep->chgQData(oldp+409,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[12]),64);
        tracep->chgQData(oldp+411,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[13]),64);
        tracep->chgQData(oldp+413,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[14]),64);
        tracep->chgQData(oldp+415,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[15]),64);
        tracep->chgQData(oldp+417,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[16]),64);
        tracep->chgQData(oldp+419,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[17]),64);
        tracep->chgQData(oldp+421,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[18]),64);
        tracep->chgQData(oldp+423,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[19]),64);
        tracep->chgQData(oldp+425,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[20]),64);
        tracep->chgQData(oldp+427,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[21]),64);
        tracep->chgQData(oldp+429,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[22]),64);
        tracep->chgQData(oldp+431,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[23]),64);
        tracep->chgQData(oldp+433,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[24]),64);
        tracep->chgQData(oldp+435,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[25]),64);
        tracep->chgQData(oldp+437,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[26]),64);
        tracep->chgQData(oldp+439,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[27]),64);
        tracep->chgQData(oldp+441,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[28]),64);
        tracep->chgQData(oldp+443,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[29]),64);
        tracep->chgQData(oldp+445,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[30]),64);
        tracep->chgQData(oldp+447,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[31]),64);
        tracep->chgQData(oldp+449,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0]),64);
        tracep->chgQData(oldp+451,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[1]),64);
        tracep->chgQData(oldp+453,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[2]),64);
        tracep->chgQData(oldp+455,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[3]),64);
        tracep->chgQData(oldp+457,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[4]),64);
        tracep->chgQData(oldp+459,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[5]),64);
        tracep->chgQData(oldp+461,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[6]),64);
        tracep->chgQData(oldp+463,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[7]),64);
        tracep->chgQData(oldp+465,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[8]),64);
        tracep->chgQData(oldp+467,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[9]),64);
        tracep->chgQData(oldp+469,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[10]),64);
        tracep->chgQData(oldp+471,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[11]),64);
        tracep->chgQData(oldp+473,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[12]),64);
        tracep->chgQData(oldp+475,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[13]),64);
        tracep->chgQData(oldp+477,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[14]),64);
        tracep->chgQData(oldp+479,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[15]),64);
        tracep->chgQData(oldp+481,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[16]),64);
        tracep->chgQData(oldp+483,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[17]),64);
        tracep->chgQData(oldp+485,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[18]),64);
        tracep->chgQData(oldp+487,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[19]),64);
        tracep->chgQData(oldp+489,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[20]),64);
        tracep->chgQData(oldp+491,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[21]),64);
        tracep->chgQData(oldp+493,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[22]),64);
        tracep->chgQData(oldp+495,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[23]),64);
        tracep->chgQData(oldp+497,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[24]),64);
        tracep->chgQData(oldp+499,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[25]),64);
        tracep->chgQData(oldp+501,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[26]),64);
        tracep->chgQData(oldp+503,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[27]),64);
        tracep->chgQData(oldp+505,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[28]),64);
        tracep->chgQData(oldp+507,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[29]),64);
        tracep->chgQData(oldp+509,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[30]),64);
        tracep->chgQData(oldp+511,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[31]),64);
        tracep->chgQData(oldp+513,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus),64);
        tracep->chgQData(oldp+515,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause),64);
        tracep->chgQData(oldp+517,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc),64);
        tracep->chgQData(oldp+519,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec),64);
        tracep->chgQData(oldp+521,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle),64);
        tracep->chgQData(oldp+523,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie),64);
        tracep->chgQData(oldp+525,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch),64);
        tracep->chgBit(oldp+527,((0x29aULL == (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                                << 0x2dU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                   << 0xdU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                     >> 0x13U))))));
        tracep->chgBit(oldp+528,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex));
        tracep->chgBit(oldp+529,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick));
        tracep->chgQData(oldp+530,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime),64);
        tracep->chgQData(oldp+532,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp),64);
        tracep->chgBit(oldp+534,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgQData(oldp+535,(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                     ? (8ULL | (0xfffffffffffffff0ULL 
                                                & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                     : (0xfffffffffffffff0ULL 
                                        & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))),64);
        tracep->chgQData(oldp+537,((0xfffffffffffffff0ULL 
                                    & ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                        ? (0xfffffffffffffff8ULL 
                                           & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                        : ((3U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                            ? (0xfffffffffffffff8ULL 
                                               & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                            : 0ULL)))),64);
        tracep->chgQData(oldp+539,(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                     ? (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mem_req_data[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__mem_req_data[2U])))
                                     : (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__mem_req_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->SimTop__DOT__mem_req_data[0U]))))),64);
        tracep->chgCData(oldp+541,((0xfU & ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                             ? (7U 
                                                & (IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                             : ((4U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                 ? 
                                                (7U 
                                                 & (IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                                 : 0U)))),4);
        tracep->chgCData(oldp+542,((0xfU & (((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                              ? (7U 
                                                 & (IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                              : ((4U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                  ? 
                                                 (7U 
                                                  & (IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                                  : 0U)) 
                                            + (3U | 
                                               ((1U 
                                                 & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                                | (7U 
                                                   & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))))),4);
        tracep->chgBit(oldp+543,((1U & ((((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                           ? (7U & (IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                           : ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                               ? (7U 
                                                  & (IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                               : 0U)) 
                                         + (3U | ((1U 
                                                   & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                                  | (7U 
                                                     & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))) 
                                        >> 3U))));
        tracep->chgQData(oldp+544,(((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0xfffffffffffffff8ULL 
                                        & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                     : ((3U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                         ? (0xfffffffffffffff8ULL 
                                            & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                         : 0ULL))),64);
        tracep->chgCData(oldp+546,((0x3fU & ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                              ? (0x38U 
                                                 & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                                    << 3U))
                                              : ((4U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                  ? 
                                                 (0x38U 
                                                  & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                     << 3U))
                                                  : 0U)))),6);
        __Vtemp_h1a2ca9a8__0[0U] = 0xffffffffU;
        __Vtemp_h1a2ca9a8__0[1U] = (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
        __Vtemp_h1a2ca9a8__0[2U] = 0U;
        __Vtemp_h1a2ca9a8__0[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp_h84c25bb5__0, __Vtemp_h1a2ca9a8__0, 
                      (0x3fU & ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                 ? (0x38U & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                             << 3U))
                                 : ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                 << 3U))
                                     : 0U))));
        tracep->chgWData(oldp+547,(__Vtemp_h84c25bb5__0),128);
        __Vtemp_hcfd8a178__0[0U] = 0xffffffffU;
        __Vtemp_hcfd8a178__0[1U] = (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
        __Vtemp_hcfd8a178__0[2U] = 0U;
        __Vtemp_hcfd8a178__0[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp_habc81ae8__0, __Vtemp_hcfd8a178__0, 
                      (0x3fU & ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                 ? (0x38U & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                             << 3U))
                                 : ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                 << 3U))
                                     : 0U))));
        tracep->chgQData(oldp+551,((((QData)((IData)(
                                                     __Vtemp_habc81ae8__0[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp_habc81ae8__0[0U])))),64);
        __Vtemp_he9a74f82__0[0U] = 0xffffffffU;
        __Vtemp_he9a74f82__0[1U] = (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
        __Vtemp_he9a74f82__0[2U] = 0U;
        __Vtemp_he9a74f82__0[3U] = 0U;
        VL_SHIFTL_WWI(128,128,6, __Vtemp_he6ef4e2b__0, __Vtemp_he9a74f82__0, 
                      (0x3fU & ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                 ? (0x38U & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                             << 3U))
                                 : ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                 << 3U))
                                     : 0U))));
        tracep->chgQData(oldp+553,((((QData)((IData)(
                                                     __Vtemp_he6ef4e2b__0[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 __Vtemp_he6ef4e2b__0[2U])))),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+555,(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done) 
                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready))));
        __Vtemp_h16448bb4__0[2U] = (IData)(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                             ? ((((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                       >> 0x1cU))) 
                                                | vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                             : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                     << 4U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                       >> 0x1cU)))
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                                  ? 
                                                 ((0xffffffffffffffe0ULL 
                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                        | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                            << 4U) 
                                                                           | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                              >> 0x1cU)))))))
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                   ? 
                                                  ((0xffffffffffffffe0ULL 
                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                         & (~ 
                                                                            ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                              << 4U) 
                                                                             | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                                >> 0x1cU))))))))
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                    ? 
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                         << 0x24U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                            << 4U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                              >> 0x1cU)))))
                                                    : 0ULL))))));
        __Vtemp_h16448bb4__0[3U] = (IData)((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                              ? ((((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                        >> 0x1cU))) 
                                                 | vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                              : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                   << 0x24U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                      << 4U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                        >> 0x1cU)))
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                                   ? 
                                                  ((0xffffffffffffffe0ULL 
                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                         | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                             << 4U) 
                                                                            | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                               >> 0x1cU)))))))
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                    ? 
                                                   ((0xffffffffffffffe0ULL 
                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                          & (~ 
                                                                             ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                               << 4U) 
                                                                              | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                                >> 0x1cU))))))))
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                     ? 
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                     & (~ 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                             << 4U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                               >> 0x1cU)))))
                                                     : 0ULL))))) 
                                            >> 0x20U));
        __Vtemp_hbb7b0089__0[0U] = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata);
        __Vtemp_hbb7b0089__0[1U] = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata 
                                            >> 0x20U));
        __Vtemp_hbb7b0089__0[2U] = ((0xffffffc0U & 
                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                                    | ((0x20U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                                       | (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])));
        __Vtemp_hbb7b0089__0[3U] = ((0x3fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U]) 
                                    | ((IData)((((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                      >> 6U)))) 
                                       << 6U));
        __Vtemp_hbb7b0089__0[4U] = (((IData)((((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                    >> 6U)))) 
                                     >> 0x1aU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                             << 0x3aU) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                                << 0x1aU) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                                  >> 6U))) 
                                                           >> 0x20U)) 
                                                  << 6U));
        __Vtemp_hbb7b0089__0[5U] = (((IData)(((((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                << 0x3aU) 
                                               | (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                     >> 6U))) 
                                              >> 0x20U)) 
                                     >> 0x1aU) | (__Vtemp_h16448bb4__0[2U] 
                                                  << 6U));
        __Vtemp_hbb7b0089__0[6U] = ((__Vtemp_h16448bb4__0[2U] 
                                     >> 0x1aU) | (__Vtemp_h16448bb4__0[3U] 
                                                  << 6U));
        __Vtemp_hbb7b0089__0[7U] = (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                      << 0x17U) | (0x780000U 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                                      >> 9U))) 
                                    | ((0x40000U & 
                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                         >> 6U)) | 
                                       ((0x3ffc0U & 
                                         ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                           << 0xeU) 
                                          | (0x3fc0U 
                                             & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                >> 0x12U)))) 
                                        | (__Vtemp_h16448bb4__0[3U] 
                                           >> 0x1aU))));
        __Vtemp_hbb7b0089__0[8U] = ((0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                                 >> 9U)) 
                                    | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                        << 0x17U) | 
                                       (0x780000U & 
                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                         >> 9U))));
        __Vtemp_hbb7b0089__0[9U] = ((0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                                 >> 9U)) 
                                    | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                        << 0x17U) | 
                                       (0x780000U & 
                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                         >> 9U))));
        __Vtemp_hbb7b0089__0[0xaU] = ((0x7ffffU & (
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                                   >> 9U)) 
                                      | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                          << 0x17U) 
                                         | (0x780000U 
                                            & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                               >> 9U))));
        __Vtemp_hbb7b0089__0[0xbU] = ((0x7ffffU & (
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                                   >> 9U)) 
                                      | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                          << 0x17U) 
                                         | (0x780000U 
                                            & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                               >> 9U))));
        __Vtemp_hbb7b0089__0[0xcU] = (0x7ffffU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                  >> 9U));
        tracep->chgWData(oldp+556,(__Vtemp_hbb7b0089__0),403);
        tracep->chgQData(oldp+569,(((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                        | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                      | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                         & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                     | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                        & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                    | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))),64);
        tracep->chgBit(oldp+571,((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward) 
                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward)) 
                                  & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid))));
        tracep->chgQData(oldp+572,(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                     ? ((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                          << 0x24U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                               >> 0x1cU))) 
                                        | vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata)
                                     : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                         ? (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                             << 0x24U) 
                                            | (((QData)((IData)(
                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                  >> 0x1cU)))
                                         : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                             ? ((0xffffffffffffffe0ULL 
                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                | (QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                      | ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                          << 4U) 
                                                                         | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                            >> 0x1cU)))))))
                                             : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                 ? 
                                                ((0xffffffffffffffe0ULL 
                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                       & (~ 
                                                                          ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                            << 4U) 
                                                                           | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                              >> 0x1cU))))))))
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                  ? 
                                                 (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
                                                  & (~ 
                                                     (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                                          << 4U) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                                            >> 0x1cU)))))
                                                  : 0ULL)))))),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+574,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen));
        tracep->chgCData(oldp+575,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest),8);
        tracep->chgQData(oldp+576,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata),64);
        tracep->chgQData(oldp+578,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc),64);
        tracep->chgIData(oldp+580,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst),32);
        tracep->chgBit(oldp+581,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid));
        tracep->chgBit(oldp+582,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap));
        tracep->chgCData(oldp+583,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code),8);
        tracep->chgQData(oldp+584,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt),64);
        tracep->chgQData(oldp+586,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt),64);
        tracep->chgQData(oldp+588,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0]),64);
        tracep->chgQData(oldp+590,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[1]),64);
        tracep->chgQData(oldp+592,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[2]),64);
        tracep->chgQData(oldp+594,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[3]),64);
        tracep->chgQData(oldp+596,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[4]),64);
        tracep->chgQData(oldp+598,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[5]),64);
        tracep->chgQData(oldp+600,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[6]),64);
        tracep->chgQData(oldp+602,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[7]),64);
        tracep->chgQData(oldp+604,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[8]),64);
        tracep->chgQData(oldp+606,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[9]),64);
        tracep->chgQData(oldp+608,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[10]),64);
        tracep->chgQData(oldp+610,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[11]),64);
        tracep->chgQData(oldp+612,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[12]),64);
        tracep->chgQData(oldp+614,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[13]),64);
        tracep->chgQData(oldp+616,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[14]),64);
        tracep->chgQData(oldp+618,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[15]),64);
        tracep->chgQData(oldp+620,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[16]),64);
        tracep->chgQData(oldp+622,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[17]),64);
        tracep->chgQData(oldp+624,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[18]),64);
        tracep->chgQData(oldp+626,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[19]),64);
        tracep->chgQData(oldp+628,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[20]),64);
        tracep->chgQData(oldp+630,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[21]),64);
        tracep->chgQData(oldp+632,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[22]),64);
        tracep->chgQData(oldp+634,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[23]),64);
        tracep->chgQData(oldp+636,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[24]),64);
        tracep->chgQData(oldp+638,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[25]),64);
        tracep->chgQData(oldp+640,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[26]),64);
        tracep->chgQData(oldp+642,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[27]),64);
        tracep->chgQData(oldp+644,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[28]),64);
        tracep->chgQData(oldp+646,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[29]),64);
        tracep->chgQData(oldp+648,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[30]),64);
        tracep->chgQData(oldp+650,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[31]),64);
        tracep->chgQData(oldp+652,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_diff),64);
        tracep->chgQData(oldp+654,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_diff),64);
        tracep->chgQData(oldp+656,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mcause_diff),64);
        tracep->chgQData(oldp+658,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_diff),64);
        tracep->chgQData(oldp+660,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_diff),64);
        tracep->chgQData(oldp+662,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_diff),64);
        tracep->chgQData(oldp+664,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mscratch_diff),64);
        tracep->chgQData(oldp+666,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__sstatus_diff),64);
        tracep->chgIData(oldp+668,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__intrNO_diff),32);
        tracep->chgQData(oldp+669,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0U]),64);
        tracep->chgQData(oldp+671,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [1U]),64);
        tracep->chgQData(oldp+673,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [2U]),64);
        tracep->chgQData(oldp+675,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [3U]),64);
        tracep->chgQData(oldp+677,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [4U]),64);
        tracep->chgQData(oldp+679,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [5U]),64);
        tracep->chgQData(oldp+681,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [6U]),64);
        tracep->chgQData(oldp+683,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [7U]),64);
        tracep->chgQData(oldp+685,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [8U]),64);
        tracep->chgQData(oldp+687,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [9U]),64);
        tracep->chgQData(oldp+689,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0xaU]),64);
        tracep->chgQData(oldp+691,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0xbU]),64);
        tracep->chgQData(oldp+693,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0xcU]),64);
        tracep->chgQData(oldp+695,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0xdU]),64);
        tracep->chgQData(oldp+697,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0xeU]),64);
        tracep->chgQData(oldp+699,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0xfU]),64);
        tracep->chgQData(oldp+701,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x10U]),64);
        tracep->chgQData(oldp+703,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x11U]),64);
        tracep->chgQData(oldp+705,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x12U]),64);
        tracep->chgQData(oldp+707,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x13U]),64);
        tracep->chgQData(oldp+709,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x14U]),64);
        tracep->chgQData(oldp+711,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x15U]),64);
        tracep->chgQData(oldp+713,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x16U]),64);
        tracep->chgQData(oldp+715,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x17U]),64);
        tracep->chgQData(oldp+717,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x18U]),64);
        tracep->chgQData(oldp+719,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x19U]),64);
        tracep->chgQData(oldp+721,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x1aU]),64);
        tracep->chgQData(oldp+723,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x1bU]),64);
        tracep->chgQData(oldp+725,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x1cU]),64);
        tracep->chgQData(oldp+727,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x1dU]),64);
        tracep->chgQData(oldp+729,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x1eU]),64);
        tracep->chgQData(oldp+731,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                   [0x1fU]),64);
        tracep->chgCData(oldp+733,((7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code))),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgQData(oldp+734,(vlSelf->SimTop__DOT__w_data[0]),64);
        tracep->chgQData(oldp+736,(vlSelf->SimTop__DOT__w_data[1]),64);
        tracep->chgQData(oldp+738,(vlSelf->SimTop__DOT__w_data[2]),64);
        tracep->chgQData(oldp+740,(vlSelf->SimTop__DOT__w_data[3]),64);
        tracep->chgCData(oldp+742,(vlSelf->SimTop__DOT__mem_req_strb),8);
        tracep->chgBit(oldp+743,(vlSelf->SimTop__DOT__inst_ready));
        tracep->chgBit(oldp+744,(vlSelf->SimTop__DOT__mem_req_wen));
        tracep->chgBit(oldp+745,(vlSelf->SimTop__DOT__data_ready));
        tracep->chgQData(oldp+746,((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))),64);
        tracep->chgQData(oldp+748,((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data))),64);
        tracep->chgBit(oldp+750,(vlSelf->SimTop__DOT__inst_req_valid));
        tracep->chgBit(oldp+751,(vlSelf->SimTop__DOT__inst_req_wen));
        tracep->chgQData(oldp+752,((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))),64);
        tracep->chgWData(oldp+754,(vlSelf->SimTop__DOT__mem_req_data),128);
        tracep->chgCData(oldp+758,(vlSelf->SimTop__DOT__mem_req_size),2);
        tracep->chgBit(oldp+759,(vlSelf->SimTop__DOT__mem_req_valid));
        tracep->chgBit(oldp+760,(vlSelf->SimTop__DOT__mem_resp_valid));
        tracep->chgBit(oldp+761,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid));
        tracep->chgBit(oldp+762,(((IData)(vlSelf->SimTop__DOT__inst_req_valid) 
                                  | (IData)(vlSelf->SimTop__DOT__mem_req_valid))));
        tracep->chgBit(oldp+763,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren));
        tracep->chgBit(oldp+764,(((0U == (IData)(vlSelf->SimTop__DOT__mem_req_size)) 
                                  & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)))));
        tracep->chgBit(oldp+765,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h));
        tracep->chgBit(oldp+766,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d));
        tracep->chgCData(oldp+767,((3U | ((1U & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                          | (7U & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))),4);
        tracep->chgQData(oldp+768,((0xfffffffffffffff8ULL 
                                    & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))),64);
        tracep->chgIData(oldp+770,(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr),32);
        tracep->chgIData(oldp+771,(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data),32);
        tracep->chgCData(oldp+772,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state),3);
        tracep->chgBit(oldp+773,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen));
        tracep->chgWData(oldp+774,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata),129);
        tracep->chgBit(oldp+779,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready));
        tracep->chgBit(oldp+780,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill));
        tracep->chgIData(oldp+781,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i),32);
        __Vtemp_hea88ef7a__0[0U] = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U];
        __Vtemp_hea88ef7a__0[1U] = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U];
        __Vtemp_hea88ef7a__0[2U] = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U];
        __Vtemp_hea88ef7a__0[3U] = vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U];
        tracep->chgWData(oldp+782,(__Vtemp_hea88ef7a__0),128);
        tracep->chgIData(oldp+786,(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr),32);
        tracep->chgWData(oldp+787,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb),128);
        tracep->chgCData(oldp+791,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state),3);
        tracep->chgBit(oldp+792,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen));
        tracep->chgWData(oldp+793,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata),128);
        tracep->chgBit(oldp+797,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready));
        tracep->chgBit(oldp+798,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill));
        tracep->chgIData(oldp+799,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+800,(vlSelf->SimTop__DOT__inst_valid));
        tracep->chgQData(oldp+801,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc),64);
        tracep->chgBit(oldp+803,(vlSelf->SimTop__DOT__br_stall));
        tracep->chgBit(oldp+804,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs));
        tracep->chgBit(oldp+805,(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done));
        tracep->chgWData(oldp+806,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus),66);
        tracep->chgBit(oldp+809,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena));
        tracep->chgBit(oldp+810,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena));
        tracep->chgQData(oldp+811,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1),64);
        tracep->chgQData(oldp+813,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2),64);
        tracep->chgQData(oldp+815,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata),64);
        tracep->chgQData(oldp+817,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc),64);
        tracep->chgBit(oldp+819,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in));
        tracep->chgBit(oldp+820,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go));
        tracep->chgQData(oldp+821,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata),64);
        tracep->chgBit(oldp+823,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done));
        tracep->chgBit(oldp+824,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid));
        tracep->chgBit(oldp+825,((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U] 
                                        >> 1U))));
        tracep->chgBit(oldp+826,((1U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U])));
        tracep->chgQData(oldp+827,((((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U])))),64);
        tracep->chgBit(oldp+829,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go));
        tracep->chgBit(oldp+830,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in));
        tracep->chgQData(oldp+831,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1),64);
        tracep->chgQData(oldp+833,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2),64);
        tracep->chgBit(oldp+835,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward));
        tracep->chgBit(oldp+836,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward));
        tracep->chgQData(oldp+837,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value),64);
        tracep->chgQData(oldp+839,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value),64);
        tracep->chgBit(oldp+841,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken));
        tracep->chgQData(oldp+842,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target),64);
        tracep->chgCData(oldp+844,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type),6);
        tracep->chgBit(oldp+845,((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                  == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
        tracep->chgBit(oldp+846,((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                  != vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
        tracep->chgBit(oldp+847,((1U & (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                          == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                         | ((~ (IData)(
                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                        >> 0x3fU))) 
                                            & (IData)(
                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                       >> 0x3fU)))) 
                                        | ((~ ((IData)(
                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                          >> 0x3fU)))) 
                                           & (~ (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                         >> 0x3fU))))))));
        tracep->chgBit(oldp+848,((1U & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2)))));
        tracep->chgBit(oldp+849,((1U & (((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                  >> 0x3fU)) 
                                         & (~ (IData)(
                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                       >> 0x3fU)))) 
                                        | ((~ ((IData)(
                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                        >> 0x3fU)) 
                                               ^ (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                          >> 0x3fU)))) 
                                           & (IData)(
                                                     (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                      >> 0x3fU)))))));
        tracep->chgBit(oldp+850,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2));
        tracep->chgQData(oldp+851,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2),64);
        tracep->chgIData(oldp+853,((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc)),32);
        tracep->chgIData(oldp+854,((0xfffffU & (IData)(
                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                        >> 0xcU)))),20);
        tracep->chgCData(oldp+855,((0xffU & (IData)(
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                     >> 4U)))),8);
        tracep->chgCData(oldp+856,((0xfU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc))),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        tracep->chgBit(oldp+857,(vlSelf->SimTop__DOT__addr_valid));
        tracep->chgBit(oldp+858,(vlSelf->SimTop__DOT__data_valid));
        tracep->chgQData(oldp+859,(vlSelf->SimTop__DOT__data_read),64);
        tracep->chgQData(oldp+861,(vlSelf->SimTop__DOT__data_write),64);
        tracep->chgQData(oldp+863,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64),64);
        tracep->chgCData(oldp+865,(vlSelf->SimTop__DOT__data_size),2);
        tracep->chgBit(oldp+866,(vlSelf->SimTop__DOT__data_wen));
        tracep->chgCData(oldp+867,(vlSelf->SimTop__DOT__data_strb),8);
        tracep->chgWData(oldp+868,(vlSelf->SimTop__DOT__inst_resp_data),128);
        tracep->chgBit(oldp+872,(vlSelf->SimTop__DOT__inst_resp_valid));
        tracep->chgWData(oldp+873,(vlSelf->SimTop__DOT__mem_resp_data),128);
        tracep->chgBit(oldp+877,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in));
        tracep->chgBit(oldp+878,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren));
        tracep->chgBit(oldp+879,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen));
        tracep->chgQData(oldp+880,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata),64);
        tracep->chgQData(oldp+882,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32),64);
        VL_EXTEND_WW(129,128, __Vtemp_h012cf8eb__0, vlSelf->SimTop__DOT__inst_resp_data);
        tracep->chgWData(oldp+884,(__Vtemp_h012cf8eb__0),129);
        VL_EXTEND_WW(129,128, __Vtemp_hd5096001__0, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        tracep->chgWData(oldp+889,(__Vtemp_hd5096001__0),129);
        tracep->chgWData(oldp+894,(vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q),128);
        tracep->chgIData(oldp+898,((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)),32);
        tracep->chgIData(oldp+899,((0xfffffU & (IData)(
                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                        >> 0xcU)))),20);
        tracep->chgCData(oldp+900,((0xffU & (IData)(
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                     >> 4U)))),8);
        tracep->chgCData(oldp+901,((0xfU & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64))),4);
        tracep->chgQData(oldp+902,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb),64);
        tracep->chgQData(oldp+904,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data),64);
        tracep->chgWData(oldp+906,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out),128);
        tracep->chgQData(oldp+910,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data),64);
        tracep->chgBit(oldp+912,((IData)(((0xa70ULL 
                                           == (0xff0ULL 
                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)) 
                                          & (IData)(vlSelf->SimTop__DOT__data_valid)))));
        tracep->chgBit(oldp+913,((IData)(((0xa70ULL 
                                           == (0xff0ULL 
                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)) 
                                          & (IData)(vlSelf->SimTop__DOT__data_wen)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        tracep->chgBit(oldp+914,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in));
        tracep->chgBit(oldp+915,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go));
        tracep->chgBit(oldp+916,(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done));
        tracep->chgBit(oldp+917,(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty));
    }
    tracep->chgBit(oldp+918,(vlSelf->clock));
    tracep->chgBit(oldp+919,(vlSelf->reset));
    tracep->chgQData(oldp+920,(vlSelf->io_logCtrl_log_begin),64);
    tracep->chgQData(oldp+922,(vlSelf->io_logCtrl_log_end),64);
    tracep->chgQData(oldp+924,(vlSelf->io_logCtrl_log_level),64);
    tracep->chgBit(oldp+926,(vlSelf->io_perfInfo_clean));
    tracep->chgBit(oldp+927,(vlSelf->io_perfInfo_dump));
    tracep->chgBit(oldp+928,(vlSelf->io_uart_out_valid));
    tracep->chgCData(oldp+929,(vlSelf->io_uart_out_ch),8);
    tracep->chgBit(oldp+930,(vlSelf->io_uart_in_valid));
    tracep->chgCData(oldp+931,(vlSelf->io_uart_in_ch),8);
    tracep->chgBit(oldp+932,(vlSelf->io_memAXI_0_aw_ready));
    tracep->chgBit(oldp+933,(vlSelf->io_memAXI_0_aw_valid));
    tracep->chgQData(oldp+934,(vlSelf->io_memAXI_0_aw_bits_addr),64);
    tracep->chgCData(oldp+936,(vlSelf->io_memAXI_0_aw_bits_prot),3);
    tracep->chgCData(oldp+937,(vlSelf->io_memAXI_0_aw_bits_id),4);
    tracep->chgBit(oldp+938,(vlSelf->io_memAXI_0_aw_bits_user));
    tracep->chgCData(oldp+939,(vlSelf->io_memAXI_0_aw_bits_len),8);
    tracep->chgCData(oldp+940,(vlSelf->io_memAXI_0_aw_bits_size),3);
    tracep->chgCData(oldp+941,(vlSelf->io_memAXI_0_aw_bits_burst),2);
    tracep->chgBit(oldp+942,(vlSelf->io_memAXI_0_aw_bits_lock));
    tracep->chgCData(oldp+943,(vlSelf->io_memAXI_0_aw_bits_cache),4);
    tracep->chgCData(oldp+944,(vlSelf->io_memAXI_0_aw_bits_qos),4);
    tracep->chgBit(oldp+945,(vlSelf->io_memAXI_0_w_ready));
    tracep->chgBit(oldp+946,(vlSelf->io_memAXI_0_w_valid));
    tracep->chgQData(oldp+947,(vlSelf->io_memAXI_0_w_bits_data[0]),64);
    tracep->chgQData(oldp+949,(vlSelf->io_memAXI_0_w_bits_data[1]),64);
    tracep->chgQData(oldp+951,(vlSelf->io_memAXI_0_w_bits_data[2]),64);
    tracep->chgQData(oldp+953,(vlSelf->io_memAXI_0_w_bits_data[3]),64);
    tracep->chgCData(oldp+955,(vlSelf->io_memAXI_0_w_bits_strb),8);
    tracep->chgBit(oldp+956,(vlSelf->io_memAXI_0_w_bits_last));
    tracep->chgBit(oldp+957,(vlSelf->io_memAXI_0_b_ready));
    tracep->chgBit(oldp+958,(vlSelf->io_memAXI_0_b_valid));
    tracep->chgCData(oldp+959,(vlSelf->io_memAXI_0_b_bits_resp),2);
    tracep->chgCData(oldp+960,(vlSelf->io_memAXI_0_b_bits_id),4);
    tracep->chgBit(oldp+961,(vlSelf->io_memAXI_0_b_bits_user));
    tracep->chgBit(oldp+962,(vlSelf->io_memAXI_0_ar_ready));
    tracep->chgBit(oldp+963,(vlSelf->io_memAXI_0_ar_valid));
    tracep->chgQData(oldp+964,(vlSelf->io_memAXI_0_ar_bits_addr),64);
    tracep->chgCData(oldp+966,(vlSelf->io_memAXI_0_ar_bits_prot),3);
    tracep->chgCData(oldp+967,(vlSelf->io_memAXI_0_ar_bits_id),4);
    tracep->chgBit(oldp+968,(vlSelf->io_memAXI_0_ar_bits_user));
    tracep->chgCData(oldp+969,(vlSelf->io_memAXI_0_ar_bits_len),8);
    tracep->chgCData(oldp+970,(vlSelf->io_memAXI_0_ar_bits_size),3);
    tracep->chgCData(oldp+971,(vlSelf->io_memAXI_0_ar_bits_burst),2);
    tracep->chgBit(oldp+972,(vlSelf->io_memAXI_0_ar_bits_lock));
    tracep->chgCData(oldp+973,(vlSelf->io_memAXI_0_ar_bits_cache),4);
    tracep->chgCData(oldp+974,(vlSelf->io_memAXI_0_ar_bits_qos),4);
    tracep->chgBit(oldp+975,(vlSelf->io_memAXI_0_r_ready));
    tracep->chgBit(oldp+976,(vlSelf->io_memAXI_0_r_valid));
    tracep->chgCData(oldp+977,(vlSelf->io_memAXI_0_r_bits_resp),2);
    tracep->chgQData(oldp+978,(vlSelf->io_memAXI_0_r_bits_data[0]),64);
    tracep->chgQData(oldp+980,(vlSelf->io_memAXI_0_r_bits_data[1]),64);
    tracep->chgQData(oldp+982,(vlSelf->io_memAXI_0_r_bits_data[2]),64);
    tracep->chgQData(oldp+984,(vlSelf->io_memAXI_0_r_bits_data[3]),64);
    tracep->chgBit(oldp+986,(vlSelf->io_memAXI_0_r_bits_last));
    tracep->chgCData(oldp+987,(vlSelf->io_memAXI_0_r_bits_id),4);
    tracep->chgBit(oldp+988,(vlSelf->io_memAXI_0_r_bits_user));
    tracep->chgQData(oldp+989,(vlSelf->io_memAXI_0_r_bits_data
                               [0U]),64);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__1, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__2, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__3, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__4, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    tracep->chgQData(oldp+991,((QData)((IData)(((0U 
                                                 == 
                                                 (3U 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                             >> 2U))))
                                                 ? 
                                                __Vtemp_hd5096001__1[0U]
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                              >> 2U))))
                                                  ? 
                                                 __Vtemp_hd5096001__2[1U]
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                               >> 2U))))
                                                   ? 
                                                  __Vtemp_hd5096001__3[2U]
                                                   : 
                                                  __Vtemp_hd5096001__4[3U])))))),64);
    tracep->chgQData(oldp+993,(((1U & (IData)(((QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)) 
                                               >> 3U)))
                                 ? (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__mem_resp_data[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__mem_resp_data[2U])))
                                 : (((QData)((IData)(
                                                     vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->SimTop__DOT__mem_resp_data[0U]))))),64);
    tracep->chgBit(oldp+995,(((IData)(vlSelf->io_memAXI_0_aw_ready) 
                              & (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))));
    tracep->chgBit(oldp+996,(((IData)(vlSelf->io_memAXI_0_ar_ready) 
                              & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr))));
    tracep->chgBit(oldp+997,(((IData)(vlSelf->SimTop__DOT__mem_req_wen)
                               ? (IData)(vlSelf->io_memAXI_0_b_valid)
                               : (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done))));
    tracep->chgBit(oldp+998,((((IData)(vlSelf->reset) 
                               | ((IData)(vlSelf->SimTop__DOT__mem_req_wen) 
                                  & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))) 
                              | (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))));
    tracep->chgBit(oldp+999,(((1U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len)) 
                              & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs) 
                                 | (IData)(vlSelf->io_memAXI_0_r_valid)))));
    tracep->chgBit(oldp+1000,(((IData)(vlSelf->io_memAXI_0_b_valid) 
                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready))));
    tracep->chgCData(oldp+1001,(((IData)(vlSelf->SimTop__DOT__mem_req_wen)
                                  ? (IData)(vlSelf->io_memAXI_0_b_bits_resp)
                                  : (IData)(vlSelf->io_memAXI_0_r_bits_resp))),2);
    __Vtemp_h4ce52b73__0[0U] = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                 << 6U) | ((((IData)(vlSelf->reset)
                                              ? 0U : 
                                             (1U & 
                                              ((((0x10U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                 | (0x20U 
                                                    == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                | (8U 
                                                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                               | (2U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))))) 
                                            << 5U) 
                                           | ((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   (((0x10U 
                                                      == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                     | (0x20U 
                                                        == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                    | (8U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (2U 
                                                      == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                      >> 7U))
                                                   : 0U))));
    __Vtemp_h4ce52b73__0[1U] = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                 >> 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                              << 6U));
    __Vtemp_h4ce52b73__0[2U] = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                 >> 0x1aU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                                              << 6U));
    __Vtemp_h4ce52b73__0[3U] = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                 << 0x18U) | ((0xe00000U 
                                               & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  << 9U)) 
                                              | ((0x1fc000U 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                     >> 0xbU)) 
                                                 | ((((IData)(vlSelf->reset)
                                                       ? 0U
                                                       : 
                                                      (0x7fU 
                                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])) 
                                                     << 6U) 
                                                    | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                                                       >> 0x1aU)))));
    __Vtemp_h4ce52b73__0[4U] = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h4ce52b73__0[5U] = (((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                          >> 0x20U)) 
                                 >> 8U) | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                           << 0x18U));
    __Vtemp_h4ce52b73__0[6U] = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h4ce52b73__0[7U] = (((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                          >> 0x20U)) 
                                 >> 8U) | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                           << 0x18U));
    __Vtemp_h4ce52b73__0[8U] = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                 >> 8U) | ((IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_h4ce52b73__0[9U] = ((((IData)(vlSelf->reset)
                                   ? 0U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                            ? 1U : 
                                           ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                             ? 2U : 
                                            ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                              ? 3U : 0U)))) 
                                 << 0x1cU) | ((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                                 | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw)) 
                                               << 0x1bU) 
                                              | (((((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                                     | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu)) 
                                                  << 0x1aU) 
                                                 | (((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                     << 0x19U) 
                                                    | (((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                                            | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                          | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                        << 0x18U) 
                                                       | ((IData)(
                                                                  (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                                                   >> 0x20U)) 
                                                          >> 8U))))));
    __Vtemp_h4ce52b73__0[0xaU] = ((((IData)(vlSelf->reset)
                                     ? 0U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                              ? 1U : 
                                             ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                               ? 2U
                                               : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                   ? 3U
                                                   : 0U)))) 
                                   >> 4U) | ((IData)(
                                                     ((IData)(vlSelf->reset)
                                                       ? 0ULL
                                                       : 
                                                      (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                        ? 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                        : 0ULL))) 
                                             << 0x1cU));
    __Vtemp_h4ce52b73__0[0xbU] = (((IData)(((IData)(vlSelf->reset)
                                             ? 0ULL
                                             : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                 | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                 : 0ULL))) 
                                   >> 4U) | ((IData)(
                                                     (((IData)(vlSelf->reset)
                                                        ? 0ULL
                                                        : 
                                                       (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                         | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                         : 0ULL)) 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h4ce52b73__0[0xcU] = (((IData)((((IData)(vlSelf->reset)
                                              ? 0ULL
                                              : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                  | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                  : 0ULL)) 
                                            >> 0x20U)) 
                                   >> 4U) | ((IData)(
                                                     ((IData)(vlSelf->reset)
                                                       ? 0ULL
                                                       : 
                                                      ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                        ? 0xbULL
                                                        : 
                                                       ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                         ? 0x29aULL
                                                         : 
                                                        ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                          ? 0x8000000000000007ULL
                                                          : 0ULL))))) 
                                             << 0x1cU));
    __Vtemp_h4ce52b73__0[0xdU] = (((IData)(((IData)(vlSelf->reset)
                                             ? 0ULL
                                             : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                 ? 0xbULL
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                  ? 0x29aULL
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))))) 
                                   >> 4U) | ((IData)(
                                                     (((IData)(vlSelf->reset)
                                                        ? 0ULL
                                                        : 
                                                       ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                         ? 0xbULL
                                                         : 
                                                        ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                          ? 0x29aULL
                                                          : 
                                                         ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                           ? 0x8000000000000007ULL
                                                           : 0ULL)))) 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h4ce52b73__0[0xeU] = (((IData)((((IData)(vlSelf->reset)
                                              ? 0ULL
                                              : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                  ? 0xbULL
                                                  : 
                                                 ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                   ? 0x29aULL
                                                   : 
                                                  ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                    ? 0x8000000000000007ULL
                                                    : 0ULL)))) 
                                            >> 0x20U)) 
                                   >> 4U) | ((IData)(
                                                     ((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                          | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                        | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                           & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                       | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                          & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                      | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))) 
                                             << 0x1cU));
    __Vtemp_h4ce52b73__0[0xfU] = (((IData)(((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                              | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                 & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                             | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                            | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))) 
                                   >> 4U) | ((IData)(
                                                     (((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                           | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                         | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                            & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                        | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                           & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                                       | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1)) 
                                                      >> 0x20U)) 
                                             << 0x1cU));
    __Vtemp_h4ce52b73__0[0x10U] = ((IData)((((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                                 | (- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                               | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                                  & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                              | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                                 & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                             | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1)) 
                                            >> 0x20U)) 
                                   >> 4U);
    tracep->chgWData(oldp+1002,(__Vtemp_h4ce52b73__0),540);
    tracep->chgCData(oldp+1019,(((IData)(vlSelf->reset)
                                  ? 0U : ((((((0x10U 
                                               == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                              | (1U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                             | (8U 
                                                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                            | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my))
                                           ? (0x1fU 
                                              & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1))
                                           : 0U))),5);
    tracep->chgCData(oldp+1020,(((IData)(vlSelf->reset)
                                  ? 0U : ((((8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                            | (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                           | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                           ? (0x1fU 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 0x14U))
                                           : 0U))),5);
    tracep->chgQData(oldp+1021,(((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
                                  ? ((0x2004000ULL 
                                      == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                                      ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp
                                      : ((0x200bff8ULL 
                                          == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                                          ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime
                                          : 0ULL)) : 0ULL)),64);
    tracep->chgBit(oldp+1023,((1U & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                      >> 0x1aU) & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done))))));
    tracep->chgBit(oldp+1024,(((((0x7bU == (0xffU & 
                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                             >> 6U))) 
                                 | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen)) 
                               | (IData)(((0x3000000U 
                                           == (0x3000000U 
                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                          & (0xb00U 
                                             == (0xfffU 
                                                 & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 8U) 
                                                    | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x18U)))))))));
    tracep->chgBit(oldp+1025,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->chgBit(oldp+1026,(((IData)(vlSelf->reset)
                                ? 0U : (1U & ((((0x10U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                | (0x20U 
                                                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                               | (8U 
                                                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                              | (2U 
                                                 == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))))));
    tracep->chgCData(oldp+1027,(((IData)(vlSelf->reset)
                                  ? 0U : (((((0x10U 
                                              == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                             | (0x20U 
                                                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                            | (8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                           | (2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                           ? (0x1fU 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 7U))
                                           : 0U))),5);
    tracep->chgCData(oldp+1028,(((IData)(vlSelf->reset)
                                  ? 0U : (0x7fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))),8);
    tracep->chgQData(oldp+1029,(((IData)(vlSelf->reset)
                                  ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                             ? 0xbULL
                                             : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                 ? 0x29aULL
                                                 : 
                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                  ? 0x8000000000000007ULL
                                                  : 0ULL))))),64);
    tracep->chgQData(oldp+1031,(((IData)(vlSelf->reset)
                                  ? 0ULL : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                             | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                             ? (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                             : 0ULL))),64);
    tracep->chgIData(oldp+1033,(((IData)(vlSelf->reset)
                                  ? 0U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                           ? 1U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                     ? 3U
                                                     : 0U))))),32);
    tracep->chgQData(oldp+1034,(((((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb))) 
                                       & (((- (QData)((IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                          >> 7U)))))) 
                                           << 8U) | (QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                      | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu))) 
                                         & (QData)((IData)(
                                                           (0xffU 
                                                            & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                     | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                           >> 0xfU)))))) 
                                            << 0x10U) 
                                           | (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))))))) 
                                    | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu))) 
                                       & (QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))))) 
                                   | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw))) 
                                      & (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))))) 
                                  | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu))) 
                                     & (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata)))) 
                                 | ((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld))) 
                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))),64);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__5, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__6, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__7, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    VL_EXTEND_WW(129,128, __Vtemp_hd5096001__8, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    tracep->chgIData(oldp+1036,(((0U == (3U & (IData)(
                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                       >> 2U))))
                                  ? __Vtemp_hd5096001__5[0U]
                                  : ((1U == (3U & (IData)(
                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                           >> 2U))))
                                      ? __Vtemp_hd5096001__6[1U]
                                      : ((2U == (3U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                            >> 2U))))
                                          ? __Vtemp_hd5096001__7[2U]
                                          : __Vtemp_hd5096001__8[3U])))),32);
    tracep->chgBit(oldp+1037,((((vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag
                                 [(0xffU & (IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                    >> 4U)))] 
                                 == (0xfffffU & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                         >> 0xcU)))) 
                                & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid
                                [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                   >> 4U)))]) 
                               & (IData)(vlSelf->SimTop__DOT__inst_valid))));
    tracep->chgBit(oldp+1038,((vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty
                               [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                  >> 4U)))] 
                               & (IData)(vlSelf->SimTop__DOT__inst_valid))));
    tracep->chgBit(oldp+1039,(((((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag
                                  [(0xffU & (IData)(
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                     >> 4U)))] 
                                  == (0xfffffU & (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 0xcU)))) 
                                 & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid
                                 [(0xffU & (IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                    >> 4U)))]) 
                                & (IData)(vlSelf->SimTop__DOT__data_valid)) 
                               & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)))));
    tracep->chgBit(oldp+1040,((IData)(((0xa70ULL == 
                                        (0xff0ULL & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty)))));
}

void VSimTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root__trace_cleanup\n"); );
    // Init
    VSimTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimTop___024root*>(voidSelf);
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
