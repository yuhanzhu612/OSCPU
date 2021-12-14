// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimTop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VSimTop___024root.h"

VL_ATTR_COLD void VSimTop___024root___settle__TOP__1(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___settle__TOP__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf0e9266c__0;
    VlWide<4>/*127:0*/ __Vtemp_hf3183491__0;
    // Body
    vlSelf->io_memAXI_0_aw_bits_prot = 0U;
    vlSelf->io_memAXI_0_aw_bits_id = 0U;
    vlSelf->io_memAXI_0_aw_bits_user = 0U;
    vlSelf->io_memAXI_0_aw_bits_len = 0U;
    vlSelf->io_memAXI_0_aw_bits_size = 3U;
    vlSelf->io_memAXI_0_aw_bits_burst = 1U;
    vlSelf->io_memAXI_0_aw_bits_lock = 0U;
    vlSelf->io_memAXI_0_aw_bits_cache = 2U;
    vlSelf->io_memAXI_0_aw_bits_qos = 0U;
    vlSelf->io_memAXI_0_w_bits_last = 1U;
    vlSelf->io_memAXI_0_b_ready = 1U;
    vlSelf->io_memAXI_0_ar_bits_prot = 0U;
    vlSelf->io_memAXI_0_ar_bits_id = 0U;
    vlSelf->io_memAXI_0_ar_bits_user = 0U;
    vlSelf->io_memAXI_0_ar_bits_len = 1U;
    vlSelf->io_memAXI_0_ar_bits_size = 3U;
    vlSelf->io_memAXI_0_ar_bits_burst = 1U;
    vlSelf->io_memAXI_0_ar_bits_lock = 0U;
    vlSelf->io_memAXI_0_ar_bits_cache = 2U;
    vlSelf->io_memAXI_0_ar_bits_qos = 0U;
    vlSelf->io_memAXI_0_r_ready = 1U;
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done 
        = ((IData)(vlSelf->io_memAXI_0_r_valid) & (IData)(vlSelf->io_memAXI_0_r_bits_last));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready_en 
        = ((IData)(vlSelf->io_memAXI_0_b_valid) | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr 
        = ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
           | (3U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
        [0U];
    vlSelf->SimTop__DOT__inst_resp_valid = ((5U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                            & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
    vlSelf->io_memAXI_0_aw_valid = (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state));
    vlSelf->io_memAXI_0_w_valid = (2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state));
    vlSelf->io_memAXI_0_w_bits_strb = vlSelf->SimTop__DOT__mem_req_strb;
    vlSelf->io_memAXI_0_aw_bits_addr = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                         ? (8ULL | 
                                            (0xfffffffffffffff0ULL 
                                             & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))))
                                         : (0xfffffffffffffff0ULL 
                                            & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr))));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid 
        = ((IData)(vlSelf->SimTop__DOT__mem_req_valid) 
           & (IData)(vlSelf->SimTop__DOT__mem_req_wen));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__aw_hs 
        = ((IData)(vlSelf->io_memAXI_0_aw_ready) & 
           (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h 
        = ((1U == (IData)(vlSelf->SimTop__DOT__mem_req_size)) 
           & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d 
        = ((3U == (IData)(vlSelf->SimTop__DOT__mem_req_size)) 
           & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)));
    vlSelf->io_memAXI_0_ar_bits_addr = (0xfffffffffffffff0ULL 
                                        & ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                            ? (0xfffffffffffffff8ULL 
                                               & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr)))
                                            : ((3U 
                                                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state))
                                                ? (0xfffffffffffffff8ULL 
                                                   & (QData)((IData)(vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr)))
                                                : 0ULL)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs 
        = ((IData)(vlSelf->io_memAXI_0_w_ready) & (2U 
                                                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren 
        = ((IData)(vlSelf->SimTop__DOT__mem_req_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__mem_req_wen)));
    vlSelf->SimTop__DOT__w_data[0U] = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok)
                                        ? (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_req_data[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_req_data[2U])))
                                        : (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_req_data[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_req_data[0U]))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in = 1U;
    vlSelf->SimTop__DOT__data_wen = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                      >> 0x1bU) & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs 
        = (IData)((0x401cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw 
        = (IData)((0x201cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc 
        = (IData)((0x601cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi 
        = (IData)((0xc01cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci 
        = (IData)((0xe01cc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    __Vtemp_hf0e9266c__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                            << 8U) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                              >> 0x18U))));
    __Vtemp_hf0e9266c__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                          << 0x28U) 
                                         | (((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                             << 8U) 
                                            | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                               >> 0x18U))) 
                                        >> 0x20U));
    __Vtemp_hf0e9266c__0[2U] = (IData)((- (QData)((IData)(
                                                          (1U 
                                                           & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                              >> 0x17U))))));
    __Vtemp_hf0e9266c__0[3U] = (IData)(((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                               >> 0x17U))))) 
                                        >> 0x20U));
    VL_SHIFTR_WWI(128,128,6, __Vtemp_hf3183491__0, __Vtemp_hf0e9266c__0, 
                  (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                            >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U] 
        = __Vtemp_hf3183491__0[0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U] 
        = __Vtemp_hf3183491__0[1U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[2U] 
        = __Vtemp_hf3183491__0[2U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[3U] 
        = __Vtemp_hf3183491__0[3U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res 
        = ((0x1fU >= (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                               >> 0x18U))) ? (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                                << 8U) 
                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                                  >> 0x18U)) 
                                              >> (0x3fU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U)))
            : 0U);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res 
        = ((((QData)((IData)((- (IData)((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                               >> 0x17U)))))) 
             << 0x20U) | (QData)((IData)(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                           << 8U) | 
                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                           >> 0x18U))))) 
           >> (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                        >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res 
        = ((0x1fU >= (0x3fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                               >> 0x18U))) ? (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                                << 8U) 
                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                                  >> 0x18U)) 
                                              << (0x3fU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 0x18U)))
            : 0U);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res 
        = ((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
             << 0x28U) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                           << 8U) | ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                     >> 0x18U))) << 
           (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                     >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res 
        = ((((QData)((IData)((- (IData)((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                               >> 0x17U)))))) 
             << 0x20U) | (QData)((IData)(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                                           << 8U) | 
                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                           >> 0x18U))))) 
           >> (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                        >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res 
        = ((QData)((IData)(((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U] 
                             << 8U) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                       >> 0x18U)))) 
           >> (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                        >> 0x18U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((0xb00U 
                                             == (0xfffU 
                                                 & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                     << 8U) 
                                                    | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 0x18U))))
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle
                                             : ((0x300U 
                                                 == 
                                                 (0xfffU 
                                                  & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                      << 8U) 
                                                     | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                        >> 0x18U))))
                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                       << 8U) 
                                                      | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                         >> 0x18U))))
                                                  ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (0xfffU 
                                                    & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U] 
                                                        << 8U) 
                                                       | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                          >> 0x18U))))
                                                   ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc
                                                   : 0ULL)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest 
        = (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[0U] 
                    & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
        = (1ULL + ((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                     << 0x28U) | (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                   << 8U) | ((QData)((IData)(
                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                             >> 0x18U))) 
                   + (~ (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                          << 0x28U) | (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                        << 8U) | ((QData)((IData)(
                                                                  vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                  >> 0x18U))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw 
        = (IData)((0x4008c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd 
        = (IData)((0x6008c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh 
        = (IData)((0x2008c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb 
        = (IData)((0x8c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh 
        = (IData)((0x2000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu 
        = (IData)((0xa000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu 
        = (IData)((0xc000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw 
        = (IData)((0x4000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld 
        = (IData)((0x6000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb 
        = (IData)((0xc0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu 
        = (IData)((0x8000c0U == (0xe03fc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
        = ((((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
             << 0x28U) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                           << 8U) | ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                     >> 0x18U))) + 
           (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
             << 0x28U) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                           << 8U) | ((QData)((IData)(
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                     >> 0x18U))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest 
        = (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[2U] 
                    & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall 
        = (IData)((0x73U == (0xfe00707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret 
        = (IData)((0x30200073U == (0xfff0707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exc_op 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
            << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                        >> 0x13U));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o 
        = ((IData)((0x4c100U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o 
        = ((IData)((0x4c140U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                           >> 6U)))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex 
        = ((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                    << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                >> 0x13U))) & (0x29aULL 
                                               != (
                                                   ((QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                                                    << 0x2dU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                                       << 0xdU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                                         >> 0x13U)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm 
        = ((0x100000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                         >> 0xbU)) | ((0xff000U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]) 
                                      | ((0x800U & 
                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                               >> 0x14U)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm 
        = ((0x1000U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                       >> 0x13U)) | ((0x800U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                << 4U)) 
                                     | ((0x7e0U & (
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                            >> 7U)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm 
        = ((0xfe0U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                      >> 0x14U)) | (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                             >> 7U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest 
        = (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                    & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen 
        = (1U & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U] 
                  >> 5U) & (~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU] 
                               >> 0x12U))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my 
        = (IData)((0x7bU == (0x7fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld 
        = (IData)((0x3003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs 
        = (IData)((0x2073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw 
        = (IData)((0x1073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc 
        = (IData)((0x3073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci 
        = (IData)((0x7073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi 
        = (IData)((0x6073U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd 
        = (IData)((0x3023U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh 
        = (IData)((0x1023U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb 
        = (IData)((0x23U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw 
        = (IData)((0x2023U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal 
        = (IData)((0x6fU == (0x7fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq 
        = (IData)((0x63U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne 
        = (IData)((0x1063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge 
        = (IData)((0x5063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt 
        = (IData)((0x4063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu 
        = (IData)((0x6063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu 
        = (IData)((0x7063U == (0x707fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])));
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready_en 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done) 
           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready));
    vlSelf->io_memAXI_0_ar_valid = vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr;
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len_incr_en 
        = ((1U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len)) 
           & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs) 
              | (IData)(vlSelf->io_memAXI_0_r_valid)));
    vlSelf->SimTop__DOT__mem_resp_valid = (((6U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state)) 
                                            & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren))
                                            ? (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready)
                                            : (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready));
    vlSelf->io_memAXI_0_w_bits_data[3U] = vlSelf->SimTop__DOT__w_data
        [3U];
    vlSelf->io_memAXI_0_w_bits_data[2U] = vlSelf->SimTop__DOT__w_data
        [2U];
    vlSelf->io_memAXI_0_w_bits_data[1U] = vlSelf->SimTop__DOT__w_data
        [1U];
    vlSelf->io_memAXI_0_w_bits_data[0U] = vlSelf->SimTop__DOT__w_data
        [0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2 
        = (1U & (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                   >> 0x17U) & (~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                   >> 0x17U))) | ((~ 
                                                   ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                     ^ 
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U]) 
                                                    >> 0x17U)) 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
                                                             >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2 
        = (1U & (((~ (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                      >> 0x17U)) & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U] 
                                    >> 0x17U)) | ((~ 
                                                   ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                     ^ 
                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U]) 
                                                    >> 0x17U)) 
                                                  & (IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
                                                             >> 0x3fU)))));
    vlSelf->SimTop__DOT__data_size = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw) 
                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw))
                                       ? 2U : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu)
                                                ? 2U
                                                : (
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb) 
                                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu)
                                                     ? 0U
                                                     : 
                                                    (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh))
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu)
                                                       ? 1U
                                                       : 
                                                      (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld) 
                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd))
                                                        ? 3U
                                                        : 0U)))))));
    vlSelf->SimTop__DOT__data_strb = ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw) 
                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw)) 
                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu))
                                       ? ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 2U)))
                                           ? 0xf0U : 0xfU)
                                       : ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh) 
                                            | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh)) 
                                           | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu))
                                           ? ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                           >> 1U))))
                                               ? 3U
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                               >> 1U))))
                                                   ? 0xcU
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                >> 1U))))
                                                    ? 0x30U
                                                    : 0xc0U)))
                                           : ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb) 
                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb)) 
                                               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                   ? 1U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                    ? 2U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                     ? 4U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                      ? 8U
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                       ? 0x10U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                        ? 0x20U
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                         ? 0x40U
                                                         : 0x80U)))))))
                                               : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld))
                                                   ? 0xffU
                                                   : 0U))));
    vlSelf->SimTop__DOT__data_write = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw)
                                        ? ((1U & (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 2U)))
                                            ? ((QData)((IData)(
                                                               ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                 << 8U) 
                                                                | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                   >> 0x18U)))) 
                                               << 0x20U)
                                            : (QData)((IData)(
                                                              ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                << 8U) 
                                                               | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                  >> 0x18U)))))
                                        : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh)
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                            >> 1U))))
                                                ? (QData)((IData)(
                                                                  (0xffffU 
                                                                   & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                       << 8U) 
                                                                      | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                         >> 0x18U)))))
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                >> 1U))))
                                                    ? 
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                         << 8U) 
                                                                        | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                           >> 0x18U))))) 
                                                    << 0x10U)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(
                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                 >> 1U))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                          << 8U) 
                                                                         | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                            >> 0x18U))))) 
                                                     << 0x20U)
                                                     : 
                                                    ((QData)((IData)(
                                                                     (0xffffU 
                                                                      & ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U] 
                                                                          << 8U) 
                                                                         | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                            >> 0x18U))))) 
                                                     << 0x30U))))
                                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                       >> 0x18U)))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                      >> 0x18U))) 
                                                     << 8U)
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                      ? 
                                                     ((QData)((IData)(
                                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                       >> 0x18U))) 
                                                      << 0x10U)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                       ? 
                                                      ((QData)((IData)(
                                                                       (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                        >> 0x18U))) 
                                                       << 0x18U)
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                        ? 
                                                       ((QData)((IData)(
                                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                         >> 0x18U))) 
                                                        << 0x20U)
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                         ? 
                                                        ((QData)((IData)(
                                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                          >> 0x18U))) 
                                                         << 0x28U)
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                          ? 
                                                         ((QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                           >> 0x18U))) 
                                                          << 0x30U)
                                                          : 
                                                         ((QData)((IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U] 
                                                                           >> 0x18U))) 
                                                          << 0x38U))))))))
                                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[8U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                          >> 0x18U)))
                                                    : 0ULL))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
            >> 0x1bU) & ((0x2004000ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64) 
                         | (0x200bff8ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
            >> 0x1aU) & ((0x2004000ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64) 
                         | (0x200bff8ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
        = ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                          >> 3U))) ? (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[2U])))
            : (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out[0U]))));
    if (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o 
            = ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
               | (QData)((IData)((0x1800U | ((0x700U 
                                              & ((IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                          >> 8U)) 
                                                 << 8U)) 
                                             | ((0x80U 
                                                 & ((IData)(
                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                             >> 3U)) 
                                                    << 7U)) 
                                                | ((0x70U 
                                                    & ((IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                                >> 4U)) 
                                                       << 4U)) 
                                                   | (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus)))))))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o 
            = (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                << 0x2dU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[9U])) 
                              << 0xdU) | ((QData)((IData)(
                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U])) 
                                          >> 0x13U)));
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o 
            = ((0x29aULL == (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xcU])) 
                              << 0x2dU) | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xbU])) 
                                            << 0xdU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0xaU])) 
                                              >> 0x13U))))
                ? ((0xffffffffffffe000ULL & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus) 
                   | (QData)((IData)((0x80U | ((0x700U 
                                                & ((IData)(
                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                            >> 8U)) 
                                                   << 8U)) 
                                               | ((0x70U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                               >> 4U)) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(
                                                                 (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus 
                                                                  >> 7U)) 
                                                         << 3U)) 
                                                     | (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus)))))))))
                : ((IData)((0x4c000U == (0x7ffc0U & 
                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                    ? (((QData)((IData)((1U & ((IData)(
                                                       (0x600000U 
                                                        == 
                                                        (0x600000U 
                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U]))) 
                                               | (IData)(
                                                         (0x180000U 
                                                          == 
                                                          (0x180000U 
                                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U]))))))) 
                        << 0x3fU) | (0x7fffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                              >> 6U)))))
                    : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o 
            = ((IData)((0x4d040U == (0x7ffc0U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])))
                ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U])) 
                    << 0x3aU) | (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[6U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[5U])) 
                                               >> 6U)))
                : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[1U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (1U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [1U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[2U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (2U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [2U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[3U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (3U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [3U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[4U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (4U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [4U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[5U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (5U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [5U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[6U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (6U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [6U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[7U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (7U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [7U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[8U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (8U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [8U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[9U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (9U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [9U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xaU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xaU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xaU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xbU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xbU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xbU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xcU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xcU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xcU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xdU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xdU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xdU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xeU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xeU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xeU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0xfU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0xfU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0xfU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x10U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x10U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x10U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x11U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x11U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x11U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x12U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x12U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x12U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x13U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x13U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x13U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x14U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x14U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x14U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x15U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x15U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x15U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x16U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x16U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x16U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x17U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x17U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x17U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x18U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x18U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x18U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x19U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x19U == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x19U]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1aU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1aU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1aU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1bU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1bU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1bU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1cU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1cU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1cU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1dU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1dU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1dU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1eU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1eU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1eU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[0x1fU] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen) 
            & (0x1fU == (0x1fU & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[2U])))
            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
            : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
           [0x1fU]);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my)
            ? 0xaU : (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                               >> 0xfU)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type 
        = ((IData)(vlSelf->reset) ? 0U : (0x3fU & (
                                                   (((((0x20U 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(
                                                                                (0x17U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                         | (IData)(
                                                                                (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))))))) 
                                                       | (0x10U 
                                                          & (- (IData)(
                                                                       ((((((((((((((((((((((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi)) 
                                                                                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc)) 
                                                                                | (0x13U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                                | (0x3013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                                | (0x1bU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                                | (0x40005013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                                | (0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                               | (0x4013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                              | (0x1013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                             | (0x5013U 
                                                                                == 
                                                                                (0xfc00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                            | (0x501bU 
                                                                               == 
                                                                               (0xfc00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                           | (0x101bU 
                                                                              == 
                                                                              (0xfc00707fU 
                                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                          | (0x4000501bU 
                                                                             == 
                                                                             (0xfc00707fU 
                                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                         | (0x6013U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                        | (0x2013U 
                                                                           == 
                                                                           (0x707fU 
                                                                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))))))) 
                                                      | (8U 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (((((((((((((((IData)(
                                                                                (0x3bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))) 
                                                                                | (IData)(
                                                                                (0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x103bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x4000003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                                | (IData)(
                                                                                (0x4000503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                               | (IData)(
                                                                                (0x503bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                              | (IData)(
                                                                                (0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                             | (IData)(
                                                                                (0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                            | (IData)(
                                                                                (0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                           | (IData)(
                                                                                (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U])))) 
                                                                          | (IData)(
                                                                                (0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))))))))) 
                                                     | (4U 
                                                        & (- (IData)(
                                                                     ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw)))))) 
                                                    | (2U 
                                                       & (- (IData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal))))) 
                                                   | (1U 
                                                      & (- (IData)(
                                                                   ((((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq) 
                                                                        | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne)) 
                                                                       | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge)) 
                                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt)) 
                                                                     | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu)) 
                                                                    | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb 
        = ((1U == (IData)(vlSelf->SimTop__DOT__data_strb))
            ? 0xffULL : ((2U == (IData)(vlSelf->SimTop__DOT__data_strb))
                          ? 0xff00ULL : ((4U == (IData)(vlSelf->SimTop__DOT__data_strb))
                                          ? 0xff0000ULL
                                          : ((8U == (IData)(vlSelf->SimTop__DOT__data_strb))
                                              ? 0xff000000ULL
                                              : ((0x10U 
                                                  == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                  ? 0xff00000000ULL
                                                  : 
                                                 ((0x20U 
                                                   == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                   ? 0xff0000000000ULL
                                                   : 
                                                  ((0x40U 
                                                    == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                    ? 0xff000000000000ULL
                                                    : 
                                                   ((0x80U 
                                                     == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                     ? 0xff00000000000000ULL
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                      ? 0xffffULL
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                       ? 0xffff0000ULL
                                                       : 
                                                      ((0x30U 
                                                        == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                        ? 0xffff00000000ULL
                                                        : 
                                                       ((0xc0U 
                                                         == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                         ? 0xffff000000000000ULL
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                          ? 0xffffffffULL
                                                          : 
                                                         ((0xf0U 
                                                           == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                           ? 0xffffffff00000000ULL
                                                           : 
                                                          ((0xffU 
                                                            == (IData)(vlSelf->SimTop__DOT__data_strb))
                                                            ? 0xffffffffffffffffULL
                                                            : 0ULL)))))))))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data 
        = ((2U == (IData)(vlSelf->SimTop__DOT__data_size))
            ? ((1U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                              >> 2U))) ? (((QData)((IData)(
                                                           (vlSelf->SimTop__DOT__data_write 
                                                            >> 0x20U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_resp_data[0U])))
                : (((QData)((IData)(vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__data_write))))
            : ((1U == (IData)(vlSelf->SimTop__DOT__data_size))
                ? ((0U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                         >> 1U)))) ? 
                   ((0xffffffffffff0000ULL & (((QData)((IData)(
                                                               vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                               << 0x20U) 
                                              | (0xffffffffffff0000ULL 
                                                 & (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                    | (QData)((IData)((0xffffU & (IData)(vlSelf->SimTop__DOT__data_write)))))
                    : ((1U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                             >> 1U))))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        (((IData)(
                                                                  (vlSelf->SimTop__DOT__data_write 
                                                                   >> 0x10U)) 
                                                          << 0x10U) 
                                                         | (0xffffU 
                                                            & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                        : ((2U == (3U & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                 >> 1U))))
                            ? (((QData)((IData)(((0xffff0000U 
                                                  & vlSelf->SimTop__DOT__mem_resp_data[1U]) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__data_write 
                                                               >> 0x20U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__mem_resp_data[0U])))
                            : (((QData)((IData)((0xffffU 
                                                 & (IData)(
                                                           (vlSelf->SimTop__DOT__data_write 
                                                            >> 0x30U))))) 
                                << 0x30U) | (0xffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->SimTop__DOT__mem_resp_data[0U]))))))))
                : ((0U == (IData)(vlSelf->SimTop__DOT__data_size))
                    ? ((0U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                        ? ((0xffffffffffffff00ULL & 
                            (((QData)((IData)(vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                              << 0x20U) | (0xffffffffffffff00ULL 
                                           & (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                           | (QData)((IData)((0xffU 
                                              & (IData)(vlSelf->SimTop__DOT__data_write)))))
                        : ((1U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                            ? ((0xffffffffffff0000ULL 
                                & (((QData)((IData)(
                                                    vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                    << 0x20U) | (0xffffffffffff0000ULL 
                                                 & (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                               | (QData)((IData)(((0xff00U 
                                                   & ((IData)(
                                                              (vlSelf->SimTop__DOT__data_write 
                                                               >> 8U)) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                            : ((2U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                ? ((0xffffffffff000000ULL 
                                    & (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                        << 0x20U) | 
                                       (0xffffffffff000000ULL 
                                        & (QData)((IData)(
                                                          vlSelf->SimTop__DOT__mem_resp_data[0U]))))) 
                                   | (QData)((IData)(
                                                     ((0xff0000U 
                                                       & ((IData)(
                                                                  (vlSelf->SimTop__DOT__data_write 
                                                                   >> 0x10U)) 
                                                          << 0x10U)) 
                                                      | (0xffffU 
                                                         & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                                : ((3U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (((IData)(
                                                                              (vlSelf->SimTop__DOT__data_write 
                                                                               >> 0x18U)) 
                                                                      << 0x18U) 
                                                                     | (0xffffffU 
                                                                        & vlSelf->SimTop__DOT__mem_resp_data[0U])))))
                                    : ((4U == (7U & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                        ? (((QData)((IData)(
                                                            ((0xffffff00U 
                                                              & vlSelf->SimTop__DOT__mem_resp_data[1U]) 
                                                             | (0xffU 
                                                                & (IData)(
                                                                          (vlSelf->SimTop__DOT__data_write 
                                                                           >> 0x20U)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->SimTop__DOT__mem_resp_data[0U])))
                                        : ((5U == (7U 
                                                   & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                            ? (((QData)((IData)(
                                                                (vlSelf->SimTop__DOT__mem_resp_data[1U] 
                                                                 >> 0x10U))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(
                                                                              (vlSelf->SimTop__DOT__data_write 
                                                                               >> 0x28U))))) 
                                                   << 0x28U) 
                                                  | (0xffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->SimTop__DOT__mem_resp_data[0U]))))))
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (vlSelf->SimTop__DOT__mem_resp_data[1U] 
                                                                     >> 0x18U))) 
                                                    << 0x38U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__data_write 
                                                                                >> 0x30U))))) 
                                                       << 0x30U) 
                                                      | (0xffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->SimTop__DOT__mem_resp_data[0U]))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(
                                                                               (vlSelf->SimTop__DOT__data_write 
                                                                                >> 0x38U))))) 
                                                    << 0x38U) 
                                                   | (0xffffffffffffffULL 
                                                      & (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__mem_resp_data[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->SimTop__DOT__mem_resp_data[0U]))))))))))))
                    : ((3U == (IData)(vlSelf->SimTop__DOT__data_size))
                        ? vlSelf->SimTop__DOT__data_write
                        : 0ULL))));
    vlSelf->SimTop__DOT__data_valid = (((IData)((0U 
                                                 != 
                                                 (0xc000000U 
                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U]))) 
                                        & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid) 
                                           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in))) 
                                       & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
                                          & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen))));
    vlSelf->SimTop__DOT__data_read = ((2U == (IData)(vlSelf->SimTop__DOT__data_size))
                                       ? ((1U & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                         >> 2U)))
                                           ? (QData)((IData)(
                                                             (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                              >> 0x20U)))
                                           : (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data)))
                                       : ((1U == (IData)(vlSelf->SimTop__DOT__data_size))
                                           ? ((0U == 
                                               (3U 
                                                & (IData)(
                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                           >> 1U))))
                                               ? (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data))))
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                               >> 1U))))
                                                   ? (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x10U)))))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                                >> 1U))))
                                                    ? (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x20U)))))
                                                    : (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x30U))))))))
                                           : ((0U == (IData)(vlSelf->SimTop__DOT__data_size))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 8U)))))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                     ? (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x10U)))))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x18U)))))
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                       ? (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x20U)))))
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                        ? (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x28U)))))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x30U)))))
                                                         : (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data 
                                                                                >> 0x38U))))))))))))
                                               : ((3U 
                                                   == (IData)(vlSelf->SimTop__DOT__data_size))
                                                   ? vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data
                                                   : 0ULL))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int 
        = (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime 
             >= vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp) 
            & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o 
                       >> 3U))) & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o 
                                           >> 7U)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : ((1U == 
                                             ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                               << 0xdU) 
                                              | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                 >> 0x13U)))
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o
                                             : ((2U 
                                                 == 
                                                 ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                                   << 0xdU) 
                                                  | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                     >> 0x13U)))
                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o
                                                 : 
                                                ((3U 
                                                  == 
                                                  ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                                                    << 0xdU) 
                                                   | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                                      >> 0x13U)))
                                                  ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o
                                                  : 0ULL))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[1U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [1U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[2U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [2U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[3U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [3U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[4U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [4U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[5U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [5U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[6U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [6U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[7U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [7U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[8U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [8U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[9U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [9U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xaU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xaU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xbU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xbU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xcU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xcU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xdU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xdU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xeU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xeU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0xfU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0xfU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x10U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x10U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x11U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x11U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x12U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x12U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x13U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x13U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x14U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x14U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x15U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x15U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x16U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x16U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x17U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x17U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x18U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x18U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x19U] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x19U];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1aU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1aU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1bU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1bU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1cU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1cU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1dU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1dU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1eU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1eU];
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[0x1fU] 
        = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o
        [0x1fU];
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena = 0U;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena = 0U;
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena 
            = (1U & (((8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                      | (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                     | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena 
            = (((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my) 
                  | (0x10U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                 | (1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                | (8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
               | (4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty 
        = ((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                               >> 4U)))] & (IData)(vlSelf->SimTop__DOT__data_valid)) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_hit 
        = ((((vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag
              [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                 >> 4U)))] == (0xfffffU 
                                               & (IData)(
                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                                          >> 0xcU)))) 
             & vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid
             [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 
                                >> 4U)))]) & (IData)(vlSelf->SimTop__DOT__data_valid)) 
           & (0U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done 
        = ((IData)(vlSelf->SimTop__DOT__data_valid) 
           & (IData)(vlSelf->SimTop__DOT__data_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
            ? ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)
                ? ((0x2004000ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp
                    : ((0x200bff8ULL == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64)
                        ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime
                        : 0ULL)) : 0ULL) : vlSelf->SimTop__DOT__data_read);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward 
        = (((0U != (0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                             >> 0x14U))) & ((((0x1fU 
                                               & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                  >> 0x14U)) 
                                              == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest)) 
                                             | ((0x1fU 
                                                 & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0x14U)) 
                                                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))) 
                                            | ((0x1fU 
                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest)))) 
           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena)
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
                                            [((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   ((8U 
                                                     == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                    | (1U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (4U 
                                                      == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                      >> 0x14U))
                                                   : 0U))]
                                             : 0ULL));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward 
        = (((0U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)) 
            & ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                 == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest)) 
                | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                   == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))) 
               | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                  == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest)))) 
           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena)
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs
                                            [((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   ((((0x10U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type)) 
                                                      | (1U 
                                                         == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                     | (8U 
                                                        == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                    | (4U 
                                                       == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) 
                                                   | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my))
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1))
                                                   : 0U))]
                                             : 0ULL));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid) 
           & ((((IData)((0U == (0xc000000U & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U]))) 
                | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done)) 
               | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren)) 
              | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen)));
    vlSelf->SimTop__DOT__br_stall = (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U] 
                                       >> 0x1aU) & 
                                      (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done))) 
                                     & ((((0U != (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1)) 
                                          & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                                             == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))) 
                                         & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena)) 
                                        | (((0U != 
                                             (0x1fU 
                                              & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                 >> 0x14U))) 
                                            & ((0x1fU 
                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))) 
                                           & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(
                                                    (0x4c0U 
                                                     == 
                                                     (0xe03fc0U 
                                                      & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                             ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64
                                             : ((0x17U 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                     >> 6U)))
                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64
                                                 : 
                                                ((0x37U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                      >> 6U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                      << 8U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                        >> 0x18U)))
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                       >> 6U)))
                                                   ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64
                                                   : 
                                                  ((IData)(
                                                           (0xec0U 
                                                            == 
                                                            (0xffffc0U 
                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32
                                                    : 
                                                   ((IData)(
                                                            (0x19c0U 
                                                             == 
                                                             (0xe03fc0U 
                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                     ? 
                                                    (4ULL 
                                                     + 
                                                     (((QData)((IData)(
                                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                       << 0x3aU) 
                                                      | (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[2U])) 
                                                          << 0x1aU) 
                                                         | ((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[1U])) 
                                                            >> 6U))))
                                                     : 
                                                    ((IData)(
                                                             (0x80cc0U 
                                                              == 
                                                              (0xffffc0U 
                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                      ? 
                                                     (1ULL 
                                                      + 
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                              >> 0x18U))) 
                                                       + 
                                                       (~ 
                                                        (((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                               >> 0x18U))))))
                                                      : 
                                                     ((IData)(
                                                              (0xcc0U 
                                                               == 
                                                               (0xffffc0U 
                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                       ? 
                                                      ((((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                              >> 0x18U))) 
                                                       + 
                                                       (((QData)((IData)(
                                                                         vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                         << 0x28U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                            << 8U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                              >> 0x18U))))
                                                       : 
                                                      ((IData)(
                                                               (0xe00cc0U 
                                                                == 
                                                                (0xffffc0U 
                                                                 & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                        ? 
                                                       ((((QData)((IData)(
                                                                          vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                               >> 0x18U))) 
                                                        & (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                 >> 0x18U))))
                                                        : 
                                                       ((IData)(
                                                                (0xc00cc0U 
                                                                 == 
                                                                 (0xffffc0U 
                                                                  & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                         ? 
                                                        ((((QData)((IData)(
                                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                           << 0x28U) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                              << 8U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                >> 0x18U))) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                  >> 0x18U))))
                                                         : 
                                                        ((IData)(
                                                                 (0x800cc0U 
                                                                  == 
                                                                  (0xffffc0U 
                                                                   & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                          ? 
                                                         ((((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                 >> 0x18U))) 
                                                          ^ 
                                                          (((QData)((IData)(
                                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                            << 0x28U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                               << 8U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                 >> 0x18U))))
                                                          : 
                                                         ((IData)(
                                                                  (0xe004c0U 
                                                                   == 
                                                                   (0xe03fc0U 
                                                                    & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                           ? 
                                                          ((((QData)((IData)(
                                                                             vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                  >> 0x18U))) 
                                                           & (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                               << 0x28U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                  << 8U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                    >> 0x18U))))
                                                           : 
                                                          ((IData)(
                                                                   (0x8004c0U 
                                                                    == 
                                                                    (0xe03fc0U 
                                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                            ? 
                                                           ((((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                 << 8U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                   >> 0x18U))) 
                                                            ^ 
                                                            (((QData)((IData)(
                                                                              vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                 << 8U) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                   >> 0x18U))))
                                                            : 
                                                           ((IData)(
                                                                    (0xc004c0U 
                                                                     == 
                                                                     (0xe03fc0U 
                                                                      & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                             ? 
                                                            ((((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                               << 0x28U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                  << 8U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                    >> 0x18U))) 
                                                             | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[4U])) 
                                                                    << 8U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])) 
                                                                      >> 0x18U))))
                                                             : 
                                                            ((IData)(
                                                                     (0xa804c0U 
                                                                      == 
                                                                      (0xffbfc0U 
                                                                       & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                              ? 
                                                             (((QData)((IData)(
                                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))
                                                              : 
                                                             ((IData)(
                                                                      (0x2004c0U 
                                                                       == 
                                                                       (0xffbfc0U 
                                                                        & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                               ? 
                                                              ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                 << 0x28U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                    << 8U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                      >> 0x18U))) 
                                                               << 
                                                               (0x3fU 
                                                                & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                   >> 0x18U)))
                                                               : 
                                                              ((IData)(
                                                                       (0xa004c0U 
                                                                        == 
                                                                        (0xffbfc0U 
                                                                         & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                ? 
                                                               ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                  << 0x28U) 
                                                                 | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                     << 8U) 
                                                                    | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                       >> 0x18U))) 
                                                                >> 
                                                                (0x3fU 
                                                                 & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                    >> 0x18U)))
                                                                : 
                                                               ((IData)(
                                                                        (0xa00cc0U 
                                                                         == 
                                                                         (0xffffc0U 
                                                                          & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                 ? 
                                                                ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                      << 8U) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                        >> 0x18U))) 
                                                                 >> 
                                                                 (0x3fU 
                                                                  & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                     >> 0x18U)))
                                                                 : 
                                                                ((IData)(
                                                                         (0x200cc0U 
                                                                          == 
                                                                          (0xffffc0U 
                                                                           & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                  ? 
                                                                 ((((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[7U])) 
                                                                    << 0x28U) 
                                                                   | (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[6U])) 
                                                                       << 8U) 
                                                                      | ((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[5U])) 
                                                                         >> 0x18U))) 
                                                                  << 
                                                                  (0x3fU 
                                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U] 
                                                                      >> 0x18U)))
                                                                  : 
                                                                 ((IData)(
                                                                          (0xa80cc0U 
                                                                           == 
                                                                           (0xffffc0U 
                                                                            & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                   ? 
                                                                  (((QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res[0U])))
                                                                   : 
                                                                  ((IData)(
                                                                           (0xa006c0U 
                                                                            == 
                                                                            (0xffbfc0U 
                                                                             & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                    ? 
                                                                   (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res 
                                                                                >> 0x1fU))))) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res)))
                                                                    : 
                                                                   ((IData)(
                                                                            (0xa806c0U 
                                                                             == 
                                                                             (0xffbfc0U 
                                                                              & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                     ? 
                                                                    (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res 
                                                                                >> 0x1fU))))))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res)))
                                                                     : 
                                                                    ((IData)(
                                                                             (0x2006c0U 
                                                                              == 
                                                                              (0xffbfc0U 
                                                                               & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                      ? 
                                                                     (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res 
                                                                                >> 0x1fU))))) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res)))
                                                                      : 
                                                                     ((IData)(
                                                                              (0x80ec0U 
                                                                               == 
                                                                               (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                       ? 
                                                                      (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res 
                                                                                >> 0x1fU))))))) 
                                                                        << 0x20U) 
                                                                       | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res)))
                                                                       : 
                                                                      ((IData)(
                                                                               (0x200ec0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                        ? 
                                                                       (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res 
                                                                                >> 0x1fU))))))) 
                                                                         << 0x20U) 
                                                                        | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res)))
                                                                        : 
                                                                       ((IData)(
                                                                                (0xa80ec0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                         ? 
                                                                        (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res 
                                                                                >> 0x1fU))))))) 
                                                                          << 0x20U) 
                                                                         | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res)))
                                                                         : 
                                                                        ((IData)(
                                                                                (0xa00ec0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                          ? 
                                                                         (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res 
                                                                                >> 0x1fU))))))) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res)))
                                                                          : 
                                                                         ((IData)(
                                                                                (0x4004c0U 
                                                                                == 
                                                                                (0xe03fc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                           ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))
                                                                           : 
                                                                          ((IData)(
                                                                                (0x6004c0U 
                                                                                == 
                                                                                (0xe03fc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                            ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))
                                                                            : 
                                                                           ((IData)(
                                                                                (0x600cc0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                             ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2))
                                                                             : 
                                                                            ((IData)(
                                                                                (0x400cc0U 
                                                                                == 
                                                                                (0xffffc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                              ? (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2))
                                                                              : 
                                                                             ((IData)(
                                                                                (0x6c0U 
                                                                                == 
                                                                                (0xe03fc0U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[3U])))
                                                                               ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32
                                                                               : 
                                                                              ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs)
                                                                                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                : 
                                                                               ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci)
                                                                                 ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata
                                                                                 : 
                                                                                ((0x4000000U 
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data[9U])
                                                                                 ? 
                                                                                ((((((((- (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb))) 
                                                                                & (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata 
                                                                                >> 7U)))))) 
                                                                                << 8U) 
                                                                                | (QData)((IData)(
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
                                                                                & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata))
                                                                                 : 0ULL)))))))))))))))))))))))))))))))))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid) 
           & (~ (IData)(vlSelf->SimTop__DOT__br_stall)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward)
            ? (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata
                : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                    == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))
                    ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))
                    : (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1) 
                        == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
                        : 0ULL))) : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward)
            ? (((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                          >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest))
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata
                : (((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                              >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest))
                    ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data[0U])))
                    : (((0x1fU & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                  >> 0x14U)) == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[0U])))
                        : 0ULL))) : vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in))));
    if (vlSelf->reset) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 = 0ULL;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 = 0ULL;
    } else if ((0x10U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = (((- (QData)((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                  >> 0x14U))));
    } else if ((8U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value;
    } else if ((1U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value;
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value;
    } else {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
            = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my)
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value
                : ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value
                    : ((0x20U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                        ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                        : ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                            ? (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U])))
                            : 0ULL))));
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
            = ((4U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                ? (((- (QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm) 
                                              >> 0xbU))))) 
                    << 0xcU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm)))
                : ((0x20U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U] 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xfffff000U 
                                                     & vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[0U]))))
                    : ((2U == (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type))
                        ? 4ULL : 0ULL)));
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in 
        = (1U & ((~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in)) 
                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in) 
                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal)
            ? ((((- (QData)((IData)((1U & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm 
                                           >> 0x14U))))) 
                 << 0x15U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm))) 
               + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne)
                ? ((((- (QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                               >> 0xcU))))) 
                     << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                   + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge)
                    ? ((((- (QData)((IData)((1U & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                   >> 0xcU))))) 
                         << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                       + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                    : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu)
                        ? ((((- (QData)((IData)((1U 
                                                 & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                    >> 0xcU))))) 
                             << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                           + (((QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                        : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt)
                            ? ((((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                        >> 0xcU))))) 
                                 << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                               + (((QData)((IData)(
                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu)
                                ? ((((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                            >> 0xcU))))) 
                                     << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                                   + (((QData)((IData)(
                                                       vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq)
                                    ? ((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm) 
                                                                >> 0xcU))))) 
                                         << 0xdU) | (QData)((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm))) 
                                       + (((QData)((IData)(
                                                           vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[2U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data[1U]))))
                                    : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr)
                                        ? (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                           + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)
                                        : 0ULL))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
        = (1ULL + (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                   + (~ vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)));
    vlSelf->SimTop__DOT__inst_valid = ((~ (IData)(vlSelf->reset)) 
                                       & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2 
        = (1U & (((~ (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                              >> 0x3fU))) & (IData)(
                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                     >> 0x3fU))) 
                 | ((~ ((IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                       >> 0x3fU)))) 
                    & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                               >> 0x3fU)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done 
        = ((IData)(vlSelf->SimTop__DOT__inst_valid) 
           & (IData)(vlSelf->SimTop__DOT__inst_ready));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken 
        = ((IData)(vlSelf->reset) ? 0U : (1U & ((((
                                                   ((((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal) 
                                                      | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr)) 
                                                     | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne) 
                                                        & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                           != vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2))) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge) 
                                                          & (((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                               == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2) 
                                                              | ((~ (IData)(
                                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                             >> 0x3fU))) 
                                                                 & (IData)(
                                                                           (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                            >> 0x3fU)))) 
                                                             | ((~ 
                                                                 ((IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                           >> 0x3fU)) 
                                                                  ^ (IData)(
                                                                            (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                             >> 0x3fU)))) 
                                                                & (~ (IData)(
                                                                             (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                                              >> 0x3fU)))))))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu) 
                                                         & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2))))) 
                                                  | (1U 
                                                     & ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt) 
                                                        & (((IData)(
                                                                    (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                     >> 0x3fU)) 
                                                            & (~ (IData)(
                                                                         (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                          >> 0x3fU)))) 
                                                           | ((~ 
                                                               ((IData)(
                                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                                         >> 0x3fU)) 
                                                                ^ (IData)(
                                                                          (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 
                                                                           >> 0x3fU)))) 
                                                              & (IData)(
                                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 
                                                                         >> 0x3fU))))))) 
                                                 | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu) 
                                                    & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2))) 
                                                | ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq) 
                                                   & (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 
                                                      == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2)))));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go 
        = ((((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done)) 
            & (~ (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid))) 
           & (~ (IData)(vlSelf->SimTop__DOT__br_stall)));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U] 
        = (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U] 
        = (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target 
                   >> 0x20U));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U] 
        = (((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go) 
            << 1U) | (IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid 
        = (IData)((3U == vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[2U]));
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
        = ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid)
            ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc
            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait)
                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc
                : ((0U != ((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[8U] 
                            << 0xdU) | (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data[7U] 
                                        >> 0x13U)))
                    ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc
                    : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid)
                        ? (4ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc)
                        : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready)
                            ? (4ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc)
                            : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid)
                                ? vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc
                                : ((IData)(vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid)
                                    ? (((QData)((IData)(
                                                        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus[0U])))
                                    : (4ULL + vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc))))))));
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_dirty 
        = (vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty
           [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                              >> 4U)))] & (IData)(vlSelf->SimTop__DOT__inst_valid));
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_hit 
        = (((vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag
             [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                >> 4U)))] == (0xfffffU 
                                              & (IData)(
                                                        (vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                                                         >> 0xcU)))) 
            & vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid
            [(0xffU & (IData)((vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc 
                               >> 4U)))]) & (IData)(vlSelf->SimTop__DOT__inst_valid));
}

VL_ATTR_COLD void VSimTop___024root___eval_initial(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

VL_ATTR_COLD void VSimTop___024root___eval_settle(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___eval_settle\n"); );
    // Body
    VSimTop___024root___settle__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VSimTop___024root___final(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___final\n"); );
}

VL_ATTR_COLD void VSimTop___024root___ctor_var_reset(VSimTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_logCtrl_log_begin = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_end = VL_RAND_RESET_Q(64);
    vlSelf->io_logCtrl_log_level = VL_RAND_RESET_Q(64);
    vlSelf->io_perfInfo_clean = VL_RAND_RESET_I(1);
    vlSelf->io_perfInfo_dump = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_out_ch = VL_RAND_RESET_I(8);
    vlSelf->io_uart_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_uart_in_ch = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_memAXI_0_aw_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_aw_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_aw_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_aw_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_aw_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_aw_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_aw_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_aw_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_w_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_w_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->io_memAXI_0_w_bits_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->io_memAXI_0_w_bits_strb = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_w_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_b_bits_resp = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_b_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_b_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_memAXI_0_ar_bits_prot = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_ar_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_ar_bits_user = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_len = VL_RAND_RESET_I(8);
    vlSelf->io_memAXI_0_ar_bits_size = VL_RAND_RESET_I(3);
    vlSelf->io_memAXI_0_ar_bits_burst = VL_RAND_RESET_I(2);
    vlSelf->io_memAXI_0_ar_bits_lock = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_ar_bits_cache = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_ar_bits_qos = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_r_ready = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_valid = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_bits_resp = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->io_memAXI_0_r_bits_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->io_memAXI_0_r_bits_last = VL_RAND_RESET_I(1);
    vlSelf->io_memAXI_0_r_bits_id = VL_RAND_RESET_I(4);
    vlSelf->io_memAXI_0_r_bits_user = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->SimTop__DOT__w_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__inst_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__inst_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__addr_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__br_stall = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__data_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__data_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__data_read = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__data_write = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__data_size = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__data_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__data_strb = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__inst_resp_data);
    vlSelf->SimTop__DOT__inst_req_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__inst_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__inst_req_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__mem_req_data);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__mem_resp_data);
    vlSelf->SimTop__DOT__mem_req_size = VL_RAND_RESET_I(2);
    vlSelf->SimTop__DOT__mem_req_strb = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__mem_req_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mem_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__mem_req_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_data = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_icache__inst_req_addr = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT____Vcellout__u_ysyx_210247_dcache__mem_req_addr = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__aw_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_hs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_state = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_state_addr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ren = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__len_incr_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_h = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__size_d = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__r_ready_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__data_ok = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__w_ready_en = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_axi__DOT__rw_resp = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(66, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__br_bus);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__rs2_r_ena = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__r_data2 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__csr_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__new_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exc_op = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_o = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_o = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_o = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_o = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_o = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__if_valid_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__id_allow_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__exe_allow_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mem_allow_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__wb_allow_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__EXE_wdest = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__MEM_wdest = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__WB_wdest = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_ren = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmp_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__time_int = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT____Vcellout__u_ysyx_210247_regfile__regs_o[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wen = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdest = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cmt_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__trap_code = VL_RAND_RESET_I(8);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__cycleCnt = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__instrCnt = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__regs_diff[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mstatus_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mepc_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mcause_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mtvec_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mie_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mip_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__mscratch_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__sstatus_diff = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__intrNO_diff = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__handshake_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__next_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_inst = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_pc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__waite_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__flush_wait = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__branch_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__preif_ready_go = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_valid_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__if_allow_in = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_valid = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_if_stage__DOT__br_pc_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_if_id__DOT__if_to_id_data);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__J_imm = VL_RAND_RESET_I(21);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__B_imm = VL_RAND_RESET_I(13);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__S_imm = VL_RAND_RESET_I(12);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_forward = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_forward = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs1_value = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__rs2_value = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_taken = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__br_target = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__id_ready_go = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_type = VL_RAND_RESET_I(6);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrc = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrci = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_ecall = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_mret = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_jal = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_beq = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bne = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bge = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_blt = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bltu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_bgeu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sd = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sh = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_sw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__inst_my = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1ltuop2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_id_stage__DOT__op1_sub_op2 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(540, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_id_exe__DOT__id_to_exe_data);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__hs_done = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_ready_go = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__data_rdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lh = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lhu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lwu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_ld = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sd = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sh = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_sb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lb = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_lbu = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrc = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrsi = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__inst_is_csrrci = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op64 = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op32 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sr128_res);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraiw_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srliw_res = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__slliw_res = VL_RAND_RESET_I(32);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__subw_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sllw_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__sraw_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__srlw_res = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltop2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__op1ltuop2 = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_exe_stage__DOT__exe_wdata = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(403, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_exe_mem__DOT__exe_to_mem_data);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(403, vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_reg_mem_wb__DOT__mem_to_wb_data);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mstatus = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcause = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mepc = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtvec = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mie = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mip = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__mscratch = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__wb_ex = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_csr_regfile__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtime = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__u_ysyx_210247_clint__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_cpu__DOT__DifftestInstrCommit__DOT__special = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__dirty[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__offset[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_dirty = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_data_wdata);
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT____Vcellout__u_S011HD1P_X32Y2D128__Q);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__offset[__Vi0] = VL_RAND_RESET_I(4);
    }
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_strb);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_strb = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_write_data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_hit = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_dirty = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wen = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_wdata);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__valid_resp_data = VL_RAND_RESET_Q(64);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = VL_RAND_RESET_I(1);
    vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->SimTop__DOT__u_ysyx_210247_dcache__DOT__u_S011HD1P_X32Y2D128_BW__DOT__ram[__Vi0]);
    }
    vlSelf->__Vdlyvdim0__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vdlyvval__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0);
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__u_S011HD1P_X32Y2D128__DOT__ram__v0 = 0;
    VL_RAND_RESET_W(128, vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_data_out);
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_icache__DOT__cache_fill = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v0 = 0;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__dirty__v1 = 0;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_icache__DOT__valid__v1 = 0;
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__SimTop__DOT__u_ysyx_210247_dcache__DOT__cache_fill = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v0 = 0;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__dirty__v1 = 0;
    vlSelf->__Vdlyvset__SimTop__DOT__u_ysyx_210247_dcache__DOT__valid__v1 = 0;
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
