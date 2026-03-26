// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness__pch.h"
#include "Vtestharness__Syms.h"
#include "Vtestharness_power_manager_sequence.h"

extern const VlUnpacked<CData/*2:0*/, 128> Vtestharness__ConstPool__TABLE_h9e9d1c20_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestharness__ConstPool__TABLE_h85cc4311_0;

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx1 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_switch__q) 
                               << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_switch__q)) 
                                                  << 5U))) 
                             | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx1];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_periph_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.switch_ack_i = (1U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_wait_ack_switch_on__q)) 
                                    | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_periph_ack__q)));
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx2 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_iso__q) 
                      << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_periph_iso__q)) 
                                         << 5U))) | 
                    (((IData)(vlSelfRef.switch_ack_i) 
                      << 4U) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx2];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx3 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_switch__q) 
                               << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_switch__q)) 
                                                  << 5U))) 
                             | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx3];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx3];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx4 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_iso__q) 
                      << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_iso__q)) 
                                         << 5U))) | 
                    ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_wait_ack_switch_on__q)) 
                                | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_0_ack__q)) 
                               << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx4];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx4];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_0_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx5 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_retentive__q) 
                               << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_0_retentive__q)) 
                                                  << 5U))) 
                             | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx5];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx5];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx6 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_switch__q) 
                               << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_switch__q)) 
                                                  << 5U))) 
                             | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx6];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx6];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx7 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_iso__q) 
                      << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_iso__q)) 
                                         << 5U))) | 
                    ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_wait_ack_switch_on__q)) 
                                | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_1_ack__q)) 
                               << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                           << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx7];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx7];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_1_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx8 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_retentive__q) 
                               << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_1_retentive__q)) 
                                                  << 5U))) 
                             | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx8];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx8];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx9 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_switch__q) 
                               << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_switch__q)) 
                                                  << 5U))) 
                             | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                 << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx9];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx9];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx10 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_2_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx10];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx10];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_2_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx11 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_2_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx11];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx11];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx12 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx12];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx12];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx13 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_3_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx13];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx13];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_3_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx14 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_3_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx14];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx14];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx15 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx15];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx15];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx16 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_4_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx16];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx16];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_4_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx17 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_4_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx17];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx17];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx18 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx18];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx18];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx19 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_5_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx19];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx19];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_5_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx20 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_5_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx20];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx20];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx21 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx21];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx21];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx22 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_6_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx22];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx22];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_6_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx23 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_6_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx23];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx23];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx24 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx24];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx24];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx25 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_7_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx25];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx25];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_7_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx26 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_7_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx26];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx26];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx27 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx27];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx27];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx28 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_8_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx28];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx28];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_8_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx29 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_8_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx29];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx29];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_switch_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_switch_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx30 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_switch__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_switch__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx30];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx30];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_iso_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_iso_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx31 = ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_iso__q) 
                       << 6U) | (0x20U & ((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_iso__q)) 
                                          << 5U))) 
                     | ((0x10U & (((~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_wait_ack_switch_on__q)) 
                                   | (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_power_gate_ram_block_9_ack__q)) 
                                  << 4U)) | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx31];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx31];
}

VL_INLINE_OPT void Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_retentive_i__0(Vtestharness_power_manager_sequence* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_power_manager_sequence___nba_sequent__TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_sequence_ram_9_retentive_i__0\n"); );
    Vtestharness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    // Body
    vlSelfRef.__PVT__sequence_curr_state = ((IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni)
                                             ? (IData)(vlSelfRef.__PVT__sequence_next_state)
                                             : 0U);
    vlSelfRef.__PVT__switch_onoff_signal_q = ((1U & 
                                               (~ (IData)(vlSymsp->TOP__testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_NtoM__DOT__i_xbar__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree.rst_ni))) 
                                              || (IData)(vlSelfRef.__PVT__switch_onoff_signal_d));
    __Vtableidx32 = (0x10U | ((((IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_retentive__q) 
                                << 6U) | (0x20U & (
                                                   (~ (IData)(vlSymsp->TOP.testharness__DOT__gr_heep_i__DOT__core_v_mini_mcu_i__DOT__ao_peripheral_subsystem_i__DOT__power_manager_i__DOT__power_manager_reg_top_i__DOT____Vcellout__u_ram_9_retentive__q)) 
                                                   << 5U))) 
                              | (((IData)(vlSelfRef.__PVT__switch_onoff_signal_q) 
                                  << 3U) | (IData)(vlSelfRef.__PVT__sequence_curr_state))));
    vlSelfRef.__PVT__sequence_next_state = Vtestharness__ConstPool__TABLE_h9e9d1c20_0
        [__Vtableidx32];
    vlSelfRef.__PVT__switch_onoff_signal_d = Vtestharness__ConstPool__TABLE_h85cc4311_0
        [__Vtableidx32];
}
