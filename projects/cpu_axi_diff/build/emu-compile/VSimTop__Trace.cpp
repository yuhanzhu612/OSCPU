// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimTop__Syms.h"


void VSimTop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VSimTop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Variables
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<4>/*127:0*/ __Vtemp159;
    VlWide<4>/*127:0*/ __Vtemp160;
    VlWide<4>/*127:0*/ __Vtemp173;
    VlWide<4>/*127:0*/ __Vtemp174;
    VlWide<4>/*127:0*/ __Vtemp187;
    VlWide<4>/*127:0*/ __Vtemp188;
    VlWide<4>/*127:0*/ __Vtemp190;
    VlWide<13>/*415:0*/ __Vtemp197;
    VlWide<4>/*127:0*/ __Vtemp198;
    VlWide<5>/*159:0*/ __Vtemp199;
    VlWide<5>/*159:0*/ __Vtemp200;
    VlWide<5>/*159:0*/ __Vtemp201;
    VlWide<5>/*159:0*/ __Vtemp202;
    VlWide<5>/*159:0*/ __Vtemp203;
    VlWide<5>/*159:0*/ __Vtemp204;
    VlWide<10>/*319:0*/ __Vtemp218;
    VlWide<17>/*543:0*/ __Vtemp219;
    VlWide<5>/*159:0*/ __Vtemp220;
    VlWide<5>/*159:0*/ __Vtemp221;
    VlWide<5>/*159:0*/ __Vtemp222;
    VlWide<5>/*159:0*/ __Vtemp223;
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
            tracep->chgBit(oldp+1,((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
            tracep->chgBit(oldp+2,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr));
            tracep->chgCData(oldp+3,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__rw_resp),2);
            tracep->chgCData(oldp+4,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state),3);
            tracep->chgCData(oldp+5,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state),3);
            tracep->chgBit(oldp+6,((0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
            tracep->chgBit(oldp+7,((3U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state))));
            tracep->chgBit(oldp+8,((0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))));
            tracep->chgBit(oldp+9,(((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                    | (4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))));
            tracep->chgCData(oldp+10,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__len),8);
            tracep->chgBit(oldp+11,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
            tracep->chgBit(oldp+12,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok));
            tracep->chgBit(oldp+13,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
            tracep->chgWData(oldp+14,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data),96);
            __Vtemp146[0U] = vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst;
            __Vtemp146[1U] = (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc);
            __Vtemp146[2U] = (IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc 
                                      >> 0x20U));
            tracep->chgWData(oldp+17,(__Vtemp146),96);
            tracep->chgWData(oldp+20,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data),540);
            tracep->chgWData(oldp+37,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data),403);
            tracep->chgWData(oldp+50,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data),403);
            tracep->chgQData(oldp+63,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                        << 0x3aU) | 
                                       (((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[4U])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U])) 
                                           >> 6U)))),64);
            tracep->chgIData(oldp+65,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[3U] 
                                        << 0x1aU) | 
                                       (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                        >> 6U))),32);
            tracep->chgBit(oldp+66,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen));
            tracep->chgCData(oldp+67,((0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])),5);
            tracep->chgQData(oldp+68,((((QData)((IData)(
                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))),64);
            tracep->chgBit(oldp+70,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid));
            tracep->chgQData(oldp+71,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0]),64);
            tracep->chgQData(oldp+73,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[1]),64);
            tracep->chgQData(oldp+75,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[2]),64);
            tracep->chgQData(oldp+77,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[3]),64);
            tracep->chgQData(oldp+79,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[4]),64);
            tracep->chgQData(oldp+81,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[5]),64);
            tracep->chgQData(oldp+83,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[6]),64);
            tracep->chgQData(oldp+85,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[7]),64);
            tracep->chgQData(oldp+87,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[8]),64);
            tracep->chgQData(oldp+89,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[9]),64);
            tracep->chgQData(oldp+91,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[10]),64);
            tracep->chgQData(oldp+93,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[11]),64);
            tracep->chgQData(oldp+95,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[12]),64);
            tracep->chgQData(oldp+97,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[13]),64);
            tracep->chgQData(oldp+99,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[14]),64);
            tracep->chgQData(oldp+101,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[15]),64);
            tracep->chgQData(oldp+103,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[16]),64);
            tracep->chgQData(oldp+105,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[17]),64);
            tracep->chgQData(oldp+107,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[18]),64);
            tracep->chgQData(oldp+109,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[19]),64);
            tracep->chgQData(oldp+111,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[20]),64);
            tracep->chgQData(oldp+113,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[21]),64);
            tracep->chgQData(oldp+115,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[22]),64);
            tracep->chgQData(oldp+117,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[23]),64);
            tracep->chgQData(oldp+119,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[24]),64);
            tracep->chgQData(oldp+121,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[25]),64);
            tracep->chgQData(oldp+123,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[26]),64);
            tracep->chgQData(oldp+125,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[27]),64);
            tracep->chgQData(oldp+127,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[28]),64);
            tracep->chgQData(oldp+129,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[29]),64);
            tracep->chgQData(oldp+131,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[30]),64);
            tracep->chgQData(oldp+133,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[31]),64);
            tracep->chgBit(oldp+135,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                            >> 0x19U))));
            tracep->chgBit(oldp+136,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                            >> 0x12U))));
            tracep->chgSData(oldp+137,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U)))),12);
            tracep->chgSData(oldp+138,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                     >> 6U)))),12);
            tracep->chgQData(oldp+139,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+141,((0U != ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                              << 0xdU) 
                                             | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                >> 0x13U)))));
            tracep->chgQData(oldp+142,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                              >> 0x13U)))),64);
            tracep->chgQData(oldp+144,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U])) 
                                              >> 0x13U)))),64);
            tracep->chgIData(oldp+146,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                         << 0xdU) | 
                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                         >> 0x13U))),32);
            tracep->chgQData(oldp+147,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o),64);
            tracep->chgQData(oldp+149,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o),64);
            tracep->chgQData(oldp+151,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex)
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
                                                == 
                                                (0xfffU 
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
            tracep->chgQData(oldp+153,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o),64);
            tracep->chgQData(oldp+155,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o),64);
            tracep->chgQData(oldp+157,((((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                          >> 0x12U) 
                                         & (0x340U 
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
                                         : vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch)),64);
            tracep->chgBit(oldp+159,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid));
            tracep->chgBit(oldp+160,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid));
            tracep->chgBit(oldp+161,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in));
            tracep->chgBit(oldp+162,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid));
            tracep->chgBit(oldp+163,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in));
            tracep->chgCData(oldp+164,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest),5);
            tracep->chgCData(oldp+165,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest),5);
            tracep->chgQData(oldp+166,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))),64);
            tracep->chgCData(oldp+168,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest),5);
            tracep->chgBit(oldp+169,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
                                            >> 0x12U))));
            tracep->chgBit(oldp+170,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int));
            tracep->chgBit(oldp+171,((0x7bU == (0xffU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U))))));
            tracep->chgQData(oldp+172,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                              >> 0x18U)))),64);
            tracep->chgQData(oldp+174,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc),64);
            tracep->chgIData(oldp+176,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst),32);
            tracep->chgQData(oldp+177,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc),64);
            tracep->chgQData(oldp+179,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc),64);
            tracep->chgBit(oldp+181,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid));
            tracep->chgBit(oldp+182,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid));
            tracep->chgBit(oldp+183,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait));
            tracep->chgBit(oldp+184,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid));
            tracep->chgBit(oldp+185,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready));
            tracep->chgCData(oldp+186,((0x7fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])),7);
            tracep->chgCData(oldp+187,((0x1fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                  << 0x19U) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 7U)))),5);
            tracep->chgCData(oldp+188,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1),5);
            tracep->chgSData(oldp+189,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                   << 0xcU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                     >> 0x14U)))),12);
            tracep->chgIData(oldp+190,((0xfffffU & 
                                        ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                          << 0x14U) 
                                         | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 0xcU)))),20);
            tracep->chgCData(oldp+191,((0x1fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                  << 0xcU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0x14U)))),5);
            tracep->chgIData(oldp+192,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm),21);
            tracep->chgSData(oldp+193,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm),13);
            tracep->chgSData(oldp+194,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm),12);
            tracep->chgQData(oldp+195,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))),64);
            tracep->chgIData(oldp+197,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]),32);
            tracep->chgCData(oldp+198,((7U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                               << 0x14U) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 0xcU)))),3);
            tracep->chgCData(oldp+199,((0x7fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                  << 7U) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0x19U)))),7);
            tracep->chgBit(oldp+200,(((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                        | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw))));
            tracep->chgBit(oldp+201,((((((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                           | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                          | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                         | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                        | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu))));
            tracep->chgBit(oldp+202,((((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs) 
                                         | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                        | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))));
            tracep->chgBit(oldp+203,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+204,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh));
            tracep->chgBit(oldp+205,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu));
            tracep->chgBit(oldp+206,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw));
            tracep->chgBit(oldp+207,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu));
            tracep->chgBit(oldp+208,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld));
            tracep->chgBit(oldp+209,((1U & (((IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU)) 
                                            & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+210,((1U & (((IData)(
                                                     (0x1013U 
                                                      == 
                                                      (0x107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU)) 
                                            & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  >> 0xeU))))));
            tracep->chgBit(oldp+211,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr));
            tracep->chgBit(oldp+212,((IData)((0x1bU 
                                              == (0x707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+213,((1U & (((IData)(
                                                     (0x101bU 
                                                      == 
                                                      (0xfc00107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (~ (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0xdU))) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+214,((1U & (((IData)(
                                                     (0x4000101bU 
                                                      == 
                                                      (0xfc00107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (~ (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0xdU))) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+215,((IData)((0x101bU 
                                              == (0xfc00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+216,((1U & (((IData)(
                                                     (0x40001013U 
                                                      == 
                                                      (0xfc00107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (~ (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0xdU))) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+217,((IData)((0x1013U 
                                              == (0xfc00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+218,((1U & (((IData)(
                                                     (0x1013U 
                                                      == 
                                                      (0xfc00107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (~ (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0xdU))) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+219,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb));
            tracep->chgBit(oldp+220,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu));
            tracep->chgBit(oldp+221,((1U & (((IData)(
                                                     (0x1013U 
                                                      == 
                                                      (0x107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU)) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+222,((1U & (((IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (~ (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0xdU))) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+223,((1U & (((IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x107fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 0xdU)) 
                                            & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0xeU)))));
            tracep->chgBit(oldp+224,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs));
            tracep->chgBit(oldp+225,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw));
            tracep->chgBit(oldp+226,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc));
            tracep->chgBit(oldp+227,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci));
            tracep->chgBit(oldp+228,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi));
            tracep->chgBit(oldp+229,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall));
            tracep->chgBit(oldp+230,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret));
            tracep->chgBit(oldp+231,((IData)((0x17U 
                                              == (0x7fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+232,((1U & (((IData)(
                                                     (0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                             & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                >> 5U)) 
                                            & (~ (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  >> 6U))))));
            tracep->chgBit(oldp+233,((IData)((0x3bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+234,((IData)((0x4000003bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+235,((IData)((0x103bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+236,((IData)((0x4000503bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+237,((IData)((0x503bU 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+238,((IData)((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+239,((IData)((0x5033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+240,((IData)((0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+241,((IData)((0x40000033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+242,((IData)((0x33U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+243,((IData)((0x7033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+244,((IData)((0x6033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+245,((IData)((0x4033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+246,((IData)((0x2033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+247,((IData)((0x3033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))));
            tracep->chgBit(oldp+248,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal));
            tracep->chgBit(oldp+249,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq));
            tracep->chgBit(oldp+250,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne));
            tracep->chgBit(oldp+251,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge));
            tracep->chgBit(oldp+252,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt));
            tracep->chgBit(oldp+253,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu));
            tracep->chgBit(oldp+254,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu));
            tracep->chgBit(oldp+255,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd));
            tracep->chgBit(oldp+256,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh));
            tracep->chgBit(oldp+257,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb));
            tracep->chgBit(oldp+258,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw));
            tracep->chgBit(oldp+259,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my));
            tracep->chgBit(oldp+260,(((0x13U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (0U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+261,(((0x1bU == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (0U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+262,((((0x1bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x3fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xfU)))))));
            tracep->chgBit(oldp+263,((((0x1bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0x10U == (0x3fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 0x11U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0xfU)))))));
            tracep->chgBit(oldp+264,((((0x1bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (1U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x3fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xfU)))))));
            tracep->chgBit(oldp+265,((0x17U == (0xffU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U))))));
            tracep->chgBit(oldp+266,((0x37U == (0xffU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U))))));
            tracep->chgBit(oldp+267,((0x6fU == (0xffU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U))))));
            tracep->chgBit(oldp+268,((((0x3bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (0U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+269,((((0x3bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (0U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0x20U == (0x7fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0xeU)))))));
            tracep->chgBit(oldp+270,((((0x3bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (1U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+271,((((0x3bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0x20U == (0x7fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0xeU)))))));
            tracep->chgBit(oldp+272,((((0x3bU == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+273,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (2U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+274,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (3U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+275,(((0x13U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (2U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+276,(((0x13U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (3U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+277,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh));
            tracep->chgBit(oldp+278,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu));
            tracep->chgBit(oldp+279,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw));
            tracep->chgBit(oldp+280,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu));
            tracep->chgBit(oldp+281,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld));
            tracep->chgBit(oldp+282,(((0x67U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (0U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+283,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (0U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0x20U == (0x7fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0xeU)))))));
            tracep->chgBit(oldp+284,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (0U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+285,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw));
            tracep->chgBit(oldp+286,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd));
            tracep->chgBit(oldp+287,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh));
            tracep->chgBit(oldp+288,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb));
            tracep->chgBit(oldp+289,((((0x13U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0x10U == (0x3fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 0x11U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0xfU)))))));
            tracep->chgBit(oldp+290,((((0x13U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (1U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x3fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xfU)))))));
            tracep->chgBit(oldp+291,((((0x13U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x3fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x11U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xfU)))))));
            tracep->chgBit(oldp+292,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb));
            tracep->chgBit(oldp+293,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu));
            tracep->chgBit(oldp+294,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (7U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+295,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (6U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+296,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+297,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (1U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+298,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (5U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0x20U == (0x7fU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 0x12U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0xeU)))))));
            tracep->chgBit(oldp+299,(((0x13U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (7U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+300,(((0x13U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (4U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+301,(((0x13U == (0xffU 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0x1aU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))) 
                                      & (6U == (7U 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0xbU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0x15U)))))));
            tracep->chgBit(oldp+302,((((0x33U == (0xffU 
                                                  & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 0x1aU) 
                                                     | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 6U)))) 
                                       & (4U == (7U 
                                                 & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 0xbU) 
                                                    | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x15U))))) 
                                      & (0U == (0x7fU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x12U) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 0xeU)))))));
            tracep->chgBit(oldp+303,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs));
            tracep->chgBit(oldp+304,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw));
            tracep->chgBit(oldp+305,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc));
            tracep->chgBit(oldp+306,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi));
            tracep->chgBit(oldp+307,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci));
            tracep->chgQData(oldp+308,((4ULL + (((QData)((IData)(
                                                                 vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                 << 0x3aU) 
                                                | (((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                    << 0x1aU) 
                                                   | ((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                      >> 6U))))),64);
            tracep->chgQData(oldp+310,((1ULL + ((((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                     << 8U) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                       >> 0x18U))) 
                                                + (~ 
                                                   (((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                          >> 0x18U))))))),64);
            tracep->chgQData(oldp+312,(((((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
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
            tracep->chgQData(oldp+314,(((((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
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
            tracep->chgQData(oldp+316,(((((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
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
            tracep->chgQData(oldp+318,(((((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                               >> 0x18U))) 
                                        << (0x3fU & 
                                            ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                              << 8U) 
                                             | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                >> 0x18U))))),64);
            tracep->chgQData(oldp+320,(((((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                               >> 0x18U))) 
                                        >> (0x3fU & 
                                            ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                              << 8U) 
                                             | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                >> 0x18U))))),64);
            tracep->chgQData(oldp+322,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))),64);
            tracep->chgQData(oldp+324,(((((QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
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
            tracep->chgWData(oldp+326,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res),128);
            tracep->chgQData(oldp+330,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res),64);
            tracep->chgIData(oldp+332,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res),32);
            tracep->chgIData(oldp+333,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res),32);
            tracep->chgQData(oldp+334,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res),64);
            tracep->chgQData(oldp+336,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res),64);
            tracep->chgQData(oldp+338,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res),64);
            tracep->chgQData(oldp+340,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res),64);
            tracep->chgQData(oldp+342,((QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))),64);
            tracep->chgQData(oldp+344,((QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))),64);
            tracep->chgBit(oldp+346,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2));
            tracep->chgBit(oldp+347,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2));
            tracep->chgQData(oldp+348,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                              >> 6U)))),64);
            tracep->chgIData(oldp+350,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U] 
                                         << 0x1aU) 
                                        | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                                           >> 6U))),32);
            tracep->chgBit(oldp+351,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                                            >> 5U))));
            tracep->chgCData(oldp+352,((0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])),5);
            tracep->chgCData(oldp+353,((7U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                               << 0xbU) 
                                              | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                 >> 0x15U)))),3);
            tracep->chgCData(oldp+354,((0x7fU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x12U) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 0xeU)))),7);
            tracep->chgCData(oldp+355,((0xffU & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                    >> 6U)))),8);
            tracep->chgQData(oldp+356,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                              >> 0x18U)))),64);
            tracep->chgQData(oldp+358,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                              >> 0x18U)))),64);
            tracep->chgBit(oldp+360,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+361,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+362,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                            >> 0x18U))));
            tracep->chgQData(oldp+363,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0x10U])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+365,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU])) 
                                              >> 0x1cU)))),64);
            tracep->chgQData(oldp+367,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU])) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU])) 
                                            << 4U) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU])) 
                                              >> 0x1cU)))),64);
            tracep->chgIData(oldp+369,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                         << 4U) | (
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                                   >> 0x1cU))),32);
            tracep->chgQData(oldp+370,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U])) 
                                              >> 6U)))),64);
            tracep->chgIData(oldp+372,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[3U] 
                                         << 0x1aU) 
                                        | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                                           >> 6U))),32);
            tracep->chgBit(oldp+373,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                                            >> 5U))));
            tracep->chgCData(oldp+374,((0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U])),5);
            tracep->chgQData(oldp+375,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xcU])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xbU])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU])) 
                                              >> 0x13U)))),64);
            tracep->chgQData(oldp+377,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0xaU])) 
                                         << 0x2dU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[9U])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U])) 
                                              >> 0x13U)))),64);
            tracep->chgIData(oldp+379,(((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] 
                                         << 0xdU) | 
                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                         >> 0x13U))),32);
            tracep->chgBit(oldp+380,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                            >> 0x12U))));
            tracep->chgSData(oldp+381,((0xfffU & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[8U] 
                                                   << 0x1aU) 
                                                  | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U] 
                                                     >> 6U)))),12);
            tracep->chgQData(oldp+382,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[7U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[6U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[5U])) 
                                              >> 6U)))),64);
            tracep->chgBit(oldp+384,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                                            >> 5U))));
            tracep->chgQData(oldp+385,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0]),64);
            tracep->chgQData(oldp+387,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[1]),64);
            tracep->chgQData(oldp+389,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[2]),64);
            tracep->chgQData(oldp+391,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[3]),64);
            tracep->chgQData(oldp+393,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[4]),64);
            tracep->chgQData(oldp+395,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[5]),64);
            tracep->chgQData(oldp+397,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[6]),64);
            tracep->chgQData(oldp+399,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[7]),64);
            tracep->chgQData(oldp+401,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[8]),64);
            tracep->chgQData(oldp+403,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[9]),64);
            tracep->chgQData(oldp+405,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[10]),64);
            tracep->chgQData(oldp+407,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[11]),64);
            tracep->chgQData(oldp+409,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[12]),64);
            tracep->chgQData(oldp+411,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[13]),64);
            tracep->chgQData(oldp+413,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[14]),64);
            tracep->chgQData(oldp+415,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[15]),64);
            tracep->chgQData(oldp+417,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[16]),64);
            tracep->chgQData(oldp+419,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[17]),64);
            tracep->chgQData(oldp+421,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[18]),64);
            tracep->chgQData(oldp+423,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[19]),64);
            tracep->chgQData(oldp+425,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[20]),64);
            tracep->chgQData(oldp+427,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[21]),64);
            tracep->chgQData(oldp+429,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[22]),64);
            tracep->chgQData(oldp+431,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[23]),64);
            tracep->chgQData(oldp+433,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[24]),64);
            tracep->chgQData(oldp+435,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[25]),64);
            tracep->chgQData(oldp+437,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[26]),64);
            tracep->chgQData(oldp+439,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[27]),64);
            tracep->chgQData(oldp+441,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[28]),64);
            tracep->chgQData(oldp+443,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[29]),64);
            tracep->chgQData(oldp+445,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[30]),64);
            tracep->chgQData(oldp+447,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[31]),64);
            tracep->chgQData(oldp+449,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[0]),64);
            tracep->chgQData(oldp+451,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[1]),64);
            tracep->chgQData(oldp+453,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[2]),64);
            tracep->chgQData(oldp+455,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[3]),64);
            tracep->chgQData(oldp+457,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[4]),64);
            tracep->chgQData(oldp+459,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[5]),64);
            tracep->chgQData(oldp+461,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[6]),64);
            tracep->chgQData(oldp+463,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[7]),64);
            tracep->chgQData(oldp+465,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[8]),64);
            tracep->chgQData(oldp+467,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[9]),64);
            tracep->chgQData(oldp+469,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[10]),64);
            tracep->chgQData(oldp+471,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[11]),64);
            tracep->chgQData(oldp+473,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[12]),64);
            tracep->chgQData(oldp+475,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[13]),64);
            tracep->chgQData(oldp+477,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[14]),64);
            tracep->chgQData(oldp+479,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[15]),64);
            tracep->chgQData(oldp+481,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[16]),64);
            tracep->chgQData(oldp+483,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[17]),64);
            tracep->chgQData(oldp+485,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[18]),64);
            tracep->chgQData(oldp+487,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[19]),64);
            tracep->chgQData(oldp+489,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[20]),64);
            tracep->chgQData(oldp+491,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[21]),64);
            tracep->chgQData(oldp+493,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[22]),64);
            tracep->chgQData(oldp+495,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[23]),64);
            tracep->chgQData(oldp+497,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[24]),64);
            tracep->chgQData(oldp+499,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[25]),64);
            tracep->chgQData(oldp+501,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[26]),64);
            tracep->chgQData(oldp+503,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[27]),64);
            tracep->chgQData(oldp+505,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[28]),64);
            tracep->chgQData(oldp+507,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[29]),64);
            tracep->chgQData(oldp+509,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[30]),64);
            tracep->chgQData(oldp+511,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[31]),64);
            tracep->chgQData(oldp+513,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus),64);
            tracep->chgQData(oldp+515,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause),64);
            tracep->chgQData(oldp+517,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc),64);
            tracep->chgQData(oldp+519,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec),64);
            tracep->chgQData(oldp+521,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle),64);
            tracep->chgQData(oldp+523,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie),64);
            tracep->chgQData(oldp+525,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch),64);
            tracep->chgBit(oldp+527,((0x29aULL == (
                                                   ((QData)((IData)(
                                                                    vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                       << 0xdU) 
                                                      | ((QData)((IData)(
                                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                         >> 0x13U))))));
            tracep->chgBit(oldp+528,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex));
            tracep->chgBit(oldp+529,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick));
            tracep->chgQData(oldp+530,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime),64);
            tracep->chgQData(oldp+532,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp),64);
            tracep->chgBit(oldp+534,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+535,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                         ? (8ULL | 
                                            (0xfffffffffffffff0ULL 
                                             & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                         : (0xfffffffffffffff0ULL 
                                            & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))),64);
            tracep->chgQData(oldp+537,((0xfffffffffffffff0ULL 
                                        & ((1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                            ? (0xfffffffffffffff8ULL 
                                               & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                            : ((3U 
                                                == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                ? (0xfffffffffffffff8ULL 
                                                   & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                                : 0ULL)))),64);
            tracep->chgQData(oldp+539,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
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
            tracep->chgCData(oldp+541,((0xfU & ((2U 
                                                 == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                 ? 
                                                (7U 
                                                 & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                  ? 
                                                 (7U 
                                                  & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                                  : 0U)))),4);
            tracep->chgCData(oldp+542,((0xfU & (((2U 
                                                  == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                  ? 
                                                 (7U 
                                                  & (IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))))
                                                  : 
                                                 ((4U 
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
            tracep->chgBit(oldp+543,((1U & ((((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
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
                                                      & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))) 
                                            >> 3U))));
            tracep->chgQData(oldp+544,(((1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                         ? (0xfffffffffffffff8ULL 
                                            & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                         : ((3U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                             ? (0xfffffffffffffff8ULL 
                                                & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                             : 0ULL))),64);
            tracep->chgCData(oldp+546,((0x3fU & ((2U 
                                                  == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                  ? 
                                                 (0x38U 
                                                  & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                                     << 3U))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                   ? 
                                                  (0x38U 
                                                   & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                                      << 3U))
                                                   : 0U)))),6);
            __Vtemp159[0U] = 0xffffffffU;
            __Vtemp159[1U] = (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
            __Vtemp159[2U] = 0U;
            __Vtemp159[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp160, __Vtemp159, 
                          (0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                                 << 3U))
                                     : ((4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                         ? (0x38U & 
                                            ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                             << 3U))
                                         : 0U))));
            tracep->chgWData(oldp+547,(__Vtemp160),128);
            __Vtemp173[0U] = 0xffffffffU;
            __Vtemp173[1U] = (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
            __Vtemp173[2U] = 0U;
            __Vtemp173[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp174, __Vtemp173, 
                          (0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                                 << 3U))
                                     : ((4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                         ? (0x38U & 
                                            ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                             << 3U))
                                         : 0U))));
            tracep->chgQData(oldp+551,((((QData)((IData)(
                                                         __Vtemp174[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp174[0U])))),64);
            __Vtemp187[0U] = 0xffffffffU;
            __Vtemp187[1U] = (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d)));
            __Vtemp187[2U] = 0U;
            __Vtemp187[3U] = 0U;
            VL_SHIFTL_WWI(128,128,6, __Vtemp188, __Vtemp187, 
                          (0x3fU & ((2U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                     ? (0x38U & ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))) 
                                                 << 3U))
                                     : ((4U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                         ? (0x38U & 
                                            ((IData)((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))) 
                                             << 3U))
                                         : 0U))));
            tracep->chgQData(oldp+553,((((QData)((IData)(
                                                         __Vtemp188[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          __Vtemp188[2U])))),64);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [4U]))) {
            tracep->chgBit(oldp+555,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done) 
                                      | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready))));
            __Vtemp190[2U] = (IData)(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
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
                                                    : 0ULL))))));
            __Vtemp190[3U] = (IData)((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
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
                                                ? (
                                                   (0xffffffffffffffe0ULL 
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
                                                     : 0ULL))))) 
                                      >> 0x20U));
            __Vtemp197[0U] = (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata);
            __Vtemp197[1U] = (IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata 
                                      >> 0x20U));
            __Vtemp197[2U] = ((0xffffffc0U & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                              | ((0x20U & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U]) 
                                 | (0x1fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U])));
            __Vtemp197[3U] = ((0x3fU & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U]) 
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
            __Vtemp197[4U] = ((0x3fU & ((IData)((((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                     << 0x1aU) 
                                                    | ((QData)((IData)(
                                                                       vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                       >> 6U)))) 
                                        >> 0x1aU)) 
                              | (0xffffffc0U & ((IData)(
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
            __Vtemp197[5U] = ((0x3fU & ((IData)(((((QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                      << 0x1aU) 
                                                     | ((QData)((IData)(
                                                                        vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                        >> 6U))) 
                                                 >> 0x20U)) 
                                        >> 0x1aU)) 
                              | (0xffffffc0U & (__Vtemp190[2U] 
                                                << 6U)));
            __Vtemp197[6U] = ((0x3fU & (__Vtemp190[2U] 
                                        >> 0x1aU)) 
                              | (0xffffffc0U & (__Vtemp190[3U] 
                                                << 6U)));
            __Vtemp197[7U] = ((0xfff80000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                               << 0x17U) 
                                              | (0x780000U 
                                                 & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                                    >> 9U)))) 
                              | ((0x40000U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                              >> 6U)) 
                                 | ((0x3ffc0U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                  << 0xeU) 
                                                 | (0x3fc0U 
                                                    & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x12U)))) 
                                    | (0x3fU & (__Vtemp190[3U] 
                                                >> 0x1aU)))));
            __Vtemp197[8U] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                           >> 9U)) 
                              | (0xfff80000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                                 << 0x17U) 
                                                | (0x780000U 
                                                   & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xaU] 
                                                      >> 9U)))));
            __Vtemp197[9U] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                           >> 9U)) 
                              | (0xfff80000U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                                 << 0x17U) 
                                                | (0x780000U 
                                                   & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xbU] 
                                                      >> 9U)))));
            __Vtemp197[0xaU] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                             >> 9U)) 
                                | (0xfff80000U & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                                   << 0x17U) 
                                                  | (0x780000U 
                                                     & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xcU] 
                                                        >> 9U)))));
            __Vtemp197[0xbU] = ((0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                             >> 9U)) 
                                | (0xfff80000U & ((
                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                   << 0x17U) 
                                                  | (0x780000U 
                                                     & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xdU] 
                                                        >> 9U)))));
            __Vtemp197[0xcU] = (0x7ffffU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                            >> 9U));
            tracep->chgWData(oldp+556,(__Vtemp197),403);
            tracep->chgQData(oldp+569,(((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs))) 
                                            | (- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)))) 
                                           & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                          | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci))) 
                                             & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                         | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi))) 
                                            & (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)))) 
                                        | ((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc))) 
                                           & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1))),64);
            tracep->chgBit(oldp+571,((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward) 
                                       | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward)) 
                                      & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid))));
            tracep->chgQData(oldp+572,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
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
                                                 ? 
                                                ((0xffffffffffffffe0ULL 
                                                  & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                 | (QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata) 
                                                                       | ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xfU] 
                                                                           << 4U) 
                                                                          | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0xeU] 
                                                                             >> 0x1cU)))))))
                                                 : 
                                                ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
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
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+574,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen));
            tracep->chgCData(oldp+575,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest),8);
            tracep->chgQData(oldp+576,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata),64);
            tracep->chgQData(oldp+578,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc),64);
            tracep->chgIData(oldp+580,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst),32);
            tracep->chgBit(oldp+581,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid));
            tracep->chgBit(oldp+582,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap));
            tracep->chgCData(oldp+583,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code),8);
            tracep->chgQData(oldp+584,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt),64);
            tracep->chgQData(oldp+586,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt),64);
            tracep->chgQData(oldp+588,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[0]),64);
            tracep->chgQData(oldp+590,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[1]),64);
            tracep->chgQData(oldp+592,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[2]),64);
            tracep->chgQData(oldp+594,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[3]),64);
            tracep->chgQData(oldp+596,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[4]),64);
            tracep->chgQData(oldp+598,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[5]),64);
            tracep->chgQData(oldp+600,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[6]),64);
            tracep->chgQData(oldp+602,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[7]),64);
            tracep->chgQData(oldp+604,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[8]),64);
            tracep->chgQData(oldp+606,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[9]),64);
            tracep->chgQData(oldp+608,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[10]),64);
            tracep->chgQData(oldp+610,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[11]),64);
            tracep->chgQData(oldp+612,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[12]),64);
            tracep->chgQData(oldp+614,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[13]),64);
            tracep->chgQData(oldp+616,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[14]),64);
            tracep->chgQData(oldp+618,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[15]),64);
            tracep->chgQData(oldp+620,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[16]),64);
            tracep->chgQData(oldp+622,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[17]),64);
            tracep->chgQData(oldp+624,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[18]),64);
            tracep->chgQData(oldp+626,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[19]),64);
            tracep->chgQData(oldp+628,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[20]),64);
            tracep->chgQData(oldp+630,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[21]),64);
            tracep->chgQData(oldp+632,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[22]),64);
            tracep->chgQData(oldp+634,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[23]),64);
            tracep->chgQData(oldp+636,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[24]),64);
            tracep->chgQData(oldp+638,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[25]),64);
            tracep->chgQData(oldp+640,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[26]),64);
            tracep->chgQData(oldp+642,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[27]),64);
            tracep->chgQData(oldp+644,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[28]),64);
            tracep->chgQData(oldp+646,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[29]),64);
            tracep->chgQData(oldp+648,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[30]),64);
            tracep->chgQData(oldp+650,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[31]),64);
            tracep->chgQData(oldp+652,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_diff),64);
            tracep->chgQData(oldp+654,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_diff),64);
            tracep->chgQData(oldp+656,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mcause_diff),64);
            tracep->chgQData(oldp+658,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_diff),64);
            tracep->chgQData(oldp+660,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_diff),64);
            tracep->chgQData(oldp+662,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_diff),64);
            tracep->chgQData(oldp+664,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__mscratch_diff),64);
            tracep->chgQData(oldp+666,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__sstatus_diff),64);
            tracep->chgIData(oldp+668,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__intrNO_diff),32);
            tracep->chgQData(oldp+669,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0U]),64);
            tracep->chgQData(oldp+671,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [1U]),64);
            tracep->chgQData(oldp+673,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [2U]),64);
            tracep->chgQData(oldp+675,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [3U]),64);
            tracep->chgQData(oldp+677,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [4U]),64);
            tracep->chgQData(oldp+679,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [5U]),64);
            tracep->chgQData(oldp+681,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [6U]),64);
            tracep->chgQData(oldp+683,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [7U]),64);
            tracep->chgQData(oldp+685,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [8U]),64);
            tracep->chgQData(oldp+687,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [9U]),64);
            tracep->chgQData(oldp+689,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0xaU]),64);
            tracep->chgQData(oldp+691,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0xbU]),64);
            tracep->chgQData(oldp+693,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0xcU]),64);
            tracep->chgQData(oldp+695,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0xdU]),64);
            tracep->chgQData(oldp+697,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0xeU]),64);
            tracep->chgQData(oldp+699,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0xfU]),64);
            tracep->chgQData(oldp+701,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x10U]),64);
            tracep->chgQData(oldp+703,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x11U]),64);
            tracep->chgQData(oldp+705,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x12U]),64);
            tracep->chgQData(oldp+707,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x13U]),64);
            tracep->chgQData(oldp+709,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x14U]),64);
            tracep->chgQData(oldp+711,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x15U]),64);
            tracep->chgQData(oldp+713,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x16U]),64);
            tracep->chgQData(oldp+715,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x17U]),64);
            tracep->chgQData(oldp+717,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x18U]),64);
            tracep->chgQData(oldp+719,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x19U]),64);
            tracep->chgQData(oldp+721,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x1aU]),64);
            tracep->chgQData(oldp+723,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x1bU]),64);
            tracep->chgQData(oldp+725,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x1cU]),64);
            tracep->chgQData(oldp+727,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x1dU]),64);
            tracep->chgQData(oldp+729,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x1eU]),64);
            tracep->chgQData(oldp+731,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff
                                       [0x1fU]),64);
            tracep->chgCData(oldp+733,((7U & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code))),3);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+734,(vlTOPp->SimTop__DOT__w_data[0]),64);
            tracep->chgQData(oldp+736,(vlTOPp->SimTop__DOT__w_data[1]),64);
            tracep->chgQData(oldp+738,(vlTOPp->SimTop__DOT__w_data[2]),64);
            tracep->chgQData(oldp+740,(vlTOPp->SimTop__DOT__w_data[3]),64);
            tracep->chgCData(oldp+742,(vlTOPp->SimTop__DOT__mem_req_strb),8);
            tracep->chgBit(oldp+743,(vlTOPp->SimTop__DOT__inst_ready));
            tracep->chgBit(oldp+744,(vlTOPp->SimTop__DOT__mem_req_wen));
            tracep->chgBit(oldp+745,(vlTOPp->SimTop__DOT__data_ready));
            tracep->chgQData(oldp+746,((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr))),64);
            tracep->chgQData(oldp+748,((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data))),64);
            tracep->chgBit(oldp+750,(vlTOPp->SimTop__DOT__inst_req_valid));
            tracep->chgBit(oldp+751,(vlTOPp->SimTop__DOT__inst_req_wen));
            tracep->chgQData(oldp+752,((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))),64);
            tracep->chgWData(oldp+754,(vlTOPp->SimTop__DOT__mem_req_data),128);
            tracep->chgCData(oldp+758,(vlTOPp->SimTop__DOT__mem_req_size),2);
            tracep->chgBit(oldp+759,(vlTOPp->SimTop__DOT__mem_req_valid));
            tracep->chgBit(oldp+760,(vlTOPp->SimTop__DOT__mem_resp_valid));
            tracep->chgBit(oldp+761,(vlTOPp->SimTop__DOT__mem_req_wen));
            tracep->chgBit(oldp+762,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid));
            tracep->chgBit(oldp+763,(((IData)(vlTOPp->SimTop__DOT__inst_req_valid) 
                                      | (IData)(vlTOPp->SimTop__DOT__mem_req_valid))));
            tracep->chgBit(oldp+764,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren));
            tracep->chgBit(oldp+765,(((0U == (IData)(vlTOPp->SimTop__DOT__mem_req_size)) 
                                      & (~ (IData)(vlTOPp->SimTop__DOT__mem_req_wen)))));
            tracep->chgBit(oldp+766,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h));
            tracep->chgBit(oldp+767,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d));
            tracep->chgCData(oldp+768,((3U | ((1U & 
                                               (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h)))) 
                                              | (7U 
                                                 & (- (IData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d))))))),4);
            tracep->chgQData(oldp+769,((0xfffffffffffffff8ULL 
                                        & (QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))),64);
            tracep->chgIData(oldp+771,(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr),32);
            tracep->chgIData(oldp+772,(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data),32);
            tracep->chgCData(oldp+773,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__state),3);
            tracep->chgBit(oldp+774,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen));
            tracep->chgWData(oldp+775,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata),129);
            tracep->chgBit(oldp+780,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready));
            tracep->chgBit(oldp+781,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill));
            tracep->chgIData(oldp+782,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__i),32);
            __Vtemp198[0U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[0U];
            __Vtemp198[1U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[1U];
            __Vtemp198[2U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[2U];
            __Vtemp198[3U] = vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata[3U];
            tracep->chgWData(oldp+783,(__Vtemp198),128);
            tracep->chgIData(oldp+787,(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr),32);
            tracep->chgWData(oldp+788,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb),128);
            tracep->chgCData(oldp+792,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__state),3);
            tracep->chgBit(oldp+793,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen));
            tracep->chgWData(oldp+794,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata),128);
            tracep->chgBit(oldp+798,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready));
            tracep->chgBit(oldp+799,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill));
            tracep->chgIData(oldp+800,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+801,(vlTOPp->SimTop__DOT__inst_valid));
            tracep->chgQData(oldp+802,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc),64);
            tracep->chgBit(oldp+804,(vlTOPp->SimTop__DOT__br_stall));
            tracep->chgBit(oldp+805,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs));
            tracep->chgBit(oldp+806,(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done));
            tracep->chgWData(oldp+807,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus),66);
            tracep->chgBit(oldp+810,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena));
            tracep->chgBit(oldp+811,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena));
            tracep->chgQData(oldp+812,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1),64);
            tracep->chgQData(oldp+814,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2),64);
            tracep->chgQData(oldp+816,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata),64);
            tracep->chgQData(oldp+818,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc),64);
            tracep->chgBit(oldp+820,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in));
            tracep->chgBit(oldp+821,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go));
            tracep->chgQData(oldp+822,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata),64);
            tracep->chgBit(oldp+824,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done));
            tracep->chgBit(oldp+825,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid));
            tracep->chgBit(oldp+826,((1U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+827,((1U & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U])));
            tracep->chgQData(oldp+828,((((QData)((IData)(
                                                         vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U])))),64);
            tracep->chgBit(oldp+830,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go));
            tracep->chgBit(oldp+831,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in));
            tracep->chgQData(oldp+832,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1),64);
            tracep->chgQData(oldp+834,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2),64);
            tracep->chgBit(oldp+836,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward));
            tracep->chgBit(oldp+837,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward));
            tracep->chgQData(oldp+838,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value),64);
            tracep->chgQData(oldp+840,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value),64);
            tracep->chgBit(oldp+842,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken));
            tracep->chgQData(oldp+843,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target),64);
            tracep->chgCData(oldp+845,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type),6);
            tracep->chgBit(oldp+846,((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                      == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
            tracep->chgBit(oldp+847,((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                      != vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
            tracep->chgBit(oldp+848,((1U & (((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
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
            tracep->chgBit(oldp+849,((1U & (~ (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2)))));
            tracep->chgBit(oldp+850,((1U & (((IData)(
                                                     (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
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
            tracep->chgBit(oldp+851,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2));
            tracep->chgQData(oldp+852,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2),64);
            tracep->chgIData(oldp+854,((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc)),32);
            tracep->chgIData(oldp+855,((0xfffffU & (IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                            >> 0xcU)))),20);
            tracep->chgCData(oldp+856,((0xffU & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+857,((0xfU & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc))),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+858,(vlTOPp->SimTop__DOT__addr_valid));
            tracep->chgBit(oldp+859,(vlTOPp->SimTop__DOT__data_valid));
            tracep->chgQData(oldp+860,(vlTOPp->SimTop__DOT__data_read),64);
            tracep->chgQData(oldp+862,(vlTOPp->SimTop__DOT__data_write),64);
            tracep->chgQData(oldp+864,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64),64);
            tracep->chgCData(oldp+866,(vlTOPp->SimTop__DOT__data_size),2);
            tracep->chgBit(oldp+867,(vlTOPp->SimTop__DOT__data_wen));
            tracep->chgCData(oldp+868,(vlTOPp->SimTop__DOT__data_strb),8);
            tracep->chgWData(oldp+869,(vlTOPp->SimTop__DOT__inst_resp_data),128);
            tracep->chgBit(oldp+873,(vlTOPp->SimTop__DOT__inst_resp_valid));
            tracep->chgWData(oldp+874,(vlTOPp->SimTop__DOT__mem_resp_data),128);
            tracep->chgBit(oldp+878,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in));
            tracep->chgBit(oldp+879,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren));
            tracep->chgBit(oldp+880,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen));
            tracep->chgQData(oldp+881,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata),64);
            tracep->chgQData(oldp+883,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32),64);
            VL_EXTEND_WW(129,128, __Vtemp199, vlTOPp->SimTop__DOT__inst_resp_data);
            tracep->chgWData(oldp+885,(__Vtemp199),129);
            VL_EXTEND_WW(129,128, __Vtemp200, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
            tracep->chgWData(oldp+890,(__Vtemp200),129);
            tracep->chgWData(oldp+895,(vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q),128);
            tracep->chgIData(oldp+899,((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)),32);
            tracep->chgIData(oldp+900,((0xfffffU & (IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                            >> 0xcU)))),20);
            tracep->chgCData(oldp+901,((0xffU & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 4U)))),8);
            tracep->chgCData(oldp+902,((0xfU & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64))),4);
            tracep->chgQData(oldp+903,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb),64);
            tracep->chgQData(oldp+905,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data),64);
            tracep->chgWData(oldp+907,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out),128);
            tracep->chgQData(oldp+911,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data),64);
            tracep->chgBit(oldp+913,(((0xa7U == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                            >> 4U)))) 
                                      & (IData)(vlTOPp->SimTop__DOT__data_valid))));
            tracep->chgBit(oldp+914,(((0xa7U == (0xffU 
                                                 & (IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                            >> 4U)))) 
                                      & (IData)(vlTOPp->SimTop__DOT__data_wen))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+915,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in));
            tracep->chgBit(oldp+916,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go));
            tracep->chgBit(oldp+917,(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done));
            tracep->chgBit(oldp+918,(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty));
        }
        tracep->chgBit(oldp+919,(vlTOPp->clock));
        tracep->chgBit(oldp+920,(vlTOPp->reset));
        tracep->chgQData(oldp+921,(vlTOPp->io_logCtrl_log_begin),64);
        tracep->chgQData(oldp+923,(vlTOPp->io_logCtrl_log_end),64);
        tracep->chgQData(oldp+925,(vlTOPp->io_logCtrl_log_level),64);
        tracep->chgBit(oldp+927,(vlTOPp->io_perfInfo_clean));
        tracep->chgBit(oldp+928,(vlTOPp->io_perfInfo_dump));
        tracep->chgBit(oldp+929,(vlTOPp->io_uart_out_valid));
        tracep->chgCData(oldp+930,(vlTOPp->io_uart_out_ch),8);
        tracep->chgBit(oldp+931,(vlTOPp->io_uart_in_valid));
        tracep->chgCData(oldp+932,(vlTOPp->io_uart_in_ch),8);
        tracep->chgBit(oldp+933,(vlTOPp->io_memAXI_0_aw_ready));
        tracep->chgBit(oldp+934,(vlTOPp->io_memAXI_0_aw_valid));
        tracep->chgQData(oldp+935,(vlTOPp->io_memAXI_0_aw_bits_addr),64);
        tracep->chgCData(oldp+937,(vlTOPp->io_memAXI_0_aw_bits_prot),3);
        tracep->chgCData(oldp+938,(vlTOPp->io_memAXI_0_aw_bits_id),4);
        tracep->chgBit(oldp+939,(vlTOPp->io_memAXI_0_aw_bits_user));
        tracep->chgCData(oldp+940,(vlTOPp->io_memAXI_0_aw_bits_len),8);
        tracep->chgCData(oldp+941,(vlTOPp->io_memAXI_0_aw_bits_size),3);
        tracep->chgCData(oldp+942,(vlTOPp->io_memAXI_0_aw_bits_burst),2);
        tracep->chgBit(oldp+943,(vlTOPp->io_memAXI_0_aw_bits_lock));
        tracep->chgCData(oldp+944,(vlTOPp->io_memAXI_0_aw_bits_cache),4);
        tracep->chgCData(oldp+945,(vlTOPp->io_memAXI_0_aw_bits_qos),4);
        tracep->chgBit(oldp+946,(vlTOPp->io_memAXI_0_w_ready));
        tracep->chgBit(oldp+947,(vlTOPp->io_memAXI_0_w_valid));
        tracep->chgQData(oldp+948,(vlTOPp->io_memAXI_0_w_bits_data[0]),64);
        tracep->chgQData(oldp+950,(vlTOPp->io_memAXI_0_w_bits_data[1]),64);
        tracep->chgQData(oldp+952,(vlTOPp->io_memAXI_0_w_bits_data[2]),64);
        tracep->chgQData(oldp+954,(vlTOPp->io_memAXI_0_w_bits_data[3]),64);
        tracep->chgCData(oldp+956,(vlTOPp->io_memAXI_0_w_bits_strb),8);
        tracep->chgBit(oldp+957,(vlTOPp->io_memAXI_0_w_bits_last));
        tracep->chgBit(oldp+958,(vlTOPp->io_memAXI_0_b_ready));
        tracep->chgBit(oldp+959,(vlTOPp->io_memAXI_0_b_valid));
        tracep->chgCData(oldp+960,(vlTOPp->io_memAXI_0_b_bits_resp),2);
        tracep->chgCData(oldp+961,(vlTOPp->io_memAXI_0_b_bits_id),4);
        tracep->chgBit(oldp+962,(vlTOPp->io_memAXI_0_b_bits_user));
        tracep->chgBit(oldp+963,(vlTOPp->io_memAXI_0_ar_ready));
        tracep->chgBit(oldp+964,(vlTOPp->io_memAXI_0_ar_valid));
        tracep->chgQData(oldp+965,(vlTOPp->io_memAXI_0_ar_bits_addr),64);
        tracep->chgCData(oldp+967,(vlTOPp->io_memAXI_0_ar_bits_prot),3);
        tracep->chgCData(oldp+968,(vlTOPp->io_memAXI_0_ar_bits_id),4);
        tracep->chgBit(oldp+969,(vlTOPp->io_memAXI_0_ar_bits_user));
        tracep->chgCData(oldp+970,(vlTOPp->io_memAXI_0_ar_bits_len),8);
        tracep->chgCData(oldp+971,(vlTOPp->io_memAXI_0_ar_bits_size),3);
        tracep->chgCData(oldp+972,(vlTOPp->io_memAXI_0_ar_bits_burst),2);
        tracep->chgBit(oldp+973,(vlTOPp->io_memAXI_0_ar_bits_lock));
        tracep->chgCData(oldp+974,(vlTOPp->io_memAXI_0_ar_bits_cache),4);
        tracep->chgCData(oldp+975,(vlTOPp->io_memAXI_0_ar_bits_qos),4);
        tracep->chgBit(oldp+976,(vlTOPp->io_memAXI_0_r_ready));
        tracep->chgBit(oldp+977,(vlTOPp->io_memAXI_0_r_valid));
        tracep->chgCData(oldp+978,(vlTOPp->io_memAXI_0_r_bits_resp),2);
        tracep->chgQData(oldp+979,(vlTOPp->io_memAXI_0_r_bits_data[0]),64);
        tracep->chgQData(oldp+981,(vlTOPp->io_memAXI_0_r_bits_data[1]),64);
        tracep->chgQData(oldp+983,(vlTOPp->io_memAXI_0_r_bits_data[2]),64);
        tracep->chgQData(oldp+985,(vlTOPp->io_memAXI_0_r_bits_data[3]),64);
        tracep->chgBit(oldp+987,(vlTOPp->io_memAXI_0_r_bits_last));
        tracep->chgCData(oldp+988,(vlTOPp->io_memAXI_0_r_bits_id),4);
        tracep->chgBit(oldp+989,(vlTOPp->io_memAXI_0_r_bits_user));
        tracep->chgQData(oldp+990,(vlTOPp->io_memAXI_0_r_bits_data
                                   [0U]),64);
        VL_EXTEND_WW(129,128, __Vtemp201, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp202, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp203, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp204, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        tracep->chgQData(oldp+992,((QData)((IData)(
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                                 >> 2U))))
                                                     ? 
                                                    __Vtemp201[0U]
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(
                                                                 (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                                  >> 2U))))
                                                      ? 
                                                     __Vtemp202[1U]
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & (IData)(
                                                                  (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                                   >> 2U))))
                                                       ? 
                                                      __Vtemp203[2U]
                                                       : 
                                                      __Vtemp204[3U])))))),64);
        tracep->chgQData(oldp+994,(((1U & (IData)(((QData)((IData)(vlTOPp->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)) 
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
        tracep->chgBit(oldp+996,(((IData)(vlTOPp->io_memAXI_0_aw_ready) 
                                  & (1U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))));
        tracep->chgBit(oldp+997,(((IData)(vlTOPp->io_memAXI_0_ar_ready) 
                                  & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr))));
        tracep->chgBit(oldp+998,(((IData)(vlTOPp->SimTop__DOT__mem_req_wen)
                                   ? (IData)(vlTOPp->io_memAXI_0_b_valid)
                                   : (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done))));
        tracep->chgBit(oldp+999,((((IData)(vlTOPp->reset) 
                                   | ((IData)(vlTOPp->SimTop__DOT__mem_req_wen) 
                                      & (0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)))) 
                                  | (0U == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)))));
        tracep->chgBit(oldp+1000,(((1U != (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__len)) 
                                   & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs) 
                                      | (IData)(vlTOPp->io_memAXI_0_r_valid)))));
        tracep->chgBit(oldp+1001,(((IData)(vlTOPp->io_memAXI_0_b_valid) 
                                   | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready))));
        tracep->chgCData(oldp+1002,(((IData)(vlTOPp->SimTop__DOT__mem_req_wen)
                                      ? (IData)(vlTOPp->io_memAXI_0_b_bits_resp)
                                      : (IData)(vlTOPp->io_memAXI_0_r_bits_resp))),2);
        __Vtemp218[9U] = ((0xf8000000U & (((((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
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
        __Vtemp219[0U] = ((0xffffffc0U & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
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
        __Vtemp219[1U] = ((0x3fU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                                     << 6U)));
        __Vtemp219[2U] = ((0x3fU & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U] 
                                    >> 0x1aU)) | (0xffffffc0U 
                                                  & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U] 
                                                     << 6U)));
        __Vtemp219[3U] = ((0xff000000U & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
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
        __Vtemp219[4U] = ((0xffffffU & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(
                                                              (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
        __Vtemp219[5U] = ((0xffffffU & ((IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                                      << 0x18U)));
        __Vtemp219[6U] = ((0xffffffU & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(
                                                              (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
        __Vtemp219[7U] = ((0xffffffU & ((IData)((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                 >> 0x20U)) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                                      << 0x18U)));
        __Vtemp219[8U] = ((0xffffffU & ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value) 
                                        >> 8U)) | (0xff000000U 
                                                   & ((IData)(
                                                              (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
                                                               >> 0x20U)) 
                                                      << 0x18U)));
        __Vtemp219[9U] = ((0xf0000000U & (((IData)(vlTOPp->reset)
                                            ? 0U : 
                                           ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                             ? 1U : 
                                            ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                              ? 2U : 
                                             ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                               ? 3U
                                               : 0U)))) 
                                          << 0x1cU)) 
                          | __Vtemp218[9U]);
        __Vtemp219[0xaU] = ((0xfffffffU & (((IData)(vlTOPp->reset)
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
        __Vtemp219[0xbU] = ((0xfffffffU & ((IData)(
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
        __Vtemp219[0xcU] = ((0xfffffffU & ((IData)(
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
        __Vtemp219[0xdU] = ((0xfffffffU & ((IData)(
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
        __Vtemp219[0xeU] = ((0xfffffffU & ((IData)(
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
        __Vtemp219[0xfU] = ((0xfffffffU & ((IData)(
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
        __Vtemp219[0x10U] = (0xfffffffU & ((IData)(
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
        tracep->chgWData(oldp+1003,(__Vtemp219),540);
        tracep->chgCData(oldp+1020,(((IData)(vlTOPp->reset)
                                      ? 0U : ((((((0x10U 
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
        tracep->chgCData(oldp+1021,(((IData)(vlTOPp->reset)
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
        tracep->chgQData(oldp+1022,(((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
                                      ? ((0x2004000ULL 
                                          == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                                          ? vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp
                                          : ((0x200bff8ULL 
                                              == vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                                              ? vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime
                                              : 0ULL))
                                      : 0ULL)),64);
        tracep->chgBit(oldp+1024,((1U & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                          >> 0x1aU) 
                                         & (~ (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done))))));
        tracep->chgBit(oldp+1025,(((((0x7bU == (0xffU 
                                                & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                    << 0x1aU) 
                                                   | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U)))) 
                                     | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
                                    | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen)) 
                                   | (((0xb00U == (0xfffU 
                                                   & ((vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 8U) 
                                                      | (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0x18U)))) 
                                       & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                          >> 0x18U)) 
                                      & (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                         >> 0x19U)))));
        tracep->chgBit(oldp+1026,((1U & (~ (IData)(vlTOPp->reset)))));
        tracep->chgBit(oldp+1027,(((IData)(vlTOPp->reset)
                                    ? 0U : (1U & ((
                                                   ((0x10U 
                                                     == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                    | (0x20U 
                                                       == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (8U 
                                                      == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                  | (2U 
                                                     == (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))))));
        tracep->chgCData(oldp+1028,(((IData)(vlTOPp->reset)
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
        tracep->chgCData(oldp+1029,(((IData)(vlTOPp->reset)
                                      ? 0U : (0x7fU 
                                              & vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))),8);
        tracep->chgQData(oldp+1030,(((IData)(vlTOPp->reset)
                                      ? 0ULL : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                                 ? 0xbULL
                                                 : 
                                                ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                  ? 0x29aULL
                                                  : 
                                                 ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                   ? 0x8000000000000007ULL
                                                   : 0ULL))))),64);
        tracep->chgQData(oldp+1032,(((IData)(vlTOPp->reset)
                                      ? 0ULL : (((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall) 
                                                 | (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                                                 : 0ULL))),64);
        tracep->chgIData(oldp+1034,(((IData)(vlTOPp->reset)
                                      ? 0U : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall)
                                               ? 1U
                                               : ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int)
                                                    ? 3U
                                                    : 0U))))),32);
        tracep->chgQData(oldp+1035,(((((((((- (QData)((IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb))) 
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
        VL_EXTEND_WW(129,128, __Vtemp220, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp221, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp222, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        VL_EXTEND_WW(129,128, __Vtemp223, vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
        tracep->chgIData(oldp+1037,(((0U == (3U & (IData)(
                                                          (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                           >> 2U))))
                                      ? __Vtemp220[0U]
                                      : ((1U == (3U 
                                                 & (IData)(
                                                           (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                            >> 2U))))
                                          ? __Vtemp221[1U]
                                          : ((2U == 
                                              (3U & (IData)(
                                                            (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                             >> 2U))))
                                              ? __Vtemp222[2U]
                                              : __Vtemp223[3U])))),32);
        tracep->chgBit(oldp+1038,((((vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__tag
                                     [(0xffU & (IData)(
                                                       (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                        >> 4U)))] 
                                     == (0xfffffU & (IData)(
                                                            (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                             >> 0xcU)))) 
                                    & vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__valid
                                    [(0xffU & (IData)(
                                                      (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                       >> 4U)))]) 
                                   & (IData)(vlTOPp->SimTop__DOT__inst_valid))));
        tracep->chgBit(oldp+1039,((vlTOPp->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty
                                   [(0xffU & (IData)(
                                                     (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                      >> 4U)))] 
                                   & (IData)(vlTOPp->SimTop__DOT__inst_valid))));
        tracep->chgBit(oldp+1040,(((((vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag
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
        tracep->chgBit(oldp+1041,(((0xa7U == (0xffU 
                                              & (IData)(
                                                        (vlTOPp->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 4U)))) 
                                   & (IData)(vlTOPp->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty))));
    }
}

void VSimTop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VSimTop__Syms* __restrict vlSymsp = static_cast<VSimTop__Syms*>(userp);
    VSimTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
    }
}
