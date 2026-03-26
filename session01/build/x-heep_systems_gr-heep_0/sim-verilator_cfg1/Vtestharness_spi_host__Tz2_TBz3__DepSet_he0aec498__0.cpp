// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_spi_host__Tz2_TBz3.h"

extern const VlUnpacked<CData/*0:0*/, 16> Vtestharness__ConstPool__TABLE_h702da64f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtestharness__ConstPool__TABLE_h86359c3a_0;

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__0(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_he70b63c2_0_2;
    __VdfgRegularize_he70b63c2_0_2 = 0;
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h8798bec5_0_15;
    u_reg__DOT____VdfgRegularize_h8798bec5_0_15 = 0;
    VlWide<3>/*69:0*/ u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0;
    VL_ZERO_W(70, u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0);
    CData/*0:0*/ u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8;
    u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0 = 0;
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __VdfgRegularize_h495687df_0_91;
    __VdfgRegularize_h495687df_0_91 = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_steer = (((0x2cU 
                                                <= 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                    >> 6U))) 
                                               & (0x30U 
                                                  > 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                      >> 6U))))
                                               ? 1U
                                               : ((
                                                   (0x28U 
                                                    <= 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                        >> 6U))) 
                                                   & (0x2cU 
                                                      > 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                          >> 6U))))
                                                   ? 0U
                                                   : 2U));
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[0U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] = 0U;
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[0U] 
        = (IData)((((QData)((IData)(((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                      << 0x1aU) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                   >> 6U)))) 
                    << 0x20U) | (QData)((IData)(((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                                  << 0x1bU) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                                    >> 5U))))));
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[1U] 
        = (IData)(((((QData)((IData)(((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                       << 0x1aU) | 
                                      (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                       >> 6U)))) << 0x20U) 
                    | (QData)((IData)(((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                        << 0x1bU) | 
                                       (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 5U))))) 
                   >> 0x20U));
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[2U] 
        = (0x3fU & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     << 5U) | ((0x10U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
                                         >> 1U)) | 
                               (0xfU & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__reg_mux_i__DOT__i_stream_arbiter__DOT__i_arb__DOT__gen_rr_arb__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
                                        >> 1U)))));
    if ((0xd1U >= (0xffU & ((IData)(0x46U) * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))) {
        VL_ASSIGNSEL_WW(210, 70, (0xffU & ((IData)(0x46U) 
                                           * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))), vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o, u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0);
    }
    if ((1U & (~ VL_ONEHOT_I(((((((0x38U == (0x3fU 
                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                >> 0xcU))) 
                                  << 0xcU) | ((0x34U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 0xbU)) 
                                | (((0x30U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 0xaU) | ((0x24U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 9U))) 
                               | (((0x20U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                   << 8U) | (((0x1cU 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 7U) 
                                             | ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 6U)))) 
                              | ((((0x14U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                   << 5U) | (((0x10U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 4U) 
                                             | ((0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 3U))) 
                                 | (((8U == (0x3fU 
                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                >> 0xcU))) 
                                     << 2U) | (((4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))))))))))) {
        if ((0U != ((((((0x38U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                            >> 0xcU))) 
                        << 0xcU) | ((0x34U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 0xbU)) | (((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU))) 
                                                  << 0xaU) 
                                                 | ((0x24U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU))) 
                                                    << 9U))) 
                     | (((0x20U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             >> 0xcU))) 
                         << 8U) | (((0x1cU == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 7U) | ((0x18U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 6U)))) 
                    | ((((0x14U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             >> 0xcU))) 
                         << 5U) | (((0x10U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 4U) | ((0xcU 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 3U))) 
                       | (((8U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                            >> 0xcU))) 
                           << 2U) | (((4U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                      << 1U) | (0U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                    >> 0xcU))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host_reg_top.sv:2005: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_reg_top.sv", 2005, "");
            }
        }
    }
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be 
        = (((QData)((IData)(((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                              << 0x1aU) | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                           >> 6U)))) 
            << 4U) | (QData)((IData)((0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__rx_ready = (IData)((0x20U == (0x30U 
                                                   & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U])));
    vlSelfRef.__VdfgRegularize_h495687df_0_125 = ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 5U))) 
                                                  | (2U 
                                                     == 
                                                     (3U 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 5U))));
    __Vtableidx1 = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                            >> 6U));
    vlSelfRef.__PVT__access_valid = Vtestharness__ConstPool__TABLE_h702da64f_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata = ((((0U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                | (4U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))) 
                                               | (((8U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU))) 
                                                   | (0xcU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU))) 
                                                     | ((0x14U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU))) 
                                                        | ((0x18U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 0xcU))) 
                                                           | (0x1cU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                  >> 0xcU))))))))
                                               ? ((0U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))
                                                   ? 
                                                  (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q))
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                           >> 0xcU)))
                                                       ? 
                                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                                           << 0x1eU) 
                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                                              << 0x1dU) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q)))))
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                            >> 0xcU)))
                                                        ? 
                                                       (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q) 
                                                              << 0x1eU) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q) 
                                                                << 0x1dU))) 
                                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__q) 
                                                             << 0x1cU) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q) 
                                                               << 0x1bU))) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__q) 
                                                                << 0x19U) 
                                                               | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q) 
                                                                  << 0x18U))) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q) 
                                                                  << 0x16U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q) 
                                                                      << 0x14U) 
                                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q) 
                                                                        << 0x10U)) 
                                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q)))))))
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU)))
                                                         ? 
                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q) 
                                                                << 0x1dU) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q)))))))
                                                         : 
                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q) 
                                                                << 0x1dU) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q))))))))))))))
                                               : ((0x20U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))
                                                   ? vlSelfRef.u_reg__DOT____Vcellout__u_csid__q
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((0x30U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU)))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_89)
                                                     : 
                                                    ((0x34U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))
                                                      ? (IData)(vlSelfRef.__PVT__sw_error_status)
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                           >> 0xcU)))
                                                       ? (IData)(vlSelfRef.__PVT__event_mask)
                                                       : 0xffffffffU))))));
    vlSelfRef.__PVT__tx_valid = (IData)((0xc00U == 
                                         (0xc00U & 
                                          vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U])));
    vlSelfRef.__PVT__u_reg__DOT__reg_we = (IData)((0x30000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U])));
    vlSelfRef.__PVT__error_underflow = ((~ (IData)(vlSelfRef.rx_valid_o)) 
                                        & (IData)(vlSelfRef.__PVT__rx_ready));
    vlSelfRef.__PVT__error_overflow = ((~ (IData)(vlSelfRef.tx_ready_o)) 
                                       & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__error_access_inval = ((~ (IData)(vlSelfRef.__PVT__access_valid)) 
                                           & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we) 
                                           & ((IData)(
                                                      ((0U 
                                                        == 
                                                        (0x3f000U 
                                                         & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                       & (0U 
                                                          != 
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                << 0x14U) 
                                                               | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                  >> 0xcU))))))) 
                                              | ((IData)(
                                                         ((0x4000U 
                                                           == 
                                                           (0x3f000U 
                                                            & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                          & (0U 
                                                             != 
                                                             (1U 
                                                              & (~ 
                                                                 ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                     >> 0xcU))))))) 
                                                 | ((IData)(
                                                            ((0x8000U 
                                                              == 
                                                              (0x3f000U 
                                                               & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                             & (0U 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                      << 0x14U) 
                                                                     | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                        >> 0xcU))))))) 
                                                    | ((IData)(
                                                               ((0xc000U 
                                                                 == 
                                                                 (0x3f000U 
                                                                  & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                & (0U 
                                                                   != 
                                                                   (1U 
                                                                    & (~ 
                                                                       ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                         << 0x14U) 
                                                                        | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                           >> 0xcU))))))) 
                                                       | ((IData)(
                                                                  ((0x10000U 
                                                                    == 
                                                                    (0x3f000U 
                                                                     & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (~ 
                                                                          ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                            << 0x14U) 
                                                                           | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                              >> 0xcU))))))) 
                                                          | ((IData)(
                                                                     ((0x14000U 
                                                                       == 
                                                                       (0x3f000U 
                                                                        & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                      & (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (~ 
                                                                             ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                               << 0x14U) 
                                                                              | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                             | ((IData)(
                                                                        ((0x18000U 
                                                                          == 
                                                                          (0x3f000U 
                                                                           & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                         & (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                | ((IData)(
                                                                           ((0x1c000U 
                                                                             == 
                                                                             (0x3f000U 
                                                                              & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                            & (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                   | ((IData)(
                                                                              ((0x20000U 
                                                                                == 
                                                                                (0x3f000U 
                                                                                & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                               & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                      | ((IData)(
                                                                                ((0x24000U 
                                                                                == 
                                                                                (0x3f000U 
                                                                                & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                         | ((0U 
                                                                             != 
                                                                             (1U 
                                                                              & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))) 
                                                                            & ((0x30U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                               | ((0x34U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | (0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU)))))))))))))))));
    vlSelfRef.__PVT__tx_valid_checked = ((~ ((IData)(vlSelfRef.__PVT__error_overflow) 
                                             | (IData)(vlSelfRef.__PVT__error_access_inval))) 
                                         & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__u_reg__DOT__reg_error = (1U & 
                                              (((~ 
                                                 ((0x38U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU))) 
                                                  | ((0x34U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU))) 
                                                     | ((0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU))) 
                                                        | ((0x24U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 0xcU))) 
                                                           | ((0x20U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                   >> 0xcU))) 
                                                              | ((0x1cU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                      >> 0xcU))) 
                                                                 | ((0x18U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                         >> 0xcU))) 
                                                                    | ((0x14U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                            >> 0xcU))) 
                                                                       | ((0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                               >> 0xcU))) 
                                                                          | ((0xcU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                             | ((8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU)))))))))))))))) 
                                                & ((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U]))) 
                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we))) 
                                               | (IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__tx_valid_checked) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.tx_ready_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__tx_valid_checked)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    __Vtemp_1[0U] = (IData)((0x100000000ULL | (((QData)((IData)(
                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                                                  >> 4U) 
                                                                 & (0x28U 
                                                                    != 
                                                                    (0x3fU 
                                                                     & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U]))))) 
                                                << 0x21U) 
                                               | (QData)((IData)(
                                                                 ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                                   ? 0U
                                                                   : 
                                                                  (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                    & (IData)(vlSelfRef.__PVT__core_rx_valid))
                                                                    ? vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                                                    : 
                                                                   (((0U 
                                                                      == 
                                                                      (0x1fU 
                                                                       & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))
                                                                      ? 0U
                                                                      : 
                                                                     (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x7ffU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))) 
                                                                       >> 5U)] 
                                                                      << 
                                                                      ((IData)(0x20U) 
                                                                       - 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))))) 
                                                                    | (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (0x3fU 
                                                                        & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U) 
                                                                           >> 5U))] 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))))))))));
    __Vtemp_1[1U] = (IData)(((0x100000000ULL | (((QData)((IData)(
                                                                 ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                                                   >> 4U) 
                                                                  & (0x28U 
                                                                     != 
                                                                     (0x3fU 
                                                                      & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U]))))) 
                                                 << 0x21U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)
                                                                    ? 0U
                                                                    : 
                                                                   (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                                     & (IData)(vlSelfRef.__PVT__core_rx_valid))
                                                                     ? vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q
                                                                     : 
                                                                    (((0U 
                                                                       == 
                                                                       (0x1fU 
                                                                        & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))
                                                                       ? 0U
                                                                       : 
                                                                      (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                       (((IData)(0x1fU) 
                                                                         + 
                                                                         (0x7ffU 
                                                                          & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))) 
                                                                        >> 5U)] 
                                                                       << 
                                                                       ((IData)(0x20U) 
                                                                        - 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U))))) 
                                                                     | (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                        (0x3fU 
                                                                         & (VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U) 
                                                                            >> 5U))] 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & VL_SHIFTL_III(11,11,32, 
                                                                                (0x3fU 
                                                                                & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)), 5U)))))))))) 
                             >> 0x20U));
    __Vtemp_2[0U] = __Vtemp_1[0U];
    __Vtemp_2[1U] = __Vtemp_1[1U];
    __Vtemp_2[2U] = (4U | ((IData)((((QData)((IData)(
                                                     (1U 
                                                      | ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                                                         << 1U)))) 
                                     << 0x21U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_rdata)) 
                                                   << 1U) 
                                                  | (QData)((IData)(
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                          >> 0xaU) 
                                                                         | (0x2cU 
                                                                            == 
                                                                            (0x3fU 
                                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                                >> 6U))))))))))) 
                           << 3U));
    __Vtemp_2[3U] = (((IData)((((QData)((IData)((1U 
                                                 | ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                                                    << 1U)))) 
                                << 0x21U) | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_rdata)) 
                                              << 1U) 
                                             | (QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                     >> 0xaU) 
                                                                    | (0x2cU 
                                                                       == 
                                                                       (0x3fU 
                                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                           >> 6U))))))))))) 
                      >> 0x1dU) | ((IData)(((((QData)((IData)(
                                                              (1U 
                                                               | ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                                                                  << 1U)))) 
                                              << 0x21U) 
                                             | (((QData)((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_rdata)) 
                                                 << 1U) 
                                                | (QData)((IData)(
                                                                  (1U 
                                                                   & (~ 
                                                                      ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                        >> 0xaU) 
                                                                       | (0x2cU 
                                                                          == 
                                                                          (0x3fU 
                                                                           & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                                                                              >> 6U)))))))))) 
                                            >> 0x20U)) 
                                   << 3U));
    vlSelfRef.reg_rsp_o = (0x3ffffffffULL & ((0x65U 
                                              >= (0x7fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))
                                              ? (((QData)((IData)(
                                                                  __Vtemp_2[
                                                                  (((IData)(0x21U) 
                                                                    + 
                                                                    (0x7fU 
                                                                     & ((IData)(0x22U) 
                                                                        * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x22U) 
                                                        * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer)))))) 
                                                 | (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x22U) 
                                                          * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))
                                                      ? 0ULL
                                                      : 
                                                     ((QData)((IData)(
                                                                      __Vtemp_2[
                                                                      (((IData)(0x1fU) 
                                                                        + 
                                                                        (0x7fU 
                                                                         & ((IData)(0x22U) 
                                                                            * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer)))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer)))))) 
                                                    | ((QData)((IData)(
                                                                       __Vtemp_2[
                                                                       (3U 
                                                                        & (((IData)(0x22U) 
                                                                            * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer)) 
                                                                           >> 5U))])) 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x22U) 
                                                           * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))))
                                              : vlSelfRef.u_reg__DOT__i_reg_demux__DOT____Vxrand___0));
    u_reg__DOT____VdfgRegularize_h8798bec5_0_15 = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we));
    vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0xfffffffffULL & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlSelfRef.__PVT__tx_valid_checked))
                                         ? vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be
                                         : ((0xa1fU 
                                             >= (0xfffU 
                                                 & ((IData)(0x24U) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x23U) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & ((IData)(0x24U) 
                                                                       * 
                                                                       (0x7fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x24U) 
                                                       * 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x24U) 
                                                       * 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x24U) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0xfffU 
                                                                        & ((IData)(0x24U) 
                                                                           * 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x24U) 
                                                          * 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (0x7fU 
                                                                       & (((IData)(0x24U) 
                                                                           * 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x24U) 
                                                          * 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                             : vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vxrand___0))));
    vlSelfRef.__PVT__core_tx_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en 
        = (IData)(((0x4000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en 
        = (IData)(((0x10000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en 
        = (IData)(((0x18000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en 
        = (IData)(((0x1c000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en 
        = (IData)(((0x20000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en 
        = (IData)(((0x30000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en 
        = (IData)(((0x38000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we 
        = (IData)(((0U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we 
        = (IData)(((0x34000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we 
        = (IData)(((0x8000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__alert_test_we = (IData)(
                                                         ((0xc000U 
                                                           == 
                                                           (0x3f000U 
                                                            & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                          & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__command_len_we = (IData)(
                                                          ((0x24000U 
                                                            == 
                                                            (0x3f000U 
                                                             & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                           & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data 
        = ((IData)(vlSelfRef.__PVT__core_tx_valid) 
           & (IData)(vlSelfRef.__PVT__core_tx_ready));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_overflow) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xeU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_underflow) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0x11U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_access_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q)));
    vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we)) 
           | (0U != ((((((~ (IData)(vlSelfRef.__PVT__idle_q)) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)) 
                        << 5U) | ((((~ (IData)(vlSelfRef.__PVT__ready_q)) 
                                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)) 
                                   << 4U) | (((~ (IData)(vlSelfRef.__PVT__tx_wm_q)) 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data)) 
                                             << 3U))) 
                      | ((((~ (IData)(vlSelfRef.__PVT__rx_wm_q)) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data)) 
                          << 2U) | ((((~ (IData)(vlSelfRef.__PVT__tx_empty_q)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth))) 
                                     << 1U) | ((~ (IData)(vlSelfRef.__PVT__rx_full_q)) 
                                               & (0x40U 
                                                  <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)))))) 
                     & (IData)(vlSelfRef.__PVT__event_mask))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__alert_test_we)) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((0U != (0xfU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)));
    vlSelfRef.__PVT__error_busy = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)) 
                                   & (0U != (0xfU & 
                                             (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))));
    __VdfgRegularize_he70b63c2_0_2 = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) 
                                      & (0U != (0xfU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0xfe000000U & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | (((((0x1000000U 
                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             << 0x14U)) 
                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                             << 0x17U) 
                                            | (0x600000U 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  << 0x10U)))) 
                                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                            << 0x14U) 
                                           | (0xc0000U 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 << 0xbU)))) 
                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                            << 0x11U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                               << 0x10U) 
                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                 << 0xfU))) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                              << 0xeU) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                   << 0xcU))))) 
                                      | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                            << 0xbU) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                               << 0xaU) 
                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                 << 9U))) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                 << 7U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                   << 6U)))) 
                                         | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                                   << 3U))) 
                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q)))))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0x1ffffffU & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                << 0x19U) 
                                               | (QData)((IData)(
                                                                 ((0x1fffffeU 
                                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                       << 0x15U) 
                                                                      | (0x1ffffeU 
                                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                            >> 0xbU)))) 
                                                                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
                                      << 0x19U));
    vlSelfRef.__PVT__reg2hw[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               ((0x1fffffeU 
                                                                 & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                     << 0x15U) 
                                                                    | (0x1ffffeU 
                                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                          >> 0xbU)))) 
                                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
                                    >> 7U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                         << 0x19U) 
                                                        | (QData)((IData)(
                                                                          ((0x1fffffeU 
                                                                            & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                << 0x15U) 
                                                                               | (0x1ffffeU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                                >> 0xbU)))) 
                                                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
                                                       >> 0x20U)) 
                                              << 0x19U));
    vlSelfRef.__PVT__reg2hw[2U] = ((0xfffc0000U & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                 << 0x19U) 
                                                | (QData)((IData)(
                                                                  ((0x1fffffeU 
                                                                    & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                        << 0x15U) 
                                                                       | (0x1ffffeU 
                                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                             >> 0xbU)))) 
                                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
                                               >> 0x20U)) 
                                      >> 7U));
    vlSelfRef.__PVT__reg2hw[2U] = ((0xfe03ffffU & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | (0xfffc0000U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q) 
                                        << 0x15U) | 
                                       (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q) 
                                         << 0x14U) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q) 
                                            << 0x13U) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q) 
                                              << 0x12U))))));
    vlSelfRef.__PVT__reg2hw[2U] = ((0x1ffffffU & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | (0xfe000000U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                        << 0x1dU) | 
                                       ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                        << 0x19U))));
    vlSelfRef.__PVT__reg2hw[3U] = ((0xfffe0000U & vlSelfRef.__PVT__reg2hw[3U]) 
                                   | (0x1ffffffU & 
                                      ((0x1fffffeU 
                                        & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q) 
                                           << 1U)) 
                                       | ((0x1ffffffU 
                                           & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                              >> 3U)) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                             >> 7U)))));
    vlSelfRef.__PVT__reg2hw[3U] = ((0x1ffffU & vlSelfRef.__PVT__reg2hw[3U]) 
                                   | (0xfffe0000U & 
                                      ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q) 
                                         << 0x1cU) 
                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q) 
                                           << 0x18U)) 
                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q) 
                                           << 0x14U) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q) 
                                              << 0x13U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q) 
                                                 << 0x12U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q) 
                                                   << 0x11U)))))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xf8000000U & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                       << 0x13U) | 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                        << 0x12U) | 
                                       (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                         << 0x11U) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q))))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x7ffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                      << 0x1bU));
    vlSelfRef.__PVT__reg2hw[5U] = ((0x1ff0U & vlSelfRef.__PVT__reg2hw[5U]) 
                                   | (0x1fffU & ((0x7fffff8U 
                                                  & ((IData)(vlSelfRef.__PVT__u_reg__DOT__alert_test_we) 
                                                     << 3U)) 
                                                 | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                                    >> 5U))));
    vlSelfRef.__PVT__reg2hw[5U] = ((0xfU & vlSelfRef.__PVT__reg2hw[5U]) 
                                   | (0x1ff0U & (((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q) 
                                                         << 0xaU))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                      << 9U) 
                                                     | (0x100U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                           >> 4U)))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we) 
                                                      << 7U) 
                                                     | (0x40U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                           >> 7U))) 
                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we) 
                                                        << 5U) 
                                                       | (0x10U 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                             >> 8U)))))));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (0U != (0xfU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
           & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) 
           & ((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event)
               ? ((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_busy) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)));
    vlSelfRef.__PVT__error_csid_inval = ((IData)(__VdfgRegularize_he70b63c2_0_2) 
                                         & (2U <= vlSelfRef.u_reg__DOT____Vcellout__u_csid__q));
    vlSelfRef.__PVT__error_cmd_inval = ((IData)(__VdfgRegularize_he70b63c2_0_2) 
                                        & ((~ ((0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                    >> 5U))) 
                                               | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_125))) 
                                           | ((0U != 
                                               (3U 
                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                   >> 5U))) 
                                              & ((~ (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_125)) 
                                                 | (3U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 7U)))))));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                             >> 0x15U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x15U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__reg2hw[0U] 
                                                    >> 0x15U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                   >> 0x15U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                      >> 0x15U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                       >> 0x15U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:194: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                    >> 0x15U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host.sv", 194, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                             >> 0x12U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x12U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.__PVT__reg2hw[0U] 
                                                    >> 0x12U))))))))) {
        if ((0U != (((3U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                   >> 0x12U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                      >> 0x12U))) << 1U) 
                       | (1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                       >> 0x12U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:211: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                    >> 0x12U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host.sv", 211, "");
            }
        }
    }
    vlSelfRef.__PVT__configopts = (0x7fffffffU & ((0xacU 
                                                   >= 
                                                   ((IData)(0x52U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(0x1fU) 
                                                        * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x52U) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(0x1fU) 
                                                             * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.__PVT__reg2hw[
                                                     (((IData)(0x70U) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(0x1fU) 
                                                           * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x52U) 
                                                          + 
                                                          (0x3fU 
                                                           & ((IData)(0x1fU) 
                                                              * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))))) 
                                                   | (vlSelfRef.__PVT__reg2hw[
                                                      (((IData)(0x52U) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(0x1fU) 
                                                            * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x52U) 
                                                          + 
                                                          (0x3fU 
                                                           & ((IData)(0x1fU) 
                                                              * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))))
                                                   : vlSelfRef.__Vxrand___0));
    vlSelfRef.__PVT__core_command_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0x10U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_csid_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xfU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_cmd_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q)));
    vlSelfRef.__PVT__intr_hw_error__DOT__new_event 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we)) 
           | (0U != (((((IData)(vlSelfRef.__PVT__error_access_inval) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__error_csid_inval) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__error_cmd_inval) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__error_underflow) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__error_overflow) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__error_busy)))) 
                     & (0x20U | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_89)))));
    vlSelfRef.__PVT__command = (((QData)((IData)((((IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid) 
                                                   << 0x1cU) 
                                                  | ((0xc000000U 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         << 0x15U)) 
                                                     | ((((1U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                               >> 7U)))
                                                           ? 1U
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 7U)))
                                                            ? 2U
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                 >> 7U)))
                                                             ? 3U
                                                             : 0U))) 
                                                         << 0x18U) 
                                                        | (0xffffffU 
                                                           & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                               << 0x14U) 
                                                              | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                 >> 0xcU)))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                  << 0x1bU)) 
                                                              | ((0x7ffff800U 
                                                                  & vlSelfRef.__PVT__configopts) 
                                                                 | ((0x780U 
                                                                     & (vlSelfRef.__PVT__configopts 
                                                                        << 4U)) 
                                                                    | ((0x78U 
                                                                        & (vlSelfRef.__PVT__configopts 
                                                                           >> 4U)) 
                                                                       | (7U 
                                                                          & vlSelfRef.__PVT__configopts))))))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))
                    ? 0U : 7U);
        } else if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 0U;
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 5U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 6U;
        }
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 1U;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq)));
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq)));
                }
            }
        }
    } else {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 1U;
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 4U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 6U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 2U;
            }
        } else if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                    ? 1U : 3U);
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) 
         & (5U != (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 5U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) 
           & ((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event)
               ? ((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
    vlSelfRef.__PVT__core_command = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty)
                                      ? 0ULL : (0x1fffffffffffffffULL 
                                                & (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                    & (0U 
                                                       != 
                                                       (0xfU 
                                                        & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))))
                                                    ? vlSelfRef.__PVT__command
                                                    : 
                                                   ((0xf3U 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x3dU) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x3cU) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x3dU) 
                                                                            * 
                                                                            (3U 
                                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x3dU) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x3dU) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x3dU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x3dU) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x3dU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                           (7U 
                                                                            & (((IData)(0x3dU) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x3dU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                                     : vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vxrand___0))));
    __VdfgRegularize_h495687df_0_91 = ((1U & (IData)(
                                                     (vlSelfRef.__PVT__core_command 
                                                      >> 0x3cU))) 
                                       != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
    if (vlSelfRef.__PVT__core_command_valid) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)(vlSelfRef.__PVT__core_command)) 
                 != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__core_command 
                                   >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__core_command 
                                      >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                           >> 0xbU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                              >> 3U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                                 >> 7U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0xffffU & (IData)(
                                                     (vlSelfRef.__PVT__core_command 
                                                      >> 0xfU))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = ((IData)(__VdfgRegularize_h495687df_0_91)
                ? 4U : 2U);
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = (1U & (~ ((IData)(vlSelfRef.__PVT__core_command_valid) 
                    & (IData)(__VdfgRegularize_h495687df_0_91))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) 
              & ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                  ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                      ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                      : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
                         & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))))
                  : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                      ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
                         & ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_96) 
                            & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active) 
                               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q))))
                      : (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                     ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                         ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                             ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                     ? 1U : 6U)) : 
                            ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                              ? ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                  ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle)
                                  : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                              : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                  ? 5U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))))
                         : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                             ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                                 ? ((IData)(vlSelfRef.__VdfgRegularize_h495687df_0_96)
                                     ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                         ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                         : 4U) : 2U)
                                 : 3U) : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                                           ? ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                               ? 3U
                                               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle))))
                     : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    __Vtableidx4 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vtestharness__ConstPool__TABLE_h86359c3a_0
        [__Vtableidx4];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int) 
           & (IData)(vlSelfRef.__PVT__core_command_valid));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x3cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__core_command));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x1fU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0xffffU & (IData)((vlSelfRef.__PVT__core_command 
                                  >> 0xfU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0xffffffU & (IData)((vlSelfRef.__PVT__core_command 
                                    >> 0x20U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 0xbU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 7U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x38U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x3aU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 2U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x39U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 1U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0xffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0xffffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
              & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
              | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                 & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0xffffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1)
                                 ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q
                                 : (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                    - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1))));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
                = (0xfU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                            ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                    ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                        ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                    : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                        : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                    ? 0U : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                             : 0U)))
                            : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                        - (IData)(1U)))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0xffffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
                = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0xffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en)
                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                               ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                            ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                            : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                               - (IData)(1U)))))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:405: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_fsm.sv", 405, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__speed = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q) 
               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q) 
               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__speed = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)
             : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : (0xffffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                                  ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                      ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d
                                      : (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                         - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)))
                                  : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)));
    if ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q))) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                        ? 1U : (0xfU 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                                    ? 
                                                   (3U 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                                     ? 
                                                    (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                     : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:567: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_fsm.sv", 567, "");
                }
            }
        }
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                                   ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__rd_ready)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data));
    vlSelfRef.__PVT__u_spi_core__DOT__shift_en = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__rd_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr = 
        ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_data) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d = 0ULL;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)));
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
                = (((QData)((IData)((((0x20000U & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 3U)) 
                                                   << 0x11U)) 
                                      | (0x1fe00U & 
                                         ((IData)((vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                   >> 0x1cU)) 
                                          << 9U))) 
                                     | ((0x100U & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 2U)) 
                                                   << 8U)) 
                                        | (0xffU & (IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 0x14U))))))) 
                    << 0x12U) | (QData)((IData)((((0x20000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                               >> 1U)) 
                                                      << 0x11U)) 
                                                  | (0x1fe00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                                 >> 0xcU)) 
                                                        << 9U))) 
                                                 | ((0x100U 
                                                     & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                                  >> 4U))))))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d 
                = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q) 
                         - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)));
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q;
        }
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__1(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cio_sd_i = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_use_spimemio__q)
                           ? 0U : (IData)(vlSymsp->TOP.testharness__DOT__spi_flash_sd));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
            ? (IData)(vlSelfRef.cio_sd_i) : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
            ? ((0xfeU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                         << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                          >> 1U))) : 
           ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
             ? ((0xfcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                          << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
             : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                 ? ((0xf0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                              << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                 : 0U)));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                    : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                ? (IData)(vlSelfRef.cio_sd_i) : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0xffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr))
                         ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                         : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__shift_en)
                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                             : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtestharness__ConstPool__TABLE_h529843ad_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vtestharness__ConstPool__TABLE_h5a9d24e2_0;

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__1(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__spi_subsystem_i__DOT__ot_spi_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*0:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*7:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0;
    CData/*7:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0;
    CData/*0:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*6:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0;
    CData/*6:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q = 0;
    CData/*1:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0;
    CData/*1:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = 0;
    // Body
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = ((2U 
                                                   & (IData)(__Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q)) 
                                                  | ((1U 
                                                      & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
                                                     || (1U 
                                                         & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid) 
                                                            | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                                                                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q)
                                                                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))))));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = ((1U 
                                                   & (IData)(__Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q)) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
                                                      || (1U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)) 
                                                             | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) 
                                                                 >> 1U)
                                                                 : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))))) 
                                                     << 1U));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)));
    __Vtableidx2 = (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                           << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))));
    if (Vtestharness__ConstPool__TABLE_h529843ad_0[__Vtableidx2]) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = Vtestharness__ConstPool__TABLE_h5a9d24e2_0
            [__Vtableidx2];
    }
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                     << 3U) | ((((IData)(vlSelfRef.__PVT__core_command_valid) 
                                 & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                                       & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int)))) 
                                << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                           << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))));
    if (Vtestharness__ConstPool__TABLE_h529843ad_0[__Vtableidx3]) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = Vtestharness__ConstPool__TABLE_h5a9d24e2_0
            [__Vtableidx3];
    }
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__qe = 
        ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
         && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_spi_event__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we));
    vlSelfRef.__PVT__u_reg__DOT__u_control_rx_watermark__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_tx_watermark__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_sw_rst__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_spien__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_overflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_underflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_csidinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_rxfull__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_txempty__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_rxwm__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_txwm__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_ready__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csnidle_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csntrail_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csnlead_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_fullcyc_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_cpha_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_cpol_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csnidle_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csntrail_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csnlead_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_fullcyc_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_cpha_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_cpol_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__tx_wm_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data));
    vlSelfRef.__PVT__rx_wm_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data));
    vlSelfRef.__PVT__idle_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                               && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
               & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)));
    vlSelfRef.__PVT__rx_full_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                  && (0x40U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q 
        = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (0x40U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                         ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d
                         : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr) 
                   & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr))) 
               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
               & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming) 
                   & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q) 
                      >> 8U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill))));
    vlSelfRef.intr_error_o = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                              && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
    vlSelfRef.intr_spi_event_o = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                  && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                      & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q));
    vlSelfRef.__PVT__tx_empty_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                   && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__ready_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (0x48U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
                   | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__shift_en));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        } else {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        } else {
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0x7fU & ((0x3fU == (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x40U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 6U)) 
                                             << 6U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
            if (((IData)(vlSelfRef.rx_valid_o) & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                                                  & (IData)(vlSelfRef.__PVT__rx_ready)))) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0x7fU & ((0x3fU == (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x40U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 6U)) 
                                             << 6U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0xffU & ((0x47U == (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x80U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 7U)) 
                                             << 7U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
            if (((IData)(vlSelfRef.__PVT__core_tx_valid) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                    & (IData)(vlSelfRef.__PVT__core_tx_ready)))) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0xffU & ((0x47U == (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x80U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 7U)) 
                                             << 7U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
        }
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q 
            = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_depth;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d;
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                    ? (3U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                    : (3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q = 0U;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1 = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
        = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    vlSelfRef.__VdfgRegularize_h495687df_0_96 = ((0U 
                                                  == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                                                 & (0U 
                                                    == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__error_busy) | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_underflow) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_csid_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_cmd_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_overflow) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_access_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q 
                    = (0xffffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                  >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                       >> 0x1cU);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q 
                    = (0xfU & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q 
                    = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                               >> 4U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xaU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q 
                    = (0xffffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                  >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                       >> 0x1cU);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q 
                    = (0xfU & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q 
                    = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                               >> 4U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xaU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xeU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xfU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x10U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q 
                    = (0xffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q 
                    = (0xffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                >> 0x14U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xeU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xfU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x10U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x11U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_csid__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en)
                    ? ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                        << 0x14U) | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                     >> 0xcU)) : 0U);
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d;
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0x7fU;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_csid__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i.gen_alert_tx[0].u_prim_alert_sender.i_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl/prim_diff_decode.sv", 115, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.spi_subsystem_i.ot_spi_i.gen_alert_tx[0].u_prim_alert_sender.i_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl/prim_diff_decode.sv", 115, "");
            }
        }
    }
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d;
        if (((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
        }
        if (((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                      >> 0xaU));
        }
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0xfffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                          ((IData)(9U) 
                                           * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__sw_error_status = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                           << 3U))) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q))));
    vlSelfRef.__VdfgRegularize_h495687df_0_89 = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                   << 4U) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                      << 3U) 
                                                     | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                        << 2U))) 
                                                 | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q)));
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    vlSelfRef.__PVT__core_tx_ready = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__gen_multiple_devices__DOT__csid 
        = ((2U > vlSelfRef.u_reg__DOT____Vcellout__u_csid__q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_csid__q);
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__core_rx_valid = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
                                      & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__core_rx_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth = 
        ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
          ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      >> 6U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 6U)))
                               ? ((0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                  - (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                               : (((IData)(0x40U) - 
                                   (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                  + (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_depth = 
        ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)
          ? 4U : (7U & (((1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                >> 2U)) == (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                  >> 2U)))
                         ? ((3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                            - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                         : (((IData)(4U) - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                            + (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.tx_ready_o = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                                  & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth = 
        ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
          ? 0x48U : (0x7fU & (((1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      >> 7U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 7U)))
                               ? ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                               : (((IData)(0x48U) - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                  + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__sw_error_status))) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr = 
        ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid) 
         & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                    >> 8U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__core_rx_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__core_rx_ready)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_data 
        = (((IData)(vlSelfRef.__PVT__core_rx_ready) 
            & (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (1U & (IData)(vlSelfRef.__PVT__alert_rx_i)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 1U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni))) 
           || (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 2U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 3U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready)));
    vlSelfRef.rx_valid_o = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                  & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
           & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_q;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
           & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_data) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                     + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                ? (vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
                   | VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                               ? 0U
                                               : (0xffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)))
                : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
    vlSelfRef.__PVT__u_spi_core__DOT__rd_ready = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                                                     | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd;
            if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 1U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d 
                = ((IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 1U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd;
            if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 1U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d 
                = ((IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 1U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o) 
            | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) 
         & (5U != (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__0(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0 = 0;
    CData/*5:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*0:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*7:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0;
    CData/*0:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*6:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q = 0;
    CData/*1:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0;
    CData/*1:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = 0;
    // Body
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = ((2U 
                                                   & (IData)(__Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q)) 
                                                  | ((1U 
                                                      & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
                                                     || (1U 
                                                         & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid) 
                                                            | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                                                                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q)
                                                                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))))));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = ((1U 
                                                   & (IData)(__Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q)) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
                                                      || (1U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)) 
                                                             | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) 
                                                                 >> 1U)
                                                                 : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))))) 
                                                     << 1U));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                     << 3U) | (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                           << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))));
    if (Vtestharness__ConstPool__TABLE_h529843ad_0[__Vtableidx6]) {
        vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = Vtestharness__ConstPool__TABLE_h5a9d24e2_0
            [__Vtableidx6];
    }
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                     << 3U) | ((((IData)(vlSelfRef.__PVT__core_command_valid) 
                                 & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                                    & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                                       & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int)))) 
                                << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                           << 1U) | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))));
    if (Vtestharness__ConstPool__TABLE_h529843ad_0[__Vtableidx7]) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = Vtestharness__ConstPool__TABLE_h5a9d24e2_0
            [__Vtableidx7];
    }
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__qe = 
        ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
         && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_spi_event__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we));
    vlSelfRef.__PVT__u_reg__DOT__u_control_rx_watermark__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_tx_watermark__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_sw_rst__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_spien__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_overflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_underflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_csidinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_rxfull__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_txempty__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_rxwm__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_txwm__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_ready__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csnidle_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csntrail_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csnlead_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_fullcyc_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_cpha_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_cpol_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csnidle_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csntrail_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csnlead_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_fullcyc_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_cpha_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_cpol_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__tx_wm_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data));
    vlSelfRef.__PVT__rx_wm_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data));
    vlSelfRef.__PVT__idle_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                               && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
               & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)));
    vlSelfRef.__PVT__ready_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q 
        = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (0x48U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__tx_empty_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                   && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__rx_full_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                  && (0x40U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                         ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d
                         : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr) 
                   & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr))) 
               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
               & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming) 
                   & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q) 
                      >> 8U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill))));
    vlSelfRef.intr_error_o = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                              && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
    vlSelfRef.intr_spi_event_o = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                  && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                      & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
                   | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__shift_en));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        } else {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
        if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        } else {
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0xffU & ((0x47U == (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x80U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 7U)) 
                                             << 7U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0x7fU & ((0x3fU == (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x40U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 6U)) 
                                             << 6U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
            if (((IData)(vlSelfRef.__PVT__core_tx_valid) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                    & (IData)(vlSelfRef.__PVT__core_tx_ready)))) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0xffU & ((0x47U == (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x80U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 7U)) 
                                             << 7U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
            if (((IData)(vlSelfRef.rx_valid_o) & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                                                  & (IData)(vlSelfRef.__PVT__rx_ready)))) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0x7fU & ((0x3fU == (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x40U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 6U)) 
                                             << 6U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
        }
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q 
            = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_depth;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d;
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                    ? (3U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                    : (3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q = 0U;
        __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1 = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
        = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgExtracted_h5b8f7692__0 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                    & (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__error_busy) | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_underflow) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_csid_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_cmd_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_overflow) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_access_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q 
                    = (0xffffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                  >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                       >> 0x1cU);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q 
                    = (0xfU & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q 
                    = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                               >> 4U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xaU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q 
                    = (0xffffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                  >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                       >> 0x1cU);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q 
                    = (0xfU & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q 
                    = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                               >> 4U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xaU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xeU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xfU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x10U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q 
                    = (0xffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q 
                    = (0xffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                >> 0x14U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xeU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xfU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x10U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x11U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_csid__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en)
                    ? ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                        << 0x14U) | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                     >> 0xcU)) : 0U);
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d;
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0x7fU;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_csid__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i.gen_alert_tx[0].u_prim_alert_sender.i_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl/prim_diff_decode.sv", 115, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i.gen_alert_tx[0].u_prim_alert_sender.i_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl/prim_diff_decode.sv", 115, "");
            }
        }
    }
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d;
        if (((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
        }
        if (((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                      >> 0xaU));
        }
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0xfffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                          ((IData)(9U) 
                                           * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__sw_error_status = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                           << 3U))) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q))));
    vlSelfRef.__VdfgRegularize_h495687df_0_100 = ((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                         << 2U))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q)));
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    vlSelfRef.__PVT__gen_multiple_devices__DOT__csid 
        = ((2U > vlSelfRef.u_reg__DOT____Vcellout__u_csid__q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_csid__q);
    vlSelfRef.__PVT__core_tx_ready = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__core_rx_valid = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
                                      & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__sw_error_status))) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr = 
        ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid) 
         & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                    >> 8U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (1U & (IData)(vlSelfRef.__PVT__alert_rx_i)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 1U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 2U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 3U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready)));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
           & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_q;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
           & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__u_spi_core__DOT__rd_ready = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                                                     | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd;
            if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 1U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d 
                = ((IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 1U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd;
            if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 1U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d 
                = ((IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 1U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o) 
            | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) 
         & (5U != (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__2(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni)
            ? vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d
            : 0U);
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_depth = 
        ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)
          ? 4U : (7U & (((1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                >> 2U)) == (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                  >> 2U)))
                         ? ((3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                            - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                         : (((IData)(4U) - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                            + (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth = 
        ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
          ? 0x48U : (0x7fU & (((1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      >> 7U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 7U)))
                               ? ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                               : (((IData)(0x48U) - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                  + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))));
    vlSelfRef.tx_ready_o = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                                  & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__core_rx_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth = 
        ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
          ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      >> 6U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 6U)))
                               ? ((0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                  - (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                               : (((IData)(0x40U) - 
                                   (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                  + (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__core_rx_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__core_rx_ready)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_data 
        = (((IData)(vlSelfRef.__PVT__core_rx_ready) 
            & (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.rx_valid_o = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                  & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_data) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                     + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                ? (vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
                   | VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                               ? 0U
                                               : (0xffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)))
                : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__3(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_he70b63c2_0_2;
    __VdfgRegularize_he70b63c2_0_2 = 0;
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h8798bec5_0_15;
    u_reg__DOT____VdfgRegularize_h8798bec5_0_15 = 0;
    VlWide<3>/*69:0*/ u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0;
    VL_ZERO_W(70, u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0);
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_steer = (((0x2cU 
                                                <= 
                                                (0x3fU 
                                                 & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                    >> 6U))) 
                                               & (0x30U 
                                                  > 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                      >> 6U))))
                                               ? 1U
                                               : ((
                                                   (0x28U 
                                                    <= 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                        >> 6U))) 
                                                   & (0x2cU 
                                                      > 
                                                      (0x3fU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                          >> 6U))))
                                                   ? 0U
                                                   : 2U));
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[0U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] = 0U;
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[0U] 
        = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
            << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                         >> 6U));
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[1U] 
        = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
            << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                         >> 6U));
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[2U] 
        = (0x3fU & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                    >> 6U));
    if ((0xd1U >= (0xffU & ((IData)(0x46U) * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))) {
        VL_ASSIGNSEL_WW(210, 70, (0xffU & ((IData)(0x46U) 
                                           * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))), vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o, u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0);
    }
    if ((1U & (~ VL_ONEHOT_I(((((((0x38U == (0x3fU 
                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                >> 0xcU))) 
                                  << 0xcU) | ((0x34U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 0xbU)) 
                                | (((0x30U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 0xaU) | ((0x24U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 9U))) 
                               | (((0x20U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                   << 8U) | (((0x1cU 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 7U) 
                                             | ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 6U)))) 
                              | ((((0x14U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                   << 5U) | (((0x10U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 4U) 
                                             | ((0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 3U))) 
                                 | (((8U == (0x3fU 
                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                >> 0xcU))) 
                                     << 2U) | (((4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))))))))))) {
        if ((0U != ((((((0x38U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                            >> 0xcU))) 
                        << 0xcU) | ((0x34U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 0xbU)) | (((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU))) 
                                                  << 0xaU) 
                                                 | ((0x24U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU))) 
                                                    << 9U))) 
                     | (((0x20U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             >> 0xcU))) 
                         << 8U) | (((0x1cU == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 7U) | ((0x18U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 6U)))) 
                    | ((((0x14U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             >> 0xcU))) 
                         << 5U) | (((0x10U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 4U) | ((0xcU 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 3U))) 
                       | (((8U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                            >> 0xcU))) 
                           << 2U) | (((4U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                      << 1U) | (0U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                    >> 0xcU))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host_reg_top.sv:2005: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_reg_top.sv", 2005, "");
            }
        }
    }
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be 
        = (((QData)((IData)(((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                              << 0x1aU) | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                           >> 6U)))) 
            << 4U) | (QData)((IData)((0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__rx_ready = (IData)((0x20U == (0x30U 
                                                   & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U])));
    __Vtableidx5 = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                            >> 6U));
    vlSelfRef.__PVT__access_valid = Vtestharness__ConstPool__TABLE_h702da64f_0
        [__Vtableidx5];
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata = ((((0U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                | (4U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))) 
                                               | (((8U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU))) 
                                                   | (0xcU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU))) 
                                                     | ((0x14U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU))) 
                                                        | ((0x18U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 0xcU))) 
                                                           | (0x1cU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                  >> 0xcU))))))))
                                               ? ((0U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))
                                                   ? 
                                                  (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q))
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                           >> 0xcU)))
                                                       ? 
                                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                                           << 0x1eU) 
                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                                              << 0x1dU) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q)))))
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                            >> 0xcU)))
                                                        ? 
                                                       (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q) 
                                                              << 0x1eU) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q) 
                                                                << 0x1dU))) 
                                                         | (((IData)(vlSelfRef.__PVT__tx_empty_q) 
                                                             << 0x1cU) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q) 
                                                               << 0x1bU))) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.__PVT__rx_full_q) 
                                                                << 0x19U) 
                                                               | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q) 
                                                                  << 0x18U))) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q) 
                                                                  << 0x16U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q) 
                                                                      << 0x14U) 
                                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q) 
                                                                        << 0x10U)) 
                                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q)))))))
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU)))
                                                         ? 
                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q) 
                                                                << 0x1dU) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q)))))))
                                                         : 
                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q) 
                                                                << 0x1dU) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q))))))))))))))
                                               : ((0x20U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))
                                                   ? vlSelfRef.u_reg__DOT____Vcellout__u_csid__q
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((0x30U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU)))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_100)
                                                     : 
                                                    ((0x34U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))
                                                      ? (IData)(vlSelfRef.__PVT__sw_error_status)
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                           >> 0xcU)))
                                                       ? (IData)(vlSelfRef.__PVT__event_mask)
                                                       : 0xffffffffU))))));
    vlSelfRef.__PVT__tx_valid = (IData)((0xc00U == 
                                         (0xc00U & 
                                          vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U])));
    vlSelfRef.__PVT__u_reg__DOT__reg_we = (IData)((0x30000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U])));
    vlSelfRef.__PVT__error_underflow = ((~ (IData)(vlSelfRef.rx_valid_o)) 
                                        & (IData)(vlSelfRef.__PVT__rx_ready));
    vlSelfRef.__PVT__error_overflow = ((~ (IData)(vlSelfRef.tx_ready_o)) 
                                       & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__error_access_inval = ((~ (IData)(vlSelfRef.__PVT__access_valid)) 
                                           & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we) 
                                           & ((IData)(
                                                      ((0U 
                                                        == 
                                                        (0x3f000U 
                                                         & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                       & (0U 
                                                          != 
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                << 0x14U) 
                                                               | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                  >> 0xcU))))))) 
                                              | ((IData)(
                                                         ((0x4000U 
                                                           == 
                                                           (0x3f000U 
                                                            & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                          & (0U 
                                                             != 
                                                             (1U 
                                                              & (~ 
                                                                 ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                     >> 0xcU))))))) 
                                                 | ((IData)(
                                                            ((0x8000U 
                                                              == 
                                                              (0x3f000U 
                                                               & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                             & (0U 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                      << 0x14U) 
                                                                     | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                        >> 0xcU))))))) 
                                                    | ((IData)(
                                                               ((0xc000U 
                                                                 == 
                                                                 (0x3f000U 
                                                                  & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                & (0U 
                                                                   != 
                                                                   (1U 
                                                                    & (~ 
                                                                       ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                         << 0x14U) 
                                                                        | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                           >> 0xcU))))))) 
                                                       | ((IData)(
                                                                  ((0x10000U 
                                                                    == 
                                                                    (0x3f000U 
                                                                     & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (~ 
                                                                          ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                            << 0x14U) 
                                                                           | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                              >> 0xcU))))))) 
                                                          | ((IData)(
                                                                     ((0x14000U 
                                                                       == 
                                                                       (0x3f000U 
                                                                        & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                      & (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (~ 
                                                                             ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                               << 0x14U) 
                                                                              | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                             | ((IData)(
                                                                        ((0x18000U 
                                                                          == 
                                                                          (0x3f000U 
                                                                           & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                         & (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                | ((IData)(
                                                                           ((0x1c000U 
                                                                             == 
                                                                             (0x3f000U 
                                                                              & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                            & (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                   | ((IData)(
                                                                              ((0x20000U 
                                                                                == 
                                                                                (0x3f000U 
                                                                                & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                               & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                      | ((IData)(
                                                                                ((0x24000U 
                                                                                == 
                                                                                (0x3f000U 
                                                                                & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                         | ((0U 
                                                                             != 
                                                                             (1U 
                                                                              & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))) 
                                                                            & ((0x30U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                               | ((0x34U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | (0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU)))))))))))))))));
    vlSelfRef.__PVT__tx_valid_checked = ((~ ((IData)(vlSelfRef.__PVT__error_overflow) 
                                             | (IData)(vlSelfRef.__PVT__error_access_inval))) 
                                         & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__u_reg__DOT__reg_error = (1U & 
                                              (((~ 
                                                 ((0x38U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU))) 
                                                  | ((0x34U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU))) 
                                                     | ((0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU))) 
                                                        | ((0x24U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 0xcU))) 
                                                           | ((0x20U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                   >> 0xcU))) 
                                                              | ((0x1cU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                      >> 0xcU))) 
                                                                 | ((0x18U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                         >> 0xcU))) 
                                                                    | ((0x14U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                            >> 0xcU))) 
                                                                       | ((0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                               >> 0xcU))) 
                                                                          | ((0xcU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                             | ((8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU)))))))))))))))) 
                                                & ((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U]))) 
                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we))) 
                                               | (IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__tx_valid_checked) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.tx_ready_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__tx_valid_checked)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    u_reg__DOT____VdfgRegularize_h8798bec5_0_15 = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we));
    vlSelfRef.__PVT__core_tx_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en 
        = (IData)(((0x4000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en 
        = (IData)(((0x10000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en 
        = (IData)(((0x18000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en 
        = (IData)(((0x1c000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en 
        = (IData)(((0x20000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en 
        = (IData)(((0x30000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en 
        = (IData)(((0x38000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we 
        = (IData)(((0U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we 
        = (IData)(((0x34000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we 
        = (IData)(((0x8000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__alert_test_we = (IData)(
                                                         ((0xc000U 
                                                           == 
                                                           (0x3f000U 
                                                            & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                          & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__command_len_we = (IData)(
                                                          ((0x24000U 
                                                            == 
                                                            (0x3f000U 
                                                             & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                           & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data 
        = ((IData)(vlSelfRef.__PVT__core_tx_valid) 
           & (IData)(vlSelfRef.__PVT__core_tx_ready));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_overflow) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xeU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_underflow) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0x11U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_access_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q)));
    vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we)) 
           | (0U != ((((((~ (IData)(vlSelfRef.__PVT__idle_q)) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)) 
                        << 5U) | ((((~ (IData)(vlSelfRef.__PVT__ready_q)) 
                                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)) 
                                   << 4U) | (((~ (IData)(vlSelfRef.__PVT__tx_wm_q)) 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data)) 
                                             << 3U))) 
                      | ((((~ (IData)(vlSelfRef.__PVT__rx_wm_q)) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data)) 
                          << 2U) | ((((~ (IData)(vlSelfRef.__PVT__tx_empty_q)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth))) 
                                     << 1U) | ((~ (IData)(vlSelfRef.__PVT__rx_full_q)) 
                                               & (0x40U 
                                                  <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)))))) 
                     & (IData)(vlSelfRef.__PVT__event_mask))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__alert_test_we)) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((0U != (0xfU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)));
    vlSelfRef.__PVT__error_busy = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)) 
                                   & (0U != (0xfU & 
                                             (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))));
    __VdfgRegularize_he70b63c2_0_2 = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) 
                                      & (0U != (0xfU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0xfe000000U & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | (((((0x1000000U 
                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             << 0x14U)) 
                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                             << 0x17U) 
                                            | (0x600000U 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  << 0x10U)))) 
                                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                            << 0x14U) 
                                           | (0xc0000U 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 << 0xbU)))) 
                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                            << 0x11U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                               << 0x10U) 
                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                 << 0xfU))) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                              << 0xeU) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                   << 0xcU))))) 
                                      | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                            << 0xbU) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                               << 0xaU) 
                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                 << 9U))) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                 << 7U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                   << 6U)))) 
                                         | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                                   << 3U))) 
                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q)))))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0x1ffffffU & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                << 0x19U) 
                                               | (QData)((IData)(
                                                                 ((0x1fffffeU 
                                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                       << 0x15U) 
                                                                      | (0x1ffffeU 
                                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                            >> 0xbU)))) 
                                                                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
                                      << 0x19U));
    vlSelfRef.__PVT__reg2hw[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               ((0x1fffffeU 
                                                                 & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                     << 0x15U) 
                                                                    | (0x1ffffeU 
                                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                          >> 0xbU)))) 
                                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
                                    >> 7U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                         << 0x19U) 
                                                        | (QData)((IData)(
                                                                          ((0x1fffffeU 
                                                                            & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                << 0x15U) 
                                                                               | (0x1ffffeU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                                >> 0xbU)))) 
                                                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
                                                       >> 0x20U)) 
                                              << 0x19U));
    vlSelfRef.__PVT__reg2hw[2U] = ((0xfffc0000U & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                 << 0x19U) 
                                                | (QData)((IData)(
                                                                  ((0x1fffffeU 
                                                                    & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                        << 0x15U) 
                                                                       | (0x1ffffeU 
                                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                             >> 0xbU)))) 
                                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
                                               >> 0x20U)) 
                                      >> 7U));
    vlSelfRef.__PVT__reg2hw[2U] = ((0xfe03ffffU & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | (0xfffc0000U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q) 
                                        << 0x15U) | 
                                       (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q) 
                                         << 0x14U) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q) 
                                            << 0x13U) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q) 
                                              << 0x12U))))));
    vlSelfRef.__PVT__reg2hw[2U] = ((0x1ffffffU & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | (0xfe000000U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                        << 0x1dU) | 
                                       ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                        << 0x19U))));
    vlSelfRef.__PVT__reg2hw[3U] = ((0xfffe0000U & vlSelfRef.__PVT__reg2hw[3U]) 
                                   | (0x1ffffffU & 
                                      ((0x1fffffeU 
                                        & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q) 
                                           << 1U)) 
                                       | ((0x1ffffffU 
                                           & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                              >> 3U)) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                             >> 7U)))));
    vlSelfRef.__PVT__reg2hw[3U] = ((0x1ffffU & vlSelfRef.__PVT__reg2hw[3U]) 
                                   | (0xfffe0000U & 
                                      ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q) 
                                         << 0x1cU) 
                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q) 
                                           << 0x18U)) 
                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q) 
                                           << 0x14U) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q) 
                                              << 0x13U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q) 
                                                 << 0x12U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q) 
                                                   << 0x11U)))))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xf8000000U & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                       << 0x13U) | 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                        << 0x12U) | 
                                       (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                         << 0x11U) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q))))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x7ffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                      << 0x1bU));
    vlSelfRef.__PVT__reg2hw[5U] = ((0x1ff0U & vlSelfRef.__PVT__reg2hw[5U]) 
                                   | (0x1fffU & ((0x7fffff8U 
                                                  & ((IData)(vlSelfRef.__PVT__u_reg__DOT__alert_test_we) 
                                                     << 3U)) 
                                                 | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                                    >> 5U))));
    vlSelfRef.__PVT__reg2hw[5U] = ((0xfU & vlSelfRef.__PVT__reg2hw[5U]) 
                                   | (0x1ff0U & (((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q) 
                                                         << 0xaU))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                      << 9U) 
                                                     | (0x100U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                           >> 4U)))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we) 
                                                      << 7U) 
                                                     | (0x40U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                           >> 7U))) 
                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we) 
                                                        << 5U) 
                                                       | (0x10U 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                             >> 8U)))))));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (0U != (0xfU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
           & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) 
           & ((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event)
               ? ((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_busy) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)));
    vlSelfRef.__PVT__error_csid_inval = ((IData)(__VdfgRegularize_he70b63c2_0_2) 
                                         & (2U <= vlSelfRef.u_reg__DOT____Vcellout__u_csid__q));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                             >> 0x15U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x15U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__reg2hw[0U] 
                                                    >> 0x15U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                   >> 0x15U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                      >> 0x15U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                       >> 0x15U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:194: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                    >> 0x15U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host.sv", 194, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                             >> 0x12U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x12U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.__PVT__reg2hw[0U] 
                                                    >> 0x12U))))))))) {
        if ((0U != (((3U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                   >> 0x12U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                      >> 0x12U))) << 1U) 
                       | (1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                       >> 0x12U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:211: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                    >> 0x12U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host.sv", 211, "");
            }
        }
    }
    vlSelfRef.__PVT__test_dir_inval = 1U;
    vlSelfRef.__PVT__test_speed_inval = 1U;
    if ((0U == (3U & (vlSelfRef.__PVT__reg2hw[0U] >> 0x15U)))) {
        vlSelfRef.__PVT__test_dir_inval = 0U;
        vlSelfRef.__PVT__test_speed_inval = 0U;
    } else if (((1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                              >> 0x15U))) || (2U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__reg2hw[0U] 
                                                >> 0x15U))))) {
        vlSelfRef.__PVT__test_dir_inval = (3U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x12U)));
        vlSelfRef.__PVT__test_speed_inval = 0U;
    }
    vlSelfRef.__PVT__configopts = (0x7fffffffU & ((0xacU 
                                                   >= 
                                                   ((IData)(0x52U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(0x1fU) 
                                                        * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x52U) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(0x1fU) 
                                                             * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.__PVT__reg2hw[
                                                     (((IData)(0x70U) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(0x1fU) 
                                                           * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x52U) 
                                                          + 
                                                          (0x3fU 
                                                           & ((IData)(0x1fU) 
                                                              * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))))) 
                                                   | (vlSelfRef.__PVT__reg2hw[
                                                      (((IData)(0x52U) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(0x1fU) 
                                                            * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x52U) 
                                                          + 
                                                          (0x3fU 
                                                           & ((IData)(0x1fU) 
                                                              * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))))
                                                   : vlSelfRef.__Vxrand___0));
    vlSelfRef.__PVT__core_command_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0x10U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_csid_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q)));
    vlSelfRef.__PVT__error_cmd_inval = ((IData)(__VdfgRegularize_he70b63c2_0_2) 
                                        & ((IData)(vlSelfRef.__PVT__test_dir_inval) 
                                           | (IData)(vlSelfRef.__PVT__test_speed_inval)));
    vlSelfRef.__PVT__command = (((QData)((IData)((((IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid) 
                                                   << 0x1cU) 
                                                  | ((0xc000000U 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         << 0x15U)) 
                                                     | ((((1U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                               >> 7U)))
                                                           ? 1U
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 7U)))
                                                            ? 2U
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                 >> 7U)))
                                                             ? 3U
                                                             : 0U))) 
                                                         << 0x18U) 
                                                        | (0xffffffU 
                                                           & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                               << 0x14U) 
                                                              | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                 >> 0xcU)))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                  << 0x1bU)) 
                                                              | ((0x7ffff800U 
                                                                  & vlSelfRef.__PVT__configopts) 
                                                                 | ((0x780U 
                                                                     & (vlSelfRef.__PVT__configopts 
                                                                        << 4U)) 
                                                                    | ((0x78U 
                                                                        & (vlSelfRef.__PVT__configopts 
                                                                           >> 4U)) 
                                                                       | (7U 
                                                                          & vlSelfRef.__PVT__configopts))))))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))
                    ? 0U : 7U);
        } else if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 0U;
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 5U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 6U;
        }
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 1U;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq)));
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq)));
                }
            }
        }
    } else {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 1U;
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 4U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 6U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 2U;
            }
        } else if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                    ? 1U : 3U);
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) 
         & (5U != (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 5U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xfU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_cmd_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q)));
    vlSelfRef.__PVT__intr_hw_error__DOT__new_event 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we)) 
           | (0U != (((((IData)(vlSelfRef.__PVT__error_access_inval) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__error_csid_inval) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__error_cmd_inval) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__error_underflow) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__error_overflow) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__error_busy)))) 
                     & (0x20U | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_100)))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) 
           & ((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event)
               ? ((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__0(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8;
    u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8 = 0;
    CData/*2:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)
            ? 0ULL : (0xfffffffffULL & (((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                         & (IData)(vlSelfRef.__PVT__tx_valid_checked))
                                         ? vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be
                                         : ((0xa1fU 
                                             >= (0xfffU 
                                                 & ((IData)(0x24U) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                             ? (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                 (((IData)(0x23U) 
                                                                   + 
                                                                   (0xfffU 
                                                                    & ((IData)(0x24U) 
                                                                       * 
                                                                       (0x7fU 
                                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                  >> 5U)])) 
                                                 << 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x24U) 
                                                       * 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x24U) 
                                                       * 
                                                       (0x7fU 
                                                        & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                | (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x24U) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 0ULL
                                                     : 
                                                    ((QData)((IData)(
                                                                     vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                     (((IData)(0x1fU) 
                                                                       + 
                                                                       (0xfffU 
                                                                        & ((IData)(0x24U) 
                                                                           * 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x24U) 
                                                          * 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (0x7fU 
                                                                       & (((IData)(0x24U) 
                                                                           * 
                                                                           (0x7fU 
                                                                            & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                          >> 5U))])) 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x24U) 
                                                          * 
                                                          (0x7fU 
                                                           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                             : vlSelfRef.u_data_fifos__DOT__u_tx_fifo__DOT____Vxrand___0))));
    vlSelfRef.__PVT__core_command = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty)
                                      ? 0ULL : (0x1fffffffffffffffULL 
                                                & (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty) 
                                                    & (0U 
                                                       != 
                                                       (0xfU 
                                                        & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))))
                                                    ? vlSelfRef.__PVT__command
                                                    : 
                                                   ((0xf3U 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x3dU) 
                                                         * 
                                                         (3U 
                                                          & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                      (((IData)(0x3cU) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x3dU) 
                                                                            * 
                                                                            (3U 
                                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                       >> 5U)])) 
                                                      << 
                                                      ((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x3dU) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                        ? 0x20U
                                                        : 
                                                       ((IData)(0x40U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x3dU) 
                                                            * 
                                                            (3U 
                                                             & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                     | (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x3dU) 
                                                              * 
                                                              (3U 
                                                               & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))
                                                          ? 0ULL
                                                          : 
                                                         ((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                          (((IData)(0x1fU) 
                                                                            + 
                                                                            (0xffU 
                                                                             & ((IData)(0x3dU) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))) 
                                                                           >> 5U)])) 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x3dU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))))))) 
                                                        | ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__storage[
                                                                           (7U 
                                                                            & (((IData)(0x3dU) 
                                                                                * 
                                                                                (3U 
                                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                                                               >> 5U))])) 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x3dU) 
                                                               * 
                                                               (3U 
                                                                & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))))))
                                                     : vlSelfRef.u_cmd_queue__DOT__cmd_fifo__DOT____Vxrand___0))));
    if (vlSelfRef.__PVT__core_command_valid) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active 
            = (((1U & (IData)((vlSelfRef.__PVT__core_command 
                               >> 0x3cU))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q))
                ? 4U : 2U);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle 
            = ((((1U & (IData)(vlSelfRef.__PVT__core_command)) 
                 != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)) 
                | (((1U & (IData)((vlSelfRef.__PVT__core_command 
                                   >> 1U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)) 
                   | (((1U & (IData)((vlSelfRef.__PVT__core_command 
                                      >> 2U))) != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)) 
                      | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                           >> 0xbU))) 
                          != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q)) 
                         | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                              >> 3U))) 
                             != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q)) 
                            | (((0xfU & (IData)((vlSelfRef.__PVT__core_command 
                                                 >> 7U))) 
                                != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q)) 
                               | ((0xffffU & (IData)(
                                                     (vlSelfRef.__PVT__core_command 
                                                      >> 0xfU))) 
                                  != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q))))))))
                ? 6U : 1U);
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active = 7U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__core_command_valid))) 
           || ((1U & (IData)((vlSelfRef.__PVT__core_command 
                              >> 0x3cU))) == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 0U;
    if ((1U & (~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)))) {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgExtracted_h5b8f7692__0)))) {
                        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q) {
                            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int 
                                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_idle_csb_active;
                        }
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int = 1U;
            }
        }
    }
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 0U;
    } else if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                    = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                            ? 1U : 6U));
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
                }
            } else if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 5U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))
                    ? ((IData)(vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgExtracted_h5b8f7692__0)
                        ? 2U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)
                                 ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle_csb_active)
                                 : 4U)) : 3U);
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))) {
                vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d = 3U;
            }
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__next_state_after_idle;
        }
    }
    __Vtableidx8 = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d 
        = Vtestharness__ConstPool__TABLE_h86359c3a_0
        [__Vtableidx8];
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q) 
           != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int) 
           & (IData)(vlSelfRef.__PVT__core_command_valid));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x3cU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__core_command));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x1fU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0xffffU & (IData)((vlSelfRef.__PVT__core_command 
                                  >> 0xfU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0xffffffU & (IData)((vlSelfRef.__PVT__core_command 
                                    >> 0x20U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 0xbU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 7U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0xfU & (IData)((vlSelfRef.__PVT__core_command 
                               >> 3U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x38U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x3aU)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 2U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 0x39U)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)((vlSelfRef.__PVT__core_command 
                             >> 1U)));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv 
            = (0xffffU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d 
            = (0xffffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q);
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail 
            = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d 
            = (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha 
            = (1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q));
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
              & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
              & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0 
        = ((IData)(u_spi_core__DOT__u_fsm__DOT____VdfgRegularize_h7d00bc69_0_8) 
           & ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
              | ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)) 
                 & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d = 0U;
    } else {
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0xffffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1)
                                 ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q
                                 : (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                                    - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1))));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
                = (0xfU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing)
                            ? ((4U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                ? ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                    ? ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                        ? 0U : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle))
                                    : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle)
                                        : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail)))
                                : ((2U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                    ? 0U : ((1U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead)
                                             : 0U)))
                            : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q))
                                ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q) 
                                        - (IData)(1U)))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d 
                = (0xffffffU & vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q);
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d 
                = (0xfU & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d 
            = (0xffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en)
                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)
                               ? 0U : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                        ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                        : ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q))
                                            ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv)
                                            : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q) 
                                               - (IData)(1U)))))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)) 
               & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d))))) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 7U;
        } else if ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 2U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 6U;
        } else if ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 4U;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size = 1U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit = 1U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                   << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                              << 1U) 
                                             | (0U 
                                                == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:405: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_fsm.sv", 405, "");
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha) {
        vlSelfRef.__PVT__u_spi_core__DOT__speed = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q) 
               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q) 
               & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing));
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__speed = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha1)
             : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)) 
           & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1)
               : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.cio_sd_o = (0xfU & ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                   ? (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                            >> 7U))
                                   : ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                       ? (3U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                                >> 6U))
                                       : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                                              >> 4U)
                                           : 0U))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : (0xffffffU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                                  ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command)
                                      ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d
                                      : (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                                         - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0)))
                                  : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)));
    if ((3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q))) {
        vlSelfRef.__PVT__sd_en_core = 0U;
    } else {
        vlSelfRef.__PVT__sd_en_core = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                        ? 1U : (0xfU 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                                    ? 
                                                   (3U 
                                                    & (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q))))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                                                     ? 
                                                    (- (IData)((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)))
                                                     : 0U))));
        if (VL_UNLIKELY(((1U & (~ VL_ONEHOT_I((((2U 
                                                 == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                                << 2U) 
                                               | (((1U 
                                                    == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                                   << 1U) 
                                                  | (0U 
                                                     == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)))))))))) {
            if ((0U != (((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                         << 2U) | (((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)) 
                                    << 1U) | (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed)))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: spi_host_fsm.sv:567: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi_host_dma_i.u_spi_core.u_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 2,(IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_fsm.sv", 567, "");
                }
            }
        }
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)
            ? 0U : (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en)
                           ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting)
                               ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__start_bit)
                               : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting)
                                   ? ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q) 
                                      - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__shift_size))
                                   : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)))
                           : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__rd_ready)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d));
    vlSelfRef.cio_sd_en_o = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q)
                              ? (IData)(vlSelfRef.__PVT__sd_en_core)
                              : 0U);
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data) 
           | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data));
    vlSelfRef.__PVT__u_spi_core__DOT__shift_en = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting));
    vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4 
        = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
            & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__rd_en_internal)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__rd_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr = 
        ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wr_en_internal));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d 
        = ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
           & ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4) 
              | ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)) 
                 & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr) 
           | ((~ (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                          >> 8U))) & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_ready) 
            & (1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q))) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clear_data) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d = 0ULL;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q) 
                     + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)));
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d = 4U;
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
                = (((QData)((IData)((((0x20000U & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 3U)) 
                                                   << 0x11U)) 
                                      | (0x1fe00U & 
                                         ((IData)((vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                   >> 0x1cU)) 
                                          << 9U))) 
                                     | ((0x100U & ((IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 2U)) 
                                                   << 8U)) 
                                        | (0xffU & (IData)(
                                                           (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                            >> 0x14U))))))) 
                    << 0x12U) | (QData)((IData)((((0x20000U 
                                                   & ((IData)(
                                                              (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                               >> 1U)) 
                                                      << 0x11U)) 
                                                  | (0x1fe00U 
                                                     & ((IData)(
                                                                (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                                 >> 0xcU)) 
                                                        << 9U))) 
                                                 | ((0x100U 
                                                     & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (IData)(
                                                                 (vlSelfRef.__PVT__u_data_fifos__DOT__core_tx_data_be 
                                                                  >> 4U))))))));
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d 
                = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q) 
                         - (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__pull_data)));
            vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q;
        }
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__1(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi_host_dma_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cio_sd_i = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_3__DOT__pad__strong__out1) 
                            << 3U) | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_2__DOT__pad__strong__out1) 
                                      << 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_1__DOT__pad__strong__out1) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__gr_heep_pad_ring_i__DOT__u_pad_spi_sd_0__DOT__pad__strong__out1)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
            ? (IData)(vlSelfRef.cio_sd_i) : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
            ? ((0xfeU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                         << 1U)) | (1U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits) 
                                          >> 1U))) : 
           ((1U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
             ? ((0xfcU & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                          << 2U)) | (3U & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits)))
             : ((2U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__speed))
                 ? ((0xf0U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q) 
                              << 4U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__next_bits))
                 : 0U)));
    if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d 
            = (((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
                    ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2)
                    : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q)))
                ? (IData)(vlSelfRef.cio_sd_i) : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d 
            = ((IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4)
                ? ((((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                              ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q
                              : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q)) 
                     & (IData)(vlSelfRef.u_spi_core__DOT__u_shift_reg__DOT____VdfgRegularize_h929d5760_0_4)) 
                    << 8U) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted))
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q));
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d 
            = (0xffU & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr))
                         ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted)
                         : ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__shift_en)
                             ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_shifted)
                             : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q))));
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__0(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0 = 0;
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0 = 0;
    CData/*5:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*5:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*0:0*/ __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*0:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*7:0*/ __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0;
    CData/*0:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 0;
    CData/*6:0*/ __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q = 0;
    CData/*1:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0;
    CData/*0:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0;
    CData/*1:0*/ __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = 0;
    // Body
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
        = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q;
    __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
        = vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
    vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_d)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_wr_en_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__full_cyc_q)));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = ((2U 
                                                   & (IData)(__Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q)) 
                                                  | ((1U 
                                                      & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
                                                     || (1U 
                                                         & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid) 
                                                            | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                                                                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q)
                                                                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))))));
    __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q = ((1U 
                                                   & (IData)(__Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q)) 
                                                  | (((1U 
                                                       & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
                                                      || (1U 
                                                          & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)) 
                                                             | ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)
                                                                 ? 
                                                                ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q) 
                                                                 >> 1U)
                                                                 : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_single_d))))) 
                                                     << 1U));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csaat_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
                & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))
                ? (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid)
                : (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csid_q)));
    __Vtableidx10 = (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                      << 3U) | (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) 
                                 << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))));
    if (Vtestharness__ConstPool__TABLE_h529843ad_0[__Vtableidx10]) {
        vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
            = Vtestharness__ConstPool__TABLE_h5a9d24e2_0
            [__Vtableidx10];
    }
    __Vtableidx11 = (((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                      << 3U) | ((((IData)(vlSelfRef.__PVT__core_command_valid) 
                                  & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                                     & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)) 
                                        & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__command_ready_int)))) 
                                 << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                            << 1U) 
                                           | (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))));
    if (Vtestharness__ConstPool__TABLE_h529843ad_0[__Vtableidx11]) {
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = Vtestharness__ConstPool__TABLE_h5a9d24e2_0
            [__Vtableidx11];
    }
    vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxfull__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txempty__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__qe = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__qe = 
        ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
         && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_spi_event__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we));
    vlSelfRef.__PVT__u_reg__DOT__u_control_rx_watermark__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_tx_watermark__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_sw_rst__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_control_spien__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_overflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_underflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_csidinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_rxfull__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_txempty__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_rxwm__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_txwm__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_ready__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csnidle_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csntrail_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_csnlead_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_fullcyc_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_cpha_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_cpol_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csnidle_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csntrail_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_csnlead_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_fullcyc_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_cpha_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_cpol_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we));
    vlSelfRef.__PVT__tx_wm_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data));
    vlSelfRef.__PVT__rx_wm_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data));
    vlSelfRef.__PVT__idle_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                               && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr)) 
               & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr)) 
               & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger)));
    vlSelfRef.__PVT__ready_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q 
        = vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni;
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (0x48U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__tx_empty_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                   && (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth)));
    vlSelfRef.__PVT__rx_full_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                  && (0x40U <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__wr_data));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data));
    vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_d));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (((0U == ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpha)
                         ? vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d
                         : vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d)) 
                & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_ready_sr) 
                   & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr))) 
               | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((~ (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q)) 
               & (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming) 
                   & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q) 
                      >> 8U)) | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill))));
    vlSelfRef.intr_error_o = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                              && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                  & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q)));
    vlSelfRef.intr_spi_event_o = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                  && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                      & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d;
        }
        if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_d;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_d;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail;
        } else {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q;
            __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q;
        }
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting) 
                   | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__shift_en));
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        } else {
            __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
        if (vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst) {
            __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
                = (1U & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)));
        }
        if (vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) {
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
            __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        } else {
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0xffU & ((0x47U == (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x80U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 7U)) 
                                             << 7U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
            if (vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                    = (0x7fU & ((0x3fU == (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                 ? (0x40U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 6U)) 
                                             << 6U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
            }
            if (((IData)(vlSelfRef.__PVT__core_tx_valid) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                    & (IData)(vlSelfRef.__PVT__core_tx_ready)))) {
                __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0xffU & ((0x47U == (0x7fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x80U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 7U)) 
                                             << 7U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
            if (((IData)(vlSelfRef.rx_valid_o) & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
                                                  & (IData)(vlSelfRef.__PVT__rx_ready)))) {
                __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                    = (0x7fU & ((0x3fU == (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                 ? (0x40U & ((~ ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 6U)) 
                                             << 6U))
                                 : ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
            }
        }
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_d;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q 
            = vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_depth;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q 
            = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q 
            = vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_d;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_d;
        if (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_changing) 
             & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command;
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1 
                = vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__stall)))) {
            vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q 
                = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cpol)
                    ? (3U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d))
                    : (3U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_d)));
        }
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
    } else {
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha1_q = 0U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_len_q = 0U;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q2 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sample_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__sample_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csb_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__csb_q;
        __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clkdiv_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnidle_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csnlead_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__csntrail_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__wait_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q = 0U;
        __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
        __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
            = __Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
        vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst 
            = __Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sd_i_q = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q = 0ULL;
        vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__sr_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_shifting_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__sck_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__segment_rd_en_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q 
            = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_rd_en_q;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_ending_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_starting_cpha0_q = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__new_command_cpha1 = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__speed_cpha1 = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q 
        = __Vdly__u_spi_core__DOT__u_fsm__DOT__cmd_speed_q;
    vlSelfRef.u_spi_core__DOT__u_fsm__DOT____VdfgExtracted_h5b8f7692__0 
        = (1U & (~ ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__bit_cntr_q)) 
                    & (0U == vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__byte_cntr_cpha0_q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle 
        = ((0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)) 
           | (7U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__state_q)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        if (((IData)(vlSelfRef.__PVT__error_busy) | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_underflow) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_csid_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_cmd_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_overflow) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data;
        }
        if (((IData)(vlSelfRef.__PVT__error_access_inval) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q 
                    = (0xffffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                  >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                       >> 0x1cU);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q 
                    = (0xfU & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q 
                    = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                               >> 4U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xaU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q 
                    = (0xffffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                  >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q 
                    = (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                       >> 0x1cU);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q 
                    = (0xfU & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U]);
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q 
                    = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                               >> 4U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xaU));
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xeU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xfU));
            vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x10U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q 
                    = (0xffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                >> 0xcU));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q 
                    = (0xffU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                >> 0x14U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 9U));
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q 
                    = (1U & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                             >> 0xbU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xeU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xfU));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x10U));
            vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0x11U));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_csid__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en)
                    ? ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                        << 0x14U) | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                     >> 0xcU)) : 0U);
        }
    } else {
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q = 0x7fU;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_csid__q = 0U;
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host.gen_alert_tx[0].u_prim_alert_sender.i_decode_ack.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl/prim_diff_decode.sv", 115, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)) 
                                << 1U) | (0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: prim_diff_decode.sv:115: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host.gen_alert_tx[0].u_prim_alert_sender.i_decode_ping.gen_async.p_diff_fsm: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/prim/rtl/prim_diff_decode.sv", 115, "");
            }
        }
    }
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q 
            = vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_d;
        if (vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                      >> 0xaU));
        }
        if (((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xcU));
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en) 
                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                      >> 0xdU));
        }
        if (((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event) 
             | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__wr_data;
        }
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q = 0U;
    }
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
        = (0xfffffffffULL & VL_SHIFTR_QQI(36,36,32, vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__data_q, 
                                          ((IData)(9U) 
                                           * (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__ptr_q))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
    vlSelfRef.__PVT__sw_error_status = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                           << 4U) | 
                                          ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                           << 3U))) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                            << 2U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                               << 1U) 
                                              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q))));
    vlSelfRef.__VdfgRegularize_h495687df_0_104 = ((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                    << 4U) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                                         << 2U))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                      << 1U) 
                                                     | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q)));
    vlSelfRef.__PVT__event_mask = ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q) 
                                     << 5U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                << 4U) 
                                               | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                  << 3U))) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                       << 2U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q))));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
           & (4U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__core_rx_valid = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q)) 
                                      & (4U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__gen_multiple_devices__DOT__csid 
        = ((2U > vlSelfRef.u_reg__DOT____Vcellout__u_csid__q) 
           & vlSelfRef.u_reg__DOT____Vcellout__u_csid__q);
    vlSelfRef.__PVT__core_tx_ready = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid 
        = ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__clr_q)) 
           & (0U != (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__depth_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en 
        = ((~ (0U != (IData)(vlSelfRef.__PVT__sw_error_status))) 
           & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill 
        = ((~ (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__last_q));
    vlSelfRef.__PVT__u_spi_core__DOT__tx_valid_sr = 
        ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__byte_valid) 
         & (IData)((vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__gen_unpack_mode__DOT__rdata_shifted 
                    >> 8U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (1U & (IData)(vlSelfRef.__PVT__alert_rx_i)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 1U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_n__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((1U & (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni))) 
           || (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 2U)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_nd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) 
           ^ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pq));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__i_sync_p__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (1U & ((IData)(vlSelfRef.__PVT__alert_rx_i) 
                     >> 3U)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__fsm_en 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_en) 
           & (0U == (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__clk_cntr_q)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data 
        = (((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill) 
            | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming 
        = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q) 
           & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)) 
              & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_ready)));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
           & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_p_edge) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_q;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_p_edge) 
           & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_n_edge));
    vlSelfRef.__PVT__u_spi_core__DOT__rd_ready = (1U 
                                                  & ((~ (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_valid_q)) 
                                                     | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__byte_incoming)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd;
            if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h2479cf0d__0) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 1U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d 
                = ((IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT____VdfgExtracted_h24a09870__0)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__fall_o = 1U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_pd) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__rise_o = 1U;
            }
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 0U;
        } else {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 1U;
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint = 0U;
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd;
            if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h2479cf0d__0) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 1U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 1U;
                }
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d 
                = ((IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0)
                    ? 1U : 2U);
            if ((1U & (~ (IData)(gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT____VdfgExtracted_h24a09870__0)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
            }
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__level_d 
                = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o = 1U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_pd) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o = 1U;
            }
        } else {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 2U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
        }
    } else if ((2U == (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_q))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 1U;
        if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__diff_check_ok) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__gen_async__DOT__state_d = 0U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint = 0U;
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ack_sigint) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_sigint));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger 
        = (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__fall_o) 
            | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ping__DOT__rise_o)) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_set_q));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) 
         & (5U != (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_clr = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_clr = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__2(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__Vdly__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
        = vlSelfRef.__Vdly__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x80U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (0x40U ^ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni)
            ? vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d
            : 0U);
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
           == (4U ^ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty 
        = ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
           == (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr));
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth = 
        ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)
          ? 0x48U : (0x7fU & (((1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      >> 7U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 7U)))
                               ? ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                  - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))
                               : (((IData)(0x48U) - (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)) 
                                  + (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))));
    vlSelfRef.tx_ready_o = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__full_o)) 
                                  & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__core_rx_ready = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth = 
        ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__full_o)
          ? 0x40U : (0x7fU & (((1U & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                      >> 6U)) == (1U 
                                                  & ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 6U)))
                               ? ((0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                                  - (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                               : (((IData)(0x40U) - 
                                   (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                                  + (0x3fU & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_depth = 
        ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)
          ? 4U : (7U & (((1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                >> 2U)) == (1U & ((IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                  >> 2U)))
                         ? ((3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr)) 
                            - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                         : (((IData)(4U) - (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_rptr))) 
                            + (3U & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_wptr))))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__full_o)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth) 
           < (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__core_rx_valid) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__core_rx_ready)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_data 
        = (((IData)(vlSelfRef.__PVT__core_rx_ready) 
            & (IData)(vlSelfRef.__PVT__core_rx_valid)) 
           | (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clr_q));
    vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data 
        = ((IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth) 
           >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q));
    vlSelfRef.rx_valid_o = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                  & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_rx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    if (vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__clear_data) {
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d = 0U;
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d = 0U;
    } else {
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_d 
            = (7U & ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q) 
                     + (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)));
        vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_d 
            = ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__load_data)
                ? (vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q 
                   | VL_SHIFTL_III(32,32,32, ((IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__do_fill)
                                               ? 0U
                                               : (0xffU 
                                                  & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_shift_reg__DOT__rx_buf_q))), 
                                   VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__depth_q), 3U)))
                : vlSelfRef.__PVT__u_spi_core__DOT__u_merge__DOT__u_packer__DOT__data_q);
    }
}

VL_INLINE_OPT void Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__3(Vtestharness_spi_host__Tz2_TBz3* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_spi_host__Tz2_TBz3___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__spi2_host__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_he70b63c2_0_2;
    __VdfgRegularize_he70b63c2_0_2 = 0;
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h8798bec5_0_15;
    u_reg__DOT____VdfgRegularize_h8798bec5_0_15 = 0;
    VlWide<3>/*69:0*/ u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0;
    VL_ZERO_W(70, u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0);
    CData/*0:0*/ gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0;
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__reg_steer = (((0x2cU 
                                                <= 
                                                (0x3fU 
                                                 & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                     << 2U) 
                                                    | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                       >> 0x1eU)))) 
                                               & (0x30U 
                                                  > 
                                                  (0x3fU 
                                                   & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                       << 2U) 
                                                      | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                         >> 0x1eU)))))
                                               ? 1U
                                               : ((
                                                   (0x28U 
                                                    <= 
                                                    (0x3fU 
                                                     & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                         << 2U) 
                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                           >> 0x1eU)))) 
                                                   & (0x2cU 
                                                      > 
                                                      (0x3fU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                                                           << 2U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                                                             >> 0x1eU)))))
                                                   ? 0U
                                                   : 2U));
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[0U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[1U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] = 0U;
    vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] = 0U;
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[0U] 
        = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
            << 2U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                      >> 0x1eU));
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[1U] 
        = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
            << 2U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xbU] 
                      >> 0x1eU));
    u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0[2U] 
        = (0x3fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xdU] 
                     << 2U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xcU] 
                               >> 0x1eU)));
    if ((0xd1U >= (0xffU & ((IData)(0x46U) * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))))) {
        VL_ASSIGNSEL_WW(210, 70, (0xffU & ((IData)(0x46U) 
                                           * (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_steer))), vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o, u_reg__DOT__i_reg_demux__DOT____Vlvbound_hc5e17312__0);
    }
    if ((1U & (~ VL_ONEHOT_I(((((((0x38U == (0x3fU 
                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                >> 0xcU))) 
                                  << 0xcU) | ((0x34U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 0xbU)) 
                                | (((0x30U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 0xaU) | ((0x24U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 9U))) 
                               | (((0x20U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                   << 8U) | (((0x1cU 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 7U) 
                                             | ((0x18U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 6U)))) 
                              | ((((0x14U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                   << 5U) | (((0x10U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 4U) 
                                             | ((0xcU 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 3U))) 
                                 | (((8U == (0x3fU 
                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                >> 0xcU))) 
                                     << 2U) | (((4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                << 1U) 
                                               | (0U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))))))))))) {
        if ((0U != ((((((0x38U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                            >> 0xcU))) 
                        << 0xcU) | ((0x34U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 0xbU)) | (((0x30U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU))) 
                                                  << 0xaU) 
                                                 | ((0x24U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU))) 
                                                    << 9U))) 
                     | (((0x20U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             >> 0xcU))) 
                         << 8U) | (((0x1cU == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 7U) | ((0x18U 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 6U)))) 
                    | ((((0x14U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             >> 0xcU))) 
                         << 5U) | (((0x10U == (0x3fU 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  >> 0xcU))) 
                                    << 4U) | ((0xcU 
                                               == (0x3fU 
                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                      >> 0xcU))) 
                                              << 3U))) 
                       | (((8U == (0x3fU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                            >> 0xcU))) 
                           << 2U) | (((4U == (0x3fU 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 >> 0xcU))) 
                                      << 1U) | (0U 
                                                == 
                                                (0x3fU 
                                                 & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                    >> 0xcU))))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host_reg_top.sv:2005: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host_reg_top.sv", 2005, "");
            }
        }
    }
    vlSelfRef.__PVT__u_data_fifos__DOT__tx_data_be 
        = (((QData)((IData)(((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[3U] 
                              << 0x1aU) | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U] 
                                           >> 6U)))) 
            << 4U) | (QData)((IData)((0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                              >> 6U)))));
    vlSelfRef.__PVT__rx_ready = (IData)((0x20U == (0x30U 
                                                   & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[2U])));
    __Vtableidx9 = (0xfU & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                            >> 6U));
    vlSelfRef.__PVT__access_valid = Vtestharness__ConstPool__TABLE_h702da64f_0
        [__Vtableidx9];
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata = ((((0U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                     >> 0xcU))) 
                                                | (4U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))) 
                                               | (((8U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU))) 
                                                   | (0xcU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))) 
                                                  | ((0x10U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU))) 
                                                     | ((0x14U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU))) 
                                                        | ((0x18U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 0xcU))) 
                                                           | (0x1cU 
                                                              == 
                                                              (0x3fU 
                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                  >> 0xcU))))))))
                                               ? ((0U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))
                                                   ? 
                                                  (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU)))
                                                    ? 
                                                   (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q))
                                                    : 
                                                   ((8U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU)))
                                                     ? 0U
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))
                                                      ? 0U
                                                      : 
                                                     ((0x10U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                           >> 0xcU)))
                                                       ? 
                                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                                        << 0x1fU) 
                                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                                           << 0x1eU) 
                                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                                              << 0x1dU) 
                                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                                                 << 8U) 
                                                                | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q)))))
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                            >> 0xcU)))
                                                        ? 
                                                       (((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__q) 
                                                           << 0x1fU) 
                                                          | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_active__DOT__q) 
                                                              << 0x1eU) 
                                                             | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txfull__DOT__q) 
                                                                << 0x1dU))) 
                                                         | (((IData)(vlSelfRef.__PVT__tx_empty_q) 
                                                             << 0x1cU) 
                                                            | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txstall__DOT__q) 
                                                               << 0x1bU))) 
                                                        | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__q) 
                                                             << 0x1aU) 
                                                            | (((IData)(vlSelfRef.__PVT__rx_full_q) 
                                                                << 0x19U) 
                                                               | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxempty__DOT__q) 
                                                                  << 0x18U))) 
                                                           | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxstall__DOT__q) 
                                                               << 0x17U) 
                                                              | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_byteorder__DOT__q) 
                                                                  << 0x16U) 
                                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__q) 
                                                                      << 0x14U) 
                                                                     | ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_cmdqd__DOT__q) 
                                                                        << 0x10U)) 
                                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxqd__DOT__q) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txqd__DOT__q)))))))
                                                        : 
                                                       ((0x18U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU)))
                                                         ? 
                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q) 
                                                                << 0x1dU) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q)))))))
                                                         : 
                                                        (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q) 
                                                          << 0x1fU) 
                                                         | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q) 
                                                                << 0x1dU) 
                                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q) 
                                                                      << 0x14U) 
                                                                     | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q) 
                                                                         << 0x10U) 
                                                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q))))))))))))))
                                               : ((0x20U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU)))
                                                   ? vlSelfRef.u_reg__DOT____Vcellout__u_csid__q
                                                   : 
                                                  ((0x24U 
                                                    == 
                                                    (0x3fU 
                                                     & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                        >> 0xcU)))
                                                    ? 0U
                                                    : 
                                                   ((0x30U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         >> 0xcU)))
                                                     ? (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_104)
                                                     : 
                                                    ((0x34U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU)))
                                                      ? (IData)(vlSelfRef.__PVT__sw_error_status)
                                                      : 
                                                     ((0x38U 
                                                       == 
                                                       (0x3fU 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                           >> 0xcU)))
                                                       ? (IData)(vlSelfRef.__PVT__event_mask)
                                                       : 0xffffffffU))))));
    vlSelfRef.__PVT__tx_valid = (IData)((0xc00U == 
                                         (0xc00U & 
                                          vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U])));
    vlSelfRef.__PVT__u_reg__DOT__reg_we = (IData)((0x30000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U])));
    vlSelfRef.__PVT__error_underflow = ((~ (IData)(vlSelfRef.rx_valid_o)) 
                                        & (IData)(vlSelfRef.__PVT__rx_ready));
    vlSelfRef.__PVT__error_overflow = ((~ (IData)(vlSelfRef.tx_ready_o)) 
                                       & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__error_access_inval = ((~ (IData)(vlSelfRef.__PVT__access_valid)) 
                                           & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we) 
                                           & ((IData)(
                                                      ((0U 
                                                        == 
                                                        (0x3f000U 
                                                         & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                       & (0U 
                                                          != 
                                                          (1U 
                                                           & (~ 
                                                              ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                << 0x14U) 
                                                               | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                  >> 0xcU))))))) 
                                              | ((IData)(
                                                         ((0x4000U 
                                                           == 
                                                           (0x3f000U 
                                                            & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                          & (0U 
                                                             != 
                                                             (1U 
                                                              & (~ 
                                                                 ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                     >> 0xcU))))))) 
                                                 | ((IData)(
                                                            ((0x8000U 
                                                              == 
                                                              (0x3f000U 
                                                               & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                             & (0U 
                                                                != 
                                                                (1U 
                                                                 & (~ 
                                                                    ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                      << 0x14U) 
                                                                     | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                        >> 0xcU))))))) 
                                                    | ((IData)(
                                                               ((0xc000U 
                                                                 == 
                                                                 (0x3f000U 
                                                                  & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                & (0U 
                                                                   != 
                                                                   (1U 
                                                                    & (~ 
                                                                       ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                         << 0x14U) 
                                                                        | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                           >> 0xcU))))))) 
                                                       | ((IData)(
                                                                  ((0x10000U 
                                                                    == 
                                                                    (0x3f000U 
                                                                     & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (~ 
                                                                          ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                            << 0x14U) 
                                                                           | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                              >> 0xcU))))))) 
                                                          | ((IData)(
                                                                     ((0x14000U 
                                                                       == 
                                                                       (0x3f000U 
                                                                        & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                      & (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (~ 
                                                                             ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                               << 0x14U) 
                                                                              | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                             | ((IData)(
                                                                        ((0x18000U 
                                                                          == 
                                                                          (0x3f000U 
                                                                           & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                         & (0U 
                                                                            != 
                                                                            (0xfU 
                                                                             & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                | ((IData)(
                                                                           ((0x1c000U 
                                                                             == 
                                                                             (0x3f000U 
                                                                              & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                            & (0U 
                                                                               != 
                                                                               (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                   | ((IData)(
                                                                              ((0x20000U 
                                                                                == 
                                                                                (0x3f000U 
                                                                                & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                               & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                      | ((IData)(
                                                                                ((0x24000U 
                                                                                == 
                                                                                (0x3f000U 
                                                                                & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))))) 
                                                                         | ((0U 
                                                                             != 
                                                                             (1U 
                                                                              & (~ 
                                                                                ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U] 
                                                                                >> 0xcU))))) 
                                                                            & ((0x30U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                               | ((0x34U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | (0x38U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU)))))))))))))))));
    vlSelfRef.__PVT__tx_valid_checked = ((~ ((IData)(vlSelfRef.__PVT__error_overflow) 
                                             | (IData)(vlSelfRef.__PVT__error_access_inval))) 
                                         & (IData)(vlSelfRef.__PVT__tx_valid));
    vlSelfRef.__PVT__u_reg__DOT__reg_error = (1U & 
                                              (((~ 
                                                 ((0x38U 
                                                   == 
                                                   (0x3fU 
                                                    & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                       >> 0xcU))) 
                                                  | ((0x34U 
                                                      == 
                                                      (0x3fU 
                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                          >> 0xcU))) 
                                                     | ((0x30U 
                                                         == 
                                                         (0x3fU 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                             >> 0xcU))) 
                                                        | ((0x24U 
                                                            == 
                                                            (0x3fU 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 0xcU))) 
                                                           | ((0x20U 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                   >> 0xcU))) 
                                                              | ((0x1cU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                      >> 0xcU))) 
                                                                 | ((0x18U 
                                                                     == 
                                                                     (0x3fU 
                                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                         >> 0xcU))) 
                                                                    | ((0x14U 
                                                                        == 
                                                                        (0x3fU 
                                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                            >> 0xcU))) 
                                                                       | ((0x10U 
                                                                           == 
                                                                           (0x3fU 
                                                                            & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                               >> 0xcU))) 
                                                                          | ((0xcU 
                                                                              == 
                                                                              (0x3fU 
                                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                             | ((8U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU))) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x3fU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                >> 0xcU)))))))))))))))) 
                                                & ((IData)(
                                                           (0x20000U 
                                                            == 
                                                            (0x30000U 
                                                             & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[6U]))) 
                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we))) 
                                               | (IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((IData)(vlSelfRef.__PVT__tx_valid_checked) 
           & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.tx_ready_o)));
    vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (IData)(vlSelfRef.__PVT__tx_valid_checked)) 
           & (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    u_reg__DOT____VdfgRegularize_h8798bec5_0_15 = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we));
    vlSelfRef.__PVT__core_tx_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__u_tx_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable_error__DOT__wr_en 
        = (IData)(((0x4000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_control_output_en__DOT__wr_en 
        = (IData)(((0x10000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_0_clkdiv_0__DOT__wr_en 
        = (IData)(((0x18000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_configopts_1_clkdiv_1__DOT__wr_en 
        = (IData)(((0x1c000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_csid__DOT__wr_en 
        = (IData)(((0x20000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_enable_cmdbusy__DOT__wr_en 
        = (IData)(((0x30000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__u_event_enable_idle__DOT__wr_en 
        = (IData)(((0x38000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we 
        = (IData)(((0U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we 
        = (IData)(((0x34000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we 
        = (IData)(((0x8000U == (0x3f000U & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__alert_test_we = (IData)(
                                                         ((0xc000U 
                                                           == 
                                                           (0x3f000U 
                                                            & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                          & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_reg__DOT__command_len_we = (IData)(
                                                          ((0x24000U 
                                                            == 
                                                            (0x3f000U 
                                                             & vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U])) 
                                                           & (IData)(u_reg__DOT____VdfgRegularize_h8798bec5_0_15)));
    vlSelfRef.__PVT__u_spi_core__DOT__u_select__DOT__u_packer__DOT__load_data 
        = ((IData)(vlSelfRef.__PVT__core_tx_valid) 
           & (IData)(vlSelfRef.__PVT__core_tx_ready));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_overflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_overflow) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_underflow__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xeU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_underflow) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q)));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_accessinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0x11U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_access_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q)));
    vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we)) 
           | (0U != ((((((~ (IData)(vlSelfRef.__PVT__idle_q)) 
                         & (IData)(vlSelfRef.__PVT__u_spi_core__DOT__u_fsm__DOT__is_idle)) 
                        << 5U) | ((((~ (IData)(vlSelfRef.__PVT__ready_q)) 
                                    & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)) 
                                   << 4U) | (((~ (IData)(vlSelfRef.__PVT__tx_wm_q)) 
                                              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_txwm__DOT__wr_data)) 
                                             << 3U))) 
                      | ((((~ (IData)(vlSelfRef.__PVT__rx_wm_q)) 
                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_rxwm__DOT__wr_data)) 
                          << 2U) | ((((~ (IData)(vlSelfRef.__PVT__tx_empty_q)) 
                                      & (0U == (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__tx_depth))) 
                                     << 1U) | ((~ (IData)(vlSelfRef.__PVT__rx_full_q)) 
                                               & (0x40U 
                                                  <= (IData)(vlSelfRef.__PVT__u_data_fifos__DOT__rx_depth)))))) 
                     & (IData)(vlSelfRef.__PVT__event_mask))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__alert_test_we)) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_set_q));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr 
        = ((0U != (0xfU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
           & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst)) 
              & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)));
    vlSelfRef.__PVT__error_busy = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data)) 
                                   & (0U != (0xfU & 
                                             (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))));
    __VdfgRegularize_he70b63c2_0_2 = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_status_ready__DOT__wr_data) 
                                      & (0U != (0xfU 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0xfe000000U & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | (((((0x1000000U 
                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                             << 0x14U)) 
                                         | (((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                             << 0x17U) 
                                            | (0x600000U 
                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                  << 0x10U)))) 
                                        | (((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                            << 0x14U) 
                                           | (0xc0000U 
                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                 << 0xbU)))) 
                                       | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we) 
                                            << 0x11U) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdbusy__q) 
                                               << 0x10U) 
                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_overflow__q) 
                                                 << 0xfU))) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_underflow__q) 
                                              << 0xeU) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_cmdinval__q) 
                                                 << 0xdU) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_enable_csidinval__q) 
                                                   << 0xcU))))) 
                                      | (((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q) 
                                            << 0xbU) 
                                           | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_overflow__q) 
                                               << 0xaU) 
                                              | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_underflow__q) 
                                                 << 9U))) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q) 
                                              << 8U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q) 
                                                 << 7U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_accessinval__q) 
                                                   << 6U)))) 
                                         | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxfull__q) 
                                              << 5U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txempty__q) 
                                                 << 4U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_rxwm__q) 
                                                   << 3U))) 
                                            | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_txwm__q) 
                                                << 2U) 
                                               | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_ready__q) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_event_enable_idle__q)))))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0x1ffffffU & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                << 0x19U) 
                                               | (QData)((IData)(
                                                                 ((0x1fffffeU 
                                                                   & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                       << 0x15U) 
                                                                      | (0x1ffffeU 
                                                                         & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                            >> 0xbU)))) 
                                                                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
                                      << 0x19U));
    vlSelfRef.__PVT__reg2hw[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                              << 0x19U) 
                                             | (QData)((IData)(
                                                               ((0x1fffffeU 
                                                                 & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                     << 0x15U) 
                                                                    | (0x1ffffeU 
                                                                       & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                          >> 0xbU)))) 
                                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
                                    >> 7U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                         << 0x19U) 
                                                        | (QData)((IData)(
                                                                          ((0x1fffffeU 
                                                                            & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                                << 0x15U) 
                                                                               | (0x1ffffeU 
                                                                                & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                                >> 0xbU)))) 
                                                                           | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
                                                       >> 0x20U)) 
                                              << 0x19U));
    vlSelfRef.__PVT__reg2hw[2U] = ((0xfffc0000U & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_csid__q)) 
                                                 << 0x19U) 
                                                | (QData)((IData)(
                                                                  ((0x1fffffeU 
                                                                    & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                        << 0x15U) 
                                                                       | (0x1ffffeU 
                                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                             >> 0xbU)))) 
                                                                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we))))) 
                                               >> 0x20U)) 
                                      >> 7U));
    vlSelfRef.__PVT__reg2hw[2U] = ((0xfe03ffffU & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | (0xfffc0000U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnlead_0__q) 
                                        << 0x15U) | 
                                       (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_fullcyc_0__q) 
                                         << 0x14U) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpha_0__q) 
                                            << 0x13U) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_cpol_0__q) 
                                              << 0x12U))))));
    vlSelfRef.__PVT__reg2hw[2U] = ((0x1ffffffU & vlSelfRef.__PVT__reg2hw[2U]) 
                                   | (0xfe000000U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                        << 0x1dU) | 
                                       ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                        << 0x19U))));
    vlSelfRef.__PVT__reg2hw[3U] = ((0xfffe0000U & vlSelfRef.__PVT__reg2hw[3U]) 
                                   | (0x1ffffffU & 
                                      ((0x1fffffeU 
                                        & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_clkdiv_0__q) 
                                           << 1U)) 
                                       | ((0x1ffffffU 
                                           & ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csnidle_0__q) 
                                              >> 3U)) 
                                          | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_0_csntrail_0__q) 
                                             >> 7U)))));
    vlSelfRef.__PVT__reg2hw[3U] = ((0x1ffffU & vlSelfRef.__PVT__reg2hw[3U]) 
                                   | (0xfffe0000U & 
                                      ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnidle_1__q) 
                                         << 0x1cU) 
                                        | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csntrail_1__q) 
                                           << 0x18U)) 
                                       | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_csnlead_1__q) 
                                           << 0x14U) 
                                          | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_fullcyc_1__q) 
                                              << 0x13U) 
                                             | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpha_1__q) 
                                                 << 0x12U) 
                                                | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_cpol_1__q) 
                                                   << 0x11U)))))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xf8000000U & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_tx_watermark__q) 
                                       << 0x13U) | 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_output_en__q) 
                                        << 0x12U) | 
                                       (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_sw_rst__q) 
                                         << 0x11U) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_spien__q) 
                                            << 0x10U) 
                                           | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_configopts_1_clkdiv_1__q))))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x7ffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                      << 0x1bU));
    vlSelfRef.__PVT__reg2hw[5U] = ((0x1ff0U & vlSelfRef.__PVT__reg2hw[5U]) 
                                   | (0x1fffU & ((0x7fffff8U 
                                                  & ((IData)(vlSelfRef.__PVT__u_reg__DOT__alert_test_we) 
                                                     << 3U)) 
                                                 | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_control_rx_watermark__q) 
                                                    >> 5U))));
    vlSelfRef.__PVT__reg2hw[5U] = ((0xfU & vlSelfRef.__PVT__reg2hw[5U]) 
                                   | (0x1ff0U & (((
                                                   ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q) 
                                                       << 0xbU) 
                                                      | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_error__q) 
                                                         << 0xaU))) 
                                                  | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable_spi_event__q) 
                                                      << 9U) 
                                                     | (0x100U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                           >> 4U)))) 
                                                 | ((((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we) 
                                                      << 7U) 
                                                     | (0x40U 
                                                        & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                           >> 7U))) 
                                                    | (((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we) 
                                                        << 5U) 
                                                       | (0x10U 
                                                          & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                             >> 8U)))))));
    vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty 
        = ((~ (0U != (0xfU & (- (IData)((IData)(vlSelfRef.__PVT__u_reg__DOT__command_len_we)))))) 
           & (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__fifo_empty));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_spi_event__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xdU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) 
           & ((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event)
               ? ((IData)(vlSelfRef.__PVT__intr_hw_spi_event__DOT__new_event) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_spi_event__q)));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_set_q) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_test_trigger));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdbusy__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_busy) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdbusy__q)));
    vlSelfRef.__PVT__error_csid_inval = ((IData)(__VdfgRegularize_he70b63c2_0_2) 
                                         & (2U <= vlSelfRef.u_reg__DOT____Vcellout__u_csid__q));
    if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                             >> 0x15U))) 
                               << 2U) | (((1U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x15U))) 
                                          << 1U) | 
                                         (0U == (3U 
                                                 & (vlSelfRef.__PVT__reg2hw[0U] 
                                                    >> 0x15U))))))))) {
        if ((0U != (((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                   >> 0x15U))) << 2U) 
                    | (((1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                      >> 0x15U))) << 1U) 
                       | (0U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                       >> 0x15U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:194: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                    >> 0x15U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host.sv", 194, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((3U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                             >> 0x12U))) 
                               << 2U) | (((2U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x12U))) 
                                          << 1U) | 
                                         (1U == (3U 
                                                 & (vlSelfRef.__PVT__reg2hw[0U] 
                                                    >> 0x12U))))))))) {
        if ((0U != (((3U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                   >> 0x12U))) << 2U) 
                    | (((2U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                      >> 0x12U))) << 1U) 
                       | (1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                       >> 0x12U))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: spi_host.sv:211: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.spi2_host: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                                    >> 0x12U)));
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan_spi_host/rtl/spi_host.sv", 211, "");
            }
        }
    }
    vlSelfRef.__PVT__test_dir_inval = 1U;
    vlSelfRef.__PVT__test_speed_inval = 1U;
    if ((0U == (3U & (vlSelfRef.__PVT__reg2hw[0U] >> 0x15U)))) {
        vlSelfRef.__PVT__test_dir_inval = 0U;
        vlSelfRef.__PVT__test_speed_inval = 0U;
    } else if (((1U == (3U & (vlSelfRef.__PVT__reg2hw[0U] 
                              >> 0x15U))) || (2U == 
                                              (3U & 
                                               (vlSelfRef.__PVT__reg2hw[0U] 
                                                >> 0x15U))))) {
        vlSelfRef.__PVT__test_dir_inval = (3U == (3U 
                                                  & (vlSelfRef.__PVT__reg2hw[0U] 
                                                     >> 0x12U)));
        vlSelfRef.__PVT__test_speed_inval = 0U;
    }
    vlSelfRef.__PVT__configopts = (0x7fffffffU & ((0xacU 
                                                   >= 
                                                   ((IData)(0x52U) 
                                                    + 
                                                    (0x3fU 
                                                     & ((IData)(0x1fU) 
                                                        * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x52U) 
                                                         + 
                                                         (0x3fU 
                                                          & ((IData)(0x1fU) 
                                                             * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.__PVT__reg2hw[
                                                     (((IData)(0x70U) 
                                                       + 
                                                       (0x3fU 
                                                        & ((IData)(0x1fU) 
                                                           * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x52U) 
                                                          + 
                                                          (0x3fU 
                                                           & ((IData)(0x1fU) 
                                                              * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))))) 
                                                   | (vlSelfRef.__PVT__reg2hw[
                                                      (((IData)(0x52U) 
                                                        + 
                                                        (0x3fU 
                                                         & ((IData)(0x1fU) 
                                                            * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x52U) 
                                                          + 
                                                          (0x3fU 
                                                           & ((IData)(0x1fU) 
                                                              * (IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid)))))))
                                                   : vlSelfRef.__Vxrand___0));
    vlSelfRef.__PVT__core_command_valid = (1U & ((~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__empty)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__u_cmd_queue__DOT__cmd_fifo__DOT__gen_normal_fifo__DOT__under_rst))));
    gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0 
        = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger) 
           | (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__ping_trigger));
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_csidinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0x10U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_csid_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_csidinval__q)));
    vlSelfRef.__PVT__error_cmd_inval = ((IData)(__VdfgRegularize_he70b63c2_0_2) 
                                        & ((IData)(vlSelfRef.__PVT__test_dir_inval) 
                                           | (IData)(vlSelfRef.__PVT__test_speed_inval)));
    vlSelfRef.__PVT__command = (((QData)((IData)((((IData)(vlSelfRef.__PVT__gen_multiple_devices__DOT__csid) 
                                                   << 0x1cU) 
                                                  | ((0xc000000U 
                                                      & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                         << 0x15U)) 
                                                     | ((((1U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                               >> 7U)))
                                                           ? 1U
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (3U 
                                                             & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                >> 7U)))
                                                            ? 2U
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (3U 
                                                              & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                 >> 7U)))
                                                             ? 3U
                                                             : 0U))) 
                                                         << 0x18U) 
                                                        | (0xffffffU 
                                                           & ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                               << 0x14U) 
                                                              | (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                                                                 >> 0xcU)))))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((0x80000000U 
                                                               & (vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[5U] 
                                                                  << 0x1bU)) 
                                                              | ((0x7ffff800U 
                                                                  & vlSelfRef.__PVT__configopts) 
                                                                 | ((0x780U 
                                                                     & (vlSelfRef.__PVT__configopts 
                                                                        << 4U)) 
                                                                    | ((0x78U 
                                                                        & (vlSelfRef.__PVT__configopts 
                                                                           >> 4U)) 
                                                                       | (7U 
                                                                          & vlSelfRef.__PVT__configopts))))))));
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 0U;
    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
        = vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
                = ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))
                    ? 0U : 7U);
        } else if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 0U;
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 5U;
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 6U;
        }
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 1U;
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq)));
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_pq)));
                }
            }
        }
    } else {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 1U;
        if ((2U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
                }
                if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d) {
                    vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 4U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 6U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d)))) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
            }
            if (vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__i_decode_ack__DOT__level_d) {
                vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 2U;
            }
        } else if (gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT____VdfgExtracted_hf57d9aa0__0) {
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 1U;
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d 
                = ((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_trigger)
                    ? 1U : 3U);
            vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
        }
    }
    if (((IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__sigint_detected) 
         & (5U != (IData)(vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_q)))) {
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_p = 0U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__state_d = 5U;
        vlSelfRef.__PVT__gen_alert_tx__BRA__0__KET____DOT__u_prim_alert_sender__DOT__alert_n = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_error_status_cmdinval__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xfU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__error_status_cmdbusy_we))) 
           & ((IData)(vlSelfRef.__PVT__error_cmd_inval) 
              | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_error_status_cmdinval__q)));
    vlSelfRef.__PVT__intr_hw_error__DOT__new_event 
        = (((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
             >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test_error_we)) 
           | (0U != (((((IData)(vlSelfRef.__PVT__error_access_inval) 
                        << 5U) | (((IData)(vlSelfRef.__PVT__error_csid_inval) 
                                   << 4U) | ((IData)(vlSelfRef.__PVT__error_cmd_inval) 
                                             << 3U))) 
                      | (((IData)(vlSelfRef.__PVT__error_underflow) 
                          << 2U) | (((IData)(vlSelfRef.__PVT__error_overflow) 
                                     << 1U) | (IData)(vlSelfRef.__PVT__error_busy)))) 
                     & (0x20U | (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_104)))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state_error__DOT__wr_data 
        = ((~ ((vlSelfRef.u_reg__DOT____Vcellout__i_reg_demux__out_req_o[4U] 
                >> 0xcU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state_error_we))) 
           & ((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event)
               ? ((IData)(vlSelfRef.__PVT__intr_hw_error__DOT__new_event) 
                  | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q))
               : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state_error__q)));
}
