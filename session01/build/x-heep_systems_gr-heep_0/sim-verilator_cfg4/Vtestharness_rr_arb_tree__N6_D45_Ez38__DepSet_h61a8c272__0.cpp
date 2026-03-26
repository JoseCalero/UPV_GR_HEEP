// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness_rr_arb_tree__N6_D45_Ez38.h"

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__rr_q = ((IData)(vlSelfRef.rst_ni)
                                                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)
                                                : 0U);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
}
