// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rv_timer.h"

VL_INLINE_OPT void Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i__0(Vtestharness_rv_timer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding;
    __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 0;
    // Body
    __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding 
        = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding;
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_lower0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we));
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_upper0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_lower1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we));
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_upper1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg0_step__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg1_step__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state0_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state1_we));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en));
    vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
           && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q) 
               & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q)));
    vlSelfRef.__PVT__intr_out__BRA__0__KET__ = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) 
                                                && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q) 
                                                    & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__gpio_ao_i.rst_ni) {
        if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                     | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & ((vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                             << 6U) | (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[2U] 
                                       >> 0x1aU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                         >> 2U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding) {
            __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
        }
        vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count 
            = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q)
                ? (((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count) 
                    == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q))
                    ? 0U : (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count))))
                : 0U);
        vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count 
            = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q)
                ? (((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count) 
                    == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q))
                    ? 0U : (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count))))
                : 0U);
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q 
                    = (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                 << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                           >> 0x1aU)));
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q 
                    = (0xfffU & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                 >> 0xaU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q 
                    = (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                 << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                           >> 0x1aU)));
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q 
                    = (0xfffU & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                 >> 0xaU));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q = 0U;
            }
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[3U] >> 7U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : ((
                                                   vlSelfRef.__PVT__hw2reg[4U] 
                                                   << 0x18U) 
                                                  | (vlSelfRef.__PVT__hw2reg[3U] 
                                                     >> 8U)));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[2U] >> 6U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : ((
                                                   vlSelfRef.__PVT__hw2reg[3U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.__PVT__hw2reg[2U] 
                                                     >> 7U)));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[1U] >> 3U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : ((
                                                   vlSelfRef.__PVT__hw2reg[2U] 
                                                   << 0x1cU) 
                                                  | (vlSelfRef.__PVT__hw2reg[1U] 
                                                     >> 4U)));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[0U] >> 2U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                        << 0x16U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                     >> 0xaU)) : ((
                                                   vlSelfRef.__PVT__hw2reg[1U] 
                                                   << 0x1dU) 
                                                  | (vlSelfRef.__PVT__hw2reg[0U] 
                                                     >> 3U)));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                      >> 0xaU));
            vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                      >> 0xbU));
        }
        if ((1U & (vlSelfRef.__PVT__hw2reg[0U] | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state1_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state1__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                      >> 0xaU));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[2U] >> 4U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state0_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state0__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                      >> 0xaU));
        }
    } else {
        __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
        vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count = 0U;
        vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding 
        = __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding;
    vlSelfRef.__PVT__step[0U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q;
    vlSelfRef.__PVT__step[1U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q;
    vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime 
        = (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)));
    vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime 
        = (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)));
    vlSelfRef.__PVT__mtime[0U] = vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime;
    vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
        = (vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime 
           + (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q)));
    vlSelfRef.__PVT__mtime[1U] = vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime;
    vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
        = (vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime 
           + (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q)));
    vlSelfRef.__PVT__prescaler[0U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q;
    vlSelfRef.__PVT__tick__BRA__0__KET__ = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q) 
                                            & ((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count) 
                                               >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q)));
    vlSelfRef.__PVT__prescaler[1U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q;
    vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
           & ((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count) 
              >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q)));
    vlSelfRef.__PVT__mtime_d[0U] = vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d;
    vlSelfRef.__PVT__mtime_d[1U] = vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d;
    vlSelfRef.__PVT__hw2reg[2U] = ((0x3fU & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
                                                                    >> 0x20U))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__))))) 
                                      << 6U));
    vlSelfRef.__PVT__hw2reg[3U] = ((0xffffff00U & vlSelfRef.__PVT__hw2reg[3U]) 
                                   | (((IData)((((QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
                                                                     >> 0x20U))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__))))) 
                                       >> 0x1aU) | 
                                      ((IData)(((((QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
                                                                      >> 0x20U))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)))) 
                                                >> 0x20U)) 
                                       << 6U)));
    vlSelfRef.__PVT__hw2reg[3U] = ((0xffU & vlSelfRef.__PVT__hw2reg[3U]) 
                                   | ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d) 
                                      << 8U));
    vlSelfRef.__PVT__hw2reg[4U] = ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d) 
                                   >> 0x18U);
    vlSelfRef.__PVT__hw2reg[0U] = ((3U & vlSelfRef.__PVT__hw2reg[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
                                                                    >> 0x20U))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick))))) 
                                      << 2U));
    vlSelfRef.__PVT__hw2reg[1U] = ((0xfffffff0U & vlSelfRef.__PVT__hw2reg[1U]) 
                                   | (((IData)((((QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
                                                                     >> 0x20U))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((((QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
                                                                      >> 0x20U))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)))) 
                                                >> 0x20U)) 
                                       << 2U)));
    vlSelfRef.__PVT__hw2reg[1U] = ((0xfU & vlSelfRef.__PVT__hw2reg[1U]) 
                                   | ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d) 
                                      << 4U));
    vlSelfRef.__PVT__hw2reg[2U] = ((0xfffffff0U & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d) 
                                      >> 0x1cU));
}

VL_INLINE_OPT void Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i__1(Vtestharness_rv_timer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__rv_timer_0_1_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h1012a72b_0_21;
    u_reg__DOT____VdfgRegularize_h1012a72b_0_21 = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__0__Vfuncout;
    __Vfunc_tl_a_user_chk__0__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tl_a_user_chk__0__user;
    __Vfunc_tl_a_user_chk__0__user = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__0__malformed_err;
    __Vfunc_tl_a_user_chk__0__malformed_err = 0;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((((((0x87U 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                      >> 0xcU))) 
                                                 << 0x10U) 
                                                | (((0x86U 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                         >> 0xcU))) 
                                                    << 0xfU) 
                                                   | ((0x85U 
                                                       == 
                                                       (0xffU 
                                                        & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                           >> 0xcU))) 
                                                      << 0xeU))) 
                                               | (((0x84U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                        >> 0xcU))) 
                                                   << 0xdU) 
                                                  | ((0x83U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                          >> 0xcU))) 
                                                     << 0xcU))) 
                                              | ((((0x82U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                        >> 0xcU))) 
                                                   << 0xbU) 
                                                  | ((0x81U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                          >> 0xcU))) 
                                                     << 0xaU)) 
                                                 | (((0x80U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                          >> 0xcU))) 
                                                     << 9U) 
                                                    | ((0x47U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                            >> 0xcU))) 
                                                       << 8U)))) 
                                             | (((((0x46U 
                                                    == 
                                                    (0xffU 
                                                     & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                        >> 0xcU))) 
                                                   << 7U) 
                                                  | ((0x45U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                          >> 0xcU))) 
                                                     << 6U)) 
                                                 | (((0x44U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                          >> 0xcU))) 
                                                     << 5U) 
                                                    | ((0x43U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                            >> 0xcU))) 
                                                       << 4U))) 
                                                | ((((0x42U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                          >> 0xcU))) 
                                                     << 3U) 
                                                    | ((0x41U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                            >> 0xcU))) 
                                                       << 2U)) 
                                                   | (((0x40U 
                                                        == 
                                                        (0xffU 
                                                         & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                            >> 0xcU))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0xffU 
                                                          & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                             >> 0xcU)))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                 & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                    >> 0xfU)));
    vlSelfRef.u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1 
        = ((0U == ((0x4000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                    ? 0U : 4U)) | (1U == ((0x4000U 
                                           & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                           ? 0U : 4U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[0U] = (IData)(
                                                          (0x10001ULL 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU)))) 
                                                               << 0x36U) 
                                                              | ((QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                                                >> 0xaU)))) 
                                                                 << 0x16U))));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] = (
                                                   (0xfc000000U 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U]) 
                                                   | (IData)(
                                                             ((0x10001ULL 
                                                               | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU)))) 
                                                                   << 0x36U) 
                                                                  | ((QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                                                >> 0xaU)))) 
                                                                     << 0x16U))) 
                                                              >> 0x20U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] = (
                                                   (0x3ffffffU 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U]) 
                                                   | ((IData)(
                                                              (0x20000000000ULL 
                                                               | (QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xaU)))))) 
                                                      << 0x1aU));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[2U] = (
                                                   ((IData)(
                                                            (0x20000000000ULL 
                                                             | (QData)((IData)(
                                                                               ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xaU)))))) 
                                                    >> 6U) 
                                                   | ((IData)(
                                                              ((0x20000000000ULL 
                                                                | (QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xaU))))) 
                                                               >> 0x20U)) 
                                                      << 0x1aU));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] = (
                                                   (0x780U 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U]) 
                                                   | (0x7ffU 
                                                      & ((IData)(
                                                                 ((0x20000000000ULL 
                                                                   | (QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xaU))))) 
                                                                  >> 0x20U)) 
                                                         >> 6U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U]) 
                                                   | (0x780U 
                                                      & ((0x400U 
                                                          & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                             >> 5U)) 
                                                         | (((0x4000U 
                                                              & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                              ? 0U
                                                              : 4U) 
                                                            << 7U))));
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0U != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: rv_timer_reg_top.sv:783: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.rv_timer_0_1_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/rv_timer/rtl/rv_timer_reg_top.sv", 783, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((1U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q)));
        } else if ((2U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q) 
                      << 0x10U));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((4U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q
                    : ((8U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q
                        : ((0x10U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q
                            : ((0x20U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q
                                : ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | ((0x40U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                       ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q)
                                       : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q)))))));
        }
    } else if ((IData)((0U != (0xff00U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0x100U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x200U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q) 
                      << 0x10U));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x400U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q
                    : ((0x800U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q
                        : ((0x1000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q
                            : ((0x2000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q
                                : ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | ((0x4000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                       ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q)
                                       : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q)))))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x10000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                : 0xffffffffU);
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == ((0x4000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                      ? 0U : 4U)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSelfRef.u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1));
    __Vfunc_tl_a_user_chk__0__user = (0x1fffffU & (
                                                   vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[0U] 
                                                   >> 1U));
    __Vfunc_tl_a_user_chk__0__malformed_err = (1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (__Vfunc_tl_a_user_chk__0__user 
                                                        >> 0xeU))) 
                                                   | (2U 
                                                      == 
                                                      (3U 
                                                       & (__Vfunc_tl_a_user_chk__0__user 
                                                          >> 0xeU))))));
    __Vfunc_tl_a_user_chk__0__Vfuncout = __Vfunc_tl_a_user_chk__0__malformed_err;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
        = __Vfunc_tl_a_user_chk__0__Vfuncout;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                          >> 2U)))) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xfU & (((vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)) 
                                           & (~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                     >> 0xaU)))))))));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    << 0xaU) | (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                            >> 0xaU))))));
        } else if ((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                            >> 0x1aU)));
            if ((0x8000000U & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U])) {
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                             >> 0x16U)))));
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x18U)));
            } else {
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)))));
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
            }
        } else if ((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                         >> 0x1aU)))));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                 >> 2U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                    >> 2U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                       >> 2U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                          >> 2U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:58: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.ao_peripheral_subsystem_i.rv_timer_0_1_i.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                           >> 2U)));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/tlul/rtl/tlul_err.sv", 58, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                  >> 0xaU)))) | ((~ 
                                                  (((IData)(vlSelfRef.u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1) 
                                                    | (4U 
                                                       == 
                                                       ((0x4000U 
                                                         & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                         ? 0U
                                                         : 4U))) 
                                                   & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                      & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                         & ((4U 
                                                             == 
                                                             ((0x4000U 
                                                               & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                               ? 0U
                                                               : 4U)) 
                                                            | ((1U 
                                                                == 
                                                                ((0x4000U 
                                                                  & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U])
                                                                  ? 0U
                                                                  : 4U)) 
                                                               | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                 | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err))));
    vlSelfRef.__PVT__u_reg__DOT__reg_we = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we) 
                                           & ((IData)(
                                                      ((0U 
                                                        == 
                                                        (0xff000U 
                                                         & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                       & (0U 
                                                          != 
                                                          (1U 
                                                           & (~ 
                                                              ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                << 0x16U) 
                                                               | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                  >> 0xaU))))))) 
                                              | ((IData)(
                                                         ((0x40000U 
                                                           == 
                                                           (0xff000U 
                                                            & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                          & (0U 
                                                             != 
                                                             (7U 
                                                              & (~ 
                                                                 ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                   << 0x16U) 
                                                                  | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                     >> 0xaU))))))) 
                                                 | ((IData)(
                                                            ((0x41000U 
                                                              == 
                                                              (0xff000U 
                                                               & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                             & (0U 
                                                                != 
                                                                (0xfU 
                                                                 & (~ 
                                                                    ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                      << 0x16U) 
                                                                     | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                        >> 0xaU))))))) 
                                                    | ((IData)(
                                                               ((0x42000U 
                                                                 == 
                                                                 (0xff000U 
                                                                  & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                & (0U 
                                                                   != 
                                                                   (0xfU 
                                                                    & (~ 
                                                                       ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                         << 0x16U) 
                                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                           >> 0xaU))))))) 
                                                       | ((IData)(
                                                                  ((0x43000U 
                                                                    == 
                                                                    (0xff000U 
                                                                     & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                   & (0U 
                                                                      != 
                                                                      (0xfU 
                                                                       & (~ 
                                                                          ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                            << 0x16U) 
                                                                           | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                              >> 0xaU))))))) 
                                                          | ((IData)(
                                                                     ((0x44000U 
                                                                       == 
                                                                       (0xff000U 
                                                                        & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                      & (0U 
                                                                         != 
                                                                         (0xfU 
                                                                          & (~ 
                                                                             ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                               << 0x16U) 
                                                                              | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                             | ((IData)(
                                                                        ((0x45000U 
                                                                          == 
                                                                          (0xff000U 
                                                                           & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                         & (0U 
                                                                            != 
                                                                            (1U 
                                                                             & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                | ((IData)(
                                                                           ((0x46000U 
                                                                             == 
                                                                             (0xff000U 
                                                                              & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                            & (0U 
                                                                               != 
                                                                               (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                   | ((IData)(
                                                                              ((0x47000U 
                                                                                == 
                                                                                (0xff000U 
                                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                               & (0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                      | ((IData)(
                                                                                ((0x80000U 
                                                                                == 
                                                                                (0xff000U 
                                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (7U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                         | ((IData)(
                                                                                ((0x81000U 
                                                                                == 
                                                                                (0xff000U 
                                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                            | ((IData)(
                                                                                ((0x82000U 
                                                                                == 
                                                                                (0xff000U 
                                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                               | ((IData)(
                                                                                ((0x83000U 
                                                                                == 
                                                                                (0xff000U 
                                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                                | ((IData)(
                                                                                ((0x84000U 
                                                                                == 
                                                                                (0xff000U 
                                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                << 0x16U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x11U] 
                                                                                >> 0xaU))))) 
                                                                                & ((0x85U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xcU))) 
                                                                                | ((0x86U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xcU))) 
                                                                                | (0x87U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U] 
                                                                                >> 0xcU)))))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg_error = (((~ (0U 
                                                   != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                               & (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)) 
                                                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we))) 
                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err));
    u_reg__DOT____VdfgRegularize_h1012a72b_0_21 = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en 
        = (IData)(((0U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en 
        = (IData)(((0x40000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we 
        = (IData)(((0x41000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we 
        = (IData)(((0x42000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en 
        = (IData)(((0x43000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en 
        = (IData)(((0x44000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en 
        = (IData)(((0x45000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en 
        = (IData)(((0x80000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we 
        = (IData)(((0x81000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we 
        = (IData)(((0x82000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en 
        = (IData)(((0x83000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en 
        = (IData)(((0x84000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en 
        = (IData)(((0x85000U == (0xff000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__intr_state0_we = (IData)(
                                                          ((0x46000U 
                                                            == 
                                                            (0xff000U 
                                                             & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__intr_state1_we = (IData)(
                                                          ((0x86000U 
                                                            == 
                                                            (0xff000U 
                                                             & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__intr_test0_we = (IData)(
                                                         ((0x47000U 
                                                           == 
                                                           (0xff000U 
                                                            & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                          & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__u_reg__DOT__intr_test1_we = (IData)(
                                                         ((0x87000U 
                                                           == 
                                                           (0xff000U 
                                                            & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0x10U])) 
                                                          & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21)));
    vlSelfRef.__PVT__reg2hw[0U] = ((0xffffffe0U & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__qe) 
                                        << 4U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q) 
                                                     << 2U))) 
                                      | ((2U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                                >> 9U)) 
                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test1_we))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0x1fU & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q)))) 
                                      << 5U));
    vlSelfRef.__PVT__reg2hw[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q)))) 
                                    >> 0x1bU) | ((vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                                                  << 6U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q))) 
                                                             >> 0x20U)) 
                                                    << 5U)));
    vlSelfRef.__PVT__reg2hw[2U] = (((0x1fU & (vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                                              >> 0x1aU)) 
                                    | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q))) 
                                                >> 0x20U)) 
                                       >> 0x1bU)) | 
                                   ((0x20U & (vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                                              >> 0x1aU)) 
                                    | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)))) 
                                       << 6U)));
    vlSelfRef.__PVT__reg2hw[3U] = ((0x1fU & ((IData)(
                                                     (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)))) 
                                             >> 0x1aU)) 
                                   | ((0x20U & ((IData)(
                                                        (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)))) 
                                                >> 0x1aU)) 
                                      | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q))) 
                                                  >> 0x20U)) 
                                         << 6U)));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xffffffc0U & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((0x1fU & ((IData)(
                                                        ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q))) 
                                                         >> 0x20U)) 
                                                >> 0x1aU)) 
                                      | (0x20U & ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q))) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xfc00003fU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (0xffffffc0U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q) 
                                        << 0xeU) | 
                                       ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q) 
                                        << 6U))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x83ffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (0xfc000000U & 
                                      ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__qe) 
                                         << 0x1eU) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q) 
                                              << 0x1cU))) 
                                       | ((0x8000000U 
                                           & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                                              << 0x11U)) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test0_we) 
                                             << 0x1aU)))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x7fffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q)))) 
                                      << 0x1fU));
    vlSelfRef.__PVT__reg2hw[5U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q)))) 
                                    >> 1U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q))) 
                                                       >> 0x20U)) 
                                              << 0x1fU));
    vlSelfRef.__PVT__reg2hw[6U] = (((0x7fffffffU & vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q) 
                                    | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q))) 
                                                >> 0x20U)) 
                                       >> 1U)) | (0x80000000U 
                                                  & vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q));
    vlSelfRef.__PVT__reg2hw[7U] = ((0x7fffffffU & (IData)(
                                                          (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))))) 
                                   | (0x80000000U & (IData)(
                                                            (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))))));
    vlSelfRef.__PVT__reg2hw[8U] = ((0x7fffffffU & (IData)(
                                                          ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))) 
                                                           >> 0x20U))) 
                                   | (0x80000000U & (IData)(
                                                            ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))) 
                                                             >> 0x20U))));
    vlSelfRef.__PVT__reg2hw[9U] = (0x3fffffU & ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
                                                  << 0x15U) 
                                                 | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q) 
                                                    << 0x14U)) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q))));
    vlSelfRef.__PVT__mtimecmp_update[0U][0U] = (1U 
                                                & ((vlSelfRef.__PVT__reg2hw[4U] 
                                                    >> 0x1eU) 
                                                   | (vlSelfRef.__PVT__reg2hw[5U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__mtimecmp_update[1U][0U] = (1U 
                                                & ((vlSelfRef.__PVT__reg2hw[4U] 
                                                    >> 0x1eU) 
                                                   | (vlSelfRef.__PVT__reg2hw[5U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__mtimecmp[0U][0U] = (((QData)((IData)(
                                                          ((vlSelfRef.__PVT__reg2hw[5U] 
                                                            << 1U) 
                                                           | (vlSelfRef.__PVT__reg2hw[4U] 
                                                              >> 0x1fU)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__PVT__reg2hw[6U])));
    vlSelfRef.__PVT__mtimecmp[1U][0U] = (((QData)((IData)(
                                                          ((vlSelfRef.__PVT__reg2hw[1U] 
                                                            << 0x1bU) 
                                                           | (vlSelfRef.__PVT__reg2hw[0U] 
                                                              >> 5U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelfRef.__PVT__reg2hw[2U] 
                                                             << 0x1aU) 
                                                            | (vlSelfRef.__PVT__reg2hw[1U] 
                                                               >> 6U)))));
    vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp[0U] 
        = vlSelfRef.__PVT__mtimecmp[0U][0U];
    vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtimecmp[0U] 
        = vlSelfRef.__PVT__mtimecmp[1U][0U];
    vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event 
        = (((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xaU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test0_we)) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q) 
              & (vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime 
                 >= vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp
                 [0U])));
    vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event 
        = (((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
             >> 0xaU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test1_we)) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
              & (vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime 
                 >= vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtimecmp
                 [0U])));
    vlSelfRef.__PVT__hw2reg[2U] = ((0xffffffefU & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | (((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event) 
                                       | vlSelfRef.__PVT__mtimecmp_update
                                       [0U][0U]) << 4U));
    vlSelfRef.__PVT__hw2reg[2U] = ((0xffffffdfU & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | ((((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event) 
                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q)) 
                                       & (~ vlSelfRef.__PVT__mtimecmp_update
                                          [0U][0U])) 
                                      << 5U));
    vlSelfRef.__PVT__hw2reg[0U] = ((0xfffffffeU & vlSelfRef.__PVT__hw2reg[0U]) 
                                   | ((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event) 
                                      | vlSelfRef.__PVT__mtimecmp_update
                                      [1U][0U]));
    vlSelfRef.__PVT__hw2reg[0U] = ((0xfffffffdU & vlSelfRef.__PVT__hw2reg[0U]) 
                                   | ((((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event) 
                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q)) 
                                       & (~ vlSelfRef.__PVT__mtimecmp_update
                                          [1U][0U])) 
                                      << 1U));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state0__DOT__wr_data 
        = (1U & ((~ ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                      >> 0xaU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state0_we))) 
                 & ((0x10U & vlSelfRef.__PVT__hw2reg[2U])
                     ? (vlSelfRef.__PVT__hw2reg[2U] 
                        >> 5U) : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state1__DOT__wr_data 
        = (1U & ((~ ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xfU] 
                      >> 0xaU) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state1_we))) 
                 & ((1U & vlSelfRef.__PVT__hw2reg[0U])
                     ? (vlSelfRef.__PVT__hw2reg[0U] 
                        >> 1U) : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q))));
}

VL_INLINE_OPT void Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i__0(Vtestharness_rv_timer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding;
    __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 0;
    // Body
    __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding 
        = vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding;
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_lower0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we));
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_upper0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_lower1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we));
    vlSelfRef.__PVT__u_reg__DOT__u_timer_v_upper1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg0_step__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg1_step__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state0__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state0_we));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state1__DOT__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state1_we));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en));
    vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__qe 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en));
    vlSelfRef.__PVT__intr_out__BRA__0__KET__ = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
                                                && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q) 
                                                    & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q)));
    vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_intr_hw__intr_o 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) 
           && ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q) 
               & (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q)));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__gpio_i.rst_ni) {
        if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) {
            __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)
                    ? 1U : 0U);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata 
                = ((((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error) 
                     | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                    | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req))
                    ? 0xffffffffU : vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid 
                = (0xffU & ((vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                             << 6U) | (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[2U] 
                                       >> 0x1aU)));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz 
                = (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                         >> 2U));
        } else if (vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding) {
            __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
        }
        vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count 
            = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q)
                ? (((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count) 
                    == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q))
                    ? 0U : (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count))))
                : 0U);
        vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count 
            = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q)
                ? (((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count) 
                    == (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q))
                    ? 0U : (0xfffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count))))
                : 0U);
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : 0U);
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q 
                    = (0xffU & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                >> 8U));
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q 
                    = (0xfffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                  << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                            >> 0x18U)));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q = 0U;
            }
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en) {
            if (vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en) {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q 
                    = (0xffU & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                >> 8U));
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q 
                    = (0xfffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                  << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                            >> 0x18U)));
            } else {
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q = 0U;
                vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q = 0U;
            }
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[3U] >> 7U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : ((vlSelfRef.__PVT__hw2reg[4U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.__PVT__hw2reg[3U] 
                                                   >> 8U)));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[2U] >> 6U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : ((vlSelfRef.__PVT__hw2reg[3U] 
                                                 << 0x19U) 
                                                | (vlSelfRef.__PVT__hw2reg[2U] 
                                                   >> 7U)));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[1U] >> 3U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : ((vlSelfRef.__PVT__hw2reg[2U] 
                                                 << 0x1cU) 
                                                | (vlSelfRef.__PVT__hw2reg[1U] 
                                                   >> 4U)));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[0U] >> 2U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we)
                    ? ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                        << 8U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                  >> 0x18U)) : ((vlSelfRef.__PVT__hw2reg[1U] 
                                                 << 0x1dU) 
                                                | (vlSelfRef.__PVT__hw2reg[0U] 
                                                   >> 3U)));
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                      >> 0x18U));
            vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                      >> 0x19U));
        }
        if ((1U & ((vlSelfRef.__PVT__hw2reg[2U] >> 4U) 
                   | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state0_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state0__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                      >> 0x18U));
        }
        if ((1U & (vlSelfRef.__PVT__hw2reg[0U] | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state1_we)))) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q 
                = vlSelfRef.__PVT__u_reg__DOT__u_intr_state1__DOT__wr_data;
        }
        if (vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en) {
            vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q 
                = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en) 
                   & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                      >> 0x18U));
        }
    } else {
        __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
        vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count = 0U;
        vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__error = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q = 0xffffffffU;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q = 1U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q = 0U;
        vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding 
        = __Vdly__u_reg__DOT__u_reg_if__DOT__outstanding;
    vlSelfRef.__PVT__step[0U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q;
    vlSelfRef.__PVT__step[1U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q;
    vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime 
        = (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)));
    vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime 
        = (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)));
    vlSelfRef.__PVT__mtime[0U] = vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime;
    vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
        = (vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime 
           + (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q)));
    vlSelfRef.__PVT__mtime[1U] = vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime;
    vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
        = (vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime 
           + (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q)));
    vlSelfRef.__PVT__prescaler[0U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q;
    vlSelfRef.__PVT__tick__BRA__0__KET__ = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q) 
                                            & ((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_core__DOT__tick_count) 
                                               >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q)));
    vlSelfRef.__PVT__prescaler[1U] = vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q;
    vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick 
        = ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
           & ((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_core__DOT__tick_count) 
              >= (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q)));
    vlSelfRef.__PVT__mtime_d[0U] = vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d;
    vlSelfRef.__PVT__mtime_d[1U] = vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d;
    vlSelfRef.__PVT__hw2reg[2U] = ((0x3fU & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
                                                                    >> 0x20U))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__))))) 
                                      << 6U));
    vlSelfRef.__PVT__hw2reg[3U] = ((0xffffff00U & vlSelfRef.__PVT__hw2reg[3U]) 
                                   | (((IData)((((QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
                                                                     >> 0x20U))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__))))) 
                                       >> 0x1aU) | 
                                      ((IData)(((((QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d 
                                                                      >> 0x20U))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelfRef.__PVT__tick__BRA__0__KET__)))) 
                                                >> 0x20U)) 
                                       << 6U)));
    vlSelfRef.__PVT__hw2reg[3U] = ((0xffU & vlSelfRef.__PVT__hw2reg[3U]) 
                                   | ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d) 
                                      << 8U));
    vlSelfRef.__PVT__hw2reg[4U] = ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__0__KET____DOT__u_core__mtime_d) 
                                   >> 0x18U);
    vlSelfRef.__PVT__hw2reg[0U] = ((3U & vlSelfRef.__PVT__hw2reg[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
                                                                    >> 0x20U))) 
                                                   << 1U) 
                                                  | (QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick))))) 
                                      << 2U));
    vlSelfRef.__PVT__hw2reg[1U] = ((0xfffffff0U & vlSelfRef.__PVT__hw2reg[1U]) 
                                   | (((IData)((((QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    (vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
                                                                     >> 0x20U))) 
                                                    << 1U) 
                                                   | (QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick))))) 
                                       >> 0x1eU) | 
                                      ((IData)(((((QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(
                                                                     (vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d 
                                                                      >> 0x20U))) 
                                                     << 1U) 
                                                    | (QData)((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__tick)))) 
                                                >> 0x20U)) 
                                       << 2U)));
    vlSelfRef.__PVT__hw2reg[1U] = ((0xfU & vlSelfRef.__PVT__hw2reg[1U]) 
                                   | ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d) 
                                      << 4U));
    vlSelfRef.__PVT__hw2reg[2U] = ((0xfffffff0U & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | ((IData)(vlSelfRef.__Vcellout__gen_harts__BRA__1__KET____DOT__u_core__mtime_d) 
                                      >> 0x1cU));
}

VL_INLINE_OPT void Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i__1(Vtestharness_rv_timer* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestharness_rv_timer___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__rv_timer_2_3_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_reg__DOT____VdfgRegularize_h1012a72b_0_21;
    u_reg__DOT____VdfgRegularize_h1012a72b_0_21 = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__1__Vfuncout;
    __Vfunc_tl_a_user_chk__1__Vfuncout = 0;
    IData/*20:0*/ __Vfunc_tl_a_user_chk__1__user;
    __Vfunc_tl_a_user_chk__1__user = 0;
    CData/*0:0*/ __Vfunc_tl_a_user_chk__1__malformed_err;
    __Vfunc_tl_a_user_chk__1__malformed_err = 0;
    // Body
    vlSelfRef.__PVT__u_reg__DOT__addr_hit = ((((((0x87U 
                                                  == 
                                                  (0xffU 
                                                   & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                       << 6U) 
                                                      | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                         >> 0x1aU)))) 
                                                 << 0x10U) 
                                                | (((0x86U 
                                                     == 
                                                     (0xffU 
                                                      & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                          << 6U) 
                                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                            >> 0x1aU)))) 
                                                    << 0xfU) 
                                                   | ((0x85U 
                                                       == 
                                                       (0xffU 
                                                        & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                            << 6U) 
                                                           | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                              >> 0x1aU)))) 
                                                      << 0xeU))) 
                                               | (((0x84U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                         << 6U) 
                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                           >> 0x1aU)))) 
                                                   << 0xdU) 
                                                  | ((0x83U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     << 0xcU))) 
                                              | ((((0x82U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                         << 6U) 
                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                           >> 0x1aU)))) 
                                                   << 0xbU) 
                                                  | ((0x81U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     << 0xaU)) 
                                                 | (((0x80U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     << 9U) 
                                                    | ((0x47U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                             << 6U) 
                                                            | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                               >> 0x1aU)))) 
                                                       << 8U)))) 
                                             | (((((0x46U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                         << 6U) 
                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                           >> 0x1aU)))) 
                                                   << 7U) 
                                                  | ((0x45U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     << 6U)) 
                                                 | (((0x44U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     << 5U) 
                                                    | ((0x43U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                             << 6U) 
                                                            | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                               >> 0x1aU)))) 
                                                       << 4U))) 
                                                | ((((0x42U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     << 3U) 
                                                    | ((0x41U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                             << 6U) 
                                                            | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                               >> 0x1aU)))) 
                                                       << 2U)) 
                                                   | (((0x40U 
                                                        == 
                                                        (0xffU 
                                                         & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                             << 6U) 
                                                            | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                               >> 0x1aU)))) 
                                                       << 1U) 
                                                      | (0U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                              << 6U) 
                                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                >> 0x1aU))))))));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                 & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                    >> 0x1dU)));
    vlSelfRef.u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1 
        = ((0U == ((0x10000000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                    ? 0U : 4U)) | (1U == ((0x10000000U 
                                           & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                                           ? 0U : 4U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[0U] = (IData)(
                                                          (0x10001ULL 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))) 
                                                               << 0x36U) 
                                                              | ((QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x18U)))) 
                                                                 << 0x16U))));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] = (
                                                   (0xfc000000U 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U]) 
                                                   | (IData)(
                                                             ((0x10001ULL 
                                                               | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))) 
                                                                   << 0x36U) 
                                                                  | ((QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                                                >> 0x18U)))) 
                                                                     << 0x16U))) 
                                                              >> 0x20U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] = (
                                                   (0x3ffffffU 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U]) 
                                                   | ((IData)(
                                                              (0x20000000000ULL 
                                                               | (QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x18U)))))) 
                                                      << 0x1aU));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[2U] = (
                                                   ((IData)(
                                                            (0x20000000000ULL 
                                                             | (QData)((IData)(
                                                                               ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x18U)))))) 
                                                    >> 6U) 
                                                   | ((IData)(
                                                              ((0x20000000000ULL 
                                                                | (QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x18U))))) 
                                                               >> 0x20U)) 
                                                      << 0x1aU));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] = (
                                                   (0x780U 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U]) 
                                                   | (0x7ffU 
                                                      & ((IData)(
                                                                 ((0x20000000000ULL 
                                                                   | (QData)((IData)(
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x18U))))) 
                                                                  >> 0x20U)) 
                                                         >> 6U)));
    vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] = (
                                                   (0x7fU 
                                                    & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U]) 
                                                   | (0x780U 
                                                      & ((0x400U 
                                                          & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                             >> 0x13U)) 
                                                         | (((0x10000000U 
                                                              & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                                                              ? 0U
                                                              : 4U) 
                                                            << 7U))));
    if ((1U & (~ VL_ONEHOT_I(vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0U != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: rv_timer_reg_top.sv:783: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.rv_timer_2_3_i.u_reg: unique case, but multiple matches found for '1'h1'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/rv_timer/rtl/rv_timer_reg_top.sv", 783, "");
            }
        }
    }
    vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next = 0U;
    if ((IData)((0U != (0xffU & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((1U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
                       << 1U) | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q)));
        } else if ((2U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q) 
                      << 0x10U));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((4U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q
                    : ((8U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q
                        : ((0x10U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q
                            : ((0x20U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q
                                : ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | ((0x40U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                       ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q)
                                       : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q)))))));
        }
    } else if ((IData)((0U != (0xff00U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)))) {
        if ((0x100U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next);
        } else if ((0x200U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)) {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xfffff000U & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q));
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0xff00ffffU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                   | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q) 
                      << 0x10U));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
                = ((0x400U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                    ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q
                    : ((0x800U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                        ? vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q
                        : ((0x1000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                            ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q
                            : ((0x2000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                ? vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q
                                : ((0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next) 
                                   | ((0x4000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                                       ? (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q)
                                       : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q)))))));
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next 
            = ((0x10000U & vlSelfRef.__PVT__u_reg__DOT__addr_hit)
                ? (0xfffffffeU & vlSelfRef.__PVT__u_reg__DOT__reg_rdata_next)
                : 0xffffffffU);
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (4U == ((0x10000000U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                      ? 0U : 4U)));
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req 
        = ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__a_ack) 
           & (IData)(vlSelfRef.u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1));
    __Vfunc_tl_a_user_chk__1__user = (0x1fffffU & (
                                                   vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[0U] 
                                                   >> 1U));
    __Vfunc_tl_a_user_chk__1__malformed_err = (1U & 
                                               (~ (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (__Vfunc_tl_a_user_chk__1__user 
                                                        >> 0xeU))) 
                                                   | (2U 
                                                      == 
                                                      (3U 
                                                       & (__Vfunc_tl_a_user_chk__1__user 
                                                          >> 0xeU))))));
    __Vfunc_tl_a_user_chk__1__Vfuncout = __Vfunc_tl_a_user_chk__1__malformed_err;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
        = __Vfunc_tl_a_user_chk__1__Vfuncout;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    if ((0x400U & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U])) {
        if ((0U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                          >> 2U)))) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & (~ (0U != (0xfU & (((vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                             << 0xaU) 
                                            | (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)) 
                                           & (~ ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                     >> 0x18U)))))))));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0U != (0xfU & (((vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    << 0xaU) | (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                                >> 0x16U)) 
                                  & ((IData)(1U) << 
                                     (3U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                            >> 0x18U))))));
        } else if ((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                            >> 0x1aU)));
            if ((0x8000000U & vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U])) {
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                             >> 0x16U)))));
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x18U)));
            } else {
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                    = (1U & (~ (0U != (0xcU & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                               >> 0x16U)))));
                vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                    = (3U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
            }
        } else if ((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                 >> 2U)))) {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & (~ (0U != (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                         >> 0x1aU)))));
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 1U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = (0xfU == (0xfU & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[1U] 
                                    >> 0x16U)));
        } else {
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
            vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
        }
        if ((1U & (~ VL_ONEHOT_I((((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                 >> 2U))) 
                                   << 2U) | (((1U == 
                                               (3U 
                                                & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))) 
                                              << 1U) 
                                             | (0U 
                                                == 
                                                (3U 
                                                 & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                    >> 2U))))))))) {
            if ((0U != (((2U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                       >> 2U))) << 2U) 
                        | (((1U == (3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                          >> 2U))) 
                            << 1U) | (0U == (3U & (
                                                   vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                                   >> 2U))))))) {
                if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                    VL_WRITEF_NX("[%0t] %%Error: tlul_err.sv:58: Assertion failed in %Ntestharness.gr_heep_i.core_v_mini_mcu_i.peripheral_subsystem_i.rv_timer_2_3_i.u_reg.u_reg_if.u_err: unique case, but multiple matches found for '32'h%x'\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name(),
                                 32,(3U & (vlSelfRef.__PVT__u_reg__DOT__tl_reg_h2d[3U] 
                                           >> 2U)));
                    VL_STOP_MT("../../../hw/vendor/x-heep/hw/vendor/lowrisc_opentitan/hw/ip/tlul/rtl/tlul_err.sv", 58, "");
                }
            }
        }
    } else {
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk = 0U;
        vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk = 0U;
    }
    vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal 
        = (1U & (((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                  & (0U != (3U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                  >> 0x18U)))) | ((~ 
                                                   (((IData)(vlSelfRef.u_reg__DOT__u_reg_if__DOT__u_err__DOT____VdfgRegularize_h76d05708_0_1) 
                                                     | (4U 
                                                        == 
                                                        ((0x10000000U 
                                                          & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                                                          ? 0U
                                                          : 4U))) 
                                                    & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                       & ((IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk) 
                                                          & ((4U 
                                                              == 
                                                              ((0x10000000U 
                                                                & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                                                                ? 0U
                                                                : 4U)) 
                                                             | ((1U 
                                                                 == 
                                                                 ((0x10000000U 
                                                                   & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU])
                                                                   ? 0U
                                                                   : 4U)) 
                                                                | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))))) 
                                                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err))));
    vlSelfRef.__PVT__u_reg__DOT__reg_we = ((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                           & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__wr_req));
    vlSelfRef.__PVT__u_reg__DOT__wr_err = ((IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we) 
                                           & (((0U 
                                                == 
                                                (0xffU 
                                                 & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                     << 6U) 
                                                    | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                       >> 0x1aU)))) 
                                               & (0U 
                                                  != 
                                                  (1U 
                                                   & (~ 
                                                      ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                        << 8U) 
                                                       | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                          >> 0x18U)))))) 
                                              | (((0x40U 
                                                   == 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                          >> 0x1aU)))) 
                                                  & (0U 
                                                     != 
                                                     (7U 
                                                      & (~ 
                                                         ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 8U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                             >> 0x18U)))))) 
                                                 | (((0x41U 
                                                      == 
                                                      (0xffU 
                                                       & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                           << 6U) 
                                                          | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                             >> 0x1aU)))) 
                                                     & (0U 
                                                        != 
                                                        (0xfU 
                                                         & (~ 
                                                            ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                              << 8U) 
                                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                >> 0x18U)))))) 
                                                    | (((0x42U 
                                                         == 
                                                         (0xffU 
                                                          & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                              << 6U) 
                                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                >> 0x1aU)))) 
                                                        & (0U 
                                                           != 
                                                           (0xfU 
                                                            & (~ 
                                                               ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                   >> 0x18U)))))) 
                                                       | (((0x43U 
                                                            == 
                                                            (0xffU 
                                                             & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                 << 6U) 
                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                   >> 0x1aU)))) 
                                                           & (0U 
                                                              != 
                                                              (0xfU 
                                                               & (~ 
                                                                  ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                      >> 0x18U)))))) 
                                                          | (((0x44U 
                                                               == 
                                                               (0xffU 
                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                    << 6U) 
                                                                   | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                      >> 0x1aU)))) 
                                                              & (0U 
                                                                 != 
                                                                 (0xfU 
                                                                  & (~ 
                                                                     ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                       << 8U) 
                                                                      | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                         >> 0x18U)))))) 
                                                             | (((0x45U 
                                                                  == 
                                                                  (0xffU 
                                                                   & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                       << 6U) 
                                                                      | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                         >> 0x1aU)))) 
                                                                 & (0U 
                                                                    != 
                                                                    (1U 
                                                                     & (~ 
                                                                        ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                          << 8U) 
                                                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                            >> 0x18U)))))) 
                                                                | (((0x46U 
                                                                     == 
                                                                     (0xffU 
                                                                      & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                          << 6U) 
                                                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                            >> 0x1aU)))) 
                                                                    & (0U 
                                                                       != 
                                                                       (1U 
                                                                        & (~ 
                                                                           ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                             << 8U) 
                                                                            | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                               >> 0x18U)))))) 
                                                                   | (((0x47U 
                                                                        == 
                                                                        (0xffU 
                                                                         & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                             << 6U) 
                                                                            | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                               >> 0x1aU)))) 
                                                                       & (0U 
                                                                          != 
                                                                          (1U 
                                                                           & (~ 
                                                                              ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                               | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))))) 
                                                                      | (((0x80U 
                                                                           == 
                                                                           (0xffU 
                                                                            & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                               | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                          & (0U 
                                                                             != 
                                                                             (7U 
                                                                              & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))))) 
                                                                         | (((0x81U 
                                                                              == 
                                                                              (0xffU 
                                                                               & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                             & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))))) 
                                                                            | (((0x82U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))))) 
                                                                               | (((0x83U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))))) 
                                                                                | (((0x84U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                                & (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U)))))) 
                                                                                | ((0U 
                                                                                != 
                                                                                (1U 
                                                                                & (~ 
                                                                                ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                >> 0x18U))))) 
                                                                                & ((0x85U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                                | ((0x86U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU)))) 
                                                                                | (0x87U 
                                                                                == 
                                                                                (0xffU 
                                                                                & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                                                << 6U) 
                                                                                | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                                                >> 0x1aU))))))))))))))))))))));
    vlSelfRef.__PVT__u_reg__DOT__reg_error = (((~ (0U 
                                                   != vlSelfRef.__PVT__u_reg__DOT__addr_hit)) 
                                               & (((~ (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__u_reg_if__DOT__rd_req)) 
                                                  | (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we))) 
                                              | (IData)(vlSelfRef.__PVT__u_reg__DOT__wr_err));
    u_reg__DOT____VdfgRegularize_h1012a72b_0_21 = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_error)) 
                                                   & (IData)(vlSelfRef.__PVT__u_reg__DOT__reg_we));
    vlSelfRef.__PVT__u_reg__DOT__u_ctrl_active_0__DOT__wr_en 
        = ((0U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                             << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                       >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg0_prescale__DOT__wr_en 
        = ((0x40U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_lower0_we 
        = ((0x41U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_upper0_we 
        = ((0x42U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_lower0_0__DOT__wr_en 
        = ((0x43U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_upper0_0__DOT__wr_en 
        = ((0x44U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable0__DOT__wr_en 
        = ((0x45U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_cfg1_prescale__DOT__wr_en 
        = ((0x80U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_lower1_we 
        = ((0x81U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__timer_v_upper1_we 
        = ((0x82U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_lower1_0__DOT__wr_en 
        = ((0x83U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_compare_upper1_0__DOT__wr_en 
        = ((0x84U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_enable1__DOT__wr_en 
        = ((0x85U == (0xffU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                << 6U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                          >> 0x1aU)))) 
           & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__intr_state0_we = (
                                                   (0x46U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                         << 6U) 
                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                           >> 0x1aU)))) 
                                                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__intr_state1_we = (
                                                   (0x86U 
                                                    == 
                                                    (0xffU 
                                                     & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                         << 6U) 
                                                        | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                           >> 0x1aU)))) 
                                                   & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__intr_test0_we = ((0x47U 
                                                   == 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                          >> 0x1aU)))) 
                                                  & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__u_reg__DOT__intr_test1_we = ((0x87U 
                                                   == 
                                                   (0xffU 
                                                    & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0xaU] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[9U] 
                                                          >> 0x1aU)))) 
                                                  & (IData)(u_reg__DOT____VdfgRegularize_h1012a72b_0_21));
    vlSelfRef.__PVT__reg2hw[0U] = ((0xffffffe0U & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__qe) 
                                        << 4U) | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable1__q) 
                                                   << 3U) 
                                                  | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q) 
                                                     << 2U))) 
                                      | ((2U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                                >> 0x17U)) 
                                         | (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test1_we))));
    vlSelfRef.__PVT__reg2hw[0U] = ((0x1fU & vlSelfRef.__PVT__reg2hw[0U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q)))) 
                                      << 5U));
    vlSelfRef.__PVT__reg2hw[1U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q)))) 
                                    >> 0x1bU) | ((vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                                                  << 6U) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q))) 
                                                             >> 0x20U)) 
                                                    << 5U)));
    vlSelfRef.__PVT__reg2hw[2U] = (((0x1fU & (vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                                              >> 0x1aU)) 
                                    | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__qe)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper1_0__q))) 
                                                >> 0x20U)) 
                                       >> 0x1bU)) | 
                                   ((0x20U & (vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower1_0__q 
                                              >> 0x1aU)) 
                                    | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)))) 
                                       << 6U)));
    vlSelfRef.__PVT__reg2hw[3U] = ((0x1fU & ((IData)(
                                                     (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)))) 
                                             >> 0x1aU)) 
                                   | ((0x20U & ((IData)(
                                                        (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q)))) 
                                                >> 0x1aU)) 
                                      | ((IData)(((
                                                   ((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q))) 
                                                  >> 0x20U)) 
                                         << 6U)));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xffffffc0U & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((0x1fU & ((IData)(
                                                        ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q))) 
                                                         >> 0x20U)) 
                                                >> 0x1aU)) 
                                      | (0x20U & ((IData)(
                                                          ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower1__q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper1__q))) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0xfc00003fU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (0xffffffc0U & 
                                      (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_prescale__q) 
                                        << 0xeU) | 
                                       ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg1_step__q) 
                                        << 6U))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x83ffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | (0xfc000000U & 
                                      ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__qe) 
                                         << 0x1eU) 
                                        | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_enable0__q) 
                                            << 0x1dU) 
                                           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q) 
                                              << 0x1cU))) 
                                       | ((0x8000000U 
                                           & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                                              << 3U)) 
                                          | ((IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test0_we) 
                                             << 0x1aU)))));
    vlSelfRef.__PVT__reg2hw[4U] = ((0x7fffffffU & vlSelfRef.__PVT__reg2hw[4U]) 
                                   | ((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q)))) 
                                      << 0x1fU));
    vlSelfRef.__PVT__reg2hw[5U] = (((IData)((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q)))) 
                                    >> 1U) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q))) 
                                                       >> 0x20U)) 
                                              << 0x1fU));
    vlSelfRef.__PVT__reg2hw[6U] = (((0x7fffffffU & vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q) 
                                    | ((IData)(((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__qe)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_compare_upper0_0__q))) 
                                                >> 0x20U)) 
                                       >> 1U)) | (0x80000000U 
                                                  & vlSelfRef.u_reg__DOT____Vcellout__u_compare_lower0_0__q));
    vlSelfRef.__PVT__reg2hw[7U] = ((0x7fffffffU & (IData)(
                                                          (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))))) 
                                   | (0x80000000U & (IData)(
                                                            (((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))))));
    vlSelfRef.__PVT__reg2hw[8U] = ((0x7fffffffU & (IData)(
                                                          ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))) 
                                                           >> 0x20U))) 
                                   | (0x80000000U & (IData)(
                                                            ((((QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_lower0__q)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_timer_v_upper0__q))) 
                                                             >> 0x20U))));
    vlSelfRef.__PVT__reg2hw[9U] = (0x3fffffU & ((((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
                                                  << 0x15U) 
                                                 | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q) 
                                                    << 0x14U)) 
                                                | (((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_prescale__q) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_cfg0_step__q))));
    vlSelfRef.__PVT__mtimecmp_update[0U][0U] = (1U 
                                                & ((vlSelfRef.__PVT__reg2hw[4U] 
                                                    >> 0x1eU) 
                                                   | (vlSelfRef.__PVT__reg2hw[5U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__mtimecmp_update[1U][0U] = (1U 
                                                & ((vlSelfRef.__PVT__reg2hw[4U] 
                                                    >> 0x1eU) 
                                                   | (vlSelfRef.__PVT__reg2hw[5U] 
                                                      >> 0x1fU)));
    vlSelfRef.__PVT__mtimecmp[0U][0U] = (((QData)((IData)(
                                                          ((vlSelfRef.__PVT__reg2hw[5U] 
                                                            << 1U) 
                                                           | (vlSelfRef.__PVT__reg2hw[4U] 
                                                              >> 0x1fU)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelfRef.__PVT__reg2hw[6U])));
    vlSelfRef.__PVT__mtimecmp[1U][0U] = (((QData)((IData)(
                                                          ((vlSelfRef.__PVT__reg2hw[1U] 
                                                            << 0x1bU) 
                                                           | (vlSelfRef.__PVT__reg2hw[0U] 
                                                              >> 5U)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelfRef.__PVT__reg2hw[2U] 
                                                             << 0x1aU) 
                                                            | (vlSelfRef.__PVT__reg2hw[1U] 
                                                               >> 6U)))));
    vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp[0U] 
        = vlSelfRef.__PVT__mtimecmp[0U][0U];
    vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtimecmp[0U] 
        = vlSelfRef.__PVT__mtimecmp[1U][0U];
    vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event 
        = (((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
             >> 0x18U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test0_we)) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_0__q) 
              & (vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtime 
                 >= vlSelfRef.__Vcellinp__gen_harts__BRA__0__KET____DOT__u_core__mtimecmp
                 [0U])));
    vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event 
        = (((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
             >> 0x18U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_test1_we)) 
           | ((IData)(vlSelfRef.u_reg__DOT____Vcellout__u_ctrl_active_1__q) 
              & (vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtime 
                 >= vlSelfRef.__Vcellinp__gen_harts__BRA__1__KET____DOT__u_core__mtimecmp
                 [0U])));
    vlSelfRef.__PVT__hw2reg[2U] = ((0xffffffefU & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | (((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event) 
                                       | vlSelfRef.__PVT__mtimecmp_update
                                       [0U][0U]) << 4U));
    vlSelfRef.__PVT__hw2reg[2U] = ((0xffffffdfU & vlSelfRef.__PVT__hw2reg[2U]) 
                                   | ((((IData)(vlSelfRef.__PVT__gen_harts__BRA__0__KET____DOT__u_intr_hw__DOT__new_event) 
                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q)) 
                                       & (~ vlSelfRef.__PVT__mtimecmp_update
                                          [0U][0U])) 
                                      << 5U));
    vlSelfRef.__PVT__hw2reg[0U] = ((0xfffffffeU & vlSelfRef.__PVT__hw2reg[0U]) 
                                   | ((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event) 
                                      | vlSelfRef.__PVT__mtimecmp_update
                                      [1U][0U]));
    vlSelfRef.__PVT__hw2reg[0U] = ((0xfffffffdU & vlSelfRef.__PVT__hw2reg[0U]) 
                                   | ((((IData)(vlSelfRef.__PVT__gen_harts__BRA__1__KET____DOT__u_intr_hw__DOT__new_event) 
                                        | (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q)) 
                                       & (~ vlSelfRef.__PVT__mtimecmp_update
                                          [1U][0U])) 
                                      << 1U));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state0__DOT__wr_data 
        = (1U & ((~ ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                      >> 0x18U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state0_we))) 
                 & ((0x10U & vlSelfRef.__PVT__hw2reg[2U])
                     ? (vlSelfRef.__PVT__hw2reg[2U] 
                        >> 5U) : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state0__q))));
    vlSelfRef.__PVT__u_reg__DOT__u_intr_state1__DOT__wr_data 
        = (1U & ((~ ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[8U] 
                      >> 0x18U) & (IData)(vlSelfRef.__PVT__u_reg__DOT__intr_state1_we))) 
                 & ((1U & vlSelfRef.__PVT__hw2reg[0U])
                     ? (vlSelfRef.__PVT__hw2reg[0U] 
                        >> 1U) : (IData)(vlSelfRef.u_reg__DOT____Vcellout__u_intr_state1__q))));
}
