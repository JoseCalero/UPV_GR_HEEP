// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_rr_arb_tree__N6_D45_Ez38.h"

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
              >> 0x21U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xeU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xeU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xeU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xeU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xeU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xeU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & ((IData)((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
                       >> 0x21U)) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xeU))));
    vlSelfRef.__VdfgRegularize_h495687df_0_153 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_154 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xeU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xeU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xeU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xeU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xeU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xeU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x4000U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
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
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
                     >> 0x21U)) & (IData)(vlSelfRef.req_o))
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
    vlSelfRef.__VdfgRegularize_h495687df_0_155 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_156 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xeU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_157 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_158 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xeU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 2U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
              >> 0x21U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1 
        = ((2U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = ((1U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__3\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0 
        = ((4U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
           & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
              >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xeU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xeU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xeU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xeU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xeU));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xeU)));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__ 
        = ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0) 
           | ((5U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                 >> 0xeU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__4\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U > (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xeU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? 1U : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_1)
                         ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                         ? ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT____VdfgRegularize_hac0e851a_0_0)
                                             ? 4U : 5U)
                                         : 0U));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__5\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__2__KET__) 
           & ((IData)((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
                       >> 0x21U)) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_153 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_154 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__5__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__2__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xeU)));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__6(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__6\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  >> 0xeU) | ((1U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                              & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                 >> 0xeU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     >> 0xeU)) | (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                   >> 0xeU) & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__ 
        = (1U & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                  | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                 >> 0xeU));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__7(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__7\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__) 
           | ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1) 
              | ((3U <= (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q)) 
                 & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                    >> 0xeU))));
    vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__1__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__) 
           | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__3__KET__)) 
                 | ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__req_nodes__BRA__4__KET__) 
                    & ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q) 
                       >> 1U))));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__)
            ? ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__3__KET__)
                ? ((0x4000U & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o))
                    ? 0U : 1U) : ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_1)
                                   ? 2U : 3U)) : ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__)
                                                   ? 
                                                  ((IData)(vlSelfRef.gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____VdfgRegularize_hac0e851a_0_0)
                                                    ? 4U
                                                    : 5U)
                                                   : 0U));
    vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (((IData)((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__flash_mem_slave_resp 
                     >> 0x21U)) & (IData)(vlSelfRef.req_o))
            ? (((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__1__KET__) 
                | (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes__BRA__2__KET__))
                ? (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_idx)
                : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_idx))
            : (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__rr_q));
}

VL_INLINE_OPT void Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__8(Vtestharness_rr_arb_tree__N6_D45_Ez38* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestharness_rr_arb_tree__N6_D45_Ez38___nba_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__14__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__8\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__ 
        = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
    vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__ 
        = ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
           & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__1__KET__));
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
    vlSelfRef.__VdfgRegularize_h495687df_0_155 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_156 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__4__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__1__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xeU)));
    vlSelfRef.__VdfgRegularize_h495687df_0_157 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                      >> 0xeU) 
                                                     & (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)));
    vlSelfRef.__VdfgRegularize_h495687df_0_158 = ((IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gnt_nodes__BRA__3__KET__) 
                                                  & ((~ (IData)(vlSelfRef.__PVT__gen_arbiter__DOT__gen_levels__BRA__2__KET____DOT__gen_level__BRA__0__KET____DOT__sel)) 
                                                     & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                                                        >> 0xeU)));
}
