// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rr_arb_tree__N6_D45_Ez38.h"

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
            | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
               | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                  & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o))))
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : (((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
                                         | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                                            & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)))
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                    & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((1U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
               | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                  & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                     >> 2U))))) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rst_ni = ((~ (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                            >> 1U)) & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__rstgen_i__DOT__init_no));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
            | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
               | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                  & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o))))
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : (((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
                                         | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                                            & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)))
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                    & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 | ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__6(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__6\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((1U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
               | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                  & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                     >> 2U))))) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 1U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 1U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 1U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 1U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 1U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 1U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 1U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 1U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 1U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((2U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_75 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_76 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 1U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_77 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_78 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 1U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_79 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_80 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 1U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__rr_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d)
                                                : 0U);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 1U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 1U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 1U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 1U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 1U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 1U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 1U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 1U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 1U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 1U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 1U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__1__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((2U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_75 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_76 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 1U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_77 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_78 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 1U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_79 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 1U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_80 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 1U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 2U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 2U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 2U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 2U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 2U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 2U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((4U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_81 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_82 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 2U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_83 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_84 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 2U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_85 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_86 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 2U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 2U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 2U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 2U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 2U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 2U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 2U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 2U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 2U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 2U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__2__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((4U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_81 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_82 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 2U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_83 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_84 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 2U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_85 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 2U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_86 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 2U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 3U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 3U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 3U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 3U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 3U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 3U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 3U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 3U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 3U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((8U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_87 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_88 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 3U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_89 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_90 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 3U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_91 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_92 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 3U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 3U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 3U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 3U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 3U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 3U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 3U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 3U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 3U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 3U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 3U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 3U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__3__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 3U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((8U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_87 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_88 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 3U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_89 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_90 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 3U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_91 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 3U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_92 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 3U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 4U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 4U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 4U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 4U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 4U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 4U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 4U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 4U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 4U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 4U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 4U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 4U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x10U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_93 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_94 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_95 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_96 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_97 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_98 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 4U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 4U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 4U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 4U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 4U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 4U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 4U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 4U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 4U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 4U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 4U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 4U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 4U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 4U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__4__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 4U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x10U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_93 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_94 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_95 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_96 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 4U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_97 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 4U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_98 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                    & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                       >> 4U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 5U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 5U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 5U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 5U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 5U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 5U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 5U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 5U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 5U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 5U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 5U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 5U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x20U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_99 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 5U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_100 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 5U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_101 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 5U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_102 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 5U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_103 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 5U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_104 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 5U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 5U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 5U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 5U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 5U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 5U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 5U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 5U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 5U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 5U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 5U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 5U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 5U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 5U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__5__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 5U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x20U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_99 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                 & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                     >> 5U) 
                                                    & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_100 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 5U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_101 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 5U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_102 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 5U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_103 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 5U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_104 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 5U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 6U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 6U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 6U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 6U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 6U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 6U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 6U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 6U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 6U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 6U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 6U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 6U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x40U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_105 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 6U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_106 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 6U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_107 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 6U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_108 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 6U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_109 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 6U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_110 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 6U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 6U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 6U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 6U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 6U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 6U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 6U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 6U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 6U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 6U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 6U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 6U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 6U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 6U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__6__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 6U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x40U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_105 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 6U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_106 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 6U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_107 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 6U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_108 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 6U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_109 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 6U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_110 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 6U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 7U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 7U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 7U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 7U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 7U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 7U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 7U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 7U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 7U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 7U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 7U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 7U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x80U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_111 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 7U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_112 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 7U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_113 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 7U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_114 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 7U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_115 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 7U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_116 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 7U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 7U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 7U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 7U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 7U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 7U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 7U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 7U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 7U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 7U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 7U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 7U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 7U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 7U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__7__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 7U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x80U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_111 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 7U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_112 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 7U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_113 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 7U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_114 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 7U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_115 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 7U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_116 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 7U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 8U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 8U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 8U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 8U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 8U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 8U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 8U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 8U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 8U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 8U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 8U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 8U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x100U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_117 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 8U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_118 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 8U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_119 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 8U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_120 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 8U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_121 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 8U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_122 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 8U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 8U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 8U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 8U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 8U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 8U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 8U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 8U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 8U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 8U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 8U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 8U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 8U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 8U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__8__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 8U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x100U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_117 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 8U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_118 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 8U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_119 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 8U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_120 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 8U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_121 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 8U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_122 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 8U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 9U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 9U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 9U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 9U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 9U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 9U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 9U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 9U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 9U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x200U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_123 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 9U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_124 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 9U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_125 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 9U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_126 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 9U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_127 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 9U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_128 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 9U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 9U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 9U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 9U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 9U)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 9U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 9U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 9U) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                            & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                               >> 9U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 9U)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 9U) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 9U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__9__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 9U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x200U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_123 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 9U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_124 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 9U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_125 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 9U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_126 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 9U)));
    vlSelfRef.__VdfgRegularize_h495687df_0_127 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 9U) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_128 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 9U)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xaU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xaU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xaU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xaU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xaU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xaU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xaU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xaU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xaU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xaU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xaU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xaU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x400U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_129 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_130 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xaU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_131 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_132 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xaU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_133 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_134 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xaU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xaU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xaU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xaU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xaU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xaU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xaU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xaU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xaU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xaU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xaU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xaU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xaU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xaU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__10__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xaU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x400U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSelfRef.req_o) ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                                        | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                                        ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                                        : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_129 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_130 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xaU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_131 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_132 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xaU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_133 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xaU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_134 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xaU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xbU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xbU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xbU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xbU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xbU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xbU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xbU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xbU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xbU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xbU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xbU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xbU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x800U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_135 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_136 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xbU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_137 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_138 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xbU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_139 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_140 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xbU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__req_o)
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xbU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xbU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xbU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xbU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xbU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xbU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xbU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xbU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xbU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xbU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xbU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xbU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xbU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__11__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xbU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x800U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                 & (~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel))));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_135 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_136 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xbU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_137 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_138 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xbU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_139 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xbU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_140 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xbU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xcU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xcU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xcU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xcU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xcU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xcU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xcU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xcU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xcU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xcU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xcU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xcU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x1000U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.req_o))
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h495687df_0_394 = ((1U 
                                                   != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & ((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.gnt_i));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_141 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_142 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xcU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.__VdfgRegularize_h495687df_0_143 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_144 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xcU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_145 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_146 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xcU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gnt_i = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q)
                        ? ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q)
                            ? ((0U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
                               & (1U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))
                            : (1U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))
                        : (1U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
    vlSelfRef.__PVT__gen_arbiter__DOT__rr_q = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d)
                                                : 0U);
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xcU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xcU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xcU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xcU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xcU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xcU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xcU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xcU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xcU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xcU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xcU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xcU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xcU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__12__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xcU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x1000U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.req_o))
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h495687df_0_394 = ((1U 
                                                   != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & ((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.gnt_i));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_141 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_142 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xcU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.__VdfgRegularize_h495687df_0_143 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_144 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xcU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_145 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_146 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xcU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xdU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xdU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xdU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xdU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xdU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xdU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xdU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xdU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xdU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xdU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xdU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xdU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x2000U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.req_o))
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h495687df_0_351 = ((1U 
                                                   != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & ((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.gnt_i));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_147 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_148 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xdU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.__VdfgRegularize_h495687df_0_149 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_150 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xdU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_151 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_152 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xdU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gnt_i = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q)
                        ? ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__producer_state_q)
                            ? ((0U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_resp_fifo_i__DOT__status_cnt_q)) 
                               & (1U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))
                            : (1U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)))
                        : (1U != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xdU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xdU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xdU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xdU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xdU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xdU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xdU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xdU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xdU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xdU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xdU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xdU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xdU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__13__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xdU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x2000U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.req_o = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__) 
                       | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.req_o))
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h495687df_0_351 = ((1U 
                                                   != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)) 
                                                  & (IData)(vlSelfRef.req_o));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & ((IData)(vlSelfRef.gnt_i) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.gnt_i));
    if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) {
            if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel) {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xaU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                         << 2U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xbU] 
                                                   >> 0x1eU));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xdU] 
                                                  << 2U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req[0xcU] 
                                                    >> 0x1eU)));
            } else {
                vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[8U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                         << 8U) | (
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[9U] 
                                                   >> 0x18U));
                vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xbU] 
                                                  << 8U) 
                                                 | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_1[0xaU] 
                                                    >> 0x18U)));
            }
        } else {
            vlSelfRef.data_o[0U] = 0U;
            vlSelfRef.data_o[1U] = 0U;
            vlSelfRef.data_o[2U] = (0x1fU & 0U);
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel) {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[6U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                     << 0xeU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[7U] 
                                                 >> 0x12U));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[9U] 
                                              << 0xeU) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_2[8U] 
                                                >> 0x12U)));
        } else {
            vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[4U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                     << 0x14U) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[5U] 
                                                  >> 0xcU));
            vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[7U] 
                                              << 0x14U) 
                                             | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_3[6U] 
                                                >> 0xcU)));
        }
    } else if (vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel) {
        vlSelfRef.data_o[0U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[2U] 
                                              >> 6U));
        vlSelfRef.data_o[1U] = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                 << 0x1aU) | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[3U] 
                                              >> 6U));
        vlSelfRef.data_o[2U] = (0x1fU & ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[5U] 
                                          << 0x1aU) 
                                         | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_4[4U] 
                                            >> 6U)));
    } else {
        vlSelfRef.data_o[0U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[0U];
        vlSelfRef.data_o[1U] = vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[1U];
        vlSelfRef.data_o[2U] = (0x1fU & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____VdfgRegularize_h3ece5c9f_0_5[2U]);
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_147 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_148 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xdU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
    vlSelfRef.__VdfgRegularize_h495687df_0_149 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_150 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xdU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_151 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xdU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_152 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xdU)));
}
