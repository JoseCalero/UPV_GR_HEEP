// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_xbar_varlat_one_to_n__X2_N1.h"

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__0__KET____DOT__addr_decode_i__addr_i) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__0__KET____DOT__addr_decode_i__addr_i));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__1(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid) {
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) {
                vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                        & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                       | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) 
                                << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
            }
        }
    } else {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
               | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) 
                        << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__2(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__2\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q;
    vlSelfRef.__PVT__xbar_master_rsp_gnt = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                                                  >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.__PVT__xbar_master_rsp_gnt = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__if_stage_i__DOT__prefetch_buffer_i__DOT__resp_valid) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d = 0U;
            vlSelfRef.__PVT__xbar_master_rsp_gnt = 
                (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                       >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) {
                vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                    = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) 
                       & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt));
            }
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
            = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) 
               & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__0__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        if (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__instr_req_pmp) 
             & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt))) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid) {
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) {
                vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                        & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                       | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
            }
        }
    } else {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
               | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                        << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h495687df_0_227 = (1U 
                                                  & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                                                     >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    vlSelfRef.__VdfgRegularize_h495687df_0_228 = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_227));
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__resp_valid)
                ? ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_228))
                : (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_228));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        if (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_valid) 
             & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_ready))) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__1(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__1__KET____DOT__demux_xbar_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__master_xbar_req_data[0U] = ((2U 
                                                  & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x18U) 
                                                   | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 8U))
                                                   : 
                                                  ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x10U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                    << 8U) 
                                                   | (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex 
                                                      >> 0x18U))
                                                   : vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__alu_operand_c_ex));
    vlSelfRef.__PVT__master_xbar_req_data[1U] = (IData)(
                                                        (((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_we_ex)) 
                                                          << 0x24U) 
                                                         | (((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__1__KET____DOT__addr_decode_i__addr_i)))));
    vlSelfRef.__PVT__master_xbar_req_data[2U] = (0x1fU 
                                                 & (IData)(
                                                           ((((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__data_we_ex)) 
                                                              << 0x24U) 
                                                             | (((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__cv32e40p_top_i__DOT__core_i__DOT__load_store_unit_i__DOT__trans_be)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__1__KET____DOT__addr_decode_i__addr_i)))) 
                                                            >> 0x20U)));
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__1__KET____DOT__addr_decode_i__addr_i) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__1__KET____DOT__addr_decode_i__addr_i));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.__PVT__xbar_master_rsp_rvalid = (1U 
                                                   & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__vld_o) 
                                                      >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q)));
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSelfRef.__PVT__xbar_master_rsp_rvalid) {
            if ((0x20U & vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U])) {
                vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                        & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                       | (3U & ((1U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                                       >> 5U)) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
            }
        }
    } else {
        vlSelfRef.__PVT__xbar_master_rsp_rvalid = 0U;
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
               | (3U & ((1U & (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                               >> 5U)) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h495687df_0_229;
    __VdfgRegularize_h495687df_0_229 = 0;
    // Body
    __VdfgRegularize_h495687df_0_229 = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                                              >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    vlSelfRef.__VdfgRegularize_h495687df_0_230 = ((
                                                   vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                                                   >> 5U) 
                                                  & (IData)(__VdfgRegularize_h495687df_0_229));
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        if (vlSelfRef.__PVT__xbar_master_rsp_rvalid) {
            vlSelfRef.__PVT__xbar_master_rsp_gnt = __VdfgRegularize_h495687df_0_229;
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                = ((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                    >> 5U) & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_230));
        } else {
            vlSelfRef.__PVT__xbar_master_rsp_gnt = 0U;
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q;
        }
    } else {
        vlSelfRef.__PVT__xbar_master_rsp_gnt = __VdfgRegularize_h495687df_0_229;
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
            = vlSelfRef.__VdfgRegularize_h495687df_0_230;
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_65 = ((~ (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt)) 
                                                 & (0U 
                                                    != (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__gen_spi_slave__DOT__obi_fifo_i__DOT__obi_req_fifo_i__DOT__status_cnt_q)));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        if (((vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
              >> 5U) & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt))) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__1(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__2__KET____DOT__demux_xbar_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) {
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) {
                vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                        & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                       | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) 
                                << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
            }
        }
    } else {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
               | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) 
                        << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q;
    vlSelfRef.__PVT__xbar_master_rsp_gnt = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                                                  >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.__PVT__xbar_master_rsp_gnt = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_rvalid) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d = 0U;
            vlSelfRef.__PVT__xbar_master_rsp_gnt = 
                (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__3__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                       >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) {
                vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                    = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) 
                       & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt));
            }
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
            = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) 
               & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        if (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__data_in_req) 
             & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt))) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__1(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__3__KET____DOT__demux_xbar_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_ptr_reg) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_unit_i__DOT__read_ptr_reg));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_rvalid) {
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req) {
                vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                        & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                       | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req) 
                                << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
            }
        }
    } else {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
               | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req) 
                        << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_303[0U] 
        = vlSelfRef.__PVT__master_xbar_req_data[0U];
    vlSelfRef.__VdfgRegularize_h495687df_0_303[1U] 
        = vlSelfRef.__PVT__master_xbar_req_data[1U];
    vlSelfRef.__VdfgRegularize_h495687df_0_303[2U] 
        = ((0x20U & ((IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     << 5U)) | vlSelfRef.__PVT__master_xbar_req_data[2U]);
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h495687df_0_231 = (1U 
                                                  & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__4__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                                                     >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    vlSelfRef.__VdfgRegularize_h495687df_0_232 = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req) 
                                                  & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_231));
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = ((IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q)
            ? ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_rvalid)
                ? ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_232))
                : (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q))
            : (IData)(vlSelfRef.__VdfgRegularize_h495687df_0_232));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        if (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_req) 
             & (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_gnt))) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__1(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__4__KET____DOT__demux_xbar_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__master_xbar_req_data[0U] = (IData)(
                                                        (((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__4__KET____DOT__addr_decode_i__addr_i)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_wdata))));
    vlSelfRef.__PVT__master_xbar_req_data[1U] = (IData)(
                                                        ((((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__4__KET____DOT__addr_decode_i__addr_i)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__data_out_wdata))) 
                                                         >> 0x20U));
    vlSelfRef.__PVT__master_xbar_req_data[2U] = (0x10U 
                                                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_write_unit_i__DOT__byte_enable_out));
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__4__KET____DOT__addr_decode_i__addr_i) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellinp__gen_addr_decoders_NtoM__DOT__gen_addr_decoders__BRA__4__KET____DOT__addr_decode_i__addr_i));
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__data_addr_in_rvalid) {
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) {
                vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                        & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
                       | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) 
                                << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
            }
        }
    } else {
        vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))) 
                & (IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o)) 
               | (3U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) 
                        << (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d))));
    }
    vlSelfRef.__VdfgRegularize_h495687df_0_304[0U] 
        = vlSelfRef.__PVT__master_xbar_req_data[0U];
    vlSelfRef.__VdfgRegularize_h495687df_0_304[1U] 
        = vlSelfRef.__PVT__master_xbar_req_data[1U];
    vlSelfRef.__VdfgRegularize_h495687df_0_304[2U] 
        = ((0x20U & ((IData)(vlSelfRef.u_xbar_varlat__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o) 
                     << 5U)) | vlSelfRef.__PVT__master_xbar_req_data[2U]);
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___act_comb__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
        = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q;
    vlSelfRef.__PVT__xbar_master_rsp_gnt = (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                                                  >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
    if (vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q) {
        vlSelfRef.__PVT__xbar_master_rsp_gnt = 0U;
        if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__data_addr_in_rvalid) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d = 0U;
            vlSelfRef.__PVT__xbar_master_rsp_gnt = 
                (1U & ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT____Vcellout__gen_inputs__BRA__5__KET____DOT__i_addr_dec_resp_mux__gnt_o) 
                       >> (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d)));
            if (vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) {
                vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
                    = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) 
                       & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt));
            }
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d 
            = ((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) 
               & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt));
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__0(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
        = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) 
           && (IData)(vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
    if (vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni) {
        if (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_req) 
             & (IData)(vlSelfRef.__PVT__xbar_master_rsp_gnt))) {
            vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                = vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d;
        }
    } else {
        vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
    }
}

VL_INLINE_OPT void Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__1(Vtestharness_xbar_varlat_one_to_n__X2_N1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_xbar_varlat_one_to_n__X2_N1___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__gen_demux_xbar__BRA__5__KET____DOT__demux_xbar_i__1\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__master_xbar_req_data[0U] = (IData)(
                                                        ((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_addr)) 
                                                         << 0x20U));
    vlSelfRef.__PVT__master_xbar_req_data[1U] = (IData)(
                                                        (((QData)((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_addr)) 
                                                          << 0x20U) 
                                                         >> 0x20U));
    vlSelfRef.__PVT__master_xbar_req_data[2U] = (((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_we) 
                                                  << 4U) 
                                                 | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_be));
    vlSelfRef.__PVT__u_xbar_varlat__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_d 
        = ((0xf0000000U <= vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_addr) 
           & (0xf1000000U > vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__dma_subsystem_i__DOT__dma_i_gen__BRA__0__KET____DOT__dma_i__DOT__dma_read_addr_unit_i__DOT__data_addr_in_addr));
}
